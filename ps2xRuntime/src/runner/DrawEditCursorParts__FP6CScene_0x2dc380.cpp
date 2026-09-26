#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEditCursorParts__FP6CScene
// Address: 0x2dc380 - 0x2dc6d8
void DrawEditCursorParts__FP6CScene_0x2dc380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEditCursorParts__FP6CScene_0x2dc380");
#endif

    switch (ctx->pc) {
        case 0x2dc380u: goto label_2dc380;
        case 0x2dc384u: goto label_2dc384;
        case 0x2dc388u: goto label_2dc388;
        case 0x2dc38cu: goto label_2dc38c;
        case 0x2dc390u: goto label_2dc390;
        case 0x2dc394u: goto label_2dc394;
        case 0x2dc398u: goto label_2dc398;
        case 0x2dc39cu: goto label_2dc39c;
        case 0x2dc3a0u: goto label_2dc3a0;
        case 0x2dc3a4u: goto label_2dc3a4;
        case 0x2dc3a8u: goto label_2dc3a8;
        case 0x2dc3acu: goto label_2dc3ac;
        case 0x2dc3b0u: goto label_2dc3b0;
        case 0x2dc3b4u: goto label_2dc3b4;
        case 0x2dc3b8u: goto label_2dc3b8;
        case 0x2dc3bcu: goto label_2dc3bc;
        case 0x2dc3c0u: goto label_2dc3c0;
        case 0x2dc3c4u: goto label_2dc3c4;
        case 0x2dc3c8u: goto label_2dc3c8;
        case 0x2dc3ccu: goto label_2dc3cc;
        case 0x2dc3d0u: goto label_2dc3d0;
        case 0x2dc3d4u: goto label_2dc3d4;
        case 0x2dc3d8u: goto label_2dc3d8;
        case 0x2dc3dcu: goto label_2dc3dc;
        case 0x2dc3e0u: goto label_2dc3e0;
        case 0x2dc3e4u: goto label_2dc3e4;
        case 0x2dc3e8u: goto label_2dc3e8;
        case 0x2dc3ecu: goto label_2dc3ec;
        case 0x2dc3f0u: goto label_2dc3f0;
        case 0x2dc3f4u: goto label_2dc3f4;
        case 0x2dc3f8u: goto label_2dc3f8;
        case 0x2dc3fcu: goto label_2dc3fc;
        case 0x2dc400u: goto label_2dc400;
        case 0x2dc404u: goto label_2dc404;
        case 0x2dc408u: goto label_2dc408;
        case 0x2dc40cu: goto label_2dc40c;
        case 0x2dc410u: goto label_2dc410;
        case 0x2dc414u: goto label_2dc414;
        case 0x2dc418u: goto label_2dc418;
        case 0x2dc41cu: goto label_2dc41c;
        case 0x2dc420u: goto label_2dc420;
        case 0x2dc424u: goto label_2dc424;
        case 0x2dc428u: goto label_2dc428;
        case 0x2dc42cu: goto label_2dc42c;
        case 0x2dc430u: goto label_2dc430;
        case 0x2dc434u: goto label_2dc434;
        case 0x2dc438u: goto label_2dc438;
        case 0x2dc43cu: goto label_2dc43c;
        case 0x2dc440u: goto label_2dc440;
        case 0x2dc444u: goto label_2dc444;
        case 0x2dc448u: goto label_2dc448;
        case 0x2dc44cu: goto label_2dc44c;
        case 0x2dc450u: goto label_2dc450;
        case 0x2dc454u: goto label_2dc454;
        case 0x2dc458u: goto label_2dc458;
        case 0x2dc45cu: goto label_2dc45c;
        case 0x2dc460u: goto label_2dc460;
        case 0x2dc464u: goto label_2dc464;
        case 0x2dc468u: goto label_2dc468;
        case 0x2dc46cu: goto label_2dc46c;
        case 0x2dc470u: goto label_2dc470;
        case 0x2dc474u: goto label_2dc474;
        case 0x2dc478u: goto label_2dc478;
        case 0x2dc47cu: goto label_2dc47c;
        case 0x2dc480u: goto label_2dc480;
        case 0x2dc484u: goto label_2dc484;
        case 0x2dc488u: goto label_2dc488;
        case 0x2dc48cu: goto label_2dc48c;
        case 0x2dc490u: goto label_2dc490;
        case 0x2dc494u: goto label_2dc494;
        case 0x2dc498u: goto label_2dc498;
        case 0x2dc49cu: goto label_2dc49c;
        case 0x2dc4a0u: goto label_2dc4a0;
        case 0x2dc4a4u: goto label_2dc4a4;
        case 0x2dc4a8u: goto label_2dc4a8;
        case 0x2dc4acu: goto label_2dc4ac;
        case 0x2dc4b0u: goto label_2dc4b0;
        case 0x2dc4b4u: goto label_2dc4b4;
        case 0x2dc4b8u: goto label_2dc4b8;
        case 0x2dc4bcu: goto label_2dc4bc;
        case 0x2dc4c0u: goto label_2dc4c0;
        case 0x2dc4c4u: goto label_2dc4c4;
        case 0x2dc4c8u: goto label_2dc4c8;
        case 0x2dc4ccu: goto label_2dc4cc;
        case 0x2dc4d0u: goto label_2dc4d0;
        case 0x2dc4d4u: goto label_2dc4d4;
        case 0x2dc4d8u: goto label_2dc4d8;
        case 0x2dc4dcu: goto label_2dc4dc;
        case 0x2dc4e0u: goto label_2dc4e0;
        case 0x2dc4e4u: goto label_2dc4e4;
        case 0x2dc4e8u: goto label_2dc4e8;
        case 0x2dc4ecu: goto label_2dc4ec;
        case 0x2dc4f0u: goto label_2dc4f0;
        case 0x2dc4f4u: goto label_2dc4f4;
        case 0x2dc4f8u: goto label_2dc4f8;
        case 0x2dc4fcu: goto label_2dc4fc;
        case 0x2dc500u: goto label_2dc500;
        case 0x2dc504u: goto label_2dc504;
        case 0x2dc508u: goto label_2dc508;
        case 0x2dc50cu: goto label_2dc50c;
        case 0x2dc510u: goto label_2dc510;
        case 0x2dc514u: goto label_2dc514;
        case 0x2dc518u: goto label_2dc518;
        case 0x2dc51cu: goto label_2dc51c;
        case 0x2dc520u: goto label_2dc520;
        case 0x2dc524u: goto label_2dc524;
        case 0x2dc528u: goto label_2dc528;
        case 0x2dc52cu: goto label_2dc52c;
        case 0x2dc530u: goto label_2dc530;
        case 0x2dc534u: goto label_2dc534;
        case 0x2dc538u: goto label_2dc538;
        case 0x2dc53cu: goto label_2dc53c;
        case 0x2dc540u: goto label_2dc540;
        case 0x2dc544u: goto label_2dc544;
        case 0x2dc548u: goto label_2dc548;
        case 0x2dc54cu: goto label_2dc54c;
        case 0x2dc550u: goto label_2dc550;
        case 0x2dc554u: goto label_2dc554;
        case 0x2dc558u: goto label_2dc558;
        case 0x2dc55cu: goto label_2dc55c;
        case 0x2dc560u: goto label_2dc560;
        case 0x2dc564u: goto label_2dc564;
        case 0x2dc568u: goto label_2dc568;
        case 0x2dc56cu: goto label_2dc56c;
        case 0x2dc570u: goto label_2dc570;
        case 0x2dc574u: goto label_2dc574;
        case 0x2dc578u: goto label_2dc578;
        case 0x2dc57cu: goto label_2dc57c;
        case 0x2dc580u: goto label_2dc580;
        case 0x2dc584u: goto label_2dc584;
        case 0x2dc588u: goto label_2dc588;
        case 0x2dc58cu: goto label_2dc58c;
        case 0x2dc590u: goto label_2dc590;
        case 0x2dc594u: goto label_2dc594;
        case 0x2dc598u: goto label_2dc598;
        case 0x2dc59cu: goto label_2dc59c;
        case 0x2dc5a0u: goto label_2dc5a0;
        case 0x2dc5a4u: goto label_2dc5a4;
        case 0x2dc5a8u: goto label_2dc5a8;
        case 0x2dc5acu: goto label_2dc5ac;
        case 0x2dc5b0u: goto label_2dc5b0;
        case 0x2dc5b4u: goto label_2dc5b4;
        case 0x2dc5b8u: goto label_2dc5b8;
        case 0x2dc5bcu: goto label_2dc5bc;
        case 0x2dc5c0u: goto label_2dc5c0;
        case 0x2dc5c4u: goto label_2dc5c4;
        case 0x2dc5c8u: goto label_2dc5c8;
        case 0x2dc5ccu: goto label_2dc5cc;
        case 0x2dc5d0u: goto label_2dc5d0;
        case 0x2dc5d4u: goto label_2dc5d4;
        case 0x2dc5d8u: goto label_2dc5d8;
        case 0x2dc5dcu: goto label_2dc5dc;
        case 0x2dc5e0u: goto label_2dc5e0;
        case 0x2dc5e4u: goto label_2dc5e4;
        case 0x2dc5e8u: goto label_2dc5e8;
        case 0x2dc5ecu: goto label_2dc5ec;
        case 0x2dc5f0u: goto label_2dc5f0;
        case 0x2dc5f4u: goto label_2dc5f4;
        case 0x2dc5f8u: goto label_2dc5f8;
        case 0x2dc5fcu: goto label_2dc5fc;
        case 0x2dc600u: goto label_2dc600;
        case 0x2dc604u: goto label_2dc604;
        case 0x2dc608u: goto label_2dc608;
        case 0x2dc60cu: goto label_2dc60c;
        case 0x2dc610u: goto label_2dc610;
        case 0x2dc614u: goto label_2dc614;
        case 0x2dc618u: goto label_2dc618;
        case 0x2dc61cu: goto label_2dc61c;
        case 0x2dc620u: goto label_2dc620;
        case 0x2dc624u: goto label_2dc624;
        case 0x2dc628u: goto label_2dc628;
        case 0x2dc62cu: goto label_2dc62c;
        case 0x2dc630u: goto label_2dc630;
        case 0x2dc634u: goto label_2dc634;
        case 0x2dc638u: goto label_2dc638;
        case 0x2dc63cu: goto label_2dc63c;
        case 0x2dc640u: goto label_2dc640;
        case 0x2dc644u: goto label_2dc644;
        case 0x2dc648u: goto label_2dc648;
        case 0x2dc64cu: goto label_2dc64c;
        case 0x2dc650u: goto label_2dc650;
        case 0x2dc654u: goto label_2dc654;
        case 0x2dc658u: goto label_2dc658;
        case 0x2dc65cu: goto label_2dc65c;
        case 0x2dc660u: goto label_2dc660;
        case 0x2dc664u: goto label_2dc664;
        case 0x2dc668u: goto label_2dc668;
        case 0x2dc66cu: goto label_2dc66c;
        case 0x2dc670u: goto label_2dc670;
        case 0x2dc674u: goto label_2dc674;
        case 0x2dc678u: goto label_2dc678;
        case 0x2dc67cu: goto label_2dc67c;
        case 0x2dc680u: goto label_2dc680;
        case 0x2dc684u: goto label_2dc684;
        case 0x2dc688u: goto label_2dc688;
        case 0x2dc68cu: goto label_2dc68c;
        case 0x2dc690u: goto label_2dc690;
        case 0x2dc694u: goto label_2dc694;
        case 0x2dc698u: goto label_2dc698;
        case 0x2dc69cu: goto label_2dc69c;
        case 0x2dc6a0u: goto label_2dc6a0;
        case 0x2dc6a4u: goto label_2dc6a4;
        case 0x2dc6a8u: goto label_2dc6a8;
        case 0x2dc6acu: goto label_2dc6ac;
        case 0x2dc6b0u: goto label_2dc6b0;
        case 0x2dc6b4u: goto label_2dc6b4;
        case 0x2dc6b8u: goto label_2dc6b8;
        case 0x2dc6bcu: goto label_2dc6bc;
        case 0x2dc6c0u: goto label_2dc6c0;
        case 0x2dc6c4u: goto label_2dc6c4;
        case 0x2dc6c8u: goto label_2dc6c8;
        case 0x2dc6ccu: goto label_2dc6cc;
        case 0x2dc6d0u: goto label_2dc6d0;
        case 0x2dc6d4u: goto label_2dc6d4;
        default: break;
    }

    ctx->pc = 0x2dc380u;

label_2dc380:
    // 0x2dc380: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2dc384:
    // 0x2dc384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2dc388:
    // 0x2dc388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dc38c:
    // 0x2dc38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc390:
    // 0x2dc390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc394:
    // 0x2dc394: 0xc0beec4  jal         func_2FBB10
label_2dc398:
    if (ctx->pc == 0x2DC398u) {
        ctx->pc = 0x2DC398u;
            // 0x2dc398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC39Cu;
        goto label_2dc39c;
    }
    ctx->pc = 0x2DC394u;
    SET_GPR_U32(ctx, 31, 0x2DC39Cu);
    ctx->pc = 0x2DC398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC394u;
            // 0x2dc398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB10u;
    if (runtime->hasFunction(0x2FBB10u)) {
        auto targetFn = runtime->lookupFunction(0x2FBB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC39Cu; }
        if (ctx->pc != 0x2DC39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditNowPlaceAnime__Fv_0x2fbb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC39Cu; }
        if (ctx->pc != 0x2DC39Cu) { return; }
    }
    ctx->pc = 0x2DC39Cu;
label_2dc39c:
    // 0x2dc39c: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
label_2dc3a0:
    if (ctx->pc == 0x2DC3A0u) {
        ctx->pc = 0x2DC3A4u;
        goto label_2dc3a4;
    }
    ctx->pc = 0x2DC39Cu;
    {
        const bool branch_taken_0x2dc39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc39c) {
            ctx->pc = 0x2DC6C0u;
            goto label_2dc6c0;
        }
    }
    ctx->pc = 0x2DC3A4u;
label_2dc3a4:
    // 0x2dc3a4: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2dc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dc3a8:
    // 0x2dc3a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dc3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc3ac:
    // 0x2dc3ac: 0x106500c4  beq         $v1, $a1, . + 4 + (0xC4 << 2)
label_2dc3b0:
    if (ctx->pc == 0x2DC3B0u) {
        ctx->pc = 0x2DC3B4u;
        goto label_2dc3b4;
    }
    ctx->pc = 0x2DC3ACu;
    {
        const bool branch_taken_0x2dc3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2dc3ac) {
            ctx->pc = 0x2DC6C0u;
            goto label_2dc6c0;
        }
    }
    ctx->pc = 0x2DC3B4u;
label_2dc3b4:
    // 0x2dc3b4: 0x8f849e0c  lw          $a0, -0x61F4($gp)
    ctx->pc = 0x2dc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dc3b8:
    // 0x2dc3b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dc3bc:
    // 0x2dc3bc: 0x108300c0  beq         $a0, $v1, . + 4 + (0xC0 << 2)
label_2dc3c0:
    if (ctx->pc == 0x2DC3C0u) {
        ctx->pc = 0x2DC3C4u;
        goto label_2dc3c4;
    }
    ctx->pc = 0x2DC3BCu;
    {
        const bool branch_taken_0x2dc3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc3bc) {
            ctx->pc = 0x2DC6C0u;
            goto label_2dc6c0;
        }
    }
    ctx->pc = 0x2DC3C4u;
label_2dc3c4:
    // 0x2dc3c4: 0x83829ea0  lb          $v0, -0x6160($gp)
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942368)));
label_2dc3c8:
    // 0x2dc3c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dc3cc:
    if (ctx->pc == 0x2DC3CCu) {
        ctx->pc = 0x2DC3D0u;
        goto label_2dc3d0;
    }
    ctx->pc = 0x2DC3C8u;
    {
        const bool branch_taken_0x2dc3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3c8) {
            ctx->pc = 0x2DC3D8u;
            goto label_2dc3d8;
        }
    }
    ctx->pc = 0x2DC3D0u;
label_2dc3d0:
    // 0x2dc3d0: 0xa3859ea0  sb          $a1, -0x6160($gp)
    ctx->pc = 0x2dc3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942368), (uint8_t)GPR_U32(ctx, 5));
label_2dc3d4:
    // 0x2dc3d4: 0xaf809e9c  sw          $zero, -0x6164($gp)
    ctx->pc = 0x2dc3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942364), GPR_U32(ctx, 0));
label_2dc3d8:
    // 0x2dc3d8: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
label_2dc3dc:
    // 0x2dc3dc: 0xc0a0f58  jal         func_283D60
label_2dc3e0:
    if (ctx->pc == 0x2DC3E0u) {
        ctx->pc = 0x2DC3E0u;
            // 0x2dc3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3E4u;
        goto label_2dc3e4;
    }
    ctx->pc = 0x2DC3DCu;
    SET_GPR_U32(ctx, 31, 0x2DC3E4u);
    ctx->pc = 0x2DC3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3DCu;
            // 0x2dc3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E4u; }
        if (ctx->pc != 0x2DC3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E4u; }
        if (ctx->pc != 0x2DC3E4u) { return; }
    }
    ctx->pc = 0x2DC3E4u;
label_2dc3e4:
    // 0x2dc3e4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc3e8:
    // 0x2dc3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc3ec:
    // 0x2dc3ec: 0xc4208944  lwc1        $f0, -0x76BC($at)
    ctx->pc = 0x2dc3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc3f0:
    // 0x2dc3f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2dc3f4:
    // 0x2dc3f4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2dc3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2dc3f8:
    // 0x2dc3f8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2dc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2dc3fc:
    // 0x2dc3fc: 0xc050df4  jal         func_1437D0
label_2dc400:
    if (ctx->pc == 0x2DC400u) {
        ctx->pc = 0x2DC400u;
            // 0x2dc400: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->pc = 0x2DC404u;
        goto label_2dc404;
    }
    ctx->pc = 0x2DC3FCu;
    SET_GPR_U32(ctx, 31, 0x2DC404u);
    ctx->pc = 0x2DC400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3FCu;
            // 0x2dc400: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC404u; }
        if (ctx->pc != 0x2DC404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC404u; }
        if (ctx->pc != 0x2DC404u) { return; }
    }
    ctx->pc = 0x2DC404u;
label_2dc404:
    // 0x2dc404: 0xc7819e9c  lwc1        $f1, -0x6164($gp)
    ctx->pc = 0x2dc404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc408:
    // 0x2dc408: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2dc408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2dc40c:
    // 0x2dc40c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2dc40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dc410:
    // 0x2dc410: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2dc410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2dc414:
    // 0x2dc414: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dc414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dc418:
    // 0x2dc418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc41c:
    // 0x2dc41c: 0x0  nop
    ctx->pc = 0x2dc41cu;
    // NOP
label_2dc420:
    // 0x2dc420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dc420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dc424:
    // 0x2dc424: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2dc424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2dc428:
    // 0x2dc428: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2dc428u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2dc42c:
    // 0x2dc42c: 0x0  nop
    ctx->pc = 0x2dc42cu;
    // NOP
label_2dc430:
    // 0x2dc430: 0x0  nop
    ctx->pc = 0x2dc430u;
    // NOP
label_2dc434:
    // 0x2dc434: 0xc047a42  jal         func_11E908
label_2dc438:
    if (ctx->pc == 0x2DC438u) {
        ctx->pc = 0x2DC43Cu;
        goto label_2dc43c;
    }
    ctx->pc = 0x2DC434u;
    SET_GPR_U32(ctx, 31, 0x2DC43Cu);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC43Cu; }
        if (ctx->pc != 0x2DC43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC43Cu; }
        if (ctx->pc != 0x2DC43Cu) { return; }
    }
    ctx->pc = 0x2DC43Cu;
label_2dc43c:
    // 0x2dc43c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2dc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2dc440:
    // 0x2dc440: 0x8f839e9c  lw          $v1, -0x6164($gp)
    ctx->pc = 0x2dc440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942364)));
label_2dc444:
    // 0x2dc444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dc444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dc448:
    // 0x2dc448: 0x8f829e2c  lw          $v0, -0x61D4($gp)
    ctx->pc = 0x2dc448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942252)));
label_2dc44c:
    // 0x2dc44c: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x2dc44cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dc450:
    // 0x2dc450: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dc454:
    // 0x2dc454: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2dc458:
    if (ctx->pc == 0x2DC458u) {
        ctx->pc = 0x2DC458u;
            // 0x2dc458: 0xaf839e9c  sw          $v1, -0x6164($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942364), GPR_U32(ctx, 3));
        ctx->pc = 0x2DC45Cu;
        goto label_2dc45c;
    }
    ctx->pc = 0x2DC454u;
    {
        const bool branch_taken_0x2dc454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC454u;
            // 0x2dc458: 0xaf839e9c  sw          $v1, -0x6164($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc454) {
            ctx->pc = 0x2DC494u;
            goto label_2dc494;
        }
    }
    ctx->pc = 0x2DC45Cu;
label_2dc45c:
    // 0x2dc45c: 0x46040940  add.s       $f5, $f1, $f4
    ctx->pc = 0x2dc45cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2dc460:
    // 0x2dc460: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dc460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2dc464:
    // 0x2dc464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc468:
    // 0x2dc468: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2dc468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc46c:
    // 0x2dc46c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2dc46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2dc470:
    // 0x2dc470: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2dc470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dc474:
    // 0x2dc474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dc474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dc478:
    // 0x2dc478: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2dc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dc47c:
    // 0x2dc47c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2dc47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2dc480:
    // 0x2dc480: 0x46051840  add.s       $f1, $f3, $f5
    ctx->pc = 0x2dc480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_2dc484:
    // 0x2dc484: 0x46051000  add.s       $f0, $f2, $f5
    ctx->pc = 0x2dc484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_2dc488:
    // 0x2dc488: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2dc488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2dc48c:
    // 0x2dc48c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2dc490:
    if (ctx->pc == 0x2DC490u) {
        ctx->pc = 0x2DC490u;
            // 0x2dc490: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->pc = 0x2DC494u;
        goto label_2dc494;
    }
    ctx->pc = 0x2DC48Cu;
    {
        const bool branch_taken_0x2dc48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC48Cu;
            // 0x2dc490: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc48c) {
            ctx->pc = 0x2DC4B4u;
            goto label_2dc4b4;
        }
    }
    ctx->pc = 0x2DC494u;
label_2dc494:
    // 0x2dc494: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dc494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2dc498:
    // 0x2dc498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc49c:
    // 0x2dc49c: 0x0  nop
    ctx->pc = 0x2dc49cu;
    // NOP
label_2dc4a0:
    // 0x2dc4a0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2dc4a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2dc4a4:
    // 0x2dc4a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2dc4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2dc4a8:
    // 0x2dc4a8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2dc4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2dc4ac:
    // 0x2dc4ac: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2dc4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2dc4b0:
    // 0x2dc4b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2dc4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2dc4b4:
    // 0x2dc4b4: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2dc4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
label_2dc4b8:
    // 0x2dc4b8: 0xc06c2d4  jal         func_1B0B50
label_2dc4bc:
    if (ctx->pc == 0x2DC4BCu) {
        ctx->pc = 0x2DC4BCu;
            // 0x2dc4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4C0u;
        goto label_2dc4c0;
    }
    ctx->pc = 0x2DC4B8u;
    SET_GPR_U32(ctx, 31, 0x2DC4C0u);
    ctx->pc = 0x2DC4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4B8u;
            // 0x2dc4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4C0u; }
        if (ctx->pc != 0x2DC4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4C0u; }
        if (ctx->pc != 0x2DC4C0u) { return; }
    }
    ctx->pc = 0x2DC4C0u;
label_2dc4c0:
    // 0x2dc4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc4c4:
    // 0x2dc4c4: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
label_2dc4c8:
    if (ctx->pc == 0x2DC4C8u) {
        ctx->pc = 0x2DC4CCu;
        goto label_2dc4cc;
    }
    ctx->pc = 0x2DC4C4u;
    {
        const bool branch_taken_0x2dc4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4c4) {
            ctx->pc = 0x2DC6C0u;
            goto label_2dc6c0;
        }
    }
    ctx->pc = 0x2DC4CCu;
label_2dc4cc:
    // 0x2dc4cc: 0x8e120044  lw          $s2, 0x44($s0)
    ctx->pc = 0x2dc4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2dc4d0:
    // 0x2dc4d0: 0x1240007b  beqz        $s2, . + 4 + (0x7B << 2)
label_2dc4d4:
    if (ctx->pc == 0x2DC4D4u) {
        ctx->pc = 0x2DC4D4u;
            // 0x2dc4d4: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DC4D8u;
        goto label_2dc4d8;
    }
    ctx->pc = 0x2DC4D0u;
    {
        const bool branch_taken_0x2dc4d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4D0u;
            // 0x2dc4d4: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4d0) {
            ctx->pc = 0x2DC6C0u;
            goto label_2dc6c0;
        }
    }
    ctx->pc = 0x2DC4D8u;
label_2dc4d8:
    // 0x2dc4d8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dc4dc:
    // 0x2dc4dc: 0x24638920  addiu       $v1, $v1, -0x76E0
    ctx->pc = 0x2dc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936864));
label_2dc4e0:
    // 0x2dc4e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2dc4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dc4e4:
    // 0x2dc4e4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2dc4e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dc4e8:
    // 0x2dc4e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc4ec:
    // 0x2dc4ec: 0xc050dc8  jal         func_143720
label_2dc4f0:
    if (ctx->pc == 0x2DC4F0u) {
        ctx->pc = 0x2DC4F0u;
            // 0x2dc4f0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2DC4F4u;
        goto label_2dc4f4;
    }
    ctx->pc = 0x2DC4ECu;
    SET_GPR_U32(ctx, 31, 0x2DC4F4u);
    ctx->pc = 0x2DC4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4ECu;
            // 0x2dc4f0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4F4u; }
        if (ctx->pc != 0x2DC4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4F4u; }
        if (ctx->pc != 0x2DC4F4u) { return; }
    }
    ctx->pc = 0x2DC4F4u;
label_2dc4f4:
    // 0x2dc4f4: 0xc050dbc  jal         func_1436F0
label_2dc4f8:
    if (ctx->pc == 0x2DC4F8u) {
        ctx->pc = 0x2DC4F8u;
            // 0x2dc4f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4FCu;
        goto label_2dc4fc;
    }
    ctx->pc = 0x2DC4F4u;
    SET_GPR_U32(ctx, 31, 0x2DC4FCu);
    ctx->pc = 0x2DC4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4F4u;
            // 0x2dc4f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1436F0u;
    if (runtime->hasFunction(0x1436F0u)) {
        auto targetFn = runtime->lookupFunction(0x1436F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4FCu; }
        if (ctx->pc != 0x2DC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitActiveLighting__Fv_0x1436f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4FCu; }
        if (ctx->pc != 0x2DC4FCu) { return; }
    }
    ctx->pc = 0x2DC4FCu;
label_2dc4fc:
    // 0x2dc4fc: 0xc050dec  jal         func_1437B0
label_2dc500:
    if (ctx->pc == 0x2DC500u) {
        ctx->pc = 0x2DC500u;
            // 0x2dc500: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DC504u;
        goto label_2dc504;
    }
    ctx->pc = 0x2DC4FCu;
    SET_GPR_U32(ctx, 31, 0x2DC504u);
    ctx->pc = 0x2DC500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4FCu;
            // 0x2dc500: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC504u; }
        if (ctx->pc != 0x2DC504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC504u; }
        if (ctx->pc != 0x2DC504u) { return; }
    }
    ctx->pc = 0x2DC504u;
label_2dc504:
    // 0x2dc504: 0x8f849e54  lw          $a0, -0x61AC($gp)
    ctx->pc = 0x2dc504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942292)));
label_2dc508:
    // 0x2dc508: 0x8f829e58  lw          $v0, -0x61A8($gp)
    ctx->pc = 0x2dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942296)));
label_2dc50c:
    // 0x2dc50c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2dc50cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc510:
    // 0x2dc510: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_2dc514:
    if (ctx->pc == 0x2DC514u) {
        ctx->pc = 0x2DC514u;
            // 0x2dc514: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2DC518u;
        goto label_2dc518;
    }
    ctx->pc = 0x2DC510u;
    {
        const bool branch_taken_0x2dc510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC510u;
            // 0x2dc514: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc510) {
            ctx->pc = 0x2DC57Cu;
            goto label_2dc57c;
        }
    }
    ctx->pc = 0x2DC518u;
label_2dc518:
    // 0x2dc518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc51c:
    // 0x2dc51c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dc520:
    // 0x2dc520: 0x0  nop
    ctx->pc = 0x2dc520u;
    // NOP
label_2dc524:
    // 0x2dc524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dc524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dc528:
    // 0x2dc528: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2dc528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2dc52c:
    // 0x2dc52c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dc52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dc530:
    // 0x2dc530: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2dc530u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2dc534:
    // 0x2dc534: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2dc534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dc538:
    // 0x2dc538: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2dc538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2dc53c:
    // 0x2dc53c: 0x0  nop
    ctx->pc = 0x2dc53cu;
    // NOP
label_2dc540:
    // 0x2dc540: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2dc540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2dc544:
    // 0x2dc544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dc548:
    // 0x2dc548: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x2dc548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dc54c:
    // 0x2dc54c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2dc54cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2dc550:
    // 0x2dc550: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x2dc550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2dc554:
    // 0x2dc554: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2dc554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2dc558:
    // 0x2dc558: 0x0  nop
    ctx->pc = 0x2dc558u;
    // NOP
label_2dc55c:
    // 0x2dc55c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dc55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dc560:
    // 0x2dc560: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2dc564:
    if (ctx->pc == 0x2DC564u) {
        ctx->pc = 0x2DC564u;
            // 0x2dc564: 0x46006b01  sub.s       $f12, $f13, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x2DC568u;
        goto label_2dc568;
    }
    ctx->pc = 0x2DC560u;
    {
        const bool branch_taken_0x2dc560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC560u;
            // 0x2dc564: 0x46006b01  sub.s       $f12, $f13, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc560) {
            ctx->pc = 0x2DC57Cu;
            goto label_2dc57c;
        }
    }
    ctx->pc = 0x2DC568u;
label_2dc568:
    // 0x2dc568: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc56c:
    // 0x2dc56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc570:
    // 0x2dc570: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc574:
    // 0x2dc574: 0x320f809  jalr        $t9
label_2dc578:
    if (ctx->pc == 0x2DC578u) {
        ctx->pc = 0x2DC578u;
            // 0x2dc578: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC57Cu;
        goto label_2dc57c;
    }
    ctx->pc = 0x2DC574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC57Cu);
        ctx->pc = 0x2DC578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC574u;
            // 0x2dc578: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC57Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC57Cu; }
            if (ctx->pc != 0x2DC57Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC57Cu;
label_2dc57c:
    // 0x2dc57c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2dc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2dc580:
    // 0x2dc580: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2dc580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2dc584:
    // 0x2dc584: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2dc588:
    if (ctx->pc == 0x2DC588u) {
        ctx->pc = 0x2DC58Cu;
        goto label_2dc58c;
    }
    ctx->pc = 0x2DC584u;
    {
        const bool branch_taken_0x2dc584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc584) {
            ctx->pc = 0x2DC60Cu;
            goto label_2dc60c;
        }
    }
    ctx->pc = 0x2DC58Cu;
label_2dc58c:
    // 0x2dc58c: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_2dc590:
    if (ctx->pc == 0x2DC590u) {
        ctx->pc = 0x2DC594u;
        goto label_2dc594;
    }
    ctx->pc = 0x2DC58Cu;
    {
        const bool branch_taken_0x2dc58c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc58c) {
            ctx->pc = 0x2DC60Cu;
            goto label_2dc60c;
        }
    }
    ctx->pc = 0x2DC594u;
label_2dc594:
    // 0x2dc594: 0xc7819e30  lwc1        $f1, -0x61D0($gp)
    ctx->pc = 0x2dc594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc598:
    // 0x2dc598: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2dc59c:
    // 0x2dc59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc5a0:
    // 0x2dc5a0: 0x0  nop
    ctx->pc = 0x2dc5a0u;
    // NOP
label_2dc5a4:
    // 0x2dc5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc5a8:
    // 0x2dc5a8: 0x0  nop
    ctx->pc = 0x2dc5a8u;
    // NOP
label_2dc5ac:
    // 0x2dc5ac: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2dc5b0:
    if (ctx->pc == 0x2DC5B0u) {
        ctx->pc = 0x2DC5B4u;
        goto label_2dc5b4;
    }
    ctx->pc = 0x2DC5ACu;
    {
        const bool branch_taken_0x2dc5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc5ac) {
            ctx->pc = 0x2DC60Cu;
            goto label_2dc60c;
        }
    }
    ctx->pc = 0x2DC5B4u;
label_2dc5b4:
    // 0x2dc5b4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc5b8:
    // 0x2dc5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5bc:
    // 0x2dc5bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dc5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dc5c0:
    // 0x2dc5c0: 0x320f809  jalr        $t9
label_2dc5c4:
    if (ctx->pc == 0x2DC5C4u) {
        ctx->pc = 0x2DC5C4u;
            // 0x2dc5c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DC5C8u;
        goto label_2dc5c8;
    }
    ctx->pc = 0x2DC5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC5C8u);
        ctx->pc = 0x2DC5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5C0u;
            // 0x2dc5c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC5C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5C8u; }
            if (ctx->pc != 0x2DC5C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC5C8u;
label_2dc5c8:
    // 0x2dc5c8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc5cc:
    // 0x2dc5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5d0:
    // 0x2dc5d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2dc5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2dc5d4:
    // 0x2dc5d4: 0x320f809  jalr        $t9
label_2dc5d8:
    if (ctx->pc == 0x2DC5D8u) {
        ctx->pc = 0x2DC5D8u;
            // 0x2dc5d8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2DC5DCu;
        goto label_2dc5dc;
    }
    ctx->pc = 0x2DC5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC5DCu);
        ctx->pc = 0x2DC5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5D4u;
            // 0x2dc5d8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5DCu; }
            if (ctx->pc != 0x2DC5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC5DCu;
label_2dc5dc:
    // 0x2dc5dc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2dc5e0:
    // 0x2dc5e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5e4:
    // 0x2dc5e4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2dc5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2dc5e8:
    // 0x2dc5e8: 0xc059e98  jal         func_167A60
label_2dc5ec:
    if (ctx->pc == 0x2DC5ECu) {
        ctx->pc = 0x2DC5ECu;
            // 0x2dc5ec: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x2DC5F0u;
        goto label_2dc5f0;
    }
    ctx->pc = 0x2DC5E8u;
    SET_GPR_U32(ctx, 31, 0x2DC5F0u);
    ctx->pc = 0x2DC5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5E8u;
            // 0x2dc5ec: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5F0u; }
        if (ctx->pc != 0x2DC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5F0u; }
        if (ctx->pc != 0x2DC5F0u) { return; }
    }
    ctx->pc = 0x2DC5F0u;
label_2dc5f0:
    // 0x2dc5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5f4:
    // 0x2dc5f4: 0xc059e7c  jal         func_1679F0
label_2dc5f8:
    if (ctx->pc == 0x2DC5F8u) {
        ctx->pc = 0x2DC5F8u;
            // 0x2dc5f8: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x2DC5FCu;
        goto label_2dc5fc;
    }
    ctx->pc = 0x2DC5F4u;
    SET_GPR_U32(ctx, 31, 0x2DC5FCu);
    ctx->pc = 0x2DC5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5F4u;
            // 0x2dc5f8: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1679F0u;
    if (runtime->hasFunction(0x1679F0u)) {
        auto targetFn = runtime->lookupFunction(0x1679F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5FCu; }
        if (ctx->pc != 0x2DC5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFuncPoint__9CMapPartsFR15CFuncPointCheck_0x1679f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5FCu; }
        if (ctx->pc != 0x2DC5FCu) { return; }
    }
    ctx->pc = 0x2DC5FCu;
label_2dc5fc:
    // 0x2dc5fc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc600:
    // 0x2dc600: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2dc600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2dc604:
    // 0x2dc604: 0x320f809  jalr        $t9
label_2dc608:
    if (ctx->pc == 0x2DC608u) {
        ctx->pc = 0x2DC608u;
            // 0x2dc608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC60Cu;
        goto label_2dc60c;
    }
    ctx->pc = 0x2DC604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC60Cu);
        ctx->pc = 0x2DC608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC604u;
            // 0x2dc608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC60Cu; }
            if (ctx->pc != 0x2DC60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC60Cu;
label_2dc60c:
    // 0x2dc60c: 0x8f839e54  lw          $v1, -0x61AC($gp)
    ctx->pc = 0x2dc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942292)));
label_2dc610:
    // 0x2dc610: 0x8f829e58  lw          $v0, -0x61A8($gp)
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942296)));
label_2dc614:
    // 0x2dc614: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2dc614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc618:
    // 0x2dc618: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2dc61c:
    if (ctx->pc == 0x2DC61Cu) {
        ctx->pc = 0x2DC620u;
        goto label_2dc620;
    }
    ctx->pc = 0x2DC618u;
    {
        const bool branch_taken_0x2dc618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc618) {
            ctx->pc = 0x2DC654u;
            goto label_2dc654;
        }
    }
    ctx->pc = 0x2DC620u;
label_2dc620:
    // 0x2dc620: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2dc624:
    if (ctx->pc == 0x2DC624u) {
        ctx->pc = 0x2DC628u;
        goto label_2dc628;
    }
    ctx->pc = 0x2DC620u;
    {
        const bool branch_taken_0x2dc620 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc620) {
            ctx->pc = 0x2DC648u;
            goto label_2dc648;
        }
    }
    ctx->pc = 0x2DC628u;
label_2dc628:
    // 0x2dc628: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc62c:
    // 0x2dc62c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dc630:
    // 0x2dc630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc634:
    // 0x2dc634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc638:
    // 0x2dc638: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc63c:
    // 0x2dc63c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc640:
    // 0x2dc640: 0x320f809  jalr        $t9
label_2dc644:
    if (ctx->pc == 0x2DC644u) {
        ctx->pc = 0x2DC644u;
            // 0x2dc644: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC648u;
        goto label_2dc648;
    }
    ctx->pc = 0x2DC640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC648u);
        ctx->pc = 0x2DC644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC640u;
            // 0x2dc644: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC648u; }
            if (ctx->pc != 0x2DC648u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC648u;
label_2dc648:
    // 0x2dc648: 0x8f829e54  lw          $v0, -0x61AC($gp)
    ctx->pc = 0x2dc648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942292)));
label_2dc64c:
    // 0x2dc64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dc650:
    // 0x2dc650: 0xaf829e54  sw          $v0, -0x61AC($gp)
    ctx->pc = 0x2dc650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942292), GPR_U32(ctx, 2));
label_2dc654:
    // 0x2dc654: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_2dc658:
    if (ctx->pc == 0x2DC658u) {
        ctx->pc = 0x2DC658u;
            // 0x2dc658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC65Cu;
        goto label_2dc65c;
    }
    ctx->pc = 0x2DC654u;
    {
        const bool branch_taken_0x2dc654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC654u;
            // 0x2dc658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc654) {
            ctx->pc = 0x2DC6B8u;
            goto label_2dc6b8;
        }
    }
    ctx->pc = 0x2DC65Cu;
label_2dc65c:
    // 0x2dc65c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc660:
    // 0x2dc660: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dc660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc664:
    // 0x2dc664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc668:
    // 0x2dc668: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc668u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc66c:
    // 0x2dc66c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2dc66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2dc670:
    // 0x2dc670: 0x320f809  jalr        $t9
label_2dc674:
    if (ctx->pc == 0x2DC674u) {
        ctx->pc = 0x2DC674u;
            // 0x2dc674: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC678u;
        goto label_2dc678;
    }
    ctx->pc = 0x2DC670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC678u);
        ctx->pc = 0x2DC674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC670u;
            // 0x2dc674: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC678u; }
            if (ctx->pc != 0x2DC678u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC678u;
label_2dc678:
    // 0x2dc678: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc67c:
    // 0x2dc67c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dc67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc680:
    // 0x2dc680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc684:
    // 0x2dc684: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc688:
    // 0x2dc688: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2dc688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2dc68c:
    // 0x2dc68c: 0x320f809  jalr        $t9
label_2dc690:
    if (ctx->pc == 0x2DC690u) {
        ctx->pc = 0x2DC690u;
            // 0x2dc690: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC694u;
        goto label_2dc694;
    }
    ctx->pc = 0x2DC68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC694u);
        ctx->pc = 0x2DC690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC68Cu;
            // 0x2dc690: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC694u; }
            if (ctx->pc != 0x2DC694u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC694u;
label_2dc694:
    // 0x2dc694: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc698:
    // 0x2dc698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dc69c:
    // 0x2dc69c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc6a0:
    // 0x2dc6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc6a4:
    // 0x2dc6a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc6a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc6a8:
    // 0x2dc6a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc6ac:
    // 0x2dc6ac: 0x320f809  jalr        $t9
label_2dc6b0:
    if (ctx->pc == 0x2DC6B0u) {
        ctx->pc = 0x2DC6B0u;
            // 0x2dc6b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC6B4u;
        goto label_2dc6b4;
    }
    ctx->pc = 0x2DC6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC6B4u);
        ctx->pc = 0x2DC6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6ACu;
            // 0x2dc6b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC6B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6B4u; }
            if (ctx->pc != 0x2DC6B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC6B4u;
label_2dc6b4:
    // 0x2dc6b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc6b8:
    // 0x2dc6b8: 0xc050dc8  jal         func_143720
label_2dc6bc:
    if (ctx->pc == 0x2DC6BCu) {
        ctx->pc = 0x2DC6BCu;
            // 0x2dc6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6C0u;
        goto label_2dc6c0;
    }
    ctx->pc = 0x2DC6B8u;
    SET_GPR_U32(ctx, 31, 0x2DC6C0u);
    ctx->pc = 0x2DC6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6B8u;
            // 0x2dc6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6C0u; }
        if (ctx->pc != 0x2DC6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6C0u; }
        if (ctx->pc != 0x2DC6C0u) { return; }
    }
    ctx->pc = 0x2DC6C0u;
label_2dc6c0:
    // 0x2dc6c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc6c4:
    // 0x2dc6c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc6c8:
    // 0x2dc6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc6cc:
    // 0x2dc6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc6d0:
    // 0x2dc6d0: 0x3e00008  jr          $ra
label_2dc6d4:
    if (ctx->pc == 0x2DC6D4u) {
        ctx->pc = 0x2DC6D4u;
            // 0x2dc6d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2DC6D8u;
        goto label_fallthrough_0x2dc6d0;
    }
    ctx->pc = 0x2DC6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6D0u;
            // 0x2dc6d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dc6d0:
    ctx->pc = 0x2DC6D8u;
}
