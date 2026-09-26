// Runtime mod framework — tier 1 (no rebuild). See ps2_mods.h and docs/MODDING.md.
#include "ps2_mods.h"
#include "ps2_iso_mount.h"
#include "ps2_json_min.h"
#include "ps2_lua.h"

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>

#ifdef _WIN32
#include <cstdlib>
#define DC2_SETENV(k, v) _putenv_s((k), (v))
#else
#include <cstdlib>
#define DC2_SETENV(k, v) setenv((k), (v), 1)
#endif

namespace
{
    struct ModPatch
    {
        uint32_t address;
        std::vector<uint8_t> bytes;
        std::string source;
    };

    struct ModDef
    {
        std::string id;
        std::string name;
        std::string version;
        std::string dir;
        int loadOrder = 0;
        bool enabled = true;
        std::vector<std::string> requiresIds;
        std::vector<std::pair<std::string, std::string>> env;     // key -> value
        std::vector<std::pair<std::string, std::string>> overlay; // guest path -> host rel
        std::vector<ModPatch> patches;
    };

    std::once_flag g_modsOnce;
    bool g_modsInitDone = false;
    size_t g_loaded = 0;
    size_t g_overlays = 0;
    std::vector<ModPatch> g_patches;
    std::vector<std::string> g_modDirs;
    std::vector<std::string> g_modIds;
    std::vector<Dc2ModInfo> g_modInfo;
    std::once_flag g_patchOnce;

    std::string trim(const std::string& s)
    {
        size_t a = 0;
        size_t b = s.size();
        while (a < b && std::isspace(static_cast<unsigned char>(s[a]))) ++a;
        while (b > a && std::isspace(static_cast<unsigned char>(s[b - 1]))) --b;
        return s.substr(a, b - a);
    }

    std::string lower(std::string s)
    {
        for (auto& c : s) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        return s;
    }

    bool parseBool(const std::string& v, bool fallback)
    {
        const std::string s = lower(trim(v));
        if (s == "1" || s == "true" || s == "yes" || s == "on") return true;
        if (s == "0" || s == "false" || s == "no" || s == "off") return false;
        return fallback;
    }

    std::vector<std::string> splitList(const std::string& v)
    {
        std::vector<std::string> out;
        std::string cur;
        for (char c : v)
        {
            if (c == ',' || c == ';')
            {
                const std::string t = trim(cur);
                if (!t.empty()) out.push_back(t);
                cur.clear();
            }
            else
            {
                cur.push_back(c);
            }
        }
        const std::string t = trim(cur);
        if (!t.empty()) out.push_back(t);
        return out;
    }

    bool parseHexBytes(const std::string& v, std::vector<uint8_t>& out)
    {
        std::string tok;
        auto flush = [&]() -> bool {
            const std::string t = trim(tok);
            tok.clear();
            if (t.empty()) return true;
            if (t.size() > 2) return false;
            char* end = nullptr;
            const long b = std::strtol(t.c_str(), &end, 16);
            if (end == t.c_str() || *end != '\0' || b < 0 || b > 0xFF) return false;
            out.push_back(static_cast<uint8_t>(b));
            return true;
        };
        for (char c : v)
        {
            if (std::isspace(static_cast<unsigned char>(c)) || c == ',')
            {
                if (!flush()) return false;
            }
            else
            {
                tok.push_back(c);
            }
        }
        return flush() && !out.empty();
    }

    bool parseAddress(const std::string& v, uint32_t& out)
    {
        std::string t = trim(v);
        int base = 10;
        if (t.rfind("0x", 0) == 0 || t.rfind("0X", 0) == 0)
        {
            t = t.substr(2);
            base = 16;
        }
        if (t.empty()) return false;
        char* end = nullptr;
        const unsigned long long a = std::strtoull(t.c_str(), &end, base);
        if (end == t.c_str() || *end != '\0') return false;
        out = static_cast<uint32_t>(a);
        return true;
    }

    bool parseManifest(const std::filesystem::path& file, ModDef& mod)
    {
        std::ifstream in(file);
        if (!in) return false;

        std::string section;
        std::string line;
        while (std::getline(in, line))
        {
            std::string s = trim(line);
            if (s.empty() || s[0] == '#' || s[0] == ';') continue;
            if (s.front() == '[' && s.back() == ']')
            {
                section = lower(trim(s.substr(1, s.size() - 2)));
                continue;
            }
            const std::size_t eq = s.find('=');
            if (eq == std::string::npos) continue;
            const std::string key = trim(s.substr(0, eq));
            const std::string val = trim(s.substr(eq + 1));
            if (key.empty()) continue;

            if (section == "mod")
            {
                const std::string k = lower(key);
                if (k == "id") mod.id = val;
                else if (k == "name") mod.name = val;
                else if (k == "version") mod.version = val;
                else if (k == "loadorder") mod.loadOrder = std::atoi(val.c_str());
                else if (k == "enabled") mod.enabled = parseBool(val, true);
                else if (k == "requires") mod.requiresIds = splitList(val);
            }
            else if (section == "env")
            {
                mod.env.emplace_back(key, val);
            }
            else if (section == "overlay")
            {
                mod.overlay.emplace_back(key, val);
            }
            else if (section == "patch")
            {
                ModPatch p;
                p.source = file.filename().string();
                if (!parseAddress(key, p.address)) continue;
                if (!parseHexBytes(val, p.bytes)) continue;
                mod.patches.push_back(std::move(p));
            }
        }
        return true;
    }

    std::string jsonScalarString(const dc2json::Value& v, const std::string& fallback = std::string())
    {
        if (v.isString()) return v.str;
        if (v.isBool()) return v.b ? "1" : "0";
        if (v.isNumber())
        {
            char buf[32];
            std::snprintf(buf, sizeof(buf), "%g", v.num);
            return buf;
        }
        return fallback;
    }

    bool parseJsonManifest(const std::filesystem::path& file, ModDef& mod)
    {
        std::ifstream in(file, std::ios::binary);
        if (!in) return false;
        std::string text((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());

        dc2json::Value root;
        std::string err;
        if (!dc2json::Parser::parse(text, root, err) || !root.isObject())
        {
            std::cerr << "[mods] JSON error in " << file.string() << ": " << err << std::endl;
            return false;
        }

        if (const dc2json::Value* v = root.find("id")) mod.id = v->asString();
        if (const dc2json::Value* v = root.find("name")) mod.name = v->asString();
        if (const dc2json::Value* v = root.find("version")) mod.version = v->asString();
        if (const dc2json::Value* v = root.find("loadOrder")) mod.loadOrder = static_cast<int>(v->asNumber(0));
        if (const dc2json::Value* v = root.find("enabled")) mod.enabled = v->asBool(true);

        if (const dc2json::Value* v = root.find("requires"); v && v->isArray())
        {
            for (const dc2json::Value& e : *v->arr)
            {
                const std::string s = e.asString();
                if (!s.empty()) mod.requiresIds.push_back(s);
            }
        }
        if (const dc2json::Value* v = root.find("env"); v && v->isObject())
        {
            for (const auto& kv : *v->obj)
                mod.env.emplace_back(kv.first, jsonScalarString(kv.second));
        }
        if (const dc2json::Value* v = root.find("overlays"); v && v->isObject())
        {
            for (const auto& kv : *v->obj)
            {
                const std::string host = kv.second.asString();
                if (!host.empty()) mod.overlay.emplace_back(kv.first, host);
            }
        }
        if (const dc2json::Value* v = root.find("patches"); v && v->isArray())
        {
            for (const dc2json::Value& e : *v->arr)
            {
                const dc2json::Value* a = e.find("address");
                const dc2json::Value* b = e.find("bytes");
                if (!a || !b) continue;
                ModPatch p;
                p.source = file.filename().string();
                const std::string addr = a->isString() ? a->str : jsonScalarString(*a);
                if (!parseAddress(addr, p.address)) continue;
                if (!parseHexBytes(jsonScalarString(*b), p.bytes)) continue;
                mod.patches.push_back(std::move(p));
            }
        }
        return true;
    }

    // A pack is a tree mirroring disc paths: packs/<pack>/map/m/m01/m01.map shadows
    // /MAP/M/M01/M01.MAP. Files register through the same overlay engine as explicit
    // [overlay] entries, so they cover loose files and DATA.DAT archive entries alike.
    size_t registerPackTree(const std::filesystem::path& root, const std::string& label)
    {
        std::error_code ec;
        if (!std::filesystem::is_directory(root, ec) || ec)
            return 0;

        size_t added = 0;
        for (auto it = std::filesystem::recursive_directory_iterator(
                 root, std::filesystem::directory_options::skip_permission_denied, ec);
             !ec && it != std::filesystem::recursive_directory_iterator(); it.increment(ec))
        {
            if (!it->is_regular_file(ec) || ec) continue;
            std::string rel = std::filesystem::relative(it->path(), root, ec).generic_string();
            if (ec) { ec.clear(); continue; }
            if (rel.empty()) continue;
            if (getGlobalIsoMount().addOverlayFile("/" + rel, it->path().string()))
                ++added;
        }
        std::cout << "[mods] pack tree '" << label << "': " << added << " file(s)" << std::endl;
        return added;
    }

    std::vector<ModDef> discoverMods(const std::filesystem::path& root)
    {
        std::vector<ModDef> mods;
        std::error_code ec;
        for (auto it = std::filesystem::directory_iterator(
                 root, std::filesystem::directory_options::skip_permission_denied, ec);
             !ec && it != std::filesystem::directory_iterator(); it.increment(ec))
        {
            if (!it->is_directory(ec) || ec) continue;
            const std::filesystem::path jsonManifest = it->path() / "modinfo.json";
            const std::filesystem::path iniManifest = it->path() / "mod.ini";

            ModDef mod;
            mod.dir = it->path().string();
            bool ok = false;
            if (std::filesystem::is_regular_file(jsonManifest, ec) && !ec)
                ok = parseJsonManifest(jsonManifest, mod);
            else if (std::filesystem::is_regular_file(iniManifest, ec) && !ec)
                ok = parseManifest(iniManifest, mod);
            else
                continue;

            if (!ok)
            {
                std::cerr << "[mods] failed to read manifest in " << mod.dir << std::endl;
                continue;
            }
            if (mod.id.empty()) mod.id = it->path().filename().string();
            if (mod.name.empty()) mod.name = mod.id;
            mods.push_back(std::move(mod));
        }
        std::stable_sort(mods.begin(), mods.end(),
                         [](const ModDef& a, const ModDef& b) { return a.loadOrder < b.loadOrder; });
        return mods;
    }

    void applyMod(ModDef& mod, std::vector<std::string>& loadedIds)
    {
        if (!mod.enabled)
        {
            std::cout << "[mods] skip (disabled): " << mod.id << std::endl;
            return;
        }
        for (const std::string& req : mod.requiresIds)
        {
            if (std::find(loadedIds.begin(), loadedIds.end(), req) == loadedIds.end())
                std::cerr << "[mods] warning: '" << mod.id << "' requires '" << req
                          << "' which is not loaded" << std::endl;
        }

        for (const auto& kv : mod.env)
        {
            DC2_SETENV(kv.first.c_str(), kv.second.c_str());
            std::cout << "[mods] env " << kv.first << "=" << kv.second
                      << "  (" << mod.id << ")" << std::endl;
        }

        size_t overlays = 0;
        for (const auto& kv : mod.overlay)
        {
            std::filesystem::path host = std::filesystem::path(mod.dir) / kv.second;
            if (!std::filesystem::is_regular_file(host))
            {
                std::cerr << "[mods] overlay missing: " << host.string()
                          << "  (" << mod.id << ")" << std::endl;
                continue;
            }
            if (getGlobalIsoMount().addOverlayFile(kv.first, host.string()))
            {
                ++overlays;
            }
            else
            {
                std::cerr << "[mods] overlay rejected: " << kv.first
                          << "  (" << mod.id << ")" << std::endl;
            }
        }

        // Per-mod asset packs, registered after explicit [overlay] entries so an
        // explicit overlay of the same guest path wins over a pack file.
        overlays += registerPackTree(std::filesystem::path(mod.dir) / "packs", mod.id + "/packs");

        for (ModPatch& p : mod.patches)
            g_patches.push_back(std::move(p));

        g_overlays += overlays;
        loadedIds.push_back(mod.id);
        g_modDirs.push_back(mod.dir);
        g_modIds.push_back(mod.id);
        g_modInfo.push_back(Dc2ModInfo{mod.id, mod.name, mod.version, mod.dir});
        ++g_loaded;
        std::cout << "[mods] loaded: " << mod.id << " v" << mod.version
                  << "  overlays=" << overlays
                  << "  env=" << mod.env.size()
                  << "  patches=" << mod.patches.size() << std::endl;
    }
} // namespace

void dc2ModsInit()
{
    std::call_once(g_modsOnce, []() {
        g_modsInitDone = true;

        const char* envRoot = std::getenv("DC2_MODS_DIR");
        std::filesystem::path root = envRoot && *envRoot ? envRoot : "Mods";

        std::error_code ec;
        if (!std::filesystem::is_directory(root, ec) || ec)
        {
            std::cout << "[mods] no Mods directory at '" << root.string()
                      << "' - running unmodded" << std::endl;
            return;
        }

        // Global asset packs (the coopdx `dynos/packs` equivalent). Registered first,
        // so a per-mod overlay of the same guest path wins over a pack file.
        const char* envPacks = std::getenv("DC2_PACKS_DIR");
        const std::filesystem::path packsRoot = envPacks && *envPacks ? envPacks : "packs";
        g_overlays += registerPackTree(packsRoot, "packs");

        std::vector<ModDef> mods = discoverMods(root);
        std::cout << "[mods] discovered " << mods.size() << " mod(s) under "
                  << std::filesystem::absolute(root).string() << std::endl;

        std::vector<std::string> loadedIds;
        for (ModDef& m : mods)
            applyMod(m, loadedIds);

        std::cout << "[mods] init complete: " << g_loaded << " loaded, "
                  << g_overlays << " overlay file(s), " << g_patches.size()
                  << " patch(es)" << std::endl;

        // Tier-3: hand the loaded mod list to the Lua runtime and run main.lua.
        dc2LuaInitFromMods();
    });
}

void dc2ModsApplyPatches(uint8_t* rdram, size_t rdramSize)
{
    std::call_once(g_patchOnce, [rdram, rdramSize]() {
        if (!g_modsInitDone)
            dc2ModsInit();

        if (rdram == nullptr || g_patches.empty())
            return;

        size_t applied = 0;
        for (const ModPatch& p : g_patches)
        {
            const uint32_t addr = p.address & 0x1FFFFFFFu; // physical guest address
            if (static_cast<size_t>(addr) + p.bytes.size() > rdramSize)
            {
                std::cerr << "[mods] patch out of range: 0x" << std::hex << p.address
                          << std::dec << " (" << p.source << ")" << std::endl;
                continue;
            }
            std::memcpy(rdram + addr, p.bytes.data(), p.bytes.size());
            ++applied;
        }
        std::cout << "[mods] applied " << applied << "/" << g_patches.size()
                  << " patch(es) to guest RAM" << std::endl;
    });
}

size_t dc2ModsLoadedCount() { return g_loaded; }
size_t dc2ModsOverlayCount() { return g_overlays; }
size_t dc2ModsPatchCount() { return g_patches.size(); }

void dc2ModsLoadedDirs(std::vector<std::string>& dirs, std::vector<std::string>& ids)
{
    dirs = g_modDirs;
    ids = g_modIds;
}

void dc2ModsGetLoaded(std::vector<Dc2ModInfo>& out)
{
    out = g_modInfo;
}
