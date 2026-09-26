#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CStarEffectFv
// Address: 0x2fb3a0 - 0x2fb670
void Draw__11CStarEffectFv_0x2fb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CStarEffectFv_0x2fb3a0");
#endif

    switch (ctx->pc) {
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3a4u: goto label_2fb3a4;
        case 0x2fb3a8u: goto label_2fb3a8;
        case 0x2fb3acu: goto label_2fb3ac;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3b4u: goto label_2fb3b4;
        case 0x2fb3b8u: goto label_2fb3b8;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c0u: goto label_2fb3c0;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb3c8u: goto label_2fb3c8;
        case 0x2fb3ccu: goto label_2fb3cc;
        case 0x2fb3d0u: goto label_2fb3d0;
        case 0x2fb3d4u: goto label_2fb3d4;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb3dcu: goto label_2fb3dc;
        case 0x2fb3e0u: goto label_2fb3e0;
        case 0x2fb3e4u: goto label_2fb3e4;
        case 0x2fb3e8u: goto label_2fb3e8;
        case 0x2fb3ecu: goto label_2fb3ec;
        case 0x2fb3f0u: goto label_2fb3f0;
        case 0x2fb3f4u: goto label_2fb3f4;
        case 0x2fb3f8u: goto label_2fb3f8;
        case 0x2fb3fcu: goto label_2fb3fc;
        case 0x2fb400u: goto label_2fb400;
        case 0x2fb404u: goto label_2fb404;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb40cu: goto label_2fb40c;
        case 0x2fb410u: goto label_2fb410;
        case 0x2fb414u: goto label_2fb414;
        case 0x2fb418u: goto label_2fb418;
        case 0x2fb41cu: goto label_2fb41c;
        case 0x2fb420u: goto label_2fb420;
        case 0x2fb424u: goto label_2fb424;
        case 0x2fb428u: goto label_2fb428;
        case 0x2fb42cu: goto label_2fb42c;
        case 0x2fb430u: goto label_2fb430;
        case 0x2fb434u: goto label_2fb434;
        case 0x2fb438u: goto label_2fb438;
        case 0x2fb43cu: goto label_2fb43c;
        case 0x2fb440u: goto label_2fb440;
        case 0x2fb444u: goto label_2fb444;
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb44cu: goto label_2fb44c;
        case 0x2fb450u: goto label_2fb450;
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb458u: goto label_2fb458;
        case 0x2fb45cu: goto label_2fb45c;
        case 0x2fb460u: goto label_2fb460;
        case 0x2fb464u: goto label_2fb464;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb46cu: goto label_2fb46c;
        case 0x2fb470u: goto label_2fb470;
        case 0x2fb474u: goto label_2fb474;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb47cu: goto label_2fb47c;
        case 0x2fb480u: goto label_2fb480;
        case 0x2fb484u: goto label_2fb484;
        case 0x2fb488u: goto label_2fb488;
        case 0x2fb48cu: goto label_2fb48c;
        case 0x2fb490u: goto label_2fb490;
        case 0x2fb494u: goto label_2fb494;
        case 0x2fb498u: goto label_2fb498;
        case 0x2fb49cu: goto label_2fb49c;
        case 0x2fb4a0u: goto label_2fb4a0;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4a8u: goto label_2fb4a8;
        case 0x2fb4acu: goto label_2fb4ac;
        case 0x2fb4b0u: goto label_2fb4b0;
        case 0x2fb4b4u: goto label_2fb4b4;
        case 0x2fb4b8u: goto label_2fb4b8;
        case 0x2fb4bcu: goto label_2fb4bc;
        case 0x2fb4c0u: goto label_2fb4c0;
        case 0x2fb4c4u: goto label_2fb4c4;
        case 0x2fb4c8u: goto label_2fb4c8;
        case 0x2fb4ccu: goto label_2fb4cc;
        case 0x2fb4d0u: goto label_2fb4d0;
        case 0x2fb4d4u: goto label_2fb4d4;
        case 0x2fb4d8u: goto label_2fb4d8;
        case 0x2fb4dcu: goto label_2fb4dc;
        case 0x2fb4e0u: goto label_2fb4e0;
        case 0x2fb4e4u: goto label_2fb4e4;
        case 0x2fb4e8u: goto label_2fb4e8;
        case 0x2fb4ecu: goto label_2fb4ec;
        case 0x2fb4f0u: goto label_2fb4f0;
        case 0x2fb4f4u: goto label_2fb4f4;
        case 0x2fb4f8u: goto label_2fb4f8;
        case 0x2fb4fcu: goto label_2fb4fc;
        case 0x2fb500u: goto label_2fb500;
        case 0x2fb504u: goto label_2fb504;
        case 0x2fb508u: goto label_2fb508;
        case 0x2fb50cu: goto label_2fb50c;
        case 0x2fb510u: goto label_2fb510;
        case 0x2fb514u: goto label_2fb514;
        case 0x2fb518u: goto label_2fb518;
        case 0x2fb51cu: goto label_2fb51c;
        case 0x2fb520u: goto label_2fb520;
        case 0x2fb524u: goto label_2fb524;
        case 0x2fb528u: goto label_2fb528;
        case 0x2fb52cu: goto label_2fb52c;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb534u: goto label_2fb534;
        case 0x2fb538u: goto label_2fb538;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb540u: goto label_2fb540;
        case 0x2fb544u: goto label_2fb544;
        case 0x2fb548u: goto label_2fb548;
        case 0x2fb54cu: goto label_2fb54c;
        case 0x2fb550u: goto label_2fb550;
        case 0x2fb554u: goto label_2fb554;
        case 0x2fb558u: goto label_2fb558;
        case 0x2fb55cu: goto label_2fb55c;
        case 0x2fb560u: goto label_2fb560;
        case 0x2fb564u: goto label_2fb564;
        case 0x2fb568u: goto label_2fb568;
        case 0x2fb56cu: goto label_2fb56c;
        case 0x2fb570u: goto label_2fb570;
        case 0x2fb574u: goto label_2fb574;
        case 0x2fb578u: goto label_2fb578;
        case 0x2fb57cu: goto label_2fb57c;
        case 0x2fb580u: goto label_2fb580;
        case 0x2fb584u: goto label_2fb584;
        case 0x2fb588u: goto label_2fb588;
        case 0x2fb58cu: goto label_2fb58c;
        case 0x2fb590u: goto label_2fb590;
        case 0x2fb594u: goto label_2fb594;
        case 0x2fb598u: goto label_2fb598;
        case 0x2fb59cu: goto label_2fb59c;
        case 0x2fb5a0u: goto label_2fb5a0;
        case 0x2fb5a4u: goto label_2fb5a4;
        case 0x2fb5a8u: goto label_2fb5a8;
        case 0x2fb5acu: goto label_2fb5ac;
        case 0x2fb5b0u: goto label_2fb5b0;
        case 0x2fb5b4u: goto label_2fb5b4;
        case 0x2fb5b8u: goto label_2fb5b8;
        case 0x2fb5bcu: goto label_2fb5bc;
        case 0x2fb5c0u: goto label_2fb5c0;
        case 0x2fb5c4u: goto label_2fb5c4;
        case 0x2fb5c8u: goto label_2fb5c8;
        case 0x2fb5ccu: goto label_2fb5cc;
        case 0x2fb5d0u: goto label_2fb5d0;
        case 0x2fb5d4u: goto label_2fb5d4;
        case 0x2fb5d8u: goto label_2fb5d8;
        case 0x2fb5dcu: goto label_2fb5dc;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb5e4u: goto label_2fb5e4;
        case 0x2fb5e8u: goto label_2fb5e8;
        case 0x2fb5ecu: goto label_2fb5ec;
        case 0x2fb5f0u: goto label_2fb5f0;
        case 0x2fb5f4u: goto label_2fb5f4;
        case 0x2fb5f8u: goto label_2fb5f8;
        case 0x2fb5fcu: goto label_2fb5fc;
        case 0x2fb600u: goto label_2fb600;
        case 0x2fb604u: goto label_2fb604;
        case 0x2fb608u: goto label_2fb608;
        case 0x2fb60cu: goto label_2fb60c;
        case 0x2fb610u: goto label_2fb610;
        case 0x2fb614u: goto label_2fb614;
        case 0x2fb618u: goto label_2fb618;
        case 0x2fb61cu: goto label_2fb61c;
        case 0x2fb620u: goto label_2fb620;
        case 0x2fb624u: goto label_2fb624;
        case 0x2fb628u: goto label_2fb628;
        case 0x2fb62cu: goto label_2fb62c;
        case 0x2fb630u: goto label_2fb630;
        case 0x2fb634u: goto label_2fb634;
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb63cu: goto label_2fb63c;
        case 0x2fb640u: goto label_2fb640;
        case 0x2fb644u: goto label_2fb644;
        case 0x2fb648u: goto label_2fb648;
        case 0x2fb64cu: goto label_2fb64c;
        case 0x2fb650u: goto label_2fb650;
        case 0x2fb654u: goto label_2fb654;
        case 0x2fb658u: goto label_2fb658;
        case 0x2fb65cu: goto label_2fb65c;
        case 0x2fb660u: goto label_2fb660;
        case 0x2fb664u: goto label_2fb664;
        case 0x2fb668u: goto label_2fb668;
        case 0x2fb66cu: goto label_2fb66c;
        default: break;
    }

    ctx->pc = 0x2fb3a0u;

label_2fb3a0:
    // 0x2fb3a0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2fb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2fb3a4:
    // 0x2fb3a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2fb3a8:
    // 0x2fb3a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fb3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2fb3ac:
    // 0x2fb3ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fb3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fb3b0:
    // 0x2fb3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fb3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fb3b4:
    // 0x2fb3b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fb3b8:
    // 0x2fb3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fb3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fb3bc:
    // 0x2fb3bc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fb3c0:
    // 0x2fb3c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2fb3c4:
    if (ctx->pc == 0x2FB3C4u) {
        ctx->pc = 0x2FB3C4u;
            // 0x2fb3c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3C8u;
        goto label_2fb3c8;
    }
    ctx->pc = 0x2FB3C0u;
    {
        const bool branch_taken_0x2fb3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3C0u;
            // 0x2fb3c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3c0) {
            ctx->pc = 0x2FB3D4u;
            goto label_2fb3d4;
        }
    }
    ctx->pc = 0x2FB3C8u;
label_2fb3c8:
    // 0x2fb3c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb3cc:
    // 0x2fb3cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2fb3d0:
    if (ctx->pc == 0x2FB3D0u) {
        ctx->pc = 0x2FB3D4u;
        goto label_2fb3d4;
    }
    ctx->pc = 0x2FB3CCu;
    {
        const bool branch_taken_0x2fb3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb3cc) {
            ctx->pc = 0x2FB3DCu;
            goto label_2fb3dc;
        }
    }
    ctx->pc = 0x2FB3D4u;
label_2fb3d4:
    // 0x2fb3d4: 0x1000009e  b           . + 4 + (0x9E << 2)
label_2fb3d8:
    if (ctx->pc == 0x2FB3D8u) {
        ctx->pc = 0x2FB3D8u;
            // 0x2fb3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3DCu;
        goto label_2fb3dc;
    }
    ctx->pc = 0x2FB3D4u;
    {
        const bool branch_taken_0x2fb3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3D4u;
            // 0x2fb3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3d4) {
            ctx->pc = 0x2FB650u;
            goto label_2fb650;
        }
    }
    ctx->pc = 0x2FB3DCu;
label_2fb3dc:
    // 0x2fb3dc: 0x8e7900bc  lw          $t9, 0xBC($s3)
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2fb3e0:
    // 0x2fb3e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fb3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fb3e4:
    // 0x2fb3e4: 0x320f809  jalr        $t9
label_2fb3e8:
    if (ctx->pc == 0x2FB3E8u) {
        ctx->pc = 0x2FB3E8u;
            // 0x2fb3e8: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2FB3ECu;
        goto label_2fb3ec;
    }
    ctx->pc = 0x2FB3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FB3ECu);
        ctx->pc = 0x2FB3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3E4u;
            // 0x2fb3e8: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FB3ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FB3ECu; }
            if (ctx->pc != 0x2FB3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2FB3ECu;
label_2fb3ec:
    // 0x2fb3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fb3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb3f0:
    // 0x2fb3f0: 0xc051150  jal         func_144540
label_2fb3f4:
    if (ctx->pc == 0x2FB3F4u) {
        ctx->pc = 0x2FB3F4u;
            // 0x2fb3f4: 0x267000a0  addiu       $s0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2FB3F8u;
        goto label_2fb3f8;
    }
    ctx->pc = 0x2FB3F0u;
    SET_GPR_U32(ctx, 31, 0x2FB3F8u);
    ctx->pc = 0x2FB3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3F0u;
            // 0x2fb3f4: 0x267000a0  addiu       $s0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB3F8u; }
        if (ctx->pc != 0x2FB3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB3F8u; }
        if (ctx->pc != 0x2FB3F8u) { return; }
    }
    ctx->pc = 0x2FB3F8u;
label_2fb3f8:
    // 0x2fb3f8: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2fb3f8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb3fc:
    // 0x2fb3fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fb400:
    // 0x2fb400: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2fb400u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2fb404:
    // 0x2fb404: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2fb404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fb408:
    // 0x2fb408: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x2fb408u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2fb40c:
    // 0x2fb40c: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fb410:
    // 0x2fb410: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2fb410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fb414:
    // 0x2fb414: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2fb414u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2fb418:
    // 0x2fb418: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2fb418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2fb41c:
    // 0x2fb41c: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2fb41cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2fb420:
    // 0x2fb420: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fb420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fb424:
    // 0x2fb424: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2fb424u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
label_2fb428:
    // 0x2fb428: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2fb428u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_2fb42c:
    // 0x2fb42c: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2fb42cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2fb430:
    // 0x2fb430: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2fb430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_2fb434:
    // 0x2fb434: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2fb434u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_2fb438:
    // 0x2fb438: 0xffaa0078  sd          $t2, 0x78($sp)
    ctx->pc = 0x2fb438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 10));
label_2fb43c:
    // 0x2fb43c: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2fb43cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2fb440:
    // 0x2fb440: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2fb440u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
label_2fb444:
    // 0x2fb444: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2fb444u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_2fb448:
    // 0x2fb448: 0xffaa0088  sd          $t2, 0x88($sp)
    ctx->pc = 0x2fb448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 10));
label_2fb44c:
    // 0x2fb44c: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2fb44cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_2fb450:
    // 0x2fb450: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2fb450u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
label_2fb454:
    // 0x2fb454: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2fb454u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2fb458:
    // 0x2fb458: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x2fb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
label_2fb45c:
    // 0x2fb45c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2fb45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2fb460:
    // 0x2fb460: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2fb460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2fb464:
    // 0x2fb464: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2fb464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2fb468:
    // 0x2fb468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2fb468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2fb46c:
    // 0x2fb46c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2fb46cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2fb470:
    // 0x2fb470: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2fb470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2fb474:
    // 0x2fb474: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fb474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2fb478:
    // 0x2fb478: 0xc04e290  jal         func_138A40
label_2fb47c:
    if (ctx->pc == 0x2FB47Cu) {
        ctx->pc = 0x2FB47Cu;
            // 0x2fb47c: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FB480u;
        goto label_2fb480;
    }
    ctx->pc = 0x2FB478u;
    SET_GPR_U32(ctx, 31, 0x2FB480u);
    ctx->pc = 0x2FB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB478u;
            // 0x2fb47c: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB480u; }
        if (ctx->pc != 0x2FB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB480u; }
        if (ctx->pc != 0x2FB480u) { return; }
    }
    ctx->pc = 0x2FB480u;
label_2fb480:
    // 0x2fb480: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fb484:
    // 0x2fb484: 0xc04e25c  jal         func_138970
label_2fb488:
    if (ctx->pc == 0x2FB488u) {
        ctx->pc = 0x2FB488u;
            // 0x2fb488: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FB48Cu;
        goto label_2fb48c;
    }
    ctx->pc = 0x2FB484u;
    SET_GPR_U32(ctx, 31, 0x2FB48Cu);
    ctx->pc = 0x2FB488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB484u;
            // 0x2fb488: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB48Cu; }
        if (ctx->pc != 0x2FB48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB48Cu; }
        if (ctx->pc != 0x2FB48Cu) { return; }
    }
    ctx->pc = 0x2FB48Cu;
label_2fb48c:
    // 0x2fb48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb490:
    // 0x2fb490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fb490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb494:
    // 0x2fb494: 0xc04ec68  jal         func_13B1A0
label_2fb498:
    if (ctx->pc == 0x2FB498u) {
        ctx->pc = 0x2FB498u;
            // 0x2fb498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB49Cu;
        goto label_2fb49c;
    }
    ctx->pc = 0x2FB494u;
    SET_GPR_U32(ctx, 31, 0x2FB49Cu);
    ctx->pc = 0x2FB498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB494u;
            // 0x2fb498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB49Cu; }
        if (ctx->pc != 0x2FB49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB49Cu; }
        if (ctx->pc != 0x2FB49Cu) { return; }
    }
    ctx->pc = 0x2FB49Cu;
label_2fb49c:
    // 0x2fb49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4a0:
    // 0x2fb4a0: 0xc04ec80  jal         func_13B200
label_2fb4a4:
    if (ctx->pc == 0x2FB4A4u) {
        ctx->pc = 0x2FB4A4u;
            // 0x2fb4a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FB4A8u;
        goto label_2fb4a8;
    }
    ctx->pc = 0x2FB4A0u;
    SET_GPR_U32(ctx, 31, 0x2FB4A8u);
    ctx->pc = 0x2FB4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4A0u;
            // 0x2fb4a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4A8u; }
        if (ctx->pc != 0x2FB4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4A8u; }
        if (ctx->pc != 0x2FB4A8u) { return; }
    }
    ctx->pc = 0x2FB4A8u;
label_2fb4a8:
    // 0x2fb4a8: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x2fb4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_2fb4ac:
    // 0x2fb4ac: 0xc04ecbc  jal         func_13B2F0
label_2fb4b0:
    if (ctx->pc == 0x2FB4B0u) {
        ctx->pc = 0x2FB4B0u;
            // 0x2fb4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B4u;
        goto label_2fb4b4;
    }
    ctx->pc = 0x2FB4ACu;
    SET_GPR_U32(ctx, 31, 0x2FB4B4u);
    ctx->pc = 0x2FB4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4ACu;
            // 0x2fb4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4B4u; }
        if (ctx->pc != 0x2FB4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4B4u; }
        if (ctx->pc != 0x2FB4B4u) { return; }
    }
    ctx->pc = 0x2FB4B4u;
label_2fb4b4:
    // 0x2fb4b4: 0xc04ecd8  jal         func_13B360
label_2fb4b8:
    if (ctx->pc == 0x2FB4B8u) {
        ctx->pc = 0x2FB4B8u;
            // 0x2fb4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4BCu;
        goto label_2fb4bc;
    }
    ctx->pc = 0x2FB4B4u;
    SET_GPR_U32(ctx, 31, 0x2FB4BCu);
    ctx->pc = 0x2FB4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4B4u;
            // 0x2fb4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4BCu; }
        if (ctx->pc != 0x2FB4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4BCu; }
        if (ctx->pc != 0x2FB4BCu) { return; }
    }
    ctx->pc = 0x2FB4BCu;
label_2fb4bc:
    // 0x2fb4bc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2fb4c0:
    // 0x2fb4c0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_2fb4c4:
    // 0x2fb4c4: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x2fb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
label_2fb4c8:
    // 0x2fb4c8: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x2fb4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
label_2fb4cc:
    // 0x2fb4cc: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x2fb4ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb4d0:
    // 0x2fb4d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2fb4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fb4d4:
    // 0x2fb4d4: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x2fb4d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2fb4d8:
    // 0x2fb4d8: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x2fb4d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fb4dc:
    // 0x2fb4dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2fb4e0:
    // 0x2fb4e0: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2fb4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_2fb4e4:
    // 0x2fb4e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fb4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fb4e8:
    // 0x2fb4e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2fb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_2fb4ec:
    // 0x2fb4ec: 0x2529d1c0  addiu       $t1, $t1, -0x2E40
    ctx->pc = 0x2fb4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955456));
label_2fb4f0:
    // 0x2fb4f0: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2fb4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fb4f4:
    // 0x2fb4f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2fb4f8:
    // 0x2fb4f8: 0x24e7d1e0  addiu       $a3, $a3, -0x2E20
    ctx->pc = 0x2fb4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955488));
label_2fb4fc:
    // 0x2fb4fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fb500:
    // 0x2fb500: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2fb500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fb504:
    // 0x2fb504: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x2fb504u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
label_2fb508:
    // 0x2fb508: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2fb508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_2fb50c:
    // 0x2fb50c: 0x7d650010  sq          $a1, 0x10($t3)
    ctx->pc = 0x2fb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 5));
label_2fb510:
    // 0x2fb510: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2fb510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2fb514:
    // 0x2fb514: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x2fb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb518:
    // 0x2fb518: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2fb518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_2fb51c:
    // 0x2fb51c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2fb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2fb520:
    // 0x2fb520: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fb520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb524:
    // 0x2fb524: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fb524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb528:
    // 0x2fb528: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2fb528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2fb52c:
    // 0x2fb52c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2fb52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2fb530:
    // 0x2fb530: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x2fb530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb534:
    // 0x2fb534: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2fb534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2fb538:
    // 0x2fb538: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2fb538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2fb53c:
    // 0x2fb53c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x2fb53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb540:
    // 0x2fb540: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2fb540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2fb544:
    // 0x2fb544: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x2fb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb548:
    // 0x2fb548: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2fb548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2fb54c:
    // 0x2fb54c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2fb54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2fb550:
    // 0x2fb550: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x2fb550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb554:
    // 0x2fb554: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2fb554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2fb558:
    // 0x2fb558: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2fb558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2fb55c:
    // 0x2fb55c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x2fb55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb560:
    // 0x2fb560: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2fb560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2fb564:
    // 0x2fb564: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2fb564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2fb568:
    // 0x2fb568: 0x79250000  lq          $a1, 0x0($t1)
    ctx->pc = 0x2fb568u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2fb56c:
    // 0x2fb56c: 0x79220010  lq          $v0, 0x10($t1)
    ctx->pc = 0x2fb56cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 16)));
label_2fb570:
    // 0x2fb570: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x2fb570u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_2fb574:
    // 0x2fb574: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x2fb574u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
label_2fb578:
    // 0x2fb578: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2fb578u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2fb57c:
    // 0x2fb57c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2fb57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2fb580:
    // 0x2fb580: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2fb580u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_2fb584:
    // 0x2fb584: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2fb584u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_2fb588:
    // 0x2fb588: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2fb588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb58c:
    // 0x2fb58c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2fb58cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2fb590:
    // 0x2fb590: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x2fb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb594:
    // 0x2fb594: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fb594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fb598:
    // 0x2fb598: 0x10000015  b           . + 4 + (0x15 << 2)
label_2fb59c:
    if (ctx->pc == 0x2FB59Cu) {
        ctx->pc = 0x2FB59Cu;
            // 0x2fb59c: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x2FB5A0u;
        goto label_2fb5a0;
    }
    ctx->pc = 0x2FB598u;
    {
        const bool branch_taken_0x2fb598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB598u;
            // 0x2fb59c: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb598) {
            ctx->pc = 0x2FB5F0u;
            goto label_2fb5f0;
        }
    }
    ctx->pc = 0x2FB5A0u;
label_2fb5a0:
    // 0x2fb5a0: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x2fb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_2fb5a4:
    // 0x2fb5a4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2fb5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2fb5a8:
    // 0x2fb5a8: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x2fb5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2fb5ac:
    // 0x2fb5ac: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x2fb5acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2fb5b0:
    // 0x2fb5b0: 0xc041c44  jal         func_107110
label_2fb5b4:
    if (ctx->pc == 0x2FB5B4u) {
        ctx->pc = 0x2FB5B4u;
            // 0x2fb5b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5B8u;
        goto label_2fb5b8;
    }
    ctx->pc = 0x2FB5B0u;
    SET_GPR_U32(ctx, 31, 0x2FB5B8u);
    ctx->pc = 0x2FB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5B0u;
            // 0x2fb5b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107110u;
    if (runtime->hasFunction(0x107110u)) {
        auto targetFn = runtime->lookupFunction(0x107110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5B8u; }
        if (ctx->pc != 0x2FB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulVector_0x107110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5B8u; }
        if (ctx->pc != 0x2FB5B8u) { return; }
    }
    ctx->pc = 0x2FB5B8u;
label_2fb5b8:
    // 0x2fb5b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fb5bc:
    // 0x2fb5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5c0:
    // 0x2fb5c0: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2fb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2fb5c4:
    // 0x2fb5c4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2fb5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2fb5c8:
    // 0x2fb5c8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2fb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2fb5cc:
    // 0x2fb5cc: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x2fb5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2fb5d0:
    // 0x2fb5d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2fb5d4:
    // 0x2fb5d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2fb5d8:
    // 0x2fb5d8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2fb5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2fb5dc:
    // 0x2fb5dc: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x2fb5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2fb5e0:
    // 0x2fb5e0: 0xc04ed64  jal         func_13B590
label_2fb5e4:
    if (ctx->pc == 0x2FB5E4u) {
        ctx->pc = 0x2FB5E4u;
            // 0x2fb5e4: 0x244900e0  addiu       $t1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->pc = 0x2FB5E8u;
        goto label_2fb5e8;
    }
    ctx->pc = 0x2FB5E0u;
    SET_GPR_U32(ctx, 31, 0x2FB5E8u);
    ctx->pc = 0x2FB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5E0u;
            // 0x2fb5e4: 0x244900e0  addiu       $t1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5E8u; }
        if (ctx->pc != 0x2FB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5E8u; }
        if (ctx->pc != 0x2FB5E8u) { return; }
    }
    ctx->pc = 0x2FB5E8u;
label_2fb5e8:
    // 0x2fb5e8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2fb5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2fb5ec:
    // 0x2fb5ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fb5f0:
    // 0x2fb5f0: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x2fb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_2fb5f4:
    // 0x2fb5f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fb5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fb5f8:
    // 0x2fb5f8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2fb5fc:
    if (ctx->pc == 0x2FB5FCu) {
        ctx->pc = 0x2FB5FCu;
            // 0x2fb5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB600u;
        goto label_2fb600;
    }
    ctx->pc = 0x2FB5F8u;
    {
        const bool branch_taken_0x2fb5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5F8u;
            // 0x2fb5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5f8) {
            ctx->pc = 0x2FB5A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb5a0;
        }
    }
    ctx->pc = 0x2FB600u;
label_2fb600:
    // 0x2fb600: 0xc04edb0  jal         func_13B6C0
label_2fb604:
    if (ctx->pc == 0x2FB604u) {
        ctx->pc = 0x2FB608u;
        goto label_2fb608;
    }
    ctx->pc = 0x2FB600u;
    SET_GPR_U32(ctx, 31, 0x2FB608u);
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB608u; }
        if (ctx->pc != 0x2FB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB608u; }
        if (ctx->pc != 0x2FB608u) { return; }
    }
    ctx->pc = 0x2FB608u;
label_2fb608:
    // 0x2fb608: 0xc04edfc  jal         func_13B7F0
label_2fb60c:
    if (ctx->pc == 0x2FB60Cu) {
        ctx->pc = 0x2FB60Cu;
            // 0x2fb60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB610u;
        goto label_2fb610;
    }
    ctx->pc = 0x2FB608u;
    SET_GPR_U32(ctx, 31, 0x2FB610u);
    ctx->pc = 0x2FB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB608u;
            // 0x2fb60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB610u; }
        if (ctx->pc != 0x2FB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB610u; }
        if (ctx->pc != 0x2FB610u) { return; }
    }
    ctx->pc = 0x2FB610u;
label_2fb610:
    // 0x2fb610: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x2fb610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fb614:
    // 0x2fb614: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2fb618:
    // 0x2fb618: 0xc04c154  jal         func_130550
label_2fb61c:
    if (ctx->pc == 0x2FB61Cu) {
        ctx->pc = 0x2FB61Cu;
            // 0x2fb61c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2FB620u;
        goto label_2fb620;
    }
    ctx->pc = 0x2FB618u;
    SET_GPR_U32(ctx, 31, 0x2FB620u);
    ctx->pc = 0x2FB61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB618u;
            // 0x2fb61c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB620u; }
        if (ctx->pc != 0x2FB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB620u; }
        if (ctx->pc != 0x2FB620u) { return; }
    }
    ctx->pc = 0x2FB620u;
label_2fb620:
    // 0x2fb620: 0xc050e3c  jal         func_1438F0
label_2fb624:
    if (ctx->pc == 0x2FB624u) {
        ctx->pc = 0x2FB628u;
        goto label_2fb628;
    }
    ctx->pc = 0x2FB620u;
    SET_GPR_U32(ctx, 31, 0x2FB628u);
    ctx->pc = 0x1438F0u;
    if (runtime->hasFunction(0x1438F0u)) {
        auto targetFn = runtime->lookupFunction(0x1438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB628u; }
        if (ctx->pc != 0x2FB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFogEnable__Fv_0x1438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB628u; }
        if (ctx->pc != 0x2FB628u) { return; }
    }
    ctx->pc = 0x2FB628u;
label_2fb628:
    // 0x2fb628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fb628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb62c:
    // 0x2fb62c: 0xc050e38  jal         func_1438E0
label_2fb630:
    if (ctx->pc == 0x2FB630u) {
        ctx->pc = 0x2FB630u;
            // 0x2fb630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB634u;
        goto label_2fb634;
    }
    ctx->pc = 0x2FB62Cu;
    SET_GPR_U32(ctx, 31, 0x2FB634u);
    ctx->pc = 0x2FB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB62Cu;
            // 0x2fb630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB634u; }
        if (ctx->pc != 0x2FB634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB634u; }
        if (ctx->pc != 0x2FB634u) { return; }
    }
    ctx->pc = 0x2FB634u;
label_2fb634:
    // 0x2fb634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb638:
    // 0x2fb638: 0xc050c10  jal         func_143040
label_2fb63c:
    if (ctx->pc == 0x2FB63Cu) {
        ctx->pc = 0x2FB63Cu;
            // 0x2fb63c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2FB640u;
        goto label_2fb640;
    }
    ctx->pc = 0x2FB638u;
    SET_GPR_U32(ctx, 31, 0x2FB640u);
    ctx->pc = 0x2FB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB638u;
            // 0x2fb63c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143040u;
    if (runtime->hasFunction(0x143040u)) {
        auto targetFn = runtime->lookupFunction(0x143040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB640u; }
        if (ctx->pc != 0x2FB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP9mgCVisualPA4_f_0x143040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB640u; }
        if (ctx->pc != 0x2FB640u) { return; }
    }
    ctx->pc = 0x2FB640u;
label_2fb640:
    // 0x2fb640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb644:
    // 0x2fb644: 0xc050e38  jal         func_1438E0
label_2fb648:
    if (ctx->pc == 0x2FB648u) {
        ctx->pc = 0x2FB648u;
            // 0x2fb648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB64Cu;
        goto label_2fb64c;
    }
    ctx->pc = 0x2FB644u;
    SET_GPR_U32(ctx, 31, 0x2FB64Cu);
    ctx->pc = 0x2FB648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB644u;
            // 0x2fb648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB64Cu; }
        if (ctx->pc != 0x2FB64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB64Cu; }
        if (ctx->pc != 0x2FB64Cu) { return; }
    }
    ctx->pc = 0x2FB64Cu;
label_2fb64c:
    // 0x2fb64c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fb64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb650:
    // 0x2fb650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2fb650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fb654:
    // 0x2fb654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fb654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fb658:
    // 0x2fb658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fb658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb65c:
    // 0x2fb65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fb65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb660:
    // 0x2fb660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb664:
    // 0x2fb664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fb664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb668:
    // 0x2fb668: 0x3e00008  jr          $ra
label_2fb66c:
    if (ctx->pc == 0x2FB66Cu) {
        ctx->pc = 0x2FB66Cu;
            // 0x2fb66c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2FB670u;
        goto label_fallthrough_0x2fb668;
    }
    ctx->pc = 0x2FB668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB668u;
            // 0x2fb66c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fb668:
    ctx->pc = 0x2FB670u;
}
