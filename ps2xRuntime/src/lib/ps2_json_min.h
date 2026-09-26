#pragma once
// Minimal JSON reader for mod manifests (ps2_mods.cpp). No dependencies.
// Supports objects, arrays, strings (incl. \uXXXX), numbers, true/false/null.
#include <cctype>
#include <cstdint>
#include <cstdlib>
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace dc2json
{
    struct Value;
    using Array = std::vector<Value>;
    using Object = std::map<std::string, Value>;

    struct Value
    {
        enum class Type { Null, Bool, Number, String, Array, Object };
        Type type = Type::Null;
        bool b = false;
        double num = 0.0;
        std::string str;
        std::shared_ptr<Array> arr;
        std::shared_ptr<Object> obj;

        bool isNull() const { return type == Type::Null; }
        bool isBool() const { return type == Type::Bool; }
        bool isNumber() const { return type == Type::Number; }
        bool isString() const { return type == Type::String; }
        bool isArray() const { return type == Type::Array; }
        bool isObject() const { return type == Type::Object; }

        bool asBool(bool d = false) const { return isBool() ? b : d; }
        double asNumber(double d = 0.0) const { return isNumber() ? num : d; }
        std::string asString(const std::string& d = std::string()) const { return isString() ? str : d; }

        const Value* find(const std::string& key) const
        {
            if (!isObject() || !obj) return nullptr;
            auto it = obj->find(key);
            return it == obj->end() ? nullptr : &it->second;
        }
    };

    class Parser
    {
    public:
        static bool parse(const std::string& text, Value& out, std::string& err)
        {
            Parser p(text);
            p.skipWs();
            if (!p.parseValue(out)) { err = p.m_err; return false; }
            p.skipWs();
            if (p.m_i != p.m_s.size())
            {
                err = "trailing characters at offset " + std::to_string(p.m_i);
                return false;
            }
            return true;
        }

    private:
        explicit Parser(const std::string& s) : m_s(s) {}

        const std::string& m_s;
        size_t m_i = 0;
        std::string m_err;

        bool fail(const std::string& what)
        {
            if (m_err.empty())
                m_err = what + " at offset " + std::to_string(m_i);
            return false;
        }

        void skipWs()
        {
            while (m_i < m_s.size() &&
                   (m_s[m_i] == ' ' || m_s[m_i] == '\t' || m_s[m_i] == '\n' || m_s[m_i] == '\r'))
                ++m_i;
        }

        bool parseValue(Value& out)
        {
            if (m_i >= m_s.size()) return fail("unexpected end of input");
            const char c = m_s[m_i];
            if (c == '{') return parseObject(out);
            if (c == '[') return parseArray(out);
            if (c == '"') { out.type = Value::Type::String; return parseString(out.str); }
            if (c == 't' || c == 'f') return parseBool(out);
            if (c == 'n') return parseNull(out);
            return parseNumber(out);
        }

        bool parseObject(Value& out)
        {
            out.type = Value::Type::Object;
            out.obj = std::make_shared<Object>();
            ++m_i; // '{'
            skipWs();
            if (m_i < m_s.size() && m_s[m_i] == '}') { ++m_i; return true; }
            while (true)
            {
                skipWs();
                std::string key;
                if (m_i >= m_s.size() || m_s[m_i] != '"') return fail("expected object key");
                if (!parseString(key)) return false;
                skipWs();
                if (m_i >= m_s.size() || m_s[m_i] != ':') return fail("expected ':'");
                ++m_i;
                skipWs();
                Value v;
                if (!parseValue(v)) return false;
                (*out.obj)[key] = std::move(v);
                skipWs();
                if (m_i >= m_s.size()) return fail("unterminated object");
                if (m_s[m_i] == ',') { ++m_i; continue; }
                if (m_s[m_i] == '}') { ++m_i; return true; }
                return fail("expected ',' or '}'");
            }
        }

        bool parseArray(Value& out)
        {
            out.type = Value::Type::Array;
            out.arr = std::make_shared<Array>();
            ++m_i; // '['
            skipWs();
            if (m_i < m_s.size() && m_s[m_i] == ']') { ++m_i; return true; }
            while (true)
            {
                skipWs();
                Value v;
                if (!parseValue(v)) return false;
                out.arr->push_back(std::move(v));
                skipWs();
                if (m_i >= m_s.size()) return fail("unterminated array");
                if (m_s[m_i] == ',') { ++m_i; continue; }
                if (m_s[m_i] == ']') { ++m_i; return true; }
                return fail("expected ',' or ']'");
            }
        }

        static void appendUtf8(std::string& out, uint32_t cp)
        {
            if (cp < 0x80) out.push_back(static_cast<char>(cp));
            else if (cp < 0x800)
            {
                out.push_back(static_cast<char>(0xC0 | (cp >> 6)));
                out.push_back(static_cast<char>(0x80 | (cp & 0x3F)));
            }
            else
            {
                out.push_back(static_cast<char>(0xE0 | (cp >> 12)));
                out.push_back(static_cast<char>(0x80 | ((cp >> 6) & 0x3F)));
                out.push_back(static_cast<char>(0x80 | (cp & 0x3F)));
            }
        }

        bool parseHex4(uint32_t& out)
        {
            if (m_i + 4 > m_s.size()) return fail("bad \\u escape");
            out = 0;
            for (int k = 0; k < 4; ++k)
            {
                const char h = m_s[m_i++];
                out <<= 4;
                if (h >= '0' && h <= '9') out |= static_cast<uint32_t>(h - '0');
                else if (h >= 'a' && h <= 'f') out |= static_cast<uint32_t>(h - 'a' + 10);
                else if (h >= 'A' && h <= 'F') out |= static_cast<uint32_t>(h - 'A' + 10);
                else return fail("bad hex digit");
            }
            return true;
        }

        bool parseString(std::string& out)
        {
            ++m_i; // opening quote
            out.clear();
            while (m_i < m_s.size())
            {
                const char c = m_s[m_i++];
                if (c == '"') return true;
                if (c != '\\') { out.push_back(c); continue; }
                if (m_i >= m_s.size()) return fail("bad escape");
                const char e = m_s[m_i++];
                switch (e)
                {
                    case '"': out.push_back('"'); break;
                    case '\\': out.push_back('\\'); break;
                    case '/': out.push_back('/'); break;
                    case 'b': out.push_back('\b'); break;
                    case 'f': out.push_back('\f'); break;
                    case 'n': out.push_back('\n'); break;
                    case 'r': out.push_back('\r'); break;
                    case 't': out.push_back('\t'); break;
                    case 'u':
                    {
                        uint32_t cp = 0;
                        if (!parseHex4(cp)) return false;
                        appendUtf8(out, cp);
                        break;
                    }
                    default: return fail("unknown escape");
                }
            }
            return fail("unterminated string");
        }

        bool parseBool(Value& out)
        {
            if (m_s.compare(m_i, 4, "true") == 0) { m_i += 4; out.type = Value::Type::Bool; out.b = true; return true; }
            if (m_s.compare(m_i, 5, "false") == 0) { m_i += 5; out.type = Value::Type::Bool; out.b = false; return true; }
            return fail("invalid literal");
        }

        bool parseNull(Value& out)
        {
            if (m_s.compare(m_i, 4, "null") == 0) { m_i += 4; out.type = Value::Type::Null; return true; }
            return fail("invalid literal");
        }

        bool parseNumber(Value& out)
        {
            const char* start = m_s.c_str() + m_i;
            char* end = nullptr;
            const double d = std::strtod(start, &end);
            if (end == start) return fail("invalid number");
            m_i += static_cast<size_t>(end - start);
            out.type = Value::Type::Number;
            out.num = d;
            return true;
        }
    };
} // namespace dc2json
