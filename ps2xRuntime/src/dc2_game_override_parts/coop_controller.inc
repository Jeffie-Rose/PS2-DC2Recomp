// =============================================================================
// DC2 local two-player co-op (experimental)
//
// In a network session each process owns one vanilla-compatible hero in scene
// slot 0. The other hero is a lightweight render-only network proxy and has no
// scene slot. Slots 1..3 remain the local hero's equipment objects.
//
// The generated functions are resumable: they may return with ctx->pc pointing
// inside the function when the guest execution budget expires.  Every original
// function invoked here is therefore driven to its RA=0 sentinel before this
// override returns to its generated caller.  Calling once and forcing ctx->pc
// back to the entry address was the cause of the dungeon loading hang.
// =============================================================================

static constexpr uint32_t kCoopP2Slot        = 4u;
static constexpr uint32_t kCoopPlayerReadyFlag = 1u << 0u;
static constexpr uint32_t kCoopPlayerPauseRequestFlag = 1u << 1u;
// Bits 2..14 were unused in the legacy v4 player flags.  Carry a coarse left
// stick sample through them so a receiving client can distinguish a moving
// player from a late/stale position packet without changing the 732-byte wire
// format understood by existing self-hosted servers.
static constexpr uint32_t kCoopPlayerAnalogValidFlag = 1u << 2u;
static constexpr uint32_t kCoopPlayerAnalogXShift = 3u;
static constexpr uint32_t kCoopPlayerAnalogYShift = 9u;
static constexpr uint32_t kCoopPlayerAnalogMask = 0x3Fu;
static constexpr uint32_t kCoopPlayerLootPickupFlag = 1u << 15u;
static constexpr uint32_t kCoopPlayerLootSlotMask = 0x1Fu;
static constexpr uint16_t kCoopEntityActiveFlag = 1u << 0u;
static constexpr uint16_t kCoopEntityDeadFlag = 1u << 1u;
static constexpr uint16_t kCoopEntityLootFlag = 1u << 8u;
// Keep the two network players visibly distinct at a shared entrance without
// pushing the guest through nearby dungeon geometry.  The first Underground
// Channel spawn has stairs only about 120 world units away; the old offset put
// Monica beneath them and left her camera permanently occluded.
static constexpr float    kCoopSpawnOffset   = 45.0f;
static constexpr float    kCoopMaxSeparation = 1400.0f;

using CoopGuestFunction = void (*)(uint8_t *, R5900Context *, PS2Runtime *);

static bool dc2_coop_run_original(uint8_t *rdram, R5900Context *callCtx,
                                  PS2Runtime *runtime, uint32_t entry,
                                  CoopGuestFunction original);

static bool s_coopP2Initialized = false;
static bool s_coopRemapSetupSlots = false;
static bool s_coopP2PoolReady = false;
static bool s_coopLocalSpawnAligned = false;
static uint32_t s_coopP2MovementAngle = 0u;
static uint32_t s_coopP2PadAddr = 0u;
static uint32_t s_coopP2PadCtrlAddr = 0u;
static uint32_t s_coopP2CharaMem = 0u;
static uint32_t s_coopP2SubMem = 0u;
static uint32_t s_coopSceneAddr = 0u;
static uint32_t s_coopUserDataAddr = 0u;
static uint32_t s_coopGpAddr = 0u;
static dc2_coop_net::PlayerState s_coopRemotePlayer{};
static bool s_coopRemotePlayerReady = false;
static dc2_coop_net::PlayerState s_coopRemoteVisual{};
static bool s_coopRemoteVisualReady = false;
static uint32_t s_coopRemoteVisualRoom = 0xFFFFFFFFu;
using CoopNetClock = std::chrono::steady_clock;
static CoopNetClock::time_point s_coopRemoteSampleAt{};
static CoopNetClock::time_point s_coopRemoteVisualAt{};
static float s_coopRemoteVelocityX = 0.0f;
static float s_coopRemoteVelocityY = 0.0f;
static float s_coopRemoteVelocityZ = 0.0f;
static float s_coopRemoteMotionRate = 0.0f;
static bool s_coopLocalPauseRequested = false;
static bool s_coopMirroringRemotePause = false;
static bool s_coopPauseButtonMustRelease = false;
// A zero HP value alone does not kill a CActiveMonster. The game's damage
// routine also moves it into lifecycle state 3 and starts the death/fade
// timer. Remember which authoritative deaths have been injected so a snapshot
// cannot restart that timer every frame.
static uint32_t s_coopRemoteMonsterDeadMask = 0u;
static uint32_t s_coopRemoteMonsterDeadRoom = 0xFFFFFFFFu;
static uint16_t s_coopRemoteLootPoolBySlot[dc2_coop_net::kMaxWorldEntities]{};
static int32_t s_coopPendingLootPickupSlot = -1;
static uint8_t s_coopGuestCollectedAbs[512]{};
static uint32_t s_coopGuestAbsRoomId = 0xFFFFFFFFu;
static uint16_t g_dc2CoopDungeonSeed = 0u;
static uint32_t s_coopV5AuthorityTick = 0u;
static uint16_t s_coopAuthoritativeSeed = 0u;
static std::atomic<bool> s_coopInviteWarpPending{false};
static std::atomic<uint16_t> s_coopPendingWarpMap{0u};
static std::atomic<uint16_t> s_coopPendingWarpFloor{0u};
static uint32_t s_coopLastInvitedRoom = 0xFFFFFFFFu;
static constexpr uint16_t kCoopEntityGildaFlag = 1u << 9u;
static constexpr uint16_t kCoopGildaSlot       = 0x7000u;
static uint32_t s_lastKnownGilda               = 0xFFFFFFFFu;
static uint32_t s_localGildaVersion            = 0u;
static uint32_t s_lastAppliedRemoteGildaVersion = 0u;
static bool s_coopDrawingProxy                 = false;

static inline uint32_t dc2_get_gilda(uint8_t *rdram)
{
    if (!s_coopGpAddr) return 0u;
    const uint32_t saveData = dc2_read_u32(rdram, s_coopGpAddr - 0x750Cu);
    if (!saveData || saveData < 0x80u || saveData >= 0x02000000u - (0x1D2A0u + 0x44D9Cu + 4u)) return 0u;
    return dc2_read_u32(rdram, saveData + 0x1D2A0u + 0x44D9Cu);
}

static inline void dc2_set_gilda(uint8_t *rdram, uint32_t gilda)
{
    if (!s_coopGpAddr) return;
    const uint32_t saveData = dc2_read_u32(rdram, s_coopGpAddr - 0x750Cu);
    if (!saveData || saveData < 0x80u || saveData >= 0x02000000u - (0x1D2A0u + 0x44D9Cu + 4u)) return;
    if (gilda > 999999u) gilda = 999999u;
    dc2_write_u32(rdram, saveData + 0x1D2A0u + 0x44D9Cu, gilda);
}

static inline bool dc2_coop_active()
{
    static const bool enabled = dc2_env_flag_enabled("DC2_COOP") || dc2_env_flag_enabled("DC2_COOP_V5");
    return enabled;
}

static inline bool dc2_coop_trace()
{
    static const bool enabled = dc2_env_flag_enabled("DC2_COOP_TRACE");
    return enabled;
}

static inline bool dc2_coop_networked()
{
    return dc2_coop_net::active() || dc2_coop_v5_net::active();
}

static inline uint32_t dc2_coop_local_slot()
{
    // Each process lets vanilla own slot 0. Guest swaps the complete character
    // banks after construction, so its slot 0 is Monica.
    return 0u;
}

static inline uint32_t dc2_coop_remote_slot()
{
    return kCoopP2Slot;
}

static inline uint32_t dc2_coop_local_character_no(const uint8_t *rdram = nullptr)
{
    if (rdram && s_coopUserDataAddr)
    {
        const uint16_t active = dc2_read_u16(const_cast<uint8_t*>(rdram), s_coopUserDataAddr + 0x44D96u);
        if (active <= 3u)
            return active;
    }
    const char *value = std::getenv("DC2_COOP_CHARACTER");
    if (value)
    {
        if (std::strcmp(value, "monica") == 0 || std::strcmp(value, "MONICA") == 0 || std::strcmp(value, "1") == 0)
            return 1u;
        if (std::strcmp(value, "max") == 0 || std::strcmp(value, "MAX") == 0 || std::strcmp(value, "0") == 0)
            return 0u;
    }
    if (dc2_coop_v5_net::active())
    {
        if (dc2_coop_v5_net::role() == dc2_coop_v5::Role::PlayerTwo)
            return 1u;
        return 0u;
    }
    if (dc2_coop_networked() && dc2_coop_net::role() == dc2_coop_net::Role::Guest)
        return 1u;
    return 0u;
}

static inline void coop_set_reg(R5900Context *ctx, int reg, uint32_t value)
{
    if (reg > 0 && reg < 32)
        ctx->r[reg] = _mm_set_epi64x(0, static_cast<int64_t>(static_cast<int32_t>(value)));
}

static inline uint32_t coop_get_reg(const R5900Context *ctx, int reg)
{
    if (reg <= 0 || reg >= 32)
        return 0u;
    return static_cast<uint32_t>(_mm_extract_epi64(ctx->r[reg], 0));
}

static inline void dc2_coop_write_f32(uint8_t *rdram, uint32_t addr, float value)
{
    uint32_t bits = 0u;
    std::memcpy(&bits, &value, sizeof(bits));
    dc2_write_u32(rdram, addr, bits);
}

static inline void dc2_coop_set_character_position(uint8_t *rdram, uint32_t character,
                                                    float x, float y, float z)
{
    if (!character)
        return;
    dc2_coop_write_f32(rdram, character + 0x10u, x);
    dc2_coop_write_f32(rdram, character + 0x14u, y);
    dc2_coop_write_f32(rdram, character + 0x18u, z);
    dc2_coop_write_f32(rdram, character + 0x1Cu, 1.0f);
    // CCharacter2::SetPosition marks both the local and world transforms dirty.
    dc2_write_u32(rdram, character + 0x40u, 1u);
    dc2_write_u32(rdram, character + 0x44u, 1u);
}

static inline uint32_t dc2_coop_slot_addr(uint32_t sceneAddr, uint32_t slot)
{
    return sceneAddr + 0x44u + slot * 0x40u;
}

static inline uint32_t dc2_coop_get_character(uint8_t *rdram, uint32_t sceneAddr, uint32_t slot)
{
    if (!sceneAddr || slot >= 128u)
        return 0u;
    const uint32_t entry = dc2_coop_slot_addr(sceneAddr, slot);
    return dc2_read_u32(rdram, entry) ? dc2_read_u32(rdram, entry + 0x34u) : 0u;
}

// CCharacter2+0x368 points at the current 0x30-byte key-list entry.  +0x370
// is only the bank containing that entry; it is *not* the flattened motion
// number accepted by SetMotion(int).  Recover the real number by walking the
// same eight key-list banks as GetKeyListIndexPtr__11CCharacter2FiPi.
static uint32_t dc2_coop_current_motion_index(uint8_t *rdram, uint32_t character)
{
    if (!character)
        return 0xFFFFFFFFu;
    const uint32_t current = dc2_read_u32(rdram, character + 0x368u);
    if (!current)
        return 0xFFFFFFFFu;

    uint32_t flatIndex = 0u;
    for (uint32_t bank = 0u; bank < 8u; ++bank)
    {
        const uint32_t list = dc2_read_u32(rdram, character + 0x510u + bank * 4u);
        const uint32_t count = dc2_read_u32(rdram, character + 0x530u + bank * 4u);
        if (!list || count > 4096u)
            continue;
        for (uint32_t item = 0u; item < count; ++item)
        {
            const uint32_t entry = list + item * 0x30u;
            const uint8_t *name = getConstMemPtr(rdram, entry);
            if (!name || *name == 0u)
                break;
            if (entry == current)
                return flatIndex;
            ++flatIndex;
        }
    }
    return 0xFFFFFFFFu;
}

// SetMotion only selects a key list. CCharacter2::NormalDrive normally calls
// SetMotionTime later to evaluate that key list into the bone hierarchy. The
// network proxy is drawn between simulation steps, so perform that pure pose
// evaluation explicitly at the received frame; otherwise the model translates
// through the world while retaining its last locally evaluated (usually idle)
// skeleton.
static bool dc2_coop_evaluate_character_pose(
    uint8_t *rdram, uint32_t character, uint32_t motionBank, float frame,
    const R5900Context &entryCtx, PS2Runtime *runtime)
{
    if (!character || motionBank >= 8u || !std::isfinite(frame) || !runtime)
        return false;
    const uint32_t frameRoot = dc2_read_u32(rdram, character + 0x70u);
    if (!frameRoot)
        return false;

    R5900Context poseCtx = entryCtx;
    coop_set_reg(&poseCtx, 4, frameRoot);
    coop_set_reg(&poseCtx, 5, character + 0x3C0u + motionBank * 0x14u);
    coop_set_reg(&poseCtx, 6, 0u); // no camera-dependent motion processing
    poseCtx.f[12] = frame;
    return dc2_coop_run_original(
        rdram, &poseCtx, runtime, 0x0014D2B0u,
        ::SetMotionTime__FP8mgCFrameP14tagMOTION_TYPEfP9mgCCamera_0x14d2b0);
}

static inline bool dc2_coop_valid_actor(uint8_t *rdram, uint32_t actor)
{
    // CActiveMonster is a little over 0x1358 bytes. Reject pointers outside
    // the 32 MiB EE RAM image before interpreting a half-built scene table as
    // a monster. This also prevents float bits and stale heap links from being
    // published as health during a floor transition.
    return actor >= 0x00010000u && actor <= 0x01FFE000u &&
           getConstMemPtr(rdram, actor) != nullptr &&
           getConstMemPtr(rdram, actor + 0x1358u) != nullptr;
}

static inline bool dc2_coop_valid_monster_health(int32_t hp, int32_t maxHp)
{
    return maxHp > 0 && maxHp <= 1000000 && hp >= 0 && hp <= maxHp;
}

static void dc2_coop_select_local_character(uint8_t *rdram, const R5900Context *ctx)
{
    if (!dc2_coop_networked() || !s_coopSceneAddr)
        return;

    const uint32_t localSlot = dc2_coop_local_slot();
    const uint32_t local = dc2_coop_get_character(rdram, s_coopSceneAddr, localSlot);
    const uint32_t gp = coop_get_reg(ctx, 28);
    if (!local || !gp)
        return;
    s_coopGpAddr = gp;
    dc2_write_u32(rdram, gp - 0x7228u, local);
    dc2_write_u32(rdram, s_coopSceneAddr + 0x2E50u, localSlot);
}

static uint32_t dc2_coop_room_id(uint8_t *rdram, uint32_t area,
                                 uint16_t *mapOut, uint16_t *floorOut)
{
    uint16_t map = 0u;
    uint16_t floor = 0u;
    if (area == 1u && s_coopGpAddr)
    {
        // gp-0x7258 is CSaveDataDungeon*. Its first word is the active dungeon
        // index; floor IDs start at +4 and are indexed by that dungeon. These
        // are the same fields consumed by SetFloorID during InitDungeonMain.
        const uint32_t saveDungeon = dc2_read_u32(rdram, s_coopGpAddr - 0x7258u);
        if (saveDungeon)
        {
            map = static_cast<uint16_t>(dc2_read_u32(rdram, saveDungeon) & 0x0FFFu);
            floor = static_cast<uint16_t>(
                dc2_read_u32(rdram, saveDungeon + 4u + static_cast<uint32_t>(map) * 4u) &
                0x0FFFu);
        }
    }
    else if (area == 2u && s_coopSceneAddr)
    {
        // Town/edit scenes expose their currently loaded map at CScene+0x2e5c.
        map = static_cast<uint16_t>(dc2_read_u32(rdram, s_coopSceneAddr + 0x2E5Cu));
    }
    if (mapOut)
        *mapOut = map;
    if (floorOut)
        *floorOut = floor;
    return ((area & 0xFu) << 28u) |
           ((static_cast<uint32_t>(map) & 0x0FFFu) << 12u) |
           (static_cast<uint32_t>(floor) & 0x0FFFu);
}

static uint32_t s_coopHostKilledMask = 0u;
static uint32_t s_coopHostKilledRoom = 0xFFFFFFFFu;
static int32_t s_coopHostKilledMaxHp[dc2_coop_net::kMaxWorldEntities]{};

static dc2_coop_net::WorldState dc2_coop_collect_world(
    uint8_t *rdram, uint32_t area, uint32_t roomId, uint16_t map, uint16_t floor)
{
    dc2_coop_net::WorldState world{};
    world.area = roomId;
    world.map = map;
    world.floor = floor;
    // Both peers publish the seed they actually used. The backend and Host
    // reject combat proposals until these match, which turns procedural slot
    // numbers into a safe identity instead of guessing across two layouts.
    world.reserved = g_dc2CoopDungeonSeed;
    static uint32_t revision = 0u;
    world.revision = ++revision;

    // Real-time Gilda wallet synchronization across both players
    if (s_coopGpAddr)
    {
        const uint32_t currentGilda = dc2_get_gilda(rdram);
        if (s_lastKnownGilda == 0xFFFFFFFFu)
        {
            s_lastKnownGilda = currentGilda;
            if (dc2_coop_net::role() == dc2_coop_net::Role::Host || dc2_coop_v5_net::isAuthority())
                s_localGildaVersion = 1u;
        }
        else if (currentGilda != s_lastKnownGilda)
        {
            s_lastKnownGilda = currentGilda;
            s_localGildaVersion = (s_localGildaVersion > s_lastAppliedRemoteGildaVersion
                                   ? s_localGildaVersion : s_lastAppliedRemoteGildaVersion) + 1u;
            std::fprintf(stderr, "[DC2:Gilda] local Gilda changed to %u (version %u)\n",
                         currentGilda, s_localGildaVersion);
        }

        if (s_localGildaVersion > 0u && world.entityCount < dc2_coop_net::kMaxWorldEntities)
        {
            dc2_coop_net::EntityState &gildaEntity = world.entities[world.entityCount++];
            gildaEntity.slot = kCoopGildaSlot;
            gildaEntity.flags = kCoopEntityGildaFlag;
            gildaEntity.x = 0.0f;
            gildaEntity.y = 0.0f;
            gildaEntity.z = 0.0f;
            gildaEntity.facing = 0.0f;
            gildaEntity.hp = static_cast<int32_t>(currentGilda);
            gildaEntity.maxHp = static_cast<int32_t>(s_localGildaVersion);
        }
    }

    if (!s_coopSceneAddr || !s_coopGpAddr || area != 1u)
        return world;

    // CMonsterMan owns 24 stable CActiveMonster slots at +0x484. Scene slots
    // 24+ point at their character objects, but iterating those scene slots
    // also swept unrelated dungeon actors. Publish the manager's stable IDs.
    const uint32_t monsterMan = dc2_read_u32(rdram, s_coopGpAddr - 0x7248u);
    if (!monsterMan)
        return world;
    if (s_coopHostKilledRoom != roomId)
    {
        s_coopHostKilledRoom = roomId;
        s_coopHostKilledMask = 0u;
        std::memset(s_coopHostKilledMaxHp, 0, sizeof(s_coopHostKilledMaxHp));
    }
    bool usedNetworkSlot[dc2_coop_net::kMaxWorldEntities]{};
    for (uint32_t slot = 0u; slot < dc2_coop_net::kMaxWorldEntities; ++slot)
    {
        const uint32_t actor = dc2_read_u32(rdram, monsterMan + 0x484u + slot * 4u);
        const bool valid = dc2_coop_valid_actor(rdram, actor);
        if (valid)
        {
            const int32_t maxHp = static_cast<int32_t>(dc2_read_u32(rdram, actor + 0x1310u));
            const int32_t hp = static_cast<int32_t>(dc2_read_u32(rdram, actor + 0x1314u));
            const uint32_t lifecycle = dc2_read_u32(rdram, actor + 0x1330u);
            if (hp <= 0 || lifecycle == 3u)
            {
                s_coopHostKilledMask |= (1u << slot);
                s_coopHostKilledMaxHp[slot] = maxHp;
            }
            if (dc2_coop_valid_monster_health(hp, maxHp))
            {
                dc2_coop_net::EntityState &entity = world.entities[world.entityCount++];
                entity.slot = static_cast<uint16_t>(slot);
                usedNetworkSlot[slot] = true;
                entity.flags = kCoopEntityActiveFlag;
                entity.x = dc2_read_f32(rdram, actor + 0x10u);
                entity.y = dc2_read_f32(rdram, actor + 0x14u);
                entity.z = dc2_read_f32(rdram, actor + 0x18u);
                entity.maxHp = maxHp;
                entity.hp = (s_coopHostKilledMask & (1u << slot)) ? 0 : hp;
                if (entity.hp <= 0)
                    entity.flags |= kCoopEntityDeadFlag;
            }
        }
        else if (s_coopHostKilledMask & (1u << slot))
        {
            // Already killed by host: keep broadcasting dead entity so guest stays dead
            dc2_coop_net::EntityState &entity = world.entities[world.entityCount++];
            entity.slot = static_cast<uint16_t>(slot);
            usedNetworkSlot[slot] = true;
            entity.flags = kCoopEntityActiveFlag | kCoopEntityDeadFlag;
            entity.maxHp = s_coopHostKilledMaxHp[slot] > 0 ? s_coopHostKilledMaxHp[slot] : 100;
            entity.hp = 0;
        }
    }

    // The native host death script owns randomized drops. Publish active
    // CPullItem entries in network slots not occupied by live monster IDs.
    // `maxHp` is payload storage here: high 16 bits are the pull-item pool
    // index and low 16 bits are its amount/item number. No wire-size change is
    // required, and legacy servers relay these entries unchanged.
    if (dc2_coop_net::role() == dc2_coop_net::Role::Host ||
        dc2_coop_v5_net::isAuthority())
    {
        constexpr uint32_t kPullItemManager = 0x003772D8u;
        const uint32_t pullBase = dc2_read_u32(rdram, kPullItemManager);
        const uint32_t pullCount = dc2_read_u32(rdram, kPullItemManager + 4u);
        uint32_t networkSlot = 0u;
        if (pullBase && pullCount <= 0xFFFFu)
        {
            for (uint32_t pullIndex = 0u;
                 pullIndex < pullCount &&
                 world.entityCount < dc2_coop_net::kMaxWorldEntities;
                 ++pullIndex)
            {
                const uint32_t item = pullBase + pullIndex * 0x80u;
                if (dc2_read_u32(rdram, item + 0x7Cu) == 0u)
                    continue;
                while (networkSlot < dc2_coop_net::kMaxWorldEntities &&
                       usedNetworkSlot[networkSlot])
                    ++networkSlot;
                if (networkSlot >= dc2_coop_net::kMaxWorldEntities)
                    break;
                const uint8_t *kindPtr = getConstMemPtr(rdram, item + 0x60u);
                if (!kindPtr || *kindPtr > 7u)
                    continue;

                dc2_coop_net::EntityState &entity =
                    world.entities[world.entityCount++];
                entity.slot = static_cast<uint16_t>(networkSlot);
                entity.flags = kCoopEntityActiveFlag | kCoopEntityLootFlag;
                entity.x = dc2_read_f32(rdram, item + 0x00u);
                entity.y = dc2_read_f32(rdram, item + 0x04u);
                entity.z = dc2_read_f32(rdram, item + 0x08u);
                entity.hp = static_cast<int32_t>(*kindPtr);
                const uint32_t value = dc2_read_u32(rdram, item + 0x6Cu) & 0xFFFFu;
                entity.maxHp = static_cast<int32_t>((pullIndex << 16u) | value);
                const uint8_t kind = *kindPtr;
                const bool isAbsOrb = (kind == 1u || kind == 2u || kind == 4u || kind == 6u);
                if (isAbsOrb)
                {
                    const float expVal = dc2_read_f32(rdram, item + 0x64u);
                    entity.facing = (expVal > 0.0f) ? expVal : (kind == 6u ? 20.0f : 5.0f);
                }
                usedNetworkSlot[networkSlot] = true;
            }
        }
    }
    return world;
}

static void dc2_coop_publish_v5_authority_snapshot(uint8_t *rdram, uint32_t area)
{
    if (!dc2_coop_v5_net::isAuthority() || !s_coopSceneAddr)
        return;

    uint16_t map = 0u;
    uint16_t floor = 0u;
    const uint32_t roomId = dc2_coop_room_id(rdram, area, &map, &floor);
    if (area == 1u && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u &&
        g_coop_dungeon_entry.arrived(roomId))
        std::fprintf(stderr,
                     "[DC2:Entry] event=arrived tick=%u room=0x%08x\n",
                     g_coop_authority_frame_tick, roomId);
    dc2_coop_v5_net::setLocalRoom(roomId);
    const dc2_coop_net::WorldState world =
        dc2_coop_collect_world(rdram, area, roomId, map, floor);

    dc2_coop_v5::SnapshotPlayer players[dc2_coop_v5::kMaxPlayers]{};
    uint16_t playerCount = 0u;
    for (uint32_t slot : {0u, kCoopP2Slot})
    {
        const uint32_t character =
            dc2_coop_get_character(rdram, s_coopSceneAddr, slot);
        if (!character || playerCount >= dc2_coop_v5::kMaxPlayers)
            continue;
        dc2_coop_v5::SnapshotPlayer &player = players[playerCount];
        player.playerId = playerCount + 1u;
        player.flags = kCoopPlayerReadyFlag;
        player.x = dc2_read_f32(rdram, character + 0x10u);
        player.y = dc2_read_f32(rdram, character + 0x14u);
        player.z = dc2_read_f32(rdram, character + 0x18u);
        player.facing = dc2_read_f32(rdram, character + 0x24u);
        const uint32_t motion = dc2_coop_current_motion_index(rdram, character);
        player.motion = motion == 0xFFFFFFFFu ? 0u : motion;
        player.motionFrame = dc2_read_f32(rdram, character + 0x388u);
        ++playerCount;
    }

    dc2_coop_v5::SnapshotEntity entities[dc2_coop_v5::kMaxEntities]{};
    uint16_t entityCount = 0u;
    for (uint16_t i = 0u; i < world.entityCount &&
         entityCount < dc2_coop_v5::kMaxEntities; ++i)
    {
        const dc2_coop_net::EntityState &source = world.entities[i];
        dc2_coop_v5::SnapshotEntity &entity = entities[entityCount++];
        // Monster slots are already stable. Pull-item network slots are only a
        // compact v4 transport detail, so give loot a separate ID namespace
        // based on its persistent CPullItem pool index (stored in maxHp high).
        const uint16_t identitySlot = (source.flags & kCoopEntityLootFlag)
            ? static_cast<uint16_t>(0x8000u |
                ((static_cast<uint32_t>(source.maxHp) >> 16u) & 0x7FFFu))
            : source.slot;
        entity.entityId = dc2_coop_v5::stableEntityId(
            roomId, g_dc2CoopDungeonSeed, identitySlot);
        entity.spawnSlot = identitySlot;
        entity.flags = source.flags;
        entity.x = source.x;
        entity.y = source.y;
        entity.z = source.z;
        entity.facing = source.facing;
        entity.hp = source.hp;
        entity.maxHp = source.maxHp;
        entity.state = (source.flags & kCoopEntityLootFlag)
            ? static_cast<uint32_t>(source.slot)
            : ((source.flags & kCoopEntityDeadFlag) ? 3u : 0u);
    }

    dc2_coop_v5::SnapshotChest chests[dc2_coop_v5::kMaxChests]{};
    const uint32_t chestManager = s_coopSceneAddr && s_coopSceneAddr < 0x02000000u - 0x3010u
        ? dc2_read_u32(rdram, s_coopSceneAddr + 0x300Cu) : 0u;
    const bool hasChests = dc2_env_flag_enabled("DC2_COOP_CHEST_SYNC") &&
        dc2::adapter::collectChests(rdram, 0x02000000u, chestManager, chests);
    if (hasChests && dc2_env_flag_enabled("DC2_COOP_TRACE_CHESTS"))
    {
        static uint32_t tracedManager = 0u, tracedRoom = 0u;
        if (tracedManager != chestManager || tracedRoom != roomId)
        {
            tracedManager = chestManager;
            tracedRoom = roomId;
            for (uint32_t slot = 0; slot < dc2_coop_v5::kMaxChests; ++slot)
                if (chests[slot].status == 1u)
                {
                    // CTreasureBox starts at manager+slot*0x70+0x10;
                    // mgCObject::GetPosition copies object+0x10.
                    const uint32_t pos = chestManager + slot * 0x70u + 0x20u;
                    std::fprintf(stderr, "[DC2:chest:position] room=%08x slot=%u xyz=(%.3f,%.3f,%.3f)\n",
                        roomId, slot, dc2_read_f32(rdram, pos), dc2_read_f32(rdram, pos+4u),
                        dc2_read_f32(rdram, pos+8u));
                }
        }
    }
    const uint32_t snapshotTick = ++s_coopV5AuthorityTick;
    // If a native path published without reading one of the pads, seal that
    // tick silently. A due one-frame pulse must fail the replay gate rather
    // than appear one authoritative snapshot late.
    dc2_coop_v5_net::sealAuthorityInputTick(snapshotTick);
    dc2_coop_v5_net::publishSnapshot(
        roomId, snapshotTick, g_dc2CoopDungeonSeed,
        players, playerCount, entities, entityCount, hasChests ? chests : nullptr);
    // The next native pad update contributes to the next published snapshot.
    // Advancing only after publication excludes boot/loading jitter and keeps
    // scheduled input tick N aligned with authoritative snapshot tick N.
    g_coop_authority_simulation_tick = snapshotTick + 1u;
}

static void dc2_coop_award_abs(uint8_t *rdram, const R5900Context *ctx, PS2Runtime *runtime,
                               float exp, uint32_t chara, uint32_t slot)
{
    if (!rdram || !runtime || exp <= 0.0f)
        return;
    R5900Context callCtx = ctx ? *ctx : R5900Context{};
    callCtx.f[12] = exp;
    coop_set_reg(&callCtx, 4, chara);
    coop_set_reg(&callCtx, 5, slot);
    if (s_coopGpAddr)
        coop_set_reg(&callCtx, 28, s_coopGpAddr);
    std::fprintf(stderr, "[DC2:EXP] Shared ABS: awarding %.1f exp to chara %u slot %u\n",
                 exp, chara, slot);
    dc2_coop_run_original(rdram, &callCtx, runtime, 0x001E8AE0u,
                          ::AddExpWeaponParam__Ffii_0x1e8ae0);
}

static void dc2_coop_apply_authoritative_loot(
    uint8_t *rdram, const dc2_coop_net::WorldState &world,
    R5900Context *ctx, PS2Runtime *runtime)
{
    constexpr uint32_t kPullItemManager = 0x003772D8u;
    const uint32_t pullBase = dc2_read_u32(rdram, kPullItemManager);
    const uint32_t pullCount = dc2_read_u32(rdram, kPullItemManager + 4u);
    if (!pullBase || pullCount == 0u || pullCount > 0xFFFFu || !ctx || !runtime)
        return;

    const uint32_t currentRoom = (static_cast<uint32_t>(world.map) << 16u) | static_cast<uint32_t>(world.floor);
    if (s_coopGuestAbsRoomId != currentRoom)
    {
        s_coopGuestAbsRoomId = currentRoom;
        std::memset(s_coopGuestCollectedAbs, 0, sizeof(s_coopGuestCollectedAbs));
    }

    std::vector<uint8_t> authoritative(pullCount, 0u);
    uint16_t newPoolBySlot[dc2_coop_net::kMaxWorldEntities];
    std::fill(std::begin(newPoolBySlot), std::end(newPoolBySlot),
              static_cast<uint16_t>(0xFFFFu));
    bool pendingStillExists = false;
    for (uint16_t i = 0u; i < world.entityCount; ++i)
    {
        const dc2_coop_net::EntityState &entity = world.entities[i];
        if (!(entity.flags & kCoopEntityLootFlag) ||
            !(entity.flags & kCoopEntityActiveFlag))
            continue;
        const uint32_t packed = static_cast<uint32_t>(entity.maxHp);
        const uint32_t pullIndex = packed >> 16u;
        const uint16_t value = static_cast<uint16_t>(packed & 0xFFFFu);
        const uint32_t kind = static_cast<uint32_t>(entity.hp);
        if (pullIndex >= pullCount || kind > 7u)
            continue;
        authoritative[pullIndex] = 1u;
        if (entity.slot < dc2_coop_net::kMaxWorldEntities)
        {
            newPoolBySlot[entity.slot] = static_cast<uint16_t>(pullIndex);
            if (s_coopPendingLootPickupSlot == static_cast<int32_t>(entity.slot))
                pendingStillExists = true;
        }

        const uint32_t item = pullBase + pullIndex * 0x80u;
        // Do not resurrect an item the guest has just collected while its
        // repeated pickup request is in flight to the host.
        if (s_coopPendingLootPickupSlot == static_cast<int32_t>(entity.slot))
            continue;

        const bool isAbsOrb = (kind == 1u || kind == 2u || kind == 4u || kind == 6u);
        if (isAbsOrb && pullIndex < 512u && s_coopGuestCollectedAbs[pullIndex])
            continue;

        const uint8_t *kindPtr = getConstMemPtr(rdram, item + 0x60u);
        const uint16_t localValue = static_cast<uint16_t>(
            dc2_read_u32(rdram, item + 0x6Cu) & 0xFFFFu);
        const bool needsBirth = dc2_read_u32(rdram, item + 0x7Cu) == 0u ||
            !kindPtr || *kindPtr != kind || localValue != value;
        if (needsBirth)
        {
            const uint32_t sp = coop_get_reg(ctx, 29);
            const uint32_t argsAddr = sp >= 0x100u ? sp - 0x100u : 0u;
            uint8_t *args = argsAddr ? getMemPtr(rdram, argsAddr) : nullptr;
            if (args)
            {
                uint8_t backup[0x20u];
                std::memcpy(backup, args, sizeof(backup));
                std::memset(args, 0, sizeof(backup));
                dc2_coop_write_f32(rdram, argsAddr + 0x00u, entity.x);
                dc2_coop_write_f32(rdram, argsAddr + 0x04u, entity.y);
                dc2_coop_write_f32(rdram, argsAddr + 0x08u, entity.z);
                dc2_coop_write_f32(rdram, argsAddr + 0x0Cu, 1.0f);
                dc2_coop_write_f32(rdram, argsAddr + 0x1Cu, 1.0f);
                R5900Context itemCtx = *ctx;
                coop_set_reg(&itemCtx, 4, item);
                coop_set_reg(&itemCtx, 5, argsAddr);
                coop_set_reg(&itemCtx, 6, argsAddr + 0x10u);
                coop_set_reg(&itemCtx, 7, kind);
                dc2_coop_run_original(
                    rdram, &itemCtx, runtime, 0x001B91B0u,
                    ::SetItem__9CPullItemFPfPfi_0x1b91b0);
                std::memcpy(args, backup, sizeof(backup));
                if (isAbsOrb)
                {
                    const float expVal = (entity.facing > 0.0f) ? entity.facing : (kind == 6u ? 20.0f : 5.0f);
                    dc2_coop_write_f32(rdram, item + 0x64u, expVal);
                    dc2_write_u16(rdram, item + 0x6Au, static_cast<uint16_t>(dc2_coop_local_character_no()));
                    dc2_write_u16(rdram, item + 0x6Cu, static_cast<uint16_t>(value <= 1u ? value : 0u));
                }
                std::fprintf(stderr,
                             "[DC2:Loot] guest mirrored host drop pool=%u kind=%u value=%u\n",
                             pullIndex, kind, static_cast<unsigned>(value));
            }
        }

        if (isAbsOrb)
        {
            const uint32_t itemState = dc2_read_u32(rdram, item + 0x7Cu);
            if (itemState == 4u && pullIndex < 512u)
            {
                s_coopGuestCollectedAbs[pullIndex] = 1u;
            }
            const float curExp = dc2_read_f32(rdram, item + 0x64u);
            if (curExp <= 0.0f)
            {
                const float expVal = (entity.facing > 0.0f) ? entity.facing : (kind == 6u ? 20.0f : 5.0f);
                dc2_coop_write_f32(rdram, item + 0x64u, expVal);
            }
            dc2_write_u16(rdram, item + 0x6Au, static_cast<uint16_t>(dc2_coop_local_character_no()));
            if (value <= 1u)
                dc2_write_u16(rdram, item + 0x6Cu, static_cast<uint16_t>(value));
        }
        else
        {
            dc2_coop_write_f32(rdram, item + 0x00u, entity.x);
            dc2_coop_write_f32(rdram, item + 0x04u, entity.y);
            dc2_coop_write_f32(rdram, item + 0x08u, entity.z);
        }
        const uint32_t valueWord = dc2_read_u32(rdram, item + 0x6Cu);
        dc2_write_u32(rdram, item + 0x6Cu,
                      (valueWord & 0xFFFF0000u) | value);
    }

    // Remove independently rolled guest drops and host drops that have been
    // collected. Allow both players to collect blue ABS experience orbs (kind 1, 2, 4, 6)
    // so both Max and Monica gain full weapon experience!
    for (uint32_t pullIndex = 0u; pullIndex < pullCount; ++pullIndex)
    {
        const uint32_t item = pullBase + pullIndex * 0x80u;
        const uint8_t kind = static_cast<uint8_t>(dc2_read_u32(rdram, item + 0x60u) & 0xFFu);
        const bool isAbsOrb = (kind == 1u || kind == 2u || kind == 4u || kind == 6u);
        if (!authoritative[pullIndex] &&
            dc2_read_u32(rdram, item + 0x7Cu) != 0u)
        {
            if (isAbsOrb && pullIndex < 512u && !s_coopGuestCollectedAbs[pullIndex])
            {
                s_coopGuestCollectedAbs[pullIndex] = 1u;
                const float expVal = dc2_read_f32(rdram, item + 0x64u);
                const int32_t weaponSlot = static_cast<int32_t>(dc2_read_u16(rdram, item + 0x6Cu) & 1u);
                dc2_coop_award_abs(rdram, ctx, runtime, expVal > 0.0f ? expVal : 10.0f, 1u, weaponSlot);
            }
            const uint32_t wireWord = dc2_read_u32(rdram, item + 0x74u);
            dc2_write_u32(rdram, item + 0x74u,
                          (wireWord & 0xFFFFFF00u) | 0xFFu);
            dc2_write_u32(rdram, item + 0x7Cu, 0u);
        }
    }
    std::copy(std::begin(newPoolBySlot), std::end(newPoolBySlot),
              std::begin(s_coopRemoteLootPoolBySlot));
    if (s_coopPendingLootPickupSlot >= 0 && !pendingStillExists)
    {
        std::fprintf(stderr,
                     "[DC2:Loot] host confirmed shared pickup slot=%u\n",
                     static_cast<unsigned>(s_coopPendingLootPickupSlot));
        s_coopPendingLootPickupSlot = -1;
    }
}

static void dc2_coop_apply_authoritative_world(
    uint8_t *rdram, const dc2_coop_net::WorldState &world,
    uint32_t area, uint32_t roomId, R5900Context *ctx,
    PS2Runtime *runtime)
{
    if (!s_coopSceneAddr || !s_coopGpAddr || world.area != roomId || area != 1u)
        return;
    if (world.reserved != 0u && g_dc2CoopDungeonSeed != 0u &&
        world.reserved != g_dc2CoopDungeonSeed)
        return;
    s_coopAuthoritativeSeed = world.reserved;
    dc2_coop_apply_authoritative_loot(rdram, world, ctx, runtime);
    const uint32_t monsterMan = dc2_read_u32(rdram, s_coopGpAddr - 0x7248u);
    if (!monsterMan)
        return;
    if (s_coopRemoteMonsterDeadRoom != roomId)
    {
        s_coopRemoteMonsterDeadRoom = roomId;
        s_coopRemoteMonsterDeadMask = 0u;
    }
    for (uint16_t i = 0; i < world.entityCount; ++i)
    {
        const dc2_coop_net::EntityState &entity = world.entities[i];
        if (entity.flags & kCoopEntityLootFlag)
            continue;
        if (entity.slot >= dc2_coop_net::kMaxWorldEntities)
            continue;
        const uint32_t actor = dc2_read_u32(
            rdram, monsterMan + 0x484u + static_cast<uint32_t>(entity.slot) * 4u);
        if (dc2_coop_valid_actor(rdram, actor) && (entity.flags & 1u))
        {
            const uint32_t slotBit = 1u << static_cast<uint32_t>(entity.slot);
            const bool authoritativeDead = (entity.flags & kCoopEntityDeadFlag) || entity.hp <= 0;
            if (authoritativeDead)
            {
                s_coopRemoteMonsterDeadMask |= slotBit;
                dc2_write_u32(rdram, actor + 0x1314u, 0u);
                dc2_write_u32(rdram, actor + 0x1330u, 0u); // 0 = inactive, ThinkHost ignores
                dc2_write_u16(rdram, actor + 0x0684u, 0u);
                dc2_write_u16(rdram, actor + 0x0686u, 0u);
                dc2_write_u16(rdram, actor + 0x0688u, 0u);
                dc2_write_u16(rdram, actor + 0x068Au, 0u);
                dc2_coop_set_character_position(rdram, actor, 0.0f, -10000.0f, 0.0f);
                continue;
            }

            // A stale alive snapshot cannot reverse an already-confirmed
            // death. The mask is reset only when the room identity changes.
            if (s_coopRemoteMonsterDeadMask & slotBit)
            {
                dc2_write_u32(rdram, actor + 0x1314u, 0u);
                dc2_write_u32(rdram, actor + 0x1330u, 0u);
                dc2_write_u16(rdram, actor + 0x0684u, 0u);
                dc2_write_u16(rdram, actor + 0x0686u, 0u);
                dc2_write_u16(rdram, actor + 0x0688u, 0u);
                dc2_write_u16(rdram, actor + 0x068Au, 0u);
                dc2_coop_set_character_position(rdram, actor, 0.0f, -10000.0f, 0.0f);
                continue;
            }

            const int32_t guestHp = static_cast<int32_t>(
                dc2_read_u32(rdram, actor + 0x1314u));
            const int32_t guestMaxHp = static_cast<int32_t>(
                dc2_read_u32(rdram, actor + 0x1310u));
            if (!dc2_coop_valid_monster_health(guestHp, guestMaxHp) ||
                entity.maxHp != guestMaxHp || entity.hp < 0 ||
                entity.hp > entity.maxHp)
                continue;
            if (entity.hp != guestHp)
                std::fprintf(stderr,
                             "[DC2:World] guest applied host monster slot=%u hp=%d->%d\n",
                             static_cast<unsigned>(entity.slot), guestHp, entity.hp);

            dc2_write_u32(rdram, actor + 0x1314u,
                          static_cast<uint32_t>(entity.hp));
            dc2_coop_set_character_position(
                rdram, actor, entity.x, entity.y, entity.z);
        }
    }
}

static void dc2_coop_apply_guest_damage_proposals(
    uint8_t *rdram, const dc2_coop_net::WorldState &world, uint32_t roomId,
    R5900Context *ctx, PS2Runtime *runtime)
{
    if (!s_coopGpAddr || world.area != roomId || !ctx || !runtime)
        return;
    if (world.reserved != 0u && g_dc2CoopDungeonSeed != 0u &&
        world.reserved != g_dc2CoopDungeonSeed)
        return;
    const uint32_t monsterMan = dc2_read_u32(rdram, s_coopGpAddr - 0x7248u);
    if (!monsterMan)
        return;
    // P2 is allowed to propose only a lower HP value. Position, spawn/deletion,
    // max HP and AI state remain Host-owned. This makes P2 attacks contribute
    // without letting a stale Guest snapshot resurrect or move an encounter.
    for (uint16_t i = 0; i < world.entityCount; ++i)
    {
        const dc2_coop_net::EntityState &entity = world.entities[i];
        if (entity.flags & kCoopEntityLootFlag)
            continue;
        if (!(entity.flags & 1u) || entity.slot >= dc2_coop_net::kMaxWorldEntities)
            continue;
        const uint32_t actor = dc2_read_u32(
            rdram, monsterMan + 0x484u + static_cast<uint32_t>(entity.slot) * 4u);
        if (!dc2_coop_valid_actor(rdram, actor))
            continue;
        const int32_t hostHp = static_cast<int32_t>(dc2_read_u32(rdram, actor + 0x1314u));
        const int32_t hostMaxHp = static_cast<int32_t>(dc2_read_u32(rdram, actor + 0x1310u));
        if (!dc2_coop_valid_monster_health(hostHp, hostMaxHp))
            continue;

        const bool guestSaysDead = (entity.flags & kCoopEntityDeadFlag) || entity.hp <= 0;
        if (guestSaysDead || (entity.hp >= 0 && entity.hp < hostHp))
        {
            const int32_t targetHp = guestSaysDead ? 0 : entity.hp;
            std::fprintf(stderr,
                         "[DC2:World] host accepted guest damage monster slot=%u hp=%d->%d\n",
                         static_cast<unsigned>(entity.slot), hostHp, targetHp);
            dc2_write_u32(rdram, actor + 0x1314u, static_cast<uint32_t>(targetHp));

            if (targetHp == 0)
            {
                s_coopHostKilledMask |= (1u << entity.slot);
                s_coopHostKilledMaxHp[entity.slot] = hostMaxHp;

                // Position the actor at the ground location where the enemy was killed
                if (guestSaysDead && std::isfinite(entity.x) && std::isfinite(entity.y) && std::isfinite(entity.z))
                {
                    dc2_coop_set_character_position(rdram, actor, entity.x, entity.y, entity.z);
                }

                // Ensure drop flag is set so SET_DEAD_START spawns loot instead of aborting
                if (dc2_read_u32(rdram, actor + 0x132Cu) == 0u)
                    dc2_write_u32(rdram, actor + 0x132Cu, 1u);

                // Run DC2's real SET_DEAD_START script on the authoritative process
                const uint32_t activeMonsterAddr = s_coopGpAddr - 0x7190u;
                const uint32_t savedActiveMonster = dc2_read_u32(rdram, activeMonsterAddr);
                dc2_write_u32(rdram, activeMonsterAddr, actor);
                R5900Context deathCtx = *ctx;
                coop_set_reg(&deathCtx, 28, s_coopGpAddr);
                coop_set_reg(&deathCtx, 4, 0u);
                coop_set_reg(&deathCtx, 5, 0u);
                dc2_coop_run_original(
                    rdram, &deathCtx, runtime, 0x001E5560u,
                    ::ps2__SET_DEAD_START__FP12RS_STACKDATAi_0x1e5560);
                dc2_write_u32(rdram, activeMonsterAddr, savedActiveMonster);
                std::fprintf(stderr,
                             "[DC2:World] host ran native death lifecycle monster slot=%u at (%.1f,%.1f,%.1f)\n",
                             static_cast<unsigned>(entity.slot),
                             dc2_read_f32(rdram, actor + 0x10u),
                             dc2_read_f32(rdram, actor + 0x14u),
                             dc2_read_f32(rdram, actor + 0x18u));

                // Neutralize monster: state 3 stops AI and clearing hitboxes stops collisions
                dc2_write_u32(rdram, actor + 0x1330u, 3u); // 3 = dead state, stops AI
                dc2_write_u16(rdram, actor + 0x0684u, 0u); // clear attack/damage hitboxes
                dc2_write_u16(rdram, actor + 0x0686u, 0u);
                dc2_write_u16(rdram, actor + 0x0688u, 0u);
                dc2_write_u16(rdram, actor + 0x068Au, 0u);
            }
        }
    }
}

static void dc2_coop_apply_guest_loot_pickup(
    uint8_t *rdram, const dc2_coop_net::PlayerState &guest,
    const dc2_coop_net::WorldState &world,
    const R5900Context *ctx = nullptr, PS2Runtime *runtime = nullptr)
{
    if (!(guest.flags & kCoopPlayerLootPickupFlag))
        return;
    const uint32_t requestedSlot =
        (guest.flags >> kCoopPlayerAnalogXShift) & kCoopPlayerLootSlotMask;
    constexpr uint32_t kPullItemManager = 0x003772D8u;
    const uint32_t pullBase = dc2_read_u32(rdram, kPullItemManager);
    const uint32_t pullCount = dc2_read_u32(rdram, kPullItemManager + 4u);
    if (!pullBase || pullCount == 0u || pullCount > 0xFFFFu)
        return;
    for (uint16_t i = 0u; i < world.entityCount; ++i)
    {
        const dc2_coop_net::EntityState &entity = world.entities[i];
        if (entity.slot != requestedSlot ||
            !(entity.flags & kCoopEntityLootFlag))
            continue;
        const uint32_t pullIndex = static_cast<uint32_t>(entity.maxHp) >> 16u;
        if (pullIndex >= pullCount)
            return;
        const uint32_t item = pullBase + pullIndex * 0x80u;
        if (dc2_read_u32(rdram, item + 0x7Cu) != 0u)
        {
            const uint8_t kind = static_cast<uint8_t>(dc2_read_u32(rdram, item + 0x60u) & 0xFFu);
            const bool isAbsOrb = (kind == 1u || kind == 2u || kind == 4u || kind == 6u);
            if (isAbsOrb && runtime)
            {
                const float expVal = dc2_read_f32(rdram, item + 0x64u);
                const int32_t weaponSlot = static_cast<int32_t>(dc2_read_u16(rdram, item + 0x6Cu) & 1u);
                dc2_coop_award_abs(rdram, ctx, runtime, expVal > 0.0f ? expVal : 10.0f, 0u, weaponSlot);
            }
            const uint32_t wireWord = dc2_read_u32(rdram, item + 0x74u);
            dc2_write_u32(rdram, item + 0x74u,
                          (wireWord & 0xFFFFFF00u) | 0xFFu);
            dc2_write_u32(rdram, item + 0x7Cu, 0u);
            std::fprintf(stderr,
                         "[DC2:Loot] host accepted guest pickup slot=%u pool=%u (isAbs=%d)\n",
                         requestedSlot, pullIndex, isAbsOrb ? 1 : 0);
        }
        return;
    }
}

static uint32_t dc2_coop_pause_flag_addr()
{
    return s_coopGpAddr ? s_coopGpAddr - 0x5E58u : 0u;
}

static void dc2_coop_begin_mirrored_pause(uint8_t *rdram)
{
    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    if (!pauseFlag || dc2_read_u32(rdram, pauseFlag) != 0u)
        return;

    // Mirror PauseStart's state initialization without pretending that the
    // remote controller pressed Start in this process. PauseLoop then owns the
    // normal frozen-frame overlay, sound fade, input polling, and rendering.
    dc2_write_u32(rdram, s_coopGpAddr - 0x5E50u, 10u); // PauseCancelCnt
    dc2_write_u32(rdram, s_coopGpAddr - 0x5E40u, 0u);  // InitFlag
    dc2_write_u32(rdram, s_coopGpAddr - 0x5E48u, 0u);  // PauseInfo
    dc2_write_u32(rdram, s_coopGpAddr - 0x5E44u, s_coopSceneAddr);
    dc2_write_u32(rdram, s_coopGpAddr - 0x5E3Cu, 0xBF800000u); // SeCoreVol=-1
    dc2_write_u32(rdram, pauseFlag, 1u);
    s_coopMirroringRemotePause = true;
    std::fprintf(stderr, "[DC2:Pause] remote pause request mirrored locally\n");
}

static void dc2_coop_end_mirrored_pause(uint8_t *rdram, R5900Context *ctx,
                                        PS2Runtime *runtime)
{
    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    if (!pauseFlag || dc2_read_u32(rdram, pauseFlag) == 0u)
    {
        s_coopMirroringRemotePause = false;
        return;
    }

    // PauseEnd restores the BGM/SFX ports and play-time counter in addition to
    // clearing PauseFlag, so use the real guest function instead of only
    // changing the flag.
    R5900Context endCtx = *ctx;
    f50_callg(rdram, &endCtx, runtime, 0x00309D10u, 0u, 0u, 0u, 0u);
    s_coopMirroringRemotePause = false;
    std::fprintf(stderr, "[DC2:Pause] shared pause released locally\n");
}

static void dc2_coop_apply_shared_pause(uint8_t *rdram, R5900Context *ctx,
                                        PS2Runtime *runtime)
{
    if (!s_coopRemotePlayerReady || !ctx || !runtime)
        return;
    const bool remoteRequested =
        (s_coopRemotePlayer.flags & kCoopPlayerPauseRequestFlag) != 0u;
    if (remoteRequested && !s_coopLocalPauseRequested)
        dc2_coop_begin_mirrored_pause(rdram);
    else if (!remoteRequested && !s_coopLocalPauseRequested &&
             s_coopMirroringRemotePause)
        dc2_coop_end_mirrored_pause(rdram, ctx, runtime);
}

} // namespace
extern std::atomic<bool> g_dc2CoopInviteActive;
extern std::atomic<uint16_t> g_dc2CoopInviteMap;
extern std::atomic<uint16_t> g_dc2CoopInviteFloor;
namespace {

static void dc2_coop_trigger_dungeon_invite(uint16_t map, uint16_t floor)
{
    const uint32_t room = (1u << 28u) |
        ((static_cast<uint32_t>(map) & 0x0FFFu) << 12u) |
        (static_cast<uint32_t>(floor) & 0x0FFFu);
    if (::g_dc2CoopInviteActive.load(std::memory_order_relaxed) ||
        s_coopInviteWarpPending.load(std::memory_order_relaxed) ||
        s_coopLastInvitedRoom == room)
        return;
    s_coopLastInvitedRoom = room;
    ::g_dc2CoopInviteMap.store(map, std::memory_order_relaxed);
    ::g_dc2CoopInviteFloor.store(floor, std::memory_order_relaxed);
    ::g_dc2CoopInviteActive.store(true, std::memory_order_release);
    std::fprintf(stderr, "[DC2:Co-Op] >>> RECEIVED DUNGEON INVITATION: map=%u floor=%u <<<\n",
                 static_cast<unsigned>(map), static_cast<unsigned>(floor));
}

static bool dc2_coop_is_paused_internal(uint8_t *rdram)
{
    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    return pauseFlag && rdram && dc2_read_u32(rdram, pauseFlag) != 0u;
}

static uint32_t dc2_coop_pack_local_analog_flags()
{
    const bool guest = dc2_coop_net::role() == dc2_coop_net::Role::Guest;
    const uint8_t lx = guest ? g_pad_live_lx_p2 : g_pad_live_lx;
    const uint8_t ly = guest ? g_pad_live_ly_p2 : g_pad_live_ly;
    return kCoopPlayerAnalogValidFlag |
           ((static_cast<uint32_t>(lx >> 2u) & kCoopPlayerAnalogMask)
            << kCoopPlayerAnalogXShift) |
           ((static_cast<uint32_t>(ly >> 2u) & kCoopPlayerAnalogMask)
            << kCoopPlayerAnalogYShift);
}

static void dc2_coop_poll_guest_loot_pickup(uint8_t *rdram)
{
    if (dc2_coop_net::role() != dc2_coop_net::Role::Guest ||
        s_coopPendingLootPickupSlot >= 0)
        return;
    constexpr uint32_t kPullItemManager = 0x003772D8u;
    const uint32_t pullBase = dc2_read_u32(rdram, kPullItemManager);
    const uint32_t pullCount = dc2_read_u32(rdram, kPullItemManager + 4u);
    if (!pullBase || pullCount == 0u || pullCount > 0xFFFFu)
        return;
    for (uint32_t slot = 0u; slot < dc2_coop_net::kMaxWorldEntities; ++slot)
    {
        const uint32_t pullIndex = s_coopRemoteLootPoolBySlot[slot];
        if (pullIndex == 0xFFFFu || pullIndex >= pullCount)
            continue;
        const uint32_t item = pullBase + pullIndex * 0x80u;
        const uint8_t kind = static_cast<uint8_t>(dc2_read_u32(rdram, item + 0x60u) & 0xFFu);
        const bool isAbsOrb = (kind == 1u || kind == 2u || kind == 4u || kind == 6u);
        if (dc2_read_u32(rdram, item + 0x7Cu) == 0u)
        {
            if (isAbsOrb && pullIndex < 512u)
                s_coopGuestCollectedAbs[pullIndex] = 1u;
            s_coopPendingLootPickupSlot = static_cast<int32_t>(slot);
            std::fprintf(stderr,
                         "[DC2:Loot] guest requested shared pickup slot=%u pool=%u (isAbs=%d)\n",
                         slot, pullIndex, isAbsOrb ? 1 : 0);
            break;
        }
    }
}

static bool dc2_coop_remote_stick_moving(const dc2_coop_net::PlayerState &state)
{
    if (!(state.flags & kCoopPlayerAnalogValidFlag))
        return true; // Compatible with a peer built before analog flags existed.
    const int x = static_cast<int>(
        (state.flags >> kCoopPlayerAnalogXShift) & kCoopPlayerAnalogMask);
    const int y = static_cast<int>(
        (state.flags >> kCoopPlayerAnalogYShift) & kCoopPlayerAnalogMask);
    return std::abs(x - 32) > 4 || std::abs(y - 32) > 4;
}

static void dc2_coop_reset_remote_sample(
    const dc2_coop_net::PlayerState &state, uint32_t roomId,
    CoopNetClock::time_point now)
{
    s_coopRemotePlayer = state;
    s_coopRemotePlayerReady = true;
    s_coopRemoteVisual = state;
    s_coopRemoteVisualReady = true;
    s_coopRemoteVisualRoom = roomId;
    s_coopRemoteSampleAt = now;
    s_coopRemoteVisualAt = now;
    s_coopRemoteVelocityX = 0.0f;
    s_coopRemoteVelocityY = 0.0f;
    s_coopRemoteVelocityZ = 0.0f;
    s_coopRemoteMotionRate = 0.0f;
}

static void dc2_coop_receive_remote_sample(
    const dc2_coop_net::PlayerState &incoming, uint32_t roomId)
{
    const CoopNetClock::time_point now = CoopNetClock::now();
    if (!s_coopRemotePlayerReady || !s_coopRemoteVisualReady ||
        s_coopRemoteVisualRoom != roomId ||
        !std::isfinite(incoming.x) || !std::isfinite(incoming.y) ||
        !std::isfinite(incoming.z) || !std::isfinite(incoming.facing))
    {
        dc2_coop_reset_remote_sample(incoming, roomId, now);
        return;
    }

    const float seconds = std::chrono::duration<float>(
        now - s_coopRemoteSampleAt).count();
    const float dx = incoming.x - s_coopRemotePlayer.x;
    const float dy = incoming.y - s_coopRemotePlayer.y;
    const float dz = incoming.z - s_coopRemotePlayer.z;
    const float distanceSq = dx * dx + dy * dy + dz * dz;
    if (seconds >= 0.008f && seconds <= 0.5f &&
        distanceSq < (500.0f * 500.0f))
    {
        const float blend = 0.65f;
        s_coopRemoteVelocityX += (dx / seconds - s_coopRemoteVelocityX) * blend;
        s_coopRemoteVelocityY += (dy / seconds - s_coopRemoteVelocityY) * blend;
        s_coopRemoteVelocityZ += (dz / seconds - s_coopRemoteVelocityZ) * blend;

        // Once the sender's stick is neutral and two snapshots agree, stop
        // extrapolating immediately instead of letting the proxy skate onward.
        if (!dc2_coop_remote_stick_moving(incoming) && distanceSq < 1.0f)
        {
            s_coopRemoteVelocityX = 0.0f;
            s_coopRemoteVelocityY = 0.0f;
            s_coopRemoteVelocityZ = 0.0f;
        }

        if (incoming.motion == s_coopRemotePlayer.motion)
        {
            const float frameDelta = incoming.motionFrame -
                                     s_coopRemotePlayer.motionFrame;
            s_coopRemoteMotionRate =
                frameDelta >= 0.0f && frameDelta < 30.0f
                    ? frameDelta / seconds : 0.0f;
        }
        else
        {
            s_coopRemoteMotionRate = 0.0f;
        }
    }
    else
    {
        s_coopRemoteVelocityX = 0.0f;
        s_coopRemoteVelocityY = 0.0f;
        s_coopRemoteVelocityZ = 0.0f;
        s_coopRemoteMotionRate = 0.0f;
        if (distanceSq >= (500.0f * 500.0f))
            s_coopRemoteVisual = incoming;
    }

    s_coopRemotePlayer = incoming;
    s_coopRemotePlayerReady = true;
    s_coopRemoteSampleAt = now;
}

static bool dc2_coop_advance_remote_visual()
{
    if (!s_coopRemotePlayerReady || !s_coopRemoteVisualReady)
        return false;

    const CoopNetClock::time_point now = CoopNetClock::now();
    const float sampleAge = std::chrono::duration<float>(
        now - s_coopRemoteSampleAt).count();
    if (sampleAge > 1.0f)
    {
        // Never leave a frozen clone in the room after a peer disconnects,
        // changes floors, or reaches a game-over screen and stops publishing.
        s_coopRemotePlayerReady = false;
        s_coopRemoteVisualReady = false;
        return false;
    }

    float dt = std::chrono::duration<float>(now - s_coopRemoteVisualAt).count();
    s_coopRemoteVisualAt = now;
    dt = std::clamp(dt, 0.0f, 0.1f);
    const float predictionAge = std::clamp(sampleAge, 0.0f, 0.10f);
    const float targetX = s_coopRemotePlayer.x +
                          s_coopRemoteVelocityX * predictionAge;
    const float targetY = s_coopRemotePlayer.y +
                          s_coopRemoteVelocityY * predictionAge;
    const float targetZ = s_coopRemotePlayer.z +
                          s_coopRemoteVelocityZ * predictionAge;
    const float dx = targetX - s_coopRemoteVisual.x;
    const float dy = targetY - s_coopRemoteVisual.y;
    const float dz = targetZ - s_coopRemoteVisual.z;
    const float distanceSq = dx * dx + dy * dy + dz * dz;
    const float alpha = distanceSq > (500.0f * 500.0f)
        ? 1.0f : 1.0f - std::exp(-dt / 0.045f);
    s_coopRemoteVisual.x += dx * alpha;
    s_coopRemoteVisual.y += dy * alpha;
    s_coopRemoteVisual.z += dz * alpha;
    s_coopRemoteVisual.facing = s_coopRemotePlayer.facing;
    s_coopRemoteVisual.flags = s_coopRemotePlayer.flags;
    s_coopRemoteVisual.motion = s_coopRemotePlayer.motion;
    s_coopRemoteVisual.motionFrame = s_coopRemotePlayer.motionFrame +
                                     s_coopRemoteMotionRate * predictionAge;
    return true;
}

static void dc2_coop_accept_dungeon_invite_internal(uint8_t *rdram, PS2Runtime *runtime)
{
    if (!::g_dc2CoopInviteActive.load(std::memory_order_acquire) || !s_coopGpAddr)
        return;
    ::g_dc2CoopInviteActive.store(false, std::memory_order_release);
    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    if (pauseFlag && rdram)
        dc2_write_u32(rdram, pauseFlag, 0u);
    s_coopLocalPauseRequested = false;
    s_coopPendingWarpMap.store(
        ::g_dc2CoopInviteMap.load(std::memory_order_relaxed),
        std::memory_order_relaxed);
    s_coopPendingWarpFloor.store(
        ::g_dc2CoopInviteFloor.load(std::memory_order_relaxed),
        std::memory_order_relaxed);
    s_coopInviteWarpPending.store(true, std::memory_order_release);
    std::fprintf(stderr,
                 "[DC2:Co-Op] Warp accepted; scheduling native dungeon transition map=%u floor=%u\n",
                 static_cast<unsigned>(s_coopPendingWarpMap.load(std::memory_order_relaxed)),
                 static_cast<unsigned>(s_coopPendingWarpFloor.load(std::memory_order_relaxed)));
}

static void dc2_coop_exchange_network_state(uint8_t *rdram, uint32_t area,
                                            R5900Context *ctx,
                                            PS2Runtime *runtime)
{
    if (dc2_coop_trace())
    {
        static uint32_t hits = 0u;
        if ((hits++ % 120u) == 0u)
            std::fprintf(stderr,
                         "[DC2:Trace] exchange area=%u scene=0x%x dng=0x%x net=%d v5=%d\n",
                         area, s_coopSceneAddr, dc2_read_u32(rdram, 0x01E9F6E0u),
                         dc2_coop_net::active() ? 1 : 0,
                         dc2_coop_v5_net::active() ? 1 : 0);
    }

    if (!dc2_coop_networked() || !s_coopSceneAddr)
        return;

    // Replicate peer gameplay events (chest opens etc.). The opener's local game
    // already produced the state; replay the presentation on this side.
    if (dc2_coop_net::active() && !dc2_coop_v5_net::active())
    {
        uint8_t sender = 0;
        int budget = 8;
        dc2_coop_net::GameEvent event{};
        while (budget-- > 0 && dc2_coop_net::pollGameEvent(event, sender))
        {
            if (event.type == static_cast<uint16_t>(dc2_coop_net::GameEventType::Chest))
            {
                constexpr uint32_t kMemSize = 0x02000000u;
                const uint32_t manager = event.manager;
                if (manager != 0u && event.slot < 24u && std::isfinite(event.f0) &&
                    static_cast<uint64_t>(manager) + event.slot * 0x70ull + 0x65ull <= kMemSize)
                {
                    const uint32_t base = manager + event.slot * 0x70u;
                    std::memcpy(rdram + base + 0x60u, &event.f0, 4);
                    rdram[base + 0x64u] = static_cast<uint8_t>(event.value);
                    std::fprintf(stderr,
                                 "[DC2:Chest] peer slot=%u status=%d lid=%.3f applied\n",
                                 event.slot, event.value, event.f0);
                }
            }
        }

        // DC2_COOP_TEST_CHEST=<slot>: host sends one synthetic chest event so the
        // replication path can be verified without walking to a chest.
        static const long testSlot = []() -> long {
            const char *value = std::getenv("DC2_COOP_TEST_CHEST");
            return value ? std::strtol(value, nullptr, 10) : -1L;
        }();
        if (testSlot >= 0L && testSlot < 24L && s_coopRemotePlayerReady &&
            dc2_coop_net::role() == dc2_coop_net::Role::Host)
        {
            static uint32_t testSends = 0u;
            if (testSends < 20u)
            {
                ++testSends;
                dc2_coop_net::GameEvent event{};
                event.type = static_cast<uint16_t>(dc2_coop_net::GameEventType::Chest);
                event.slot = static_cast<uint16_t>(testSlot);
                event.value = 0;
                event.f0 = 1.0f;
                event.manager = dc2_read_u32(rdram, s_coopSceneAddr + 0x300Cu);
                std::fprintf(stderr, "[DC2:Chest] TEST send #%u slot=%ld manager=0x%x ok=%d\n",
                             testSends, testSlot, event.manager,
                             dc2_coop_net::sendGameEvent(event) ? 1 : 0);
            }
        }
    }

    const uint32_t local = dc2_coop_get_character(
        rdram, s_coopSceneAddr, dc2_coop_local_slot());
    if (!local)
        return;

    // PauseLoop treats Start as a held button. After it closes, require a
    // physical release before another PauseStart can be accepted; otherwise
    // one long press repeatedly leaves and re-enters pause.
    constexpr uint32_t kStartBtnValue = 0x003D7B60u + 0x10u + 0x15u * 8u;
    if (s_coopPauseButtonMustRelease &&
        dc2_read_u32(rdram, kStartBtnValue) == 0u)
        s_coopPauseButtonMustRelease = false;

    uint16_t map = 0u;
    uint16_t floor = 0u;
    const uint32_t roomId = dc2_coop_room_id(rdram, area, &map, &floor);
    if (area == 1u && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u &&
        g_coop_dungeon_entry.arrived(roomId))
        std::fprintf(stderr,
                     "[DC2:Entry] event=arrived tick=%u room=0x%08x\n",
                     g_coop_authority_frame_tick, roomId);
    dc2_coop_v5_net::setLocalRoom(roomId);
    // Opt-in lifecycle evidence for the native object adapter. No guest writes.
    static const bool traceChests = [] {
        const char *value = std::getenv("DC2_COOP_TRACE_CHESTS");
        return value && std::strcmp(value, "1") == 0;
    }();
    if (traceChests && area == 1u && s_coopSceneAddr < 0x02000000u - 0x3010u)
    {
        static uint32_t previousRoom = 0, previousManager = 0;
        static dc2::adapter::ChestObservation previous[24]{};
        static bool valid[24]{};
        const uint32_t manager = dc2_read_u32(rdram, s_coopSceneAddr + 0x300cu);
        if (roomId != previousRoom || manager != previousManager)
        {
            std::memset(valid, 0, sizeof(valid));
            previousRoom = roomId;
            previousManager = manager;
        }
        for (uint32_t slot = 0; slot < 24; ++slot)
        {
            dc2::adapter::ChestObservation observed{};
            if (!dc2::adapter::readChest(rdram, 0x02000000u, manager, slot, observed))
                continue;
            // Status transitions only: lid animation changes every frame.
            if (!valid[slot] || previous[slot].status != observed.status)
                std::fprintf(stderr, "[DC2:CHEST] room=%08x slot=%u status=%u lid=%f\n",
                             roomId, slot, unsigned(observed.status), observed.lidAngle);
            previous[slot] = observed;
            valid[slot] = true;
        }
    }
    dc2_coop_poll_guest_loot_pickup(rdram);
    dc2_coop_net::PlayerState outgoing{};
    // The wire field is a complete room identity: high nibble is the area
    // class, followed by dungeon/map and floor. It is intentionally named
    // `area` in protocol v2 for packet compatibility.
    outgoing.area = roomId;
    const uint16_t localInputMask =
        dc2_coop_net::role() == dc2_coop_net::Role::Guest
            ? g_pad_live_mask_p2 : g_pad_live_mask;
    outgoing.flags = kCoopPlayerReadyFlag |
        (s_coopLocalPauseRequested ? kCoopPlayerPauseRequestFlag : 0u) |
        dc2_coop_pack_local_analog_flags() |
        (static_cast<uint32_t>(localInputMask) << 16u);
    if (s_coopPendingLootPickupSlot >= 0)
    {
        // During the short reliable-by-repetition pickup request, reuse the
        // coarse X-stick bits for the 0..23 network loot slot.
        outgoing.flags &= ~(kCoopPlayerLootSlotMask << kCoopPlayerAnalogXShift);
        outgoing.flags |= kCoopPlayerLootPickupFlag |
            ((static_cast<uint32_t>(s_coopPendingLootPickupSlot) &
              kCoopPlayerLootSlotMask) << kCoopPlayerAnalogXShift);
    }
    outgoing.x = dc2_read_f32(rdram, local + 0x10u);
    outgoing.y = dc2_read_f32(rdram, local + 0x14u);
    outgoing.z = dc2_read_f32(rdram, local + 0x18u);
    // Send the flattened motion number accepted by SetMotion, not the bank
    // number stored at +0x370. Confusing those two values made a moving remote
    // avatar repeatedly select an idle-like motion and slide like a statue.
    outgoing.facing = dc2_read_f32(rdram, local + 0x24u);
    const uint32_t localMotion = dc2_coop_current_motion_index(rdram, local);
    outgoing.motion = localMotion == 0xFFFFFFFFu ? 0u : localMotion;
    outgoing.motionFrame = dc2_read_f32(rdram, local + 0x388u);

    dc2_coop_net::WorldState publishedWorld{};
    const dc2_coop_net::WorldState *publishedWorldPtr = nullptr;
    publishedWorld = dc2_coop_collect_world(rdram, area, roomId, map, floor);
    publishedWorldPtr = &publishedWorld;
    dc2_coop_net::WorldState authoritativeWorld{};
    dc2_coop_net::PlayerState incoming{};
    // When the v5 authority transport is live it supersedes v4. Running both on the
    // same relay address just floods it with v4 packets the v5 relay must discard
    // (measured 2026-09-25: ~3.1k v4 drops vs 2.1k valid v5 packets in a 48 s session).
    const bool receivedV4 =
        !dc2_coop_v5_net::active() &&
        dc2_coop_net::exchange(outgoing, incoming, publishedWorldPtr, &authoritativeWorld);

    // During the v5 migration the visual processes keep v4 as a fallback, but
    // a Role-3 snapshot supersedes both completed client outcomes. Stable IDs
    // are checked before converting the authority frame to the existing DC2
    // world-application path.
    bool receivedV5 = false;
    dc2_coop_v5_net::Snapshot v5Snapshot{};
    dc2_coop_net::WorldState convertedV5{};
    if (dc2_coop_v5_net::active() &&
        dc2_coop_v5_net::latestSnapshot(v5Snapshot) &&
        v5Snapshot.room == roomId &&
        dc2::adapter::validPlayers(v5Snapshot) &&
        dc2::adapter::convertWorld(v5Snapshot, map, floor, convertedV5))
    {
        const uint32_t localPlayerId =
            dc2_coop_net::role() == dc2_coop_net::Role::Guest ? 2u : 1u;
        const uint32_t remotePlayerId = localPlayerId == 1u ? 2u : 1u;
        const dc2_coop_v5::SnapshotPlayer *localAuthority = nullptr;
        for (uint16_t i = 0u; i < v5Snapshot.playerCount; ++i)
        {
            const dc2_coop_v5::SnapshotPlayer &player = v5Snapshot.players[i];
            if (player.playerId == localPlayerId)
                localAuthority = &player;
            if (player.playerId != remotePlayerId)
                continue;
            incoming.area = roomId;
            incoming.flags = player.flags | kCoopPlayerReadyFlag;
            incoming.x = player.x;
            incoming.y = player.y;
            incoming.z = player.z;
            incoming.facing = player.facing;
            incoming.motion = player.motion;
            incoming.motionFrame = player.motionFrame;
            receivedV5 = true;
        }

        if (localAuthority)
        {
            // The visible process may predict locally between packets, but the
            // hidden simulation is the collision/combat truth. A generous
            // threshold keeps ordinary movement responsive while correcting
            // only meaningful divergence.
            const float dx = localAuthority->x - outgoing.x;
            const float dy = localAuthority->y - outgoing.y;
            const float dz = localAuthority->z - outgoing.z;
            if (dx * dx + dy * dy + dz * dz > 100.0f * 100.0f)
            {
                dc2_coop_set_character_position(
                    rdram, local, localAuthority->x,
                    localAuthority->y, localAuthority->z);
                // Zero radians is a real authoritative orientation.
                dc2_coop_write_f32(
                    rdram, local + 0x24u, localAuthority->facing);
            }
        }

        authoritativeWorld = convertedV5;
        if (v5Snapshot.hasChests && dc2_env_flag_enabled("DC2_COOP_CHEST_SYNC") &&
            area == 1u && v5Snapshot.floorSeed == g_dc2CoopDungeonSeed &&
            s_coopSceneAddr && s_coopSceneAddr < 0x02000000u - 0x3010u)
        {
            const uint32_t manager = dc2_read_u32(rdram, s_coopSceneAddr + 0x300Cu);
            dc2::adapter::ChestObservation before[24]{};
            const bool traceChests = dc2_env_flag_enabled("DC2_COOP_TRACE_CHESTS");
            if (traceChests)
                for (uint32_t slot = 0; slot < 24; ++slot)
                    dc2::adapter::readChest(rdram, 0x02000000u, manager, slot, before[slot]);
            if (dc2::adapter::applyChests(rdram, 0x02000000u, manager, v5Snapshot.chests) && traceChests)
                for (uint32_t slot = 0; slot < 24; ++slot)
                    if (before[slot].status != v5Snapshot.chests[slot].status)
                        std::fprintf(stderr,
                            "[DC2:CHEST:apply] room=%08x slot=%u status=%u->%u lid=%f\n",
                            roomId, slot, unsigned(before[slot].status),
                            unsigned(v5Snapshot.chests[slot].status), v5Snapshot.chests[slot].lidAngle);
        }
    }

    if (!receivedV4 && !receivedV5)
        return;

    // Real-time Gilda wallet synchronization across both players:
    for (uint16_t i = 0u; i < authoritativeWorld.entityCount; ++i)
    {
        const auto &entity = authoritativeWorld.entities[i];
        if (entity.slot == kCoopGildaSlot)
        {
            const uint32_t remoteGilda = static_cast<uint32_t>(entity.hp);
            const uint32_t remoteVersion = static_cast<uint32_t>(entity.maxHp);
            if (remoteVersion > s_lastAppliedRemoteGildaVersion)
            {
                s_lastAppliedRemoteGildaVersion = remoteVersion;
                s_lastKnownGilda = remoteGilda;
                dc2_set_gilda(rdram, remoteGilda);
                std::fprintf(stderr, "[DC2:Gilda] synchronized Gilda to %u (version %u)\n",
                             remoteGilda, remoteVersion);
            }
            break;
        }
    }

    if (incoming.area != roomId)
    {
        // A peer in another room must not leave its last in-room proxy frozen
        // beside us while the invitation/transition UI is being handled.
        s_coopRemotePlayerReady = false;
        s_coopRemoteVisualReady = false;
        std::fill(std::begin(s_coopRemoteLootPoolBySlot),
                  std::end(s_coopRemoteLootPoolBySlot),
                  static_cast<uint16_t>(0xFFFFu));
        s_coopPendingLootPickupSlot = -1;
        // Cross-room invitation check: if the other player entered a dungeon (high nibble 1)
        const uint32_t incomingAreaType = (incoming.area >> 28u) & 0xFu;
        if (incomingAreaType == 1u && authoritativeWorld.reserved != 0u)
        {
            s_coopAuthoritativeSeed = authoritativeWorld.reserved;
            const uint16_t inviteMap = authoritativeWorld.map;
            const uint16_t inviteFloor = authoritativeWorld.floor;
            dc2_coop_trigger_dungeon_invite(inviteMap, inviteFloor);
        }
        return;
    }

    s_coopLastInvitedRoom = 0xFFFFFFFFu;

    g_dc2CoopNetworkReady.store(true, std::memory_order_release);
    dc2_coop_receive_remote_sample(incoming, roomId);
    dc2_coop_apply_shared_pause(rdram, ctx, runtime);
    if (receivedV5)
        dc2_coop_apply_authoritative_world(
            rdram, authoritativeWorld, area, roomId, ctx, runtime);
    else if (dc2_coop_net::role() == dc2_coop_net::Role::Guest)
        dc2_coop_apply_authoritative_world(
            rdram, authoritativeWorld, area, roomId, ctx, runtime);
    else if (area == 1u)
    {
        dc2_coop_apply_guest_loot_pickup(
            rdram, incoming, publishedWorld, ctx, runtime);
        dc2_coop_apply_guest_damage_proposals(
            rdram, authoritativeWorld, roomId, ctx, runtime);
    }

    // Apply remote player state to slot 4
    if (s_coopSceneAddr)
    {
        const uint32_t p2 = dc2_coop_get_character(rdram, s_coopSceneAddr, kCoopP2Slot);
        if (p2)
        {
            dc2_coop_set_character_position(rdram, p2, incoming.x, incoming.y, incoming.z);
            if (incoming.facing != 0.0f)
                dc2_coop_write_f32(rdram, p2 + 0x24u, incoming.facing);
            static uint32_t lastRemoteMotion = 0xFFFFFFFFu;
            if (incoming.motion != 0u && incoming.motion != lastRemoteMotion)
            {
                lastRemoteMotion = incoming.motion;
                R5900Context motionCtx = *ctx;
                f50_callg(rdram, &motionCtx, runtime, 0x0016B720u, p2, incoming.motion, 0u, 0u);
            }
            if (incoming.motion != 0u)
            {
                dc2_coop_write_f32(rdram, p2 + 0x388u, incoming.motionFrame);
            }
            dc2_write_u32(rdram, p2 + 0x40u, 1u);
            dc2_write_u32(rdram, p2 + 0x44u, 1u);
            // Disable collision so slot 0 never gets wedged against slot 4
            dc2_write_u16(rdram, p2 + 0x68Au, 0u);
            dc2_write_u16(rdram, p2 + 0x684u, 0u);
            dc2_write_u16(rdram, p2 + 0x686u, 0u);
            dc2_write_u32(rdram, p2 + 0x1330u, 0u);
        }
    }

    static uint32_t loggedRoom = 0xFFFFFFFFu;
    if (loggedRoom != roomId)
    {
        loggedRoom = roomId;
        std::fprintf(stderr,
                     "[DC2:World] joined room=0x%08x area=%u map=%u floor=%u entities=%u\n",
                     roomId, area, static_cast<unsigned>(map),
                     static_cast<unsigned>(floor),
                     dc2_coop_net::role() == dc2_coop_net::Role::Host
                         ? static_cast<unsigned>(publishedWorld.entityCount)
                         : static_cast<unsigned>(authoritativeWorld.entityCount));
    }
    if (dc2_coop_trace())
    {
        static uint32_t updates = 0u;
        if ((updates++ % 120u) == 0u)
            std::fprintf(stderr,
                         "[DC2:Session] remote avatar slot=%u pos=(%.1f,%.1f,%.1f)\n",
                         dc2_coop_remote_slot(), incoming.x, incoming.y, incoming.z);
    }
}

static void dc2_coop_align_network_local_spawn(uint8_t *rdram, const char *areaName)
{
    if (s_coopLocalSpawnAligned || !dc2_coop_networked() || !s_coopSceneAddr)
        return;
    const uint32_t local = dc2_coop_get_character(rdram, s_coopSceneAddr, 0u);
    if (!local)
        return;

    // Keep both processes on the game's exact spawn transform. A seemingly
    // harmless X offset can land outside the very small initial collision
    // polygon on some generated floors, causing the Guest to fall forever.
    // Remote players are render-only proxies and do not collide, so overlap
    // for the first frame is safe; the players can immediately move apart.
    s_coopLocalSpawnAligned = true;
    std::fprintf(stderr,
                 "[DC2:Session] local %s aligned at %s spawn pos=(%.1f,%.1f,%.1f)\n",
                 dc2_coop_local_character_no() == 1u ? "Monica" : "Max",
                 areaName,
                 dc2_read_f32(rdram, local + 0x10u),
                 dc2_read_f32(rdram, local + 0x14u),
                 dc2_read_f32(rdram, local + 0x18u));
}

// Start with the real generated entry (bypassing our override at that one
// address), then use the normal address map to resume any yielded slices.
static void dc2_coop_finish_override(R5900Context *ctx, uint32_t returnPc,
                                     uint32_t returnValue);

static bool dc2_coop_run_original(uint8_t *rdram, R5900Context *callCtx,
                                  PS2Runtime *runtime, uint32_t entry,
                                  CoopGuestFunction original)
{
    coop_set_reg(callCtx, 31, 0u);
    callCtx->pc = entry;
    original(rdram, callCtx, runtime);

    constexpr uint32_t kMaxResumeSlices = 1u << 20;
    for (uint32_t slice = 0; callCtx->pc != 0u && slice < kMaxResumeSlices; ++slice)
    {
        auto fn = runtime->lookupFunction(callCtx->pc);
        if (!fn)
            break;
        fn(rdram, callCtx, runtime);
    }

    if (callCtx->pc == 0u)
        return true;

    std::fprintf(stderr,
                 "[DC2:Co-Op] ERROR: guest call 0x%08x did not complete (pc=0x%08x)\n",
                 entry, callCtx->pc);
    return false;
}

static bool dc2_coop_process_pending_dungeon_warp(
    uint8_t *rdram, const R5900Context *seed, PS2Runtime *runtime)
{
    if (!rdram || !seed || !runtime ||
        !s_coopInviteWarpPending.exchange(false, std::memory_order_acq_rel))
        return false;

    const uint16_t map = s_coopPendingWarpMap.load(std::memory_order_relaxed);
    const uint16_t floor = s_coopPendingWarpFloor.load(std::memory_order_relaxed);
    g_coop_dungeon_entry.clear();
    g_coop_authority_tree = 0u;
    const uint32_t sp = coop_get_reg(seed, 29);
    if (map >= 0x1000u || floor >= 0x100u || sp < 0x300u)
    {
        std::fprintf(stderr,
                     "[DC2:Co-Op] rejected unsafe dungeon transition map=%u floor=%u sp=0x%08x\n",
                     static_cast<unsigned>(map), static_cast<unsigned>(floor), sp);
        return false;
    }

    // NextLoop receives INIT_LOOP_ARG by value through a guest-RAM pointer.
    // Match _GOTO_DNG exactly: word 0 is dungeon/map, +0x44 is the requested
    // floor, and +0x48 is the optional entry parameter. The old implementation
    // merely wrote NextLoopNo=1 (the menu loop), so accepting could never warp.
    // Keep the source clear of NextLoop's own [sp-0x50, sp) copy buffer.
    const uint32_t argsAddr = sp - 0x200u;
    uint8_t *args = getMemPtr(rdram, argsAddr);
    if (!args)
        return false;
    uint8_t backup[0x50u];
    std::memcpy(backup, args, sizeof(backup));
    std::memset(args, 0, 0x50u);
    dc2_write_u32(rdram, argsAddr + 0x00u, static_cast<uint32_t>(map));
    dc2_write_u32(rdram, argsAddr + 0x44u, static_cast<uint32_t>(floor));
    dc2_write_u32(rdram, argsAddr + 0x48u, 0xFFFFFFFFu);

    R5900Context nextCtx = *seed;
    coop_set_reg(&nextCtx, 4, 2u);
    coop_set_reg(&nextCtx, 5, argsAddr);
    const bool queued = dc2_coop_run_original(
        rdram, &nextCtx, runtime, 0x00190900u,
        ::NextLoop__Fi13INIT_LOOP_ARG_0x190900);
    std::memcpy(args, backup, sizeof(backup));
    if (!queued || !g_coop_dungeon_entry.request(
            map, floor, g_coop_authority_frame_tick))
        return false;

    // _GOTO_DNG also marks the event-transition state after NextLoop. Keeping
    // that native companion write lets EditLoop unwind to MainLoop cleanly.
    dc2_write_u32(rdram, 0x01ECE4FCu, 3u);
    s_coopRemotePlayerReady = false;
    s_coopRemoteVisualReady = false;
    std::fill(std::begin(s_coopRemoteLootPoolBySlot),
              std::end(s_coopRemoteLootPoolBySlot),
              static_cast<uint16_t>(0xFFFFu));
    s_coopPendingLootPickupSlot = -1;
    g_dc2CoopNetworkReady.store(false, std::memory_order_release);
    std::fprintf(stderr,
                 "[DC2:Co-Op] native NextLoop(2) queued map=%u floor=%u\n",
                 static_cast<unsigned>(map), static_cast<unsigned>(floor));
    std::fprintf(stderr,
                 "[DC2:Entry] event=request tick=%u room=0x%08x map=%u floor=%u\n",
                 g_coop_authority_frame_tick, g_coop_dungeon_entry.room(),
                 static_cast<unsigned>(map), static_cast<unsigned>(floor));
    return true;
}

static bool dc2_coop_guest_span_valid(uint32_t address, uint32_t size)
{
    return address >= 0x80u && size <= 0x02000000u &&
           address <= 0x02000000u - size;
}

// Advance the native dungeon-entry adapter exactly once per Role-3 frame. The
// two pad hooks are deliberately pure readers of the cached ownsPad/padMask
// result because either hook can execute multiple times in one frame.
static void dc2_coop_advance_authority_dungeon_entry(uint8_t *rdram)
{
    if (!rdram || !dc2_coop_v5_net::isAuthority() ||
        !g_coop_dungeon_entry.active())
        return;

    dc2::DungeonEntryIntent::Observation observation{};
    observation.tick = g_coop_authority_frame_tick;
    observation.dungeonStatus = dc2_read_u32(rdram, 0x01E9F6E0u);
    observation.gamePadCurrent = static_cast<uint16_t>(
        dc2_read_u32(rdram, 0x003D76E4u) & 0xFFFFu);

    dc2_coop_v5::InputFrame p1Input{};
    if (dc2_coop_v5_net::latestAuthorityInput(1u, p1Input))
        observation.networkButtons = p1Input.buttons;

    uint32_t selectedGlid = 0u;
    if (observation.dungeonStatus == 4u &&
        dc2_coop_guest_span_valid(g_coop_authority_tree, 0x124u))
    {
        const uint32_t tree = g_coop_authority_tree;
        observation.top = static_cast<uint16_t>(
            dc2_read_u32(rdram, tree + 0x00u) & 0xFFFFu);
        observation.sub = static_cast<uint16_t>(
            dc2_read_u32(rdram, tree + 0x14u) & 0xFFFFu);
        observation.map = static_cast<uint16_t>(
            dc2_read_u32(rdram, tree + 0x118u) & 0xFFFFu);
        selectedGlid = dc2_read_u32(rdram, tree + 0x120u);
        if (dc2_coop_guest_span_valid(selectedGlid, 0x2Cu))
        {
            observation.floor = static_cast<uint16_t>(
                dc2_read_u32(rdram, selectedGlid + 0x28u) & 0xFFu);
            observation.treeValid = observation.top <= 0x20u &&
                                    observation.sub <= 2u &&
                                    observation.map < 0x1000u;
        }
    }

    const auto previousStage = g_coop_dungeon_entry.stage();
    const auto previousFailure = g_coop_dungeon_entry.failure();
    const bool changed = g_coop_dungeon_entry.advance(observation);
    if (changed)
    {
        std::fprintf(stderr,
            "[DC2:Entry] event=stage tick=%u room=0x%08x stage=%s failure=%s "
            "status=%u tree=0x%08x glid=0x%08x observed=%u/%u top=%u sub=%u "
            "mask=0x%04x owns=%u cgcur=0x%04x net=0x%04x from=%s/%s\n",
            observation.tick, g_coop_dungeon_entry.room(),
            dc2::DungeonEntryIntent::stageName(g_coop_dungeon_entry.stage()),
            dc2::DungeonEntryIntent::failureName(g_coop_dungeon_entry.failure()),
            observation.dungeonStatus, g_coop_authority_tree, selectedGlid,
            static_cast<unsigned>(observation.map),
            static_cast<unsigned>(observation.floor),
            static_cast<unsigned>(observation.top),
            static_cast<unsigned>(observation.sub),
            static_cast<unsigned>(g_coop_dungeon_entry.padMask()),
            g_coop_dungeon_entry.ownsPad() ? 1u : 0u,
            static_cast<unsigned>(observation.gamePadCurrent),
            static_cast<unsigned>(observation.networkButtons),
            dc2::DungeonEntryIntent::stageName(previousStage),
            dc2::DungeonEntryIntent::failureName(previousFailure));
    }

    // The tree object belongs only to DngStatus 4. Never retain or dereference
    // it through the entrance event/free-roam loops.
    if (observation.dungeonStatus != 4u)
        g_coop_authority_tree = 0u;
}

static void dc2_coop_v5_frame_boundary(
    uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if (!rdram || !ctx || !runtime ||
        (!dc2_coop_v5_net::isAuthority() && !dc2_coop_networked()))
        return;

    // This is the transport's once-per-frame service point.  Role 3 drains
    // both player streams here; visible clients publish the controller sample
    // captured by the host-present thread and drain authority snapshots in the
    // same non-blocking call.  setLocalRoom() supplies the room once gameplay
    // has entered one, so zero is correct during boot/menu traversal.
    if (dc2_coop_v5_net::isAuthority())
    {
        ++g_coop_authority_frame_tick;
        dc2_coop_v5_net::pumpAuthority();
    }
    else if (dc2_coop_v5_net::active())
    {
        dc2_coop_v5_net::submitLocalInput(
            g_pad_live_mask, g_pad_live_lx, g_pad_live_ly,
            g_pad_live_rx, g_pad_live_ry);
    }

    // Isolated integration probe only: exercise the same invitation acceptance
    // path without desktop/controller automation. Never enabled by launchers.
    // A received authority frame supplies the destination and its actual seed.
    static bool probeAccepted = false;
    if (!probeAccepted && !dc2_coop_v5_net::isAuthority() &&
        dc2_env_flag_enabled("DC2_COOP_PROBE_ACCEPT_INVITE") &&
        dc2_env_flag_enabled("DC2_NO_XINPUT"))
    {
        const uint32_t gp = coop_get_reg(ctx, 28);
        dc2_coop_v5_net::Snapshot destination{};
        if (gp >= 0x7524u && gp < 0x02000000u &&
            dc2_read_u32(rdram, gp - 0x7524u) == 0u &&
            dc2_coop_v5_net::latestSnapshot(destination) &&
            (destination.room >> 28u) == 1u && destination.floorSeed != 0u)
        {
            s_coopGpAddr = gp;
            s_coopAuthoritativeSeed = destination.floorSeed;
            dc2_coop_trigger_dungeon_invite(
                static_cast<uint16_t>((destination.room >> 12u) & 0xfffu),
                static_cast<uint16_t>(destination.room & 0xfffu));
            dc2_coop_accept_dungeon_invite_internal(rdram, runtime);
            probeAccepted = true;
            std::fprintf(stderr, "[DC2:PROBE] accepted authority-room invitation\n");
        }
    }

    // Player 1's v5 input header carries the room that its EE thread has
    // actually joined. Once it becomes a dungeon identity, Role 3 commits the
    // same map/floor at this all-loop frame boundary. This removes the fragile
    // requirement that three independently booting processes traverse menus on
    // the same frame.
    static uint32_t committedRoom = 0xFFFFFFFFu;
    uint32_t requestedRoom = 0u;
    uint32_t roomBeingCommitted = 0u;
    const bool hasRequestedRoom = dc2_coop_v5_net::isAuthority() &&
        dc2_coop_v5_net::latestAuthorityRoom(1u, requestedRoom);
    if (hasRequestedRoom && ((requestedRoom >> 28u) & 0xFu) != 1u)
    {
        // A real departure rearms the same destination for a later visit. Do
        // not clear committedRoom merely on a handshake failure, which would
        // make a stale client room trigger an infinite NextLoop retry cycle.
        committedRoom = 0xFFFFFFFFu;
        if (g_coop_dungeon_entry.active())
        {
            g_coop_dungeon_entry.clear();
            g_coop_authority_tree = 0u;
            std::fprintf(stderr,
                         "[DC2:Entry] event=reset tick=%u player_room=0x%08x\n",
                         g_coop_authority_frame_tick, requestedRoom);
        }
    }
    if (hasRequestedRoom && ((requestedRoom >> 28u) & 0xFu) == 1u &&
        requestedRoom != committedRoom)
    {
        roomBeingCommitted = requestedRoom;
        s_coopPendingWarpMap.store(
            static_cast<uint16_t>((requestedRoom >> 12u) & 0x0FFFu),
            std::memory_order_relaxed);
        s_coopPendingWarpFloor.store(
            static_cast<uint16_t>(requestedRoom & 0x0FFFu),
            std::memory_order_relaxed);
        s_coopInviteWarpPending.store(true, std::memory_order_release);
        std::fprintf(stderr,
            "[DC2:V5] authority committing Player 1 dungeon room=0x%08x\n",
            requestedRoom);
    }

    const bool transitionQueued =
        dc2_coop_process_pending_dungeon_warp(rdram, ctx, runtime);
    if (transitionQueued)
    {
        // NextLoop only stages the requested loop in NextLoopNo. MainLoop
        // keeps calling the current LoopFunction until its frame-local $s1
        // exit flag becomes non-zero, so explicitly request that unwind at
        // the same boundary where the transition was queued.
        coop_set_reg(ctx, 17, 1u);
        if (roomBeingCommitted != 0u)
            committedRoom = roomBeingCommitted;
    }

    dc2_coop_advance_authority_dungeon_entry(rdram);

    // Finish the intent at the same all-loop boundary that advanced it. This
    // is deliberately separate from snapshot publication: on a same-room
    // restart the old scene can briefly report the requested room/status 0
    // before NextLoop exposes the new selector, and that stale scene must not
    // be announced as the completed authoritative floor.
    if (dc2_coop_v5_net::isAuthority() &&
        g_coop_dungeon_entry.stage() ==
            dc2::DungeonEntryIntent::Stage::WaitGameplay &&
        s_coopSceneAddr && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
    {
        const uint32_t arrivedRoom = dc2_coop_room_id(rdram, 1u, nullptr, nullptr);
        if (g_coop_dungeon_entry.arrived(arrivedRoom))
            std::fprintf(stderr,
                         "[DC2:Entry] event=arrived tick=%u room=0x%08x\n",
                         g_coop_authority_frame_tick, arrivedRoom);
    }

    // Role 3 is headless and may remain inside a recompiled dungeon slice for
    // many rendered frames, so the registered DngStep boundary is not a
    // reliable snapshot clock. mgEndFrame is the single once-per-frame hook
    // shared by loading and gameplay. Publish here only after both native
    // character slots exist and free-roam is active; this prevents partial
    // one-player snapshots during dungeon construction.
    if (dc2_coop_v5_net::isAuthority() &&
        !g_coop_dungeon_entry.active() && s_coopSceneAddr &&
        s_coopP2PoolReady && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u &&
        dc2_coop_get_character(rdram, s_coopSceneAddr, 0u) &&
        dc2_coop_get_character(rdram, s_coopSceneAddr, kCoopP2Slot))
        dc2_coop_publish_v5_authority_snapshot(rdram, 1u);
}

// The protocol-v5 socket and transition coordinator must run before the game
// chooses its next loop.  mgEndFrame is the one guest boundary shared by the
// normal MainLoop and the loading loop, so wrap the existing frame-end override
// instead of replacing any of its rendering/presentation work.
static void coop_mgendframe_stub(uint8_t *rdram, R5900Context *ctx,
                                 PS2Runtime *runtime)
{
    dc2_coop_v5_frame_boundary(rdram, ctx, runtime);
    f29_mgendframe_probe(rdram, ctx, runtime);

    if (dc2_coop_trace())
    {
        static uint32_t n = 0u;
        if ((n++ % 300u) == 0u)
            std::fprintf(stderr,
                         "[DC2:Trace] mgend scene=0x%x pool=%d dng=0x%x v4=%d v5=%d\n",
                         s_coopSceneAddr, s_coopP2PoolReady ? 1 : 0,
                         dc2_read_u32(rdram, 0x01E9F6E0u),
                         dc2_coop_net::active() ? 1 : 0,
                         dc2_coop_v5_net::active() ? 1 : 0);
    }

    // v4 per-frame pump. The dungeon step/draw stubs are not guaranteed to be
    // crossed on every route (a debug-menu warp can keep gameplay inside a long
    // guest slice), which left the v4 transport unopened and the two clients
    // unable to see each other. mgEndFrame fires exactly once per guest frame.
    if (dc2_coop_net::active() && !dc2_coop_v5_net::active() &&
        s_coopSceneAddr && s_coopP2PoolReady &&
        dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
    {
        dc2_coop_exchange_network_state(rdram, 1u, ctx, runtime);
    }
}

static void coop_pause_start_stub(uint8_t *rdram, R5900Context *ctx,
                                  PS2Runtime *runtime)
{
    if (dc2_coop_networked() && s_coopPauseButtonMustRelease)
    {
        const uint32_t returnPc = coop_get_reg(ctx, 31);
        dc2_coop_finish_override(ctx, returnPc, 0u);
        return;
    }

    ::PauseStart__FP10PAUSE_INFO_0x309ca0(rdram, ctx, runtime);
    if (!dc2_coop_networked() || !s_coopLocalSpawnAligned)
        return;

    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    if (pauseFlag && coop_get_reg(ctx, 2) != 0u &&
        dc2_read_u32(rdram, pauseFlag) != 0u)
    {
        s_coopLocalPauseRequested = true;
        s_coopMirroringRemotePause = false;
        std::fprintf(stderr, "[DC2:Pause] local player requested shared pause\n");
    }
}

static void coop_pause_loop_stub(uint8_t *rdram, R5900Context *ctx,
                                 PS2Runtime *runtime)
{
    if (dc2_coop_networked() && s_coopLocalSpawnAligned && s_coopSceneAddr)
        dc2_coop_exchange_network_state(rdram, 1u, ctx, runtime);

    ::PauseLoop__Fv_0x309de0(rdram, ctx, runtime);

    const uint32_t pauseFlag = dc2_coop_pause_flag_addr();
    if (dc2_coop_networked() && s_coopLocalPauseRequested && pauseFlag &&
        dc2_read_u32(rdram, pauseFlag) == 0u)
    {
        s_coopLocalPauseRequested = false;
        s_coopPauseButtonMustRelease = true;
        std::fprintf(stderr, "[DC2:Pause] local player released shared pause\n");
        if (s_coopRemotePlayerReady &&
            (s_coopRemotePlayer.flags & kCoopPlayerPauseRequestFlag) != 0u)
            dc2_coop_begin_mirrored_pause(rdram);
    }
}

static void coop_pause_btn_stub(uint8_t *rdram, R5900Context *ctx,
                                PS2Runtime *runtime)
{
    const uint32_t requestedButton = coop_get_reg(ctx, 5);
    const bool remoteStillRequestsPause = s_coopRemotePlayerReady &&
        (s_coopRemotePlayer.flags & kCoopPlayerPauseRequestFlag) != 0u;
    if (dc2_coop_networked() && s_coopMirroringRemotePause &&
        remoteStillRequestsPause && requestedButton == 0x15u)
    {
        const uint32_t returnPc = coop_get_reg(ctx, 31);
        dc2_coop_finish_override(ctx, returnPc, 0u);
        return;
    }
    ::Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
}

// Network clients must not swap their slot-0 hero independently. Besides
// changing the global model/resource owner, the vanilla swap path frees and
// rebuilds scene character entries, which destroys the remote proxy. Keep the
// locally assigned hero enabled in character menus and report all other forms
// (the other hero, Ridepod, and monster transformation) unavailable for now.
static void coop_check_enable_chara_change_stub(uint8_t *rdram, R5900Context *ctx,
                                                PS2Runtime *runtime)
{
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    const uint32_t targetChr = coop_get_reg(ctx, 5);
    const uint32_t reasonPtr = coop_get_reg(ctx, 6);
    // Ordinarily pin the process-owned hero. During Role 3's second
    // SetupMainUnit call, however, the game must be allowed to select Monica
    // while the temporary slot-bank remap is active; forcing Max here creates
    // an internally inconsistent slot-4 actor and stalls dungeon startup.
    const bool constructingAuthorityP2 =
        dc2_coop_v5_net::isAuthority() && s_coopRemapSetupSlots;
    if (dc2_coop_active() && !constructingAuthorityP2)
    {
        const uint32_t localChr = dc2_coop_local_character_no(rdram);
        if (targetChr != localChr)
        {
            if (reasonPtr)
                dc2_write_u32(rdram, reasonPtr, 1u);
            dc2_coop_finish_override(ctx, returnPc, 0u); // 0 = disabled
            return;
        }
    }
    R5900Context callCtx = *ctx;
    dc2_coop_run_original(rdram, &callCtx, runtime, 0x0019BB40u,
                          ::CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&callCtx, 2));
}

static void coop_set_active_chara_stub(uint8_t *rdram, R5900Context *ctx,
                                       PS2Runtime *runtime)
{
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    const bool constructingAuthorityP2 =
        dc2_coop_v5_net::isAuthority() && s_coopRemapSetupSlots;
    if (dc2_coop_active() && !constructingAuthorityP2)
    {
        const uint32_t localChr = dc2_coop_local_character_no(rdram);
        coop_set_reg(ctx, 5, localChr);
    }
    R5900Context callCtx = *ctx;
    dc2_coop_run_original(rdram, &callCtx, runtime, 0x0019C3D0u,
                          ::SetActiveChrNo__16CUserDataManagerFi_0x19c3d0);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&callCtx, 2));
}

static void dc2_coop_finish_override(R5900Context *ctx, uint32_t returnPc,
                                     uint32_t returnValue = 0u)
{
    coop_set_reg(ctx, 2, returnValue);
    ctx->pc = returnPc;
}

// Exact implementation of CScene::GetCharacter, with a temporary slot-bank
// remap used only while SetupMainUnit constructs Monica.  SetupMainUnit asks for
// six objects up front, although Monica uses only entries 0..3.  Entries 4/5 are
// safely aliased to the two already-valid equipment objects in the P2 bank.
static void coop_get_character_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;
    const uint32_t sceneAddr = coop_get_reg(ctx, 4);
    uint32_t slot = coop_get_reg(ctx, 5);
    if (s_coopRemapSetupSlots && slot < 6u)
        slot = (slot < 4u) ? slot + kCoopP2Slot : kCoopP2Slot + (slot - 4u);

    const uint32_t result = dc2_coop_get_character(rdram, sceneAddr, slot);
    dc2_coop_finish_override(ctx, coop_get_reg(ctx, 31), result);
}

static bool dc2_coop_allocate_p2_pool(uint8_t *rdram, const R5900Context *seed,
                                      PS2Runtime *runtime)
{
    R5900Context allocCtx = *seed;
    const uint32_t gp = coop_get_reg(seed, 28);
    const uint32_t mainBuf = gp ? dc2_read_u32(rdram, gp - 0x7290u) : 0u;
    if (!mainBuf)
        return false;

    const uint32_t charaSize = f50_callg(rdram, &allocCtx, runtime,
                                         0x001E9B60u, 0u, 0u, 0u, 0u);
    s_coopP2PadAddr = f50_callg(rdram, &allocCtx, runtime, 0x00139C10u,
                                mainBuf, 0x480u, 0u, 0u);
    s_coopP2PadCtrlAddr = f50_callg(rdram, &allocCtx, runtime, 0x00139C10u,
                                    mainBuf, 0x480u, 0u, 0u);
    s_coopP2CharaMem = f50_callg(rdram, &allocCtx, runtime, 0x00139C10u,
                                 mainBuf, 0x30u, 0u, 0u);
    s_coopP2SubMem = f50_callg(rdram, &allocCtx, runtime, 0x00139C10u,
                               mainBuf, 7u * 0x30u, 0u, 0u);
    const uint32_t backing = charaSize
        ? f50_callg(rdram, &allocCtx, runtime, 0x00139C10u,
                    mainBuf, charaSize, 0u, 0u)
        : 0u;
    if (!s_coopP2PadAddr || !s_coopP2PadCtrlAddr || !s_coopP2CharaMem ||
        !s_coopP2SubMem || !backing)
    {
        std::fprintf(stderr,
                     "[DC2:Co-Op] ERROR: unable to allocate P2 character pool (%u bytes)\n",
                     charaSize);
        return false;
    }

    if (uint8_t *mem = getMemPtr(rdram, s_coopP2PadAddr))
        std::memset(mem, 0, 0x480u);
    if (uint8_t *mem = getMemPtr(rdram, s_coopP2PadCtrlAddr))
        std::memset(mem, 0, 0x480u);
    if (uint8_t *mem = getMemPtr(rdram, s_coopP2CharaMem))
        std::memset(mem, 0, 0x30u);
    if (uint8_t *mem = getMemPtr(rdram, s_coopP2SubMem))
        std::memset(mem, 0, 7u * 0x30u);
    f50_callg(rdram, &allocCtx, runtime, 0x00139E70u,
              s_coopP2CharaMem, backing, charaSize, 0u);

    s_coopP2PoolReady = true;
    if (dc2_coop_trace())
        std::fprintf(stderr,
                     "[DC2:Co-Op] P2 arena pad=0x%08x control=0x%08x mem=0x%08x "
                     "sub=0x%08x backing=0x%08x bytes=%u\n",
                     s_coopP2PadAddr, s_coopP2PadCtrlAddr, s_coopP2CharaMem,
                     s_coopP2SubMem, backing, charaSize);
    return true;
}

static void dc2_coop_init_p2_input(uint8_t *rdram, uint32_t pPadControlP1)
{
    if (s_coopP2Initialized)
        return;

    if (pPadControlP1)
    {
        const uint8_t *src = getConstMemPtr(rdram, pPadControlP1);
        uint8_t *dst = getMemPtr(rdram, s_coopP2PadCtrlAddr);
        if (src && dst)
            std::memcpy(dst, src, 0x480u);
    }

    const uint8_t *srcPad = getConstMemPtr(rdram, 0x003D76E0u);
    uint8_t *dstPad = getMemPtr(rdram, s_coopP2PadAddr);
    if (srcPad && dstPad)
        std::memcpy(dstPad, srcPad, 0x480u);

    s_coopP2Initialized = true;
    if (dc2_coop_trace())
        std::fprintf(stderr, "[DC2:Co-Op] initialized P2 pad/control objects\n");
}

static void dc2_coop_update_p2_input(uint8_t *rdram, const R5900Context *seed,
                                     PS2Runtime *runtime, uint32_t pPadControlP1)
{
    dc2_coop_init_p2_input(rdram, pPadControlP1);

    R5900Context padCtx = *seed;
    g_coop_force_pad_port2 = true;
    f50_callg(rdram, &padCtx, runtime, 0x0014A930u,
              s_coopP2PadAddr, 0u, 0u, 0u);
    g_coop_force_pad_port2 = false;

    R5900Context controlCtx = *seed;
    f50_callg(rdram, &controlCtx, runtime, 0x002ED550u,
              s_coopP2PadCtrlAddr, s_coopP2PadAddr, 0u, 0u);

    if (dc2_coop_trace())
    {
        static uint32_t updates = 0u;
        if ((updates++ % 120u) == 0u)
            std::fprintf(stderr,
                         "[DC2:Co-Op] P2 input tick=%u connected=%d mask=0x%04x lx=0x%02x ly=0x%02x\n",
                         updates, g_pad_live_connected_p2 ? 1 : 0, g_pad_live_mask_p2,
                         g_pad_live_lx_p2, g_pad_live_ly_p2);
    }
}

static void dc2_coop_apply_leash(uint8_t *rdram, uint32_t p1, uint32_t p2)
{
    static const bool leashEnabled = dc2_env_flag_enabled("DC2_COOP_LEASH");
    if (!leashEnabled || !p1 || !p2)
        return;

    float p1x = dc2_read_f32(rdram, p1 + 0x10u);
    float p1z = dc2_read_f32(rdram, p1 + 0x18u);
    float p2x = dc2_read_f32(rdram, p2 + 0x10u);
    float p2z = dc2_read_f32(rdram, p2 + 0x18u);
    const float dx = p2x - p1x;
    const float dz = p2z - p1z;
    const float distance = std::sqrt(dx * dx + dz * dz);
    if (distance <= kCoopMaxSeparation || distance < 0.001f)
        return;

    const float pull = ((distance - kCoopMaxSeparation) * 0.08f) / distance;
    p1x += dx * pull;
    p1z += dz * pull;
    p2x -= dx * pull;
    p2z -= dz * pull;
    dc2_coop_set_character_position(
        rdram, p1, p1x, dc2_read_f32(rdram, p1 + 0x14u), p1z);
    dc2_coop_set_character_position(
        rdram, p2, p2x, dc2_read_f32(rdram, p2 + 0x14u), p2z);
}

static void coop_setup_main_unit_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    const uint32_t sceneAddr = coop_get_reg(ctx, 8); // fifth argument ($t0)
    const uint32_t userDataAddr = coop_get_reg(ctx, 9); // sixth argument ($t1)

    // SetupMainUnit is called in town (EditInit), status menu preview (MenuManualDraw/Init),
    // and dungeon generation (InitDungeonMain @ 0x1CC040 -> ret 0x1CD3E0, or DNG_SETUP_MAIN_UNIT).
    // Only execute 2-player dual character setup in an actual dungeon!
    const bool isDungeon = (returnPc == 0x001CD3E0u || (returnPc >= 0x00279800u && returnPc <= 0x00279A00u));
    if (!dc2_coop_active() || !isDungeon)
    {
        R5900Context vanillaCtx = entryCtx;
        dc2_coop_run_original(
            rdram, &vanillaCtx, runtime, 0x001E8F30u,
            ::SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&vanillaCtx, 2));
        return;
    }

    s_coopSceneAddr = sceneAddr;
    s_coopUserDataAddr = userDataAddr;

    s_coopP2Initialized = false;
    s_coopP2PoolReady = false;
    s_coopLocalSpawnAligned = false;
    s_coopP2MovementAngle = 0u;
    s_coopRemotePlayerReady = false;
    s_coopRemoteVisualReady = false;
    s_coopRemoteVisualRoom = 0xFFFFFFFFu;
    s_coopLocalPauseRequested = false;
    s_coopMirroringRemotePause = false;
    s_coopPauseButtonMustRelease = false;
    s_coopRemoteMonsterDeadMask = 0u;
    s_coopRemoteMonsterDeadRoom = 0xFFFFFFFFu;
    std::fill(std::begin(s_coopRemoteLootPoolBySlot),
              std::end(s_coopRemoteLootPoolBySlot),
              static_cast<uint16_t>(0xFFFFu));
    s_coopPendingLootPickupSlot = -1;
    g_dc2CoopNetworkReady.store(false, std::memory_order_release);
    if (!dc2_coop_allocate_p2_pool(rdram, &entryCtx, runtime))
    {
        // Keep the dungeon playable if the extra pool cannot be allocated.
        R5900Context p1Ctx = entryCtx;
        dc2_coop_run_original(
            rdram, &p1Ctx, runtime, 0x001E8F30u,
            ::SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
        return;
    }

    uint32_t localCharacterNo = dc2_coop_local_character_no(rdram);
    if (userDataAddr)
    {
        const uint16_t active = dc2_read_u16(rdram, userDataAddr + 0x44D96u);
        if (active <= 3u)
            localCharacterNo = active;
    }
    // Both windows load the SAME hero. Only one costume texture is resident
    // (texture index 0x10), so a remote hero with a different costume has no
    // texture to bind and renders dark. Loading the same character was the
    // previously working setup and is the accepted co-op model here.
    const uint32_t remoteCharacterNo = localCharacterNo;
    const char *localName = localCharacterNo == 1u ? "Monica" : "Max";
    const char *remoteName = localName;
    std::fprintf(stderr, "[DC2:Co-Op] loading %s locally (slot 0) and %s remotely (slot 4)\n",
                 localName, remoteName);

    R5900Context p1Ctx = entryCtx;
    // SetupMainUnit reads ActiveChrNo in addition to its explicit character
    // argument. Keep both inputs coherent while each actor is constructed, then
    // restore the locally authoritative character before returning to the game.
    if (userDataAddr)
        dc2_write_u16(rdram, userDataAddr + 0x44D96u,
                      static_cast<uint16_t>(localCharacterNo));
    coop_set_reg(&p1Ctx, 10, localCharacterNo);
    const bool p1Ok = dc2_coop_run_original(
        rdram, &p1Ctx, runtime, 0x001E8F30u,
        ::SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30);

    // v4 networked mode never constructs a second character (ported from the
    // proven tree). DC2 keeps model, animation, equipment and menu assets in
    // process-wide singleton banks; a second SetupMainUnit clobbers those banks
    // and disturbs costume textures. The draw hook renders the local hero again
    // at the remote transform instead. v5 authority still needs slot 4.
    if (dc2_coop_net::active() && !dc2_coop_v5_net::active())
    {
        s_coopP2PoolReady = p1Ok;
        const uint32_t localObj = dc2_coop_get_character(rdram, sceneAddr, 0u);
        std::fprintf(stderr,
                     "[DC2:Co-Op] local player ready=%d object=0x%08x; network proxy has no scene slot\n",
                     p1Ok ? 1 : 0, localObj);
        dc2_coop_select_local_character(rdram, &entryCtx);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
        return;
    }

    R5900Context p2Ctx = entryCtx;
    if (userDataAddr)
        dc2_write_u16(rdram, userDataAddr + 0x44D96u,
                      static_cast<uint16_t>(remoteCharacterNo));
    coop_set_reg(&p2Ctx, 5, s_coopP2CharaMem);
    coop_set_reg(&p2Ctx, 6, s_coopP2SubMem);
    coop_set_reg(&p2Ctx, 10, remoteCharacterNo);
    s_coopRemapSetupSlots = true;
    const bool p2Ok = dc2_coop_run_original(
        rdram, &p2Ctx, runtime, 0x001E8F30u,
        ::SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30);
    s_coopRemapSetupSlots = false;
    if (userDataAddr)
        dc2_write_u16(rdram, userDataAddr + 0x44D96u,
                      static_cast<uint16_t>(localCharacterNo));

    const uint32_t p1 = dc2_coop_get_character(rdram, sceneAddr, 0u);
    const uint32_t p2 = dc2_coop_get_character(rdram, sceneAddr, kCoopP2Slot);
    if (p1Ok && p2Ok && p1 && p2)
    {
        const float x = dc2_read_f32(rdram, p1 + 0x10u);
        const float y = dc2_read_f32(rdram, p1 + 0x14u);
        const float z = dc2_read_f32(rdram, p1 + 0x18u);
        dc2_coop_set_character_position(rdram, p2, x + kCoopSpawnOffset, y, z);
        // The hidden Role-3 simulation needs slot 4 registered as a native local
        // player so dungeon initialization and stepping include it. Visible
        // clients deliberately omit this flag because it also enables DC2's
        // split-screen PIP viewport.
        const uint32_t p2Entry = dc2_coop_slot_addr(sceneAddr, kCoopP2Slot);
        if (dc2_coop_v5_net::isAuthority() && p2Entry)
            dc2_write_u32(rdram, p2Entry, dc2_read_u32(rdram, p2Entry) | 2u);

        // Diagnostic only. The old code treated scene-slot +0x38 as a character
        // texture block and overwrote slots 4..7 with it; that field reads -1 on
        // this build, so it was writing 0xffffffff and the remote hero rendered
        // untextured ("clear/ghost"). The engine binds costume textures from the
        // loaded character model, so leave the slot entries alone.
        {
            const uint32_t p1Entry = dc2_coop_slot_addr(sceneAddr, 0u);
            const uint32_t p2EntryDiag = dc2_coop_slot_addr(sceneAddr, kCoopP2Slot);
            std::fprintf(stderr,
                         "[DC2:Co-Op] slot entry +0x38 local=0x%x remote=0x%x (diagnostic)\n",
                         p1Entry ? dc2_read_u32(rdram, p1Entry + 0x38u) : 0u,
                         p2EntryDiag ? dc2_read_u32(rdram, p2EntryDiag + 0x38u) : 0u);
        }

        std::fprintf(stderr,
                     "[DC2:Co-Op] both players ready: local (%s)=0x%08x remote (%s)=0x%08x\n",
                     localName, p1, remoteName, p2);
        s_coopP2PoolReady = true;
        dc2_coop_select_local_character(rdram, &entryCtx);
    }
    else
    {
        std::fprintf(stderr,
                     "[DC2:Co-Op] ERROR: character setup incomplete p1Ok=%d p2Ok=%d Max=0x%08x Monica=0x%08x\n",
                     p1Ok ? 1 : 0, p2Ok ? 1 : 0, p1, p2);
    }

    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
}

static void coop_edit_control_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t sceneAddr = coop_get_reg(ctx, 4);
    const uint32_t p1Control = coop_get_reg(ctx, 5);
    if (!dc2_coop_active() || !sceneAddr || !s_coopP2PoolReady ||
        (!dc2_coop_networked() &&
         !dc2_coop_get_character(rdram, sceneAddr, kCoopP2Slot)))
    {
        ::EditControl__FP6CSceneP11CPadControl_0x1a42b0(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);

    if (dc2_coop_networked())
    {
        s_coopSceneAddr = sceneAddr;
        dc2_coop_select_local_character(rdram, &entryCtx);
        R5900Context localCtx = entryCtx;
        dc2_coop_run_original(rdram, &localCtx, runtime, 0x001A42B0u,
                              ::EditControl__FP6CSceneP11CPadControl_0x1a42b0);
        dc2_coop_select_local_character(rdram, &entryCtx);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&localCtx, 2));
        return;
    }

    dc2_write_u32(rdram, sceneAddr + 0x2E50u, 0u);

    R5900Context p1Ctx = entryCtx;
    dc2_coop_run_original(rdram, &p1Ctx, runtime, 0x001A42B0u,
                          ::EditControl__FP6CSceneP11CPadControl_0x1a42b0);

    dc2_coop_update_p2_input(rdram, &entryCtx, runtime, p1Control);
    dc2_write_u32(rdram, sceneAddr + 0x2E50u, kCoopP2Slot);
    R5900Context p2Ctx = entryCtx;
    f50_callg(rdram, &p2Ctx, runtime, 0x001A57B0u,
              sceneAddr, s_coopP2PadCtrlAddr, 0u, 0u);

    dc2_write_u32(rdram, sceneAddr + 0x2E50u, 0u);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
}

static void coop_edit_step_chara_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t sceneAddr = coop_get_reg(ctx, 4);
    const uint32_t p2 = dc2_coop_get_character(rdram, sceneAddr, kCoopP2Slot);
    if (!dc2_coop_active() || !sceneAddr || !s_coopP2PoolReady ||
        (!dc2_coop_networked() && !p2))
    {
        ::EditStepChara__FP6CScene_0x1a76c0(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);

    if (dc2_coop_networked())
    {
        s_coopSceneAddr = sceneAddr;
        dc2_coop_select_local_character(rdram, &entryCtx);
        R5900Context localCtx = entryCtx;
        dc2_coop_run_original(rdram, &localCtx, runtime, 0x001A76C0u,
                              ::EditStepChara__FP6CScene_0x1a76c0);
        dc2_coop_align_network_local_spawn(rdram, "town");
        dc2_coop_select_local_character(rdram, &entryCtx);
        dc2_coop_exchange_network_state(rdram, 2u, ctx, runtime);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&localCtx, 2));
        return;
    }

    dc2_write_u32(rdram, sceneAddr + 0x2E50u, 0u);
    R5900Context vanillaCtx = entryCtx;
    dc2_coop_run_original(rdram, &vanillaCtx, runtime, 0x001A76C0u,
                          ::EditStepChara__FP6CScene_0x1a76c0);

    R5900Context p2Ctx = entryCtx;
    f50_callg(rdram, &p2Ctx, runtime, 0x002C8C70u,
              sceneAddr, kCoopP2Slot, 0u, 0u);
    dc2_coop_apply_leash(rdram, dc2_coop_get_character(rdram, sceneAddr, 0u), p2);
    if (dc2_coop_trace())
    {
        static uint32_t steps = 0u;
        if ((steps++ % 120u) == 0u)
            std::fprintf(stderr,
                         "[DC2:Co-Op] P2 step tick=%u pos=(%.1f,%.1f,%.1f)\n",
                         steps, dc2_read_f32(rdram, p2 + 0x10u),
                         dc2_read_f32(rdram, p2 + 0x14u),
                         dc2_read_f32(rdram, p2 + 0x18u));
    }
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&vanillaCtx, 2));
}

// Consume accepted invitations at EditLoop's outer boundary.  Queuing a loop
// change from inside EditStepChara let the rest of EditLoop continue running
// and overwrite or cancel the transition later in the same frame.
static void coop_edit_loop_stub(uint8_t *rdram, R5900Context *ctx,
                                PS2Runtime *runtime)
{
    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    if (dc2_coop_networked() &&
        dc2_coop_process_pending_dungeon_warp(rdram, &entryCtx, runtime))
    {
        dc2_coop_finish_override(ctx, returnPc, 1u);
        return;
    }
    ::EditLoop__Fv_0x1abcf0(rdram, ctx, runtime);
}

static void coop_edit_draw_chara_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t sceneAddr = coop_get_reg(ctx, 4);
    if (!dc2_coop_active() || !sceneAddr || !s_coopP2PoolReady ||
        (!dc2_coop_networked() &&
         !dc2_coop_get_character(rdram, sceneAddr, kCoopP2Slot)))
    {
        ::EditDrawChara__FP6CScene_0x1a77b0(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);

    if (dc2_coop_networked())
    {
        s_coopSceneAddr = sceneAddr;
        dc2_coop_select_local_character(rdram, &entryCtx);
        R5900Context localCtx = entryCtx;
        dc2_coop_run_original(rdram, &localCtx, runtime, 0x001A77B0u,
                              ::EditDrawChara__FP6CScene_0x1a77b0);
        // In networked mode, proxy rendering is driven through coop_draw_pair
        // via DrawDirect. Do NOT call DrawChara (0x002C8F80u) on slot 4 here:
        // that triggers Dark Cloud 2's split-screen PIP subviewport and mini-HUD.
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&localCtx, 2));
        return;
    }

    R5900Context vanillaCtx = entryCtx;
    dc2_coop_run_original(rdram, &vanillaCtx, runtime, 0x001A77B0u,
                          ::EditDrawChara__FP6CScene_0x1a77b0);

    R5900Context p2Ctx = entryCtx;
    f50_callg(rdram, &p2Ctx, runtime, 0x002C8F80u,
              sceneAddr, kCoopP2Slot, 0u, 0u);
    if (dc2_coop_trace())
    {
        static bool logged = false;
        if (!logged)
        {
            logged = true;
            std::fprintf(stderr, "[DC2:Co-Op] P2 draw path active (slot %u)\n", kCoopP2Slot);
        }
    }
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&vanillaCtx, 2));
}

// DngStep is the real dungeon gameplay update.  The action scripts reached by
// CScene::StepChara use the game's absolute MainChara, CGamePad, and CPadControl
// globals in several places.  Swap those globals only for Monica's step, then
// restore Max's state byte-for-byte before returning to the vanilla loop.
static void coop_dng_step_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // Role 3 does not enter select_local_character's v4-only branch. Capture
    // its own guest GP here so room identity and monster collection can read
    // the authoritative dungeon rather than publishing map/floor zero.
    if (dc2_coop_v5_net::isAuthority())
    {
        const uint32_t authorityGp = coop_get_reg(ctx, 28);
        if (authorityGp >= 0x7258u && authorityGp < 0x02000000u)
            s_coopGpAddr = authorityGp;
        else
            s_coopGpAddr = 0u;
    }
    if (!dc2_coop_active() || !s_coopP2PoolReady || !s_coopSceneAddr)
    {
        ::DngStep__Fv_0x1d06c0(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);

    // Network sessions run one locally authoritative character per process.
    // Selecting that character before vanilla DngStep gives each instance its
    // own ordinary camera, menus and controller path. The other character is a
    // transform-driven remote avatar, so no singleton game state is shared.
    if (dc2_coop_networked() && !dc2_coop_v5_net::isAuthority())
    {
        dc2_coop_select_local_character(rdram, &entryCtx);
        R5900Context localCtx = entryCtx;
        dc2_coop_run_original(rdram, &localCtx, runtime, 0x001D06C0u,
                              ::DngStep__Fv_0x1d06c0);
        if (dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
            dc2_coop_align_network_local_spawn(rdram, "floor");
        dc2_coop_select_local_character(rdram, &entryCtx);
        if (dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
            dc2_coop_exchange_network_state(rdram, 1u, ctx, runtime);
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&localCtx, 2));
        return;
    }

    R5900Context vanillaCtx = entryCtx;
    dc2_coop_run_original(rdram, &vanillaCtx, runtime, 0x001D06C0u,
                          ::DngStep__Fv_0x1d06c0);

    const uint32_t p2 = dc2_coop_get_character(rdram, s_coopSceneAddr, kCoopP2Slot);
    // DngStatus 0 is normal 3D gameplay.  Menus and event modes retain the
    // vanilla single-authority behavior until explicit co-op policies exist.
    if (p2 && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
    {
        // SetupMainUnit runs before the dungeon entry script places P1.
        // Align the authority's second actor only once gameplay is ready,
        // using the known native spawn rather than an unchecked lateral offset.
        if (dc2_coop_v5_net::isAuthority() && !s_coopLocalSpawnAligned)
        {
            const uint32_t p1 = dc2_coop_get_character(rdram, s_coopSceneAddr, 0u);
            if (p1)
            {
                const float x = dc2_read_f32(rdram, p1 + 0x10u);
                const float y = dc2_read_f32(rdram, p1 + 0x14u);
                const float z = dc2_read_f32(rdram, p1 + 0x18u);
                if (std::isfinite(x) && std::isfinite(y) && std::isfinite(z))
                {
                    dc2_coop_set_character_position(rdram, p2, x, y, z);
                    s_coopLocalSpawnAligned = true;
                    std::fprintf(stderr, "[DC2:V5:spawn] P2 aligned to native dungeon spawn=(%.3f,%.3f,%.3f)\n", x, y, z);
                    // Explicit isolated-probe fixture, never enabled by launchers.
                    // Lets controller-driven tests reach native chest events
                    // without treating pathfinding as part of that test.
                    const char *probeSlot = std::getenv("DC2_COOP_PROBE_CHEST_SLOT");
                    if (probeSlot && dc2_env_flag_enabled("DC2_NO_XINPUT"))
                    {
                        char *end = nullptr;
                        const long slot = std::strtol(probeSlot, &end, 10);
                        const uint32_t manager = dc2_read_u32(rdram, s_coopSceneAddr + 0x300Cu);
                        dc2::adapter::ChestObservation chest{};
                        if (*probeSlot && end && !*end && slot >= 0 && slot < 24 &&
                            dc2::adapter::readChest(rdram, 0x02000000u, manager,
                                static_cast<uint32_t>(slot), chest) && chest.interactable())
                        {
                            const uint32_t pos = manager + static_cast<uint32_t>(slot) * 0x70u + 0x20u;
                            const float cx = dc2_read_f32(rdram, pos);
                            const float cy = dc2_read_f32(rdram, pos + 4u);
                            const float cz = dc2_read_f32(rdram, pos + 8u) - 20.0f;
                            if (std::isfinite(cx) && std::isfinite(cy) && std::isfinite(cz))
                            {
                                dc2_coop_set_character_position(rdram, p1, cx, cy, cz);
                                std::fprintf(stderr, "[DC2:probe:chest] placed P1 beside slot=%ld xyz=(%.3f,%.3f,%.3f)\n", slot, cx, cy, cz);
                            }
                        }
                    }
                }
            }
        }
        constexpr uint32_t kP1PadAddr = 0x003D76E0u;
        constexpr uint32_t kP1ControlAddr = 0x003D7B60u;
        uint8_t p1PadBackup[0x480u];
        uint8_t p1ControlBackup[0x480u];
        uint8_t *p1Pad = getMemPtr(rdram, kP1PadAddr);
        uint8_t *p1Control = getMemPtr(rdram, kP1ControlAddr);
        uint8_t *p2Pad = getMemPtr(rdram, s_coopP2PadAddr);
        uint8_t *p2Control = getMemPtr(rdram, s_coopP2PadCtrlAddr);

        dc2_coop_update_p2_input(rdram, &entryCtx, runtime, kP1ControlAddr);
        const uint32_t gp = coop_get_reg(&entryCtx, 28);
        if (p1Pad && p1Control && p2Pad && p2Control && gp)
        {
            std::memcpy(p1PadBackup, p1Pad, sizeof(p1PadBackup));
            std::memcpy(p1ControlBackup, p1Control, sizeof(p1ControlBackup));
            std::memcpy(p1Pad, p2Pad, sizeof(p1PadBackup));
            std::memcpy(p1Control, p2Control, sizeof(p1ControlBackup));

            const uint32_t mainCharaGlobal = gp - 0x7228u;
            const uint32_t savedMainChara = dc2_read_u32(rdram, mainCharaGlobal);
            const uint32_t savedActive = dc2_read_u32(rdram, s_coopSceneAddr + 0x2E50u);
            dc2_write_u32(rdram, mainCharaGlobal, p2);
            dc2_write_u32(rdram, s_coopSceneAddr + 0x2E50u, kCoopP2Slot);

            R5900Context p2Ctx = entryCtx;
            const uint32_t battleScene = dc2_read_u32(rdram, 0x003772A0u);
            // Match DngMainKey's input-script gates; a shared pause/event must
            // not allow the second actor to keep executing gameplay actions.
            if (dc2_coop_v5_net::isAuthority() &&
                dc2_read_u32(rdram, 0x01E9F6E8u) == 0u &&
                dc2_read_u32(rdram, gp - 0x7268u) == 0u &&
                battleScene && battleScene < 0x02000000u - 12u &&
                (dc2_read_u32(rdram, battleScene + 8u) & 4u) == 0u)
            {
                const uint32_t savedAction = dc2_read_u32(rdram, 0x01F0D430u);
                const uint32_t savedCamera = dc2_read_u32(rdram, 0x01F0D434u);
                const uint32_t savedEnv = dc2_read_u32(rdram, 0x01F0D438u);
                const uint32_t savedScene = dc2_read_u32(rdram, gp - 0x625Cu);
                // HumanMoveIF's old_angle controls per-actor acceleration.
                const uint32_t savedAngle = dc2_read_u32(rdram, gp - 0x7670u);
                dc2_write_u32(rdram, gp - 0x7670u, s_coopP2MovementAngle);
                f50_callg(rdram, &p2Ctx, runtime, 0x00171210u,
                          p2, s_coopSceneAddr, 0x00377280u, 0u);
                s_coopP2MovementAngle = dc2_read_u32(rdram, gp - 0x7670u);
                dc2_write_u32(rdram, gp - 0x7670u, savedAngle);
                dc2_write_u32(rdram, 0x01F0D430u, savedAction);
                dc2_write_u32(rdram, 0x01F0D434u, savedCamera);
                dc2_write_u32(rdram, 0x01F0D438u, savedEnv);
                dc2_write_u32(rdram, gp - 0x625Cu, savedScene);
            }
            if (dc2_coop_v5_net::isAuthority() &&
                dc2_env_flag_enabled("DC2_COOP_TRACE_ACTIONS"))
            {
                static uint32_t actionSamples = 0u;
                if ((actionSamples++ % 30u) == 0u)
                    for (uint32_t slot : {0u, kCoopP2Slot})
                    {
                        const uint32_t actor = dc2_coop_get_character(rdram, s_coopSceneAddr, slot);
                        if (!actor) continue;
                        // Canonical control currently contains P2's input.
                        const uint32_t control = kP1ControlAddr;
                        std::fprintf(stderr,
                            "[DC2:V5:action] sample=%u slot=%u actor=%08x action=%04x scriptType=%u program=%08x stack=%08x cursor=%08x done=%u p2Analog=(%.3f,%.3f)\n",
                            actionSamples, slot, actor, dc2_read_u16(rdram, actor + 0x710u),
                            dc2_read_u32(rdram, actor + 0x6BCu),
                            dc2_read_u32(rdram, actor + 0x700u),
                            dc2_read_u32(rdram, actor + 0x6CCu),
                            dc2_read_u32(rdram, actor + 0x6F4u),
                            dc2_read_u32(rdram, actor + 0x6F8u),
                            dc2_read_f32(rdram, control + 0x430u),
                            dc2_read_f32(rdram, control + 0x438u));
                    }
            }
            f50_callg(rdram, &p2Ctx, runtime, 0x002C8C70u,
                      s_coopSceneAddr, kCoopP2Slot, 0u, 0u);

            dc2_write_u32(rdram, mainCharaGlobal, savedMainChara);
            dc2_write_u32(rdram, s_coopSceneAddr + 0x2E50u, savedActive);
            std::memcpy(p2Pad, p1Pad, sizeof(p1PadBackup));
            std::memcpy(p2Control, p1Control, sizeof(p1ControlBackup));
            std::memcpy(p1Pad, p1PadBackup, sizeof(p1PadBackup));
            std::memcpy(p1Control, p1ControlBackup, sizeof(p1ControlBackup));

            dc2_coop_apply_leash(
                rdram, dc2_coop_get_character(rdram, s_coopSceneAddr, 0u), p2);
            if (dc2_coop_trace())
            {
                static uint32_t steps = 0u;
                if ((steps++ % 120u) == 0u)
                    std::fprintf(stderr,
                                 "[DC2:Co-Op] dungeon P2 step tick=%u pos=(%.1f,%.1f,%.1f)\n",
                                 steps, dc2_read_f32(rdram, p2 + 0x10u),
                                 dc2_read_f32(rdram, p2 + 0x14u),
                                 dc2_read_f32(rdram, p2 + 0x18u));
            }
        }
    }

    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&vanillaCtx, 2));
}

static void dc2_coop_draw_pair(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                               uint32_t entry, CoopGuestFunction original,
                               const char *label)
{
    const uint32_t thisPtr = coop_get_reg(ctx, 4);
    const uint32_t p1 = dc2_coop_get_character(rdram, s_coopSceneAddr, 0u);
    const uint32_t p2 = dc2_coop_get_character(rdram, s_coopSceneAddr, kCoopP2Slot);
    const uint32_t local = dc2_coop_networked()
        ? dc2_coop_get_character(rdram, s_coopSceneAddr, dc2_coop_local_slot()) : p1;
    if (!dc2_coop_active() || !s_coopP2PoolReady || !local || thisPtr != local ||
        (!dc2_coop_networked() && !p2))
    {
        original(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    R5900Context p1Ctx = entryCtx;
    dc2_coop_run_original(rdram, &p1Ctx, runtime, entry, original);

    if (dc2_coop_networked())
    {
        // Only the lit DrawDirect pass draws the remote hero by default. Drawing
        // it in the shadow pass as well overlays a translucent dark copy on the
        // model, which reads as a "clear/ghost" remote. DC2_COOP_PROXY_SHADOW=1
        // restores the two-pass behaviour for A/B.
        static const bool proxyShadowPass = []() {
            const char *value = std::getenv("DC2_COOP_PROXY_SHADOW");
            return value && *value && std::strcmp(value, "0") != 0;
        }();
        if (entry != 0x0016B940u && !(proxyShadowPass && entry == 0x0016BA70u))
        {
            dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
            return;
        }

        // ---- v4: lightweight render-only proxy (ported from the proven tree) ----
        // Draw the LOCAL hero at the remote transform, then restore. No second
        // character, no second texture set, no bank clobbering.
        if (dc2_coop_net::active() && !dc2_coop_v5_net::active())
        {
            const bool v4Visible = entry == 0x0016B940u
                ? dc2_coop_advance_remote_visual()
                : (s_coopRemotePlayerReady && s_coopRemoteVisualReady);
            if (v4Visible && local)
            {
                float savedPos[3];
                savedPos[0] = dc2_read_f32(rdram, local + 0x10u);
                savedPos[1] = dc2_read_f32(rdram, local + 0x14u);
                savedPos[2] = dc2_read_f32(rdram, local + 0x18u);
                float savedRot[3];
                savedRot[0] = dc2_read_f32(rdram, local + 0x20u);
                savedRot[1] = dc2_read_f32(rdram, local + 0x24u);
                savedRot[2] = dc2_read_f32(rdram, local + 0x28u);
                const uint32_t savedMotionIndex = dc2_coop_current_motion_index(rdram, local);
                const uint32_t savedMotionPtr = dc2_read_u32(rdram, local + 0x368u);
                const uint32_t savedMotionMode = dc2_read_u32(rdram, local + 0x36Cu);
                const uint32_t savedMotionBank = dc2_read_u32(rdram, local + 0x370u);
                const uint32_t savedMotionBlend = dc2_read_u32(rdram, local + 0x378u);
                const uint32_t savedMotionA8 = dc2_read_u32(rdram, local + 0x3A8u);
                const uint32_t savedMotionB8 = dc2_read_u32(rdram, local + 0x3B8u);
                const uint32_t savedMotionWeight = dc2_read_u32(rdram, local + 0x50Cu);
                const float savedMotionFrame = dc2_read_f32(rdram, local + 0x388u);

                dc2_coop_set_character_position(
                    rdram, local, s_coopRemoteVisual.x,
                    s_coopRemoteVisual.y, s_coopRemoteVisual.z);
                if (std::isfinite(s_coopRemoteVisual.facing))
                    dc2_coop_write_f32(rdram, local + 0x24u, s_coopRemoteVisual.facing);

                const bool v4MotionValid = s_coopRemoteVisual.motion < 4096u &&
                    std::isfinite(s_coopRemoteVisual.motionFrame) &&
                    s_coopRemoteVisual.motionFrame >= 0.0f &&
                    s_coopRemoteVisual.motionFrame < 100000.0f;
                if (v4MotionValid && s_coopRemoteVisual.motion != savedMotionIndex)
                {
                    R5900Context motionCtx = entryCtx;
                    coop_set_reg(&motionCtx, 4, local);
                    coop_set_reg(&motionCtx, 5, s_coopRemoteVisual.motion);
                    coop_set_reg(&motionCtx, 6, 0u);
                    dc2_coop_run_original(rdram, &motionCtx, runtime, 0x0016B720u,
                        ::SetMotion__12CActionCharaFii_0x16b720);
                }
                if (v4MotionValid)
                {
                    dc2_coop_write_f32(rdram, local + 0x388u,
                                       s_coopRemoteVisual.motionFrame);
                    dc2_coop_evaluate_character_pose(
                        rdram, local, dc2_read_u32(rdram, local + 0x370u),
                        s_coopRemoteVisual.motionFrame, entryCtx, runtime);
                }

                R5900Context updateCtx = entryCtx;
                f50_callg(rdram, &updateCtx, runtime, 0x00173700u, local, 0u, 0u, 0u);
                // Snap dynamic-anime objects (hair braids/cloth) to the proxy pose.
                // CCharacter2::ResetDAPosition (0x1737B0) calls UpdatePosition then
                // resets every CDynamicAnime in the object array at +0x130, so the
                // braids follow the proxy head instead of stretching from the local.
                f50_callg(rdram, &updateCtx, runtime, 0x001737B0u, local, 0u, 0u, 0u);

                R5900Context proxyCtx = entryCtx;
                coop_set_reg(&proxyCtx, 4, local);
                dc2_coop_run_original(rdram, &proxyCtx, runtime, entry, original);

                dc2_coop_set_character_position(
                    rdram, local, savedPos[0], savedPos[1], savedPos[2]);
                dc2_coop_write_f32(rdram, local + 0x20u, savedRot[0]);
                dc2_coop_write_f32(rdram, local + 0x24u, savedRot[1]);
                dc2_coop_write_f32(rdram, local + 0x28u, savedRot[2]);

                if (v4MotionValid && savedMotionIndex != 0xFFFFFFFFu &&
                    s_coopRemoteVisual.motion != savedMotionIndex)
                {
                    R5900Context motionCtx = entryCtx;
                    coop_set_reg(&motionCtx, 4, local);
                    coop_set_reg(&motionCtx, 5, savedMotionIndex);
                    coop_set_reg(&motionCtx, 6, 0u);
                    dc2_coop_run_original(rdram, &motionCtx, runtime, 0x0016B720u,
                        ::SetMotion__12CActionCharaFii_0x16b720);
                }
                dc2_write_u32(rdram, local + 0x368u, savedMotionPtr);
                dc2_write_u32(rdram, local + 0x36Cu, savedMotionMode);
                dc2_write_u32(rdram, local + 0x370u, savedMotionBank);
                dc2_write_u32(rdram, local + 0x378u, savedMotionBlend);
                dc2_write_u32(rdram, local + 0x3A8u, savedMotionA8);
                dc2_write_u32(rdram, local + 0x3B8u, savedMotionB8);
                dc2_write_u32(rdram, local + 0x50Cu, savedMotionWeight);
                dc2_coop_write_f32(rdram, local + 0x388u, savedMotionFrame);

                dc2_coop_evaluate_character_pose(rdram, local, savedMotionBank,
                    savedMotionFrame, entryCtx, runtime);

                R5900Context restoreCtx = entryCtx;
                f50_callg(rdram, &restoreCtx, runtime, 0x00173700u, local, 0u, 0u, 0u);
                // Snap the DA springs back to the local hero's pose.
                f50_callg(rdram, &restoreCtx, runtime, 0x001737B0u, local, 0u, 0u, 0u);
            }
            dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
            return;
        }

        const bool remoteVisible = entry == 0x0016B940u
            ? dc2_coop_advance_remote_visual()
            : (s_coopRemotePlayerReady && s_coopRemoteVisualReady);
        if (remoteVisible && p2)
        {
            // Position p2 (the other character) at the remote player's coordinates
            dc2_coop_set_character_position(
                rdram, p2, s_coopRemoteVisual.x,
                s_coopRemoteVisual.y, s_coopRemoteVisual.z);
            if (std::isfinite(s_coopRemoteVisual.facing))
                dc2_coop_write_f32(rdram, p2 + 0x24u, s_coopRemoteVisual.facing);

            const bool remoteMotionValid = s_coopRemoteVisual.motion < 4096u &&
                std::isfinite(s_coopRemoteVisual.motionFrame) &&
                s_coopRemoteVisual.motionFrame >= 0.0f &&
                s_coopRemoteVisual.motionFrame < 100000.0f;
            const uint32_t currentMotion = dc2_coop_current_motion_index(rdram, p2);
            if (remoteMotionValid && s_coopRemoteVisual.motion != currentMotion)
            {
                R5900Context motionCtx = entryCtx;
                coop_set_reg(&motionCtx, 4, p2);
                coop_set_reg(&motionCtx, 5, s_coopRemoteVisual.motion);
                coop_set_reg(&motionCtx, 6, 0u);
                dc2_coop_run_original(
                    rdram, &motionCtx, runtime, 0x0016B720u,
                    ::SetMotion__12CActionCharaFii_0x16b720);
            }
            if (remoteMotionValid)
            {
                dc2_coop_write_f32(rdram, p2 + 0x388u,
                                   s_coopRemoteVisual.motionFrame);
                dc2_coop_evaluate_character_pose(
                    rdram, p2, dc2_read_u32(rdram, p2 + 0x370u),
                    s_coopRemoteVisual.motionFrame, entryCtx, runtime);
            }

            // Update bone matrix hierarchy of p2
            R5900Context updateCtx = entryCtx;
            f50_callg(rdram, &updateCtx, runtime, 0x00173700u, p2, 0u, 0u, 0u);

            // Snap dynamic anime springs (hair ribbons, cloth) to p2's bone matrices.
            // ResetDAPosition (0x001737B0u) takes CCharacter2* (p2) and iterates internally.
            f50_callg(rdram, &updateCtx, runtime, 0x001737B0u, p2, 0u, 0u, 0u);

            // Texture binding used to be forced here via ReloadTexture() with a
            // slot-entry field that reads -1, which left the remote untextured.
            // The engine binds the costume textures loaded with the remote model,
            // so draw directly.

            // The remote uses the same hero as the local, so it shares the local
            // costume texture. Assign the now-valid texb to the remote slot; the
            // engine binds costume textures by this block when drawing the proxy.
            {
                const uint32_t p1EntryTex = dc2_coop_slot_addr(s_coopSceneAddr, 0u);
                const uint32_t p2EntryTex = dc2_coop_slot_addr(s_coopSceneAddr, kCoopP2Slot);
                if (p1EntryTex != 0u && p2EntryTex != 0u)
                {
                    const uint32_t localTexb = dc2_read_u32(rdram, p1EntryTex + 0x38u);
                    if (localTexb != 0u && localTexb != 0xFFFFFFFFu)
                        dc2_write_u32(rdram, p2EntryTex + 0x38u, localTexb);
                }
            }

            // Diagnostic: candidate texture-block fields for the proxy bind.
            if (dc2_env_flag_enabled("DC2_COOP_TRACE"))
            {
                static bool loggedTexFields = false;
                if (!loggedTexFields)
                {
                    loggedTexFields = true;
                    const uint32_t p2EntryTex = dc2_coop_slot_addr(s_coopSceneAddr, kCoopP2Slot);
                    const uint32_t p1EntryTex = dc2_coop_slot_addr(s_coopSceneAddr, 0u);
                    std::fprintf(stderr,
                        "[DC2:Proxy] tex fields: p2+0x38=0x%x p2+0x3c=0x%x p2+0x40=0x%x "
                        "p1+0x38=0x%x entry2+0x38=0x%x entry1+0x38=0x%x\n",
                        dc2_read_u32(rdram, p2 + 0x38u), dc2_read_u32(rdram, p2 + 0x3Cu),
                        dc2_read_u32(rdram, p2 + 0x40u), dc2_read_u32(rdram, p1 + 0x38u),
                        p2EntryTex ? dc2_read_u32(rdram, p2EntryTex + 0x38u) : 0u,
                        p1EntryTex ? dc2_read_u32(rdram, p1EntryTex + 0x38u) : 0u);
                    std::fprintf(stderr, "[DC2:Proxy] p1 object dump:");
                    for (uint32_t off = 0u; off < 0x80u; off += 4u)
                        std::fprintf(stderr, " %02x:%08x", off, dc2_read_u32(rdram, p1 + off));
                    std::fprintf(stderr, "\n[DC2:Proxy] p2 object dump:");
                    for (uint32_t off = 0u; off < 0x80u; off += 4u)
                        std::fprintf(stderr, " %02x:%08x", off, dc2_read_u32(rdram, p2 + off));
                    std::fprintf(stderr, "\n");

                    // Texture manager table: mgr=0x00381EF0, base=*(mgr+0x10),
                    // entry=idx*0x10, obj=*(entry+8), tbp=*(obj+0x38)&0x3fff,
                    // size=*(obj+0x28), src=*(obj+0x50).
                    const uint32_t mgr = 0x00381EF0u;
                    const uint32_t tbl = dc2_read_u32(rdram, mgr + 0x10u);
                    std::fprintf(stderr, "[DC2:Tex] tbl=0x%x\n", tbl);
                    for (uint32_t idx = 0x0Cu; idx <= 0x18u; ++idx)
                    {
                        const uint32_t obj = tbl ? dc2_read_u32(rdram, tbl + idx * 0x10u + 8u) : 0u;
                        std::fprintf(stderr,
                            "[DC2:Tex] idx=0x%x obj=0x%x t0=0x%x size=0x%x src=0x%x\n",
                            idx, obj,
                            obj ? dc2_read_u32(rdram, obj + 0x38u) : 0u,
                            obj ? dc2_read_u32(rdram, obj + 0x28u) : 0u,
                            obj ? dc2_read_u32(rdram, obj + 0x50u) : 0u);
                    }
                    std::fprintf(stderr, "[DC2:Tex] slot texbs:");
                    for (uint32_t s = 0u; s < 12u; ++s)
                    {
                        const uint32_t entry = dc2_coop_slot_addr(s_coopSceneAddr, s);
                        std::fprintf(stderr, " %u:%08x", s,
                                     entry ? dc2_read_u32(rdram, entry + 0x38u) : 0u);
                    }
                    std::fprintf(stderr, "\n");
                }
            }

            // Render p2 with all its attached weapons and accessories.
            // Default is the DrawDirect path (remote model visible). The full-draw
            // experiment (DC2_COOP_PROXY_FULLDRAW=1) draws only the shadow, so it
            // is opt-in. The remaining defect is the remote's texture block.
            static const bool proxyFullDraw = []() {
                const char *value = std::getenv("DC2_COOP_PROXY_FULLDRAW");
                return value && *value && std::strcmp(value, "0") != 0;
            }();
            s_coopDrawingProxy = true;
            R5900Context proxyCtx = entryCtx;
            coop_set_reg(&proxyCtx, 4, p2);
            if (entry == 0x0016B940u && proxyFullDraw)
            {
                // Use the FULL character draw so the engine binds the remote
                // costume's materials/textures for p2 before rasterizing.
                // DrawDirect alone leaves the previous character's texture state
                // bound, which rendered the remote hero with a dark/wrong palette.
                // Draw(p2) internally re-enters the DrawDirect override with
                // thisPtr != local, which draws p2 exactly once.
                dc2_coop_run_original(rdram, &proxyCtx, runtime, 0x0016B850u,
                                      ::Draw__12CActionCharaFv_0x16b850);
            }
            else
            {
                dc2_coop_run_original(rdram, &proxyCtx, runtime, entry, original);
            }
            s_coopDrawingProxy = false;
        }
        dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
        return;
    }

    // Render P2 in slot 4 if present (local split-screen only; networked uses DrawChara)
    if (p2 && !dc2_coop_networked())
    {
        R5900Context p2Ctx = entryCtx;
        coop_set_reg(&p2Ctx, 4, p2);
        dc2_coop_run_original(rdram, &p2Ctx, runtime, entry, original);
    }

    if (dc2_coop_trace())
    {
        static bool loggedDirect = false;
        static bool loggedShadow = false;
        static bool loggedEffect = false;
        bool *logged = (entry == 0x0016B940u) ? &loggedDirect
                     : (entry == 0x0016BA70u) ? &loggedShadow : &loggedEffect;
        if (!*logged)
        {
            *logged = true;
            std::fprintf(stderr, "[DC2:Co-Op] paired P2 %s render active\n", label);
        }
    }
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&p1Ctx, 2));
}

static void coop_draw_action_chara_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    dc2_coop_draw_pair(rdram, ctx, runtime, 0x0016B850u,
                       ::Draw__12CActionCharaFv_0x16b850, "action_chara");
}

static void coop_draw_direct_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    dc2_coop_draw_pair(rdram, ctx, runtime, 0x0016B940u,
                       ::DrawDirect__12CActionCharaFv_0x16b940, "direct");
}

static void coop_draw_shadow_direct_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    dc2_coop_draw_pair(rdram, ctx, runtime, 0x0016BA70u,
                       ::DrawShadowDirect__12CActionCharaFv_0x16ba70, "shadow");
}

static void coop_draw_effect_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    dc2_coop_draw_pair(rdram, ctx, runtime, 0x0016BAC0u,
                       ::DrawEffect__12CActionCharaFv_0x16bac0, "effect");
}

static void coop_add_exp_weapon_param_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if (dc2_coop_active())
    {
        // $f12 is exp float, $a0 (r4) is chara_no, $a1 (r5) is weapon_slot
        if (ctx->f[12] <= 0.0f)
            ctx->f[12] = 10.0f;
        const uint32_t localChr = dc2_coop_local_character_no(rdram);
        coop_set_reg(ctx, 4, localChr);
        const int32_t slot = coop_get_reg(ctx, 5);
        if (slot < 0 || slot > 1)
            coop_set_reg(ctx, 5, 0u);
        std::fprintf(stderr, "[DC2:EXP] AddExpWeaponParam exp=%.1f chara=%u slot=%d\n",
                     ctx->f[12], localChr, (int)coop_get_reg(ctx, 5));
    }
    ::AddExpWeaponParam__Ffii_0x1e8ae0(rdram, ctx, runtime);
}

// Render one full dungeon view per guest frame. The host compositor retains the
// latest P1 and P2 frames and presents them side by side. P2 uses the same camera
// orientation/distance translated from Max to Monica, which provides an independent
// view immediately without mutating the persistent camera controller state.
static void coop_dng_main_draw_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if (dc2_coop_trace())
    {
        static bool loggedDraw = false;
        if (!loggedDraw)
        {
            loggedDraw = true;
            std::fprintf(stderr,
                         "[DC2:Trace] dngdraw scene=0x%x pool=%d dng=0x%x\n",
                         s_coopSceneAddr, s_coopP2PoolReady ? 1 : 0,
                         dc2_read_u32(rdram, 0x01E9F6E0u));
        }
    }
    if (dc2_coop_networked())
    {
        ::DngMainDraw__Fv_0x1cf090(rdram, ctx, runtime);
        // Some floors keep the gameplay step inside a long-running guest slice,
        // so the registered DngStep boundary is not necessarily crossed every
        // rendered frame.  Drive the non-blocking transport here too: this is a
        // guaranteed once-per-frame hook and prevents a lost first UDP reply
        // from leaving clients permanently unaware of each other.
        if (s_coopSceneAddr && dc2_read_u32(rdram, 0x01E9F6E0u) == 0u)
            dc2_coop_exchange_network_state(rdram, 1u, ctx, runtime);
        return;
    }
    if (!dc2_coop_active() || !s_coopP2PoolReady || !s_coopSceneAddr ||
        dc2_read_u32(rdram, 0x01E9F6E0u) != 0u)
    {
        ::DngMainDraw__Fv_0x1cf090(rdram, ctx, runtime);
        return;
    }

    const R5900Context entryCtx = *ctx;
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    const uint32_t p1 = dc2_coop_get_character(rdram, s_coopSceneAddr, 0u);
    const uint32_t p2 = dc2_coop_get_character(rdram, s_coopSceneAddr, kCoopP2Slot);
    const int view = (p1 && p2) ? (g_dc2CoopDesiredView.load(std::memory_order_acquire) & 1) : 0;

    uint8_t cameraBackup[0x40u]{};
    uint8_t *camera = nullptr;
    if (view == 1)
    {
        const uint32_t cameraIndex = dc2_read_u32(rdram, s_coopSceneAddr + 0x2E54u);
        if (cameraIndex < dc2_read_u32(rdram, s_coopSceneAddr + 0x2044u))
        {
            const uint32_t cameraDesc = s_coopSceneAddr + 0x2048u + cameraIndex * 0x38u;
            const uint32_t cameraAddr = dc2_read_u32(rdram, cameraDesc + 0x34u);
            camera = getMemPtr(rdram, cameraAddr);
            if (camera)
            {
                std::memcpy(cameraBackup, camera, sizeof(cameraBackup));
                const float dx = dc2_read_f32(rdram, p2 + 0x10u) - dc2_read_f32(rdram, p1 + 0x10u);
                const float dy = dc2_read_f32(rdram, p2 + 0x14u) - dc2_read_f32(rdram, p1 + 0x14u);
                const float dz = dc2_read_f32(rdram, p2 + 0x18u) - dc2_read_f32(rdram, p1 + 0x18u);
                for (uint32_t base : {0x00u, 0x10u, 0x20u, 0x30u})
                {
                    dc2_coop_write_f32(rdram, cameraAddr + base + 0x00u,
                                       dc2_read_f32(rdram, cameraAddr + base + 0x00u) + dx);
                    dc2_coop_write_f32(rdram, cameraAddr + base + 0x04u,
                                       dc2_read_f32(rdram, cameraAddr + base + 0x04u) + dy);
                    dc2_coop_write_f32(rdram, cameraAddr + base + 0x08u,
                                       dc2_read_f32(rdram, cameraAddr + base + 0x08u) + dz);
                }
            }
        }
    }

    R5900Context drawCtx = entryCtx;
    dc2_coop_run_original(rdram, &drawCtx, runtime, 0x001CF090u,
                          ::DngMainDraw__Fv_0x1cf090);
    if (camera)
        std::memcpy(camera, cameraBackup, sizeof(cameraBackup));

    g_dc2CoopRenderedView.store(view, std::memory_order_release);
    g_dc2CoopRenderSequence.fetch_add(1u, std::memory_order_acq_rel);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&drawCtx, 2));
}

static void coop_srand_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    // 0x1D8A28 is the return address from srand inside RandomMapMainProc__11CAutoMapGenFv
    if ((dc2_coop_networked() || dc2_coop_v5_net::isAuthority()) &&
        returnPc == 0x001D8A28u)
    {
        uint16_t map = 0u;
        uint16_t floor = 0u;
        const uint32_t gp = coop_get_reg(ctx, 28);
        if (gp)
        {
            const uint32_t saveDungeon = dc2_read_u32(rdram, gp - 0x7258u);
            if (saveDungeon)
            {
                map = static_cast<uint16_t>(dc2_read_u32(rdram, saveDungeon) & 0x0FFFu);
                floor = static_cast<uint16_t>(
                    dc2_read_u32(rdram, saveDungeon + 4u + static_cast<uint32_t>(map) * 4u) & 0x0FFFu);
            }
        }
        const uint16_t detSeed = static_cast<uint16_t>(
            ((((map + 1u) * 2654435761u) ^ ((floor + 1u) * 2246822519u) ^ 0xD002C00Du) & 0xFFFFu) | 1u);

        if (dc2_coop_net::role() == dc2_coop_net::Role::Host ||
            dc2_coop_v5_net::isAuthority())
        {
            g_dc2CoopDungeonSeed = detSeed;
            coop_set_reg(ctx, 4, g_dc2CoopDungeonSeed);
            std::fprintf(stderr,
                         "[DC2:Co-Op] Host RandomMapMainProc srand detSeed=0x%04x (map=%u floor=%u)\n",
                         g_dc2CoopDungeonSeed, map, floor);
        }
        else
        {
            const uint16_t seed = (s_coopAuthoritativeSeed != 0u) ? s_coopAuthoritativeSeed : detSeed;
            g_dc2CoopDungeonSeed = seed;
            coop_set_reg(ctx, 4, seed);
            std::fprintf(stderr,
                         "[DC2:Co-Op] Guest RandomMapMainProc srand seed=0x%04x (auth=0x%04x det=0x%04x map=%u floor=%u)\n",
                         seed, s_coopAuthoritativeSeed, detSeed, map, floor);
        }
    }
    ::srand_0x128398(rdram, ctx, runtime);
}

// Trace texture-manager IMG entries (character costume textures) so the coop
// path can learn the base index and load the remote costume into a second one.
static void coop_enterimg_trace(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if (dc2_coop_trace())
    {
        static uint32_t n = 0u;
        if (n++ < 24u)
        {
            const uint32_t data = coop_get_reg(ctx, 5);
            const uint32_t base = coop_get_reg(ctx, 6);
            const uint32_t mem  = coop_get_reg(ctx, 7);
            const uint32_t info = coop_get_reg(ctx, 8);
            const bool dataOk = data > 0x80000u && data < 0x1FFFFF0u;
            const uint32_t count = dataOk ? dc2_read_u32(rdram, data + 8u) : 0u;
            char tag[9] = {0};
            if (dataOk)
                std::memcpy(tag, rdram + data, 8);
            std::fprintf(stderr,
                "[DC2:EnterIMG] data=0x%x base=0x%x mem=0x%x info=0x%x count=%u tag='%s'\n",
                data, base, mem, info, count, tag);
        }
    }
    EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
}

// Event-boundary observation. This deliberately does not interpret every
// non-interactable status as an open/reward commit (mimics/traps also use it).
static void coop_chest_status_trace(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime){
    constexpr uint32_t memorySize = 0x02000000u;
    const uint32_t gp = coop_get_reg(ctx, 28);
    const uint32_t event = gp >= 0x6824u && gp < memorySize
        ? dc2_read_u32(rdram, gp - 0x6824u) : 0u;
    // Native code adds 0x2f90 to EventScene before loading +0x7c.
    const uint32_t manager = event && event < memorySize - 0x3010u
        ? dc2_read_u32(rdram, event + 0x300Cu) : 0u;
    uint32_t slot = 0u;
    dc2::adapter::ChestObservation before{}, after{};
    const bool selected = dc2::adapter::readSelectedChest(
        rdram, memorySize, manager, slot, before);
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    R5900Context call = *ctx;
    const bool completed = dc2_coop_run_original(rdram, &call, runtime, 0x00264440u,
        ::ps2__SET_TB_STATUS__FP12RS_STACKDATAi_0x264440);
    if (completed && selected && dc2::adapter::readChest(rdram, memorySize, manager, slot, after))
    {
        if (dc2_env_flag_enabled("DC2_COOP_TRACE_CHESTS"))
            std::fprintf(stderr,
                "[DC2:chest:event] manager=%08x slot=%u status=%u->%u lid=%.3f->%.3f result=%u\n",
                manager, slot, before.status, after.status, before.lidAngle, after.lidAngle,
                coop_get_reg(&call, 2));

        // Replicate the transition to the peer. The local game already produced
        // the state; the peer replays the presentation (no reward metadata).
        if (dc2_coop_net::active() && !dc2_coop_v5_net::active() &&
            manager != 0u && after.status != before.status)
        {
            dc2_coop_net::GameEvent event{};
            event.type = static_cast<uint16_t>(dc2_coop_net::GameEventType::Chest);
            event.slot = static_cast<uint16_t>(slot);
            event.value = static_cast<int32_t>(after.status);
            event.f0 = after.lidAngle;
            event.manager = manager;
            if (dc2_coop_net::sendGameEvent(event))
                std::fprintf(stderr,
                    "[DC2:Chest] local slot=%u status=%u->%u lid=%.3f -> peer\n",
                    slot, before.status, after.status, after.lidAngle);
        }
    }
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&call, 2));
}

// In Server Authority mode (Protocol v5), clients must NEVER execute ThinkHost.
// The Server instance (Role 3) is the single source of truth for monster AI,
// positions, attacks, and health.
static void coop_think_host_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    if (dc2_coop_v5_net::active() && !dc2_coop_v5_net::isAuthority())
    {
        dc2_coop_finish_override(ctx, returnPc, 0u);
        return;
    }
    R5900Context callCtx = *ctx;
    dc2_coop_run_original(rdram, &callCtx, runtime, 0x001DFB00u,
                          ::ThinkHost__11CMonsterManFv_0x1dfb00);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&callCtx, 2));
}

// Suppress dynamic anime mesh deformation while drawing the remote proxy avatar
static void coop_draw_sub_da_stub(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t returnPc = coop_get_reg(ctx, 31);
    if (s_coopDrawingProxy)
    {
        dc2_coop_finish_override(ctx, returnPc, 0u);
        return;
    }
    R5900Context callCtx = *ctx;
    dc2_coop_run_original(rdram, &callCtx, runtime, 0x0017ACB0u,
                          ::DrawSub__13CDynamicAnimeFi_0x17acb0);
    dc2_coop_finish_override(ctx, returnPc, coop_get_reg(&callCtx, 2));
}

static void applyDC2CoopOverrides(PS2Runtime &runtime)
{
    if (!dc2_coop_active())
        return;

    std::fprintf(stderr, "====================================================\n");
    std::fprintf(stderr, " [DC2:Co-Op] Local 2-player co-op ACTIVE\n");
    if (dc2_coop_networked())
        std::fprintf(stderr, " Network role: %s | room hero locked to %s\n",
                     dc2_coop_net::role() == dc2_coop_net::Role::Guest ? "Guest" : "Host",
                     dc2_coop_local_character_no() == 1u ? "Monica" : "Max");
    else
        std::fprintf(stderr, " P1: Max / controller 1 | P2: Monica / controller 2\n");
    std::fprintf(stderr, "====================================================\n");

    // This registration intentionally follows the Phase-9 mgEndFrame probe.
    // The wrapper preserves that complete implementation while restoring the
    // once-per-frame v5 transport/transition pump.
    runtime.registerFunction(0x001425B0u, coop_mgendframe_stub);
    runtime.registerFunction(0x00283B60u, coop_get_character_stub);
    runtime.registerFunction(0x0019BB40u, coop_check_enable_chara_change_stub);
    runtime.registerFunction(0x0019C3D0u, coop_set_active_chara_stub);
    runtime.registerFunction(0x001E8F30u, coop_setup_main_unit_stub);
    runtime.registerFunction(0x001D06C0u, coop_dng_step_stub);
    runtime.registerFunction(0x001DFB00u, coop_think_host_stub);
    runtime.registerFunction(0x001A42B0u, coop_edit_control_stub);
    runtime.registerFunction(0x001ABCF0u, coop_edit_loop_stub);
    runtime.registerFunction(0x001A76C0u, coop_edit_step_chara_stub);
    runtime.registerFunction(0x001A77B0u, coop_edit_draw_chara_stub);
    runtime.registerFunction(0x001CF090u, coop_dng_main_draw_stub);
    runtime.registerFunction(0x0016B850u, coop_draw_action_chara_stub);
    runtime.registerFunction(0x0016B940u, coop_draw_direct_stub);
    runtime.registerFunction(0x0016BA70u, coop_draw_shadow_direct_stub);
    runtime.registerFunction(0x0016BAC0u, coop_draw_effect_stub);
    runtime.registerFunction(0x0017ACB0u, coop_draw_sub_da_stub);
    runtime.registerFunction(0x001E8AE0u, coop_add_exp_weapon_param_stub);
    runtime.registerFunction(0x00128398u, coop_srand_stub);
    runtime.registerFunction(0x00309CA0u, coop_pause_start_stub);
    runtime.registerFunction(0x00309DE0u, coop_pause_loop_stub);
    runtime.registerFunction(0x002ED4E0u, coop_pause_btn_stub);
    runtime.registerFunction(0x00264440u, coop_chest_status_trace);
    runtime.registerFunction(0x0012DA90u, coop_enterimg_trace);
}
