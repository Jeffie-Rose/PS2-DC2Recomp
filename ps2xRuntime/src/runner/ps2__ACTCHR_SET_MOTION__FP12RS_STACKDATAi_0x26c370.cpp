#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ACTCHR_SET_MOTION__FP12RS_STACKDATAi
// Address: 0x26c370 - 0x26c620
void ps2__ACTCHR_SET_MOTION__FP12RS_STACKDATAi_0x26c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ACTCHR_SET_MOTION__FP12RS_STACKDATAi_0x26c370");
#endif

    switch (ctx->pc) {
        case 0x26c370u: goto label_26c370;
        case 0x26c374u: goto label_26c374;
        case 0x26c378u: goto label_26c378;
        case 0x26c37cu: goto label_26c37c;
        case 0x26c380u: goto label_26c380;
        case 0x26c384u: goto label_26c384;
        case 0x26c388u: goto label_26c388;
        case 0x26c38cu: goto label_26c38c;
        case 0x26c390u: goto label_26c390;
        case 0x26c394u: goto label_26c394;
        case 0x26c398u: goto label_26c398;
        case 0x26c39cu: goto label_26c39c;
        case 0x26c3a0u: goto label_26c3a0;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3a8u: goto label_26c3a8;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3b0u: goto label_26c3b0;
        case 0x26c3b4u: goto label_26c3b4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3c0u: goto label_26c3c0;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3c8u: goto label_26c3c8;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d0u: goto label_26c3d0;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3e0u: goto label_26c3e0;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c3f4u: goto label_26c3f4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c400u: goto label_26c400;
        case 0x26c404u: goto label_26c404;
        case 0x26c408u: goto label_26c408;
        case 0x26c40cu: goto label_26c40c;
        case 0x26c410u: goto label_26c410;
        case 0x26c414u: goto label_26c414;
        case 0x26c418u: goto label_26c418;
        case 0x26c41cu: goto label_26c41c;
        case 0x26c420u: goto label_26c420;
        case 0x26c424u: goto label_26c424;
        case 0x26c428u: goto label_26c428;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c430u: goto label_26c430;
        case 0x26c434u: goto label_26c434;
        case 0x26c438u: goto label_26c438;
        case 0x26c43cu: goto label_26c43c;
        case 0x26c440u: goto label_26c440;
        case 0x26c444u: goto label_26c444;
        case 0x26c448u: goto label_26c448;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c450u: goto label_26c450;
        case 0x26c454u: goto label_26c454;
        case 0x26c458u: goto label_26c458;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c460u: goto label_26c460;
        case 0x26c464u: goto label_26c464;
        case 0x26c468u: goto label_26c468;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c470u: goto label_26c470;
        case 0x26c474u: goto label_26c474;
        case 0x26c478u: goto label_26c478;
        case 0x26c47cu: goto label_26c47c;
        case 0x26c480u: goto label_26c480;
        case 0x26c484u: goto label_26c484;
        case 0x26c488u: goto label_26c488;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c490u: goto label_26c490;
        case 0x26c494u: goto label_26c494;
        case 0x26c498u: goto label_26c498;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4a0u: goto label_26c4a0;
        case 0x26c4a4u: goto label_26c4a4;
        case 0x26c4a8u: goto label_26c4a8;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4b0u: goto label_26c4b0;
        case 0x26c4b4u: goto label_26c4b4;
        case 0x26c4b8u: goto label_26c4b8;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4c4u: goto label_26c4c4;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        default: break;
    }

    ctx->pc = 0x26c370u;

label_26c370:
    // 0x26c370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26c374:
    // 0x26c374: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x26c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_26c378:
    // 0x26c378: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_26c37c:
    // 0x26c37c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_26c380:
    // 0x26c380: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26c380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26c384:
    // 0x26c384: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26c384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c388:
    // 0x26c388: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26c38c:
    // 0x26c38c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26c38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c390:
    // 0x26c390: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_26c394:
    // 0x26c394: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26c394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c398:
    // 0x26c398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26c398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26c39c:
    // 0x26c39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26c3a0:
    // 0x26c3a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26c3a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26c3a4:
    // 0x26c3a4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x26c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26c3a8:
    // 0x26c3a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c3ac:
    // 0x26c3ac: 0x12a2004b  beq         $s5, $v0, . + 4 + (0x4B << 2)
label_26c3b0:
    if (ctx->pc == 0x26C3B0u) {
        ctx->pc = 0x26C3B0u;
            // 0x26c3b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C3B4u;
        goto label_26c3b4;
    }
    ctx->pc = 0x26C3ACu;
    {
        const bool branch_taken_0x26c3ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3ACu;
            // 0x26c3b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3ac) {
            ctx->pc = 0x26C4DCu;
            goto label_26c4dc;
        }
    }
    ctx->pc = 0x26C3B4u;
label_26c3b4:
    // 0x26c3b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c3b8:
    // 0x26c3b8: 0x12a20048  beq         $s5, $v0, . + 4 + (0x48 << 2)
label_26c3bc:
    if (ctx->pc == 0x26C3BCu) {
        ctx->pc = 0x26C3BCu;
            // 0x26c3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x26C3C0u;
        goto label_26c3c0;
    }
    ctx->pc = 0x26C3B8u;
    {
        const bool branch_taken_0x26c3b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3B8u;
            // 0x26c3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3b8) {
            ctx->pc = 0x26C4DCu;
            goto label_26c4dc;
        }
    }
    ctx->pc = 0x26C3C0u;
label_26c3c0:
    // 0x26c3c0: 0x12a20046  beq         $s5, $v0, . + 4 + (0x46 << 2)
label_26c3c4:
    if (ctx->pc == 0x26C3C4u) {
        ctx->pc = 0x26C3C4u;
            // 0x26c3c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26C3C8u;
        goto label_26c3c8;
    }
    ctx->pc = 0x26C3C0u;
    {
        const bool branch_taken_0x26c3c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3C0u;
            // 0x26c3c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c0) {
            ctx->pc = 0x26C4DCu;
            goto label_26c4dc;
        }
    }
    ctx->pc = 0x26C3C8u;
label_26c3c8:
    // 0x26c3c8: 0x12a20044  beq         $s5, $v0, . + 4 + (0x44 << 2)
label_26c3cc:
    if (ctx->pc == 0x26C3CCu) {
        ctx->pc = 0x26C3CCu;
            // 0x26c3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C3D0u;
        goto label_26c3d0;
    }
    ctx->pc = 0x26C3C8u;
    {
        const bool branch_taken_0x26c3c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3C8u;
            // 0x26c3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c8) {
            ctx->pc = 0x26C4DCu;
            goto label_26c4dc;
        }
    }
    ctx->pc = 0x26C3D0u;
label_26c3d0:
    // 0x26c3d0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_26c3d4:
    if (ctx->pc == 0x26C3D4u) {
        ctx->pc = 0x26C3D8u;
        goto label_26c3d8;
    }
    ctx->pc = 0x26C3D0u;
    {
        const bool branch_taken_0x26c3d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c3d0) {
            ctx->pc = 0x26C3E0u;
            goto label_26c3e0;
        }
    }
    ctx->pc = 0x26C3D8u;
label_26c3d8:
    // 0x26c3d8: 0x10000062  b           . + 4 + (0x62 << 2)
label_26c3dc:
    if (ctx->pc == 0x26C3DCu) {
        ctx->pc = 0x26C3DCu;
            // 0x26c3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C3E0u;
        goto label_26c3e0;
    }
    ctx->pc = 0x26C3D8u;
    {
        const bool branch_taken_0x26c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3D8u;
            // 0x26c3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3d8) {
            ctx->pc = 0x26C564u;
            goto label_26c564;
        }
    }
    ctx->pc = 0x26C3E0u;
label_26c3e0:
    // 0x26c3e0: 0xc097e18  jal         func_25F860
label_26c3e4:
    if (ctx->pc == 0x26C3E4u) {
        ctx->pc = 0x26C3E8u;
        goto label_26c3e8;
    }
    ctx->pc = 0x26C3E0u;
    SET_GPR_U32(ctx, 31, 0x26C3E8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3E8u; }
        if (ctx->pc != 0x26C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3E8u; }
        if (ctx->pc != 0x26C3E8u) { return; }
    }
    ctx->pc = 0x26C3E8u;
label_26c3e8:
    // 0x26c3e8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_26c3ec:
    // 0x26c3ec: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_26c3f0:
    // 0x26c3f0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26c3f4:
    if (ctx->pc == 0x26C3F4u) {
        ctx->pc = 0x26C3F4u;
            // 0x26c3f4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x26C3F8u;
        goto label_26c3f8;
    }
    ctx->pc = 0x26C3F0u;
    {
        const bool branch_taken_0x26c3f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3F0u;
            // 0x26c3f4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f0) {
            ctx->pc = 0x26C400u;
            goto label_26c400;
        }
    }
    ctx->pc = 0x26C3F8u;
label_26c3f8:
    // 0x26c3f8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_26c3fc:
    if (ctx->pc == 0x26C3FCu) {
        ctx->pc = 0x26C3FCu;
            // 0x26c3fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C400u;
        goto label_26c400;
    }
    ctx->pc = 0x26C3F8u;
    {
        const bool branch_taken_0x26c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3F8u;
            // 0x26c3fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f8) {
            ctx->pc = 0x26C464u;
            goto label_26c464;
        }
    }
    ctx->pc = 0x26C400u;
label_26c400:
    // 0x26c400: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_26c404:
    // 0x26c404: 0x1000000c  b           . + 4 + (0xC << 2)
label_26c408:
    if (ctx->pc == 0x26C408u) {
        ctx->pc = 0x26C408u;
            // 0x26c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C40Cu;
        goto label_26c40c;
    }
    ctx->pc = 0x26C404u;
    {
        const bool branch_taken_0x26c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C404u;
            // 0x26c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c404) {
            ctx->pc = 0x26C438u;
            goto label_26c438;
        }
    }
    ctx->pc = 0x26C40Cu;
label_26c40c:
    // 0x26c40c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26c410:
    // 0x26c410: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_26c414:
    if (ctx->pc == 0x26C414u) {
        ctx->pc = 0x26C418u;
        goto label_26c418;
    }
    ctx->pc = 0x26C410u;
    {
        const bool branch_taken_0x26c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26c410) {
            ctx->pc = 0x26C444u;
            goto label_26c444;
        }
    }
    ctx->pc = 0x26C418u;
label_26c418:
    // 0x26c418: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26c418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26c41c:
    // 0x26c41c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_26c420:
    if (ctx->pc == 0x26C420u) {
        ctx->pc = 0x26C424u;
        goto label_26c424;
    }
    ctx->pc = 0x26C41Cu;
    {
        const bool branch_taken_0x26c41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c41c) {
            ctx->pc = 0x26C42Cu;
            goto label_26c42c;
        }
    }
    ctx->pc = 0x26C424u;
label_26c424:
    // 0x26c424: 0x10000004  b           . + 4 + (0x4 << 2)
label_26c428:
    if (ctx->pc == 0x26C428u) {
        ctx->pc = 0x26C428u;
            // 0x26c428: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x26C42Cu;
        goto label_26c42c;
    }
    ctx->pc = 0x26C424u;
    {
        const bool branch_taken_0x26c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C424u;
            // 0x26c428: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c424) {
            ctx->pc = 0x26C438u;
            goto label_26c438;
        }
    }
    ctx->pc = 0x26C42Cu;
label_26c42c:
    // 0x26c42c: 0x0  nop
    ctx->pc = 0x26c42cu;
    // NOP
label_26c430:
    // 0x26c430: 0x1000000c  b           . + 4 + (0xC << 2)
label_26c434:
    if (ctx->pc == 0x26C434u) {
        ctx->pc = 0x26C434u;
            // 0x26c434: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C438u;
        goto label_26c438;
    }
    ctx->pc = 0x26C430u;
    {
        const bool branch_taken_0x26c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C430u;
            // 0x26c434: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c430) {
            ctx->pc = 0x26C464u;
            goto label_26c464;
        }
    }
    ctx->pc = 0x26C438u;
label_26c438:
    // 0x26c438: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26c438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26c43c:
    // 0x26c43c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_26c440:
    if (ctx->pc == 0x26C440u) {
        ctx->pc = 0x26C444u;
        goto label_26c444;
    }
    ctx->pc = 0x26C43Cu;
    {
        const bool branch_taken_0x26c43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c43c) {
            ctx->pc = 0x26C40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c40c;
        }
    }
    ctx->pc = 0x26C444u;
label_26c444:
    // 0x26c444: 0x0  nop
    ctx->pc = 0x26c444u;
    // NOP
label_26c448:
    // 0x26c448: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26c44c:
    if (ctx->pc == 0x26C44Cu) {
        ctx->pc = 0x26C44Cu;
            // 0x26c44c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C450u;
        goto label_26c450;
    }
    ctx->pc = 0x26C448u;
    {
        const bool branch_taken_0x26c448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C448u;
            // 0x26c44c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c448) {
            ctx->pc = 0x26C458u;
            goto label_26c458;
        }
    }
    ctx->pc = 0x26C450u;
label_26c450:
    // 0x26c450: 0x10000004  b           . + 4 + (0x4 << 2)
label_26c454:
    if (ctx->pc == 0x26C454u) {
        ctx->pc = 0x26C458u;
        goto label_26c458;
    }
    ctx->pc = 0x26C450u;
    {
        const bool branch_taken_0x26c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c450) {
            ctx->pc = 0x26C464u;
            goto label_26c464;
        }
    }
    ctx->pc = 0x26C458u;
label_26c458:
    // 0x26c458: 0x8cd50008  lw          $s5, 0x8($a2)
    ctx->pc = 0x26c458u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_26c45c:
    // 0x26c45c: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26c460:
    // 0x26c460: 0x0  nop
    ctx->pc = 0x26c460u;
    // NOP
label_26c464:
    // 0x26c464: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_26c468:
    if (ctx->pc == 0x26C468u) {
        ctx->pc = 0x26C468u;
            // 0x26c468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C46Cu;
        goto label_26c46c;
    }
    ctx->pc = 0x26C464u;
    {
        const bool branch_taken_0x26c464 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C464u;
            // 0x26c468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c464) {
            ctx->pc = 0x26C474u;
            goto label_26c474;
        }
    }
    ctx->pc = 0x26C46Cu;
label_26c46c:
    // 0x26c46c: 0x10000062  b           . + 4 + (0x62 << 2)
label_26c470:
    if (ctx->pc == 0x26C470u) {
        ctx->pc = 0x26C470u;
            // 0x26c470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C474u;
        goto label_26c474;
    }
    ctx->pc = 0x26C46Cu;
    {
        const bool branch_taken_0x26c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C46Cu;
            // 0x26c470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c46c) {
            ctx->pc = 0x26C5F8u;
            goto label_26c5f8;
        }
    }
    ctx->pc = 0x26C474u;
label_26c474:
    // 0x26c474: 0xc097f6c  jal         func_25FDB0
label_26c478:
    if (ctx->pc == 0x26C478u) {
        ctx->pc = 0x26C478u;
            // 0x26c478: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C47Cu;
        goto label_26c47c;
    }
    ctx->pc = 0x26C474u;
    SET_GPR_U32(ctx, 31, 0x26C47Cu);
    ctx->pc = 0x26C478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C474u;
            // 0x26c478: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C47Cu; }
        if (ctx->pc != 0x26C47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C47Cu; }
        if (ctx->pc != 0x26C47Cu) { return; }
    }
    ctx->pc = 0x26C47Cu;
label_26c47c:
    // 0x26c47c: 0xc09ac74  jal         func_26B1D0
label_26c480:
    if (ctx->pc == 0x26C480u) {
        ctx->pc = 0x26C480u;
            // 0x26c480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C484u;
        goto label_26c484;
    }
    ctx->pc = 0x26C47Cu;
    SET_GPR_U32(ctx, 31, 0x26C484u);
    ctx->pc = 0x26C480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C47Cu;
            // 0x26c480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C484u; }
        if (ctx->pc != 0x26C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C484u; }
        if (ctx->pc != 0x26C484u) { return; }
    }
    ctx->pc = 0x26C484u;
label_26c484:
    // 0x26c484: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c488:
    if (ctx->pc == 0x26C488u) {
        ctx->pc = 0x26C488u;
            // 0x26c488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C48Cu;
        goto label_26c48c;
    }
    ctx->pc = 0x26C484u;
    {
        const bool branch_taken_0x26c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C484u;
            // 0x26c488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c484) {
            ctx->pc = 0x26C494u;
            goto label_26c494;
        }
    }
    ctx->pc = 0x26C48Cu;
label_26c48c:
    // 0x26c48c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_26c490:
    if (ctx->pc == 0x26C490u) {
        ctx->pc = 0x26C490u;
            // 0x26c490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C494u;
        goto label_26c494;
    }
    ctx->pc = 0x26C48Cu;
    {
        const bool branch_taken_0x26c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C48Cu;
            // 0x26c490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c48c) {
            ctx->pc = 0x26C5F8u;
            goto label_26c5f8;
        }
    }
    ctx->pc = 0x26C494u;
label_26c494:
    // 0x26c494: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c498:
    // 0x26c498: 0xc097f98  jal         func_25FE60
label_26c49c:
    if (ctx->pc == 0x26C49Cu) {
        ctx->pc = 0x26C49Cu;
            // 0x26c49c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C4A0u;
        goto label_26c4a0;
    }
    ctx->pc = 0x26C498u;
    SET_GPR_U32(ctx, 31, 0x26C4A0u);
    ctx->pc = 0x26C49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C498u;
            // 0x26c49c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4A0u; }
        if (ctx->pc != 0x26C4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4A0u; }
        if (ctx->pc != 0x26C4A0u) { return; }
    }
    ctx->pc = 0x26C4A0u;
label_26c4a0:
    // 0x26c4a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c4a4:
    // 0x26c4a4: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x26c4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c4a8:
    // 0x26c4a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26c4ac:
    if (ctx->pc == 0x26C4ACu) {
        ctx->pc = 0x26C4ACu;
            // 0x26c4ac: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x26C4B0u;
        goto label_26c4b0;
    }
    ctx->pc = 0x26C4A8u;
    {
        const bool branch_taken_0x26c4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4A8u;
            // 0x26c4ac: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4a8) {
            ctx->pc = 0x26C4C4u;
            goto label_26c4c4;
        }
    }
    ctx->pc = 0x26C4B0u;
label_26c4b0:
    // 0x26c4b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c4b4:
    // 0x26c4b4: 0xc097f6c  jal         func_25FDB0
label_26c4b8:
    if (ctx->pc == 0x26C4B8u) {
        ctx->pc = 0x26C4B8u;
            // 0x26c4b8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C4BCu;
        goto label_26c4bc;
    }
    ctx->pc = 0x26C4B4u;
    SET_GPR_U32(ctx, 31, 0x26C4BCu);
    ctx->pc = 0x26C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4B4u;
            // 0x26c4b8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4BCu; }
        if (ctx->pc != 0x26C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4BCu; }
        if (ctx->pc != 0x26C4BCu) { return; }
    }
    ctx->pc = 0x26C4BCu;
label_26c4bc:
    // 0x26c4bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c4c0:
    // 0x26c4c0: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26c4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26c4c4:
    // 0x26c4c4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_26c4c8:
    if (ctx->pc == 0x26C4C8u) {
        ctx->pc = 0x26C4C8u;
            // 0x26c4c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C4CCu;
        goto label_26c4cc;
    }
    ctx->pc = 0x26C4C4u;
    {
        const bool branch_taken_0x26c4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4C4u;
            // 0x26c4c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4c4) {
            ctx->pc = 0x26C56Cu;
            goto label_26c56c;
        }
    }
    ctx->pc = 0x26C4CCu;
label_26c4cc:
    // 0x26c4cc: 0xc097f84  jal         func_25FE10
label_26c4d0:
    if (ctx->pc == 0x26C4D0u) {
        ctx->pc = 0x26C4D4u;
        goto label_26c4d4;
    }
    ctx->pc = 0x26C4CCu;
    SET_GPR_U32(ctx, 31, 0x26C4D4u);
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4D4u; }
        if (ctx->pc != 0x26C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4D4u; }
        if (ctx->pc != 0x26C4D4u) { return; }
    }
    ctx->pc = 0x26C4D4u;
label_26c4d4:
    // 0x26c4d4: 0x10000025  b           . + 4 + (0x25 << 2)
label_26c4d8:
    if (ctx->pc == 0x26C4D8u) {
        ctx->pc = 0x26C4D8u;
            // 0x26c4d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x26C4DCu;
        goto label_26c4dc;
    }
    ctx->pc = 0x26C4D4u;
    {
        const bool branch_taken_0x26c4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4D4u;
            // 0x26c4d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4d4) {
            ctx->pc = 0x26C56Cu;
            goto label_26c56c;
        }
    }
    ctx->pc = 0x26C4DCu;
label_26c4dc:
    // 0x26c4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c4e0:
    // 0x26c4e0: 0xc097e18  jal         func_25F860
label_26c4e4:
    if (ctx->pc == 0x26C4E4u) {
        ctx->pc = 0x26C4E4u;
            // 0x26c4e4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C4E8u;
        goto label_26c4e8;
    }
    ctx->pc = 0x26C4E0u;
    SET_GPR_U32(ctx, 31, 0x26C4E8u);
    ctx->pc = 0x26C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4E0u;
            // 0x26c4e4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4E8u; }
        if (ctx->pc != 0x26C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4E8u; }
        if (ctx->pc != 0x26C4E8u) { return; }
    }
    ctx->pc = 0x26C4E8u;
label_26c4e8:
    // 0x26c4e8: 0xc09ac74  jal         func_26B1D0
label_26c4ec:
    if (ctx->pc == 0x26C4ECu) {
        ctx->pc = 0x26C4ECu;
            // 0x26c4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C4F0u;
        goto label_26c4f0;
    }
    ctx->pc = 0x26C4E8u;
    SET_GPR_U32(ctx, 31, 0x26C4F0u);
    ctx->pc = 0x26C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4E8u;
            // 0x26c4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4F0u; }
        if (ctx->pc != 0x26C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4F0u; }
        if (ctx->pc != 0x26C4F0u) { return; }
    }
    ctx->pc = 0x26C4F0u;
label_26c4f0:
    // 0x26c4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c4f4:
    if (ctx->pc == 0x26C4F4u) {
        ctx->pc = 0x26C4F4u;
            // 0x26c4f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C4F8u;
        goto label_26c4f8;
    }
    ctx->pc = 0x26C4F0u;
    {
        const bool branch_taken_0x26c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4F0u;
            // 0x26c4f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f0) {
            ctx->pc = 0x26C500u;
            goto label_26c500;
        }
    }
    ctx->pc = 0x26C4F8u;
label_26c4f8:
    // 0x26c4f8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_26c4fc:
    if (ctx->pc == 0x26C4FCu) {
        ctx->pc = 0x26C4FCu;
            // 0x26c4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C500u;
        goto label_26c500;
    }
    ctx->pc = 0x26C4F8u;
    {
        const bool branch_taken_0x26c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4F8u;
            // 0x26c4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f8) {
            ctx->pc = 0x26C5F8u;
            goto label_26c5f8;
        }
    }
    ctx->pc = 0x26C500u;
label_26c500:
    // 0x26c500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c504:
    // 0x26c504: 0xc097e48  jal         func_25F920
label_26c508:
    if (ctx->pc == 0x26C508u) {
        ctx->pc = 0x26C508u;
            // 0x26c508: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C50Cu;
        goto label_26c50c;
    }
    ctx->pc = 0x26C504u;
    SET_GPR_U32(ctx, 31, 0x26C50Cu);
    ctx->pc = 0x26C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C504u;
            // 0x26c508: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C50Cu; }
        if (ctx->pc != 0x26C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C50Cu; }
        if (ctx->pc != 0x26C50Cu) { return; }
    }
    ctx->pc = 0x26C50Cu;
label_26c50c:
    // 0x26c50c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c510:
    // 0x26c510: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x26c510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c514:
    // 0x26c514: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26c518:
    if (ctx->pc == 0x26C518u) {
        ctx->pc = 0x26C518u;
            // 0x26c518: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x26C51Cu;
        goto label_26c51c;
    }
    ctx->pc = 0x26C514u;
    {
        const bool branch_taken_0x26c514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C514u;
            // 0x26c518: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c514) {
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C51Cu;
label_26c51c:
    // 0x26c51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c520:
    // 0x26c520: 0xc097e18  jal         func_25F860
label_26c524:
    if (ctx->pc == 0x26C524u) {
        ctx->pc = 0x26C524u;
            // 0x26c524: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C528u;
        goto label_26c528;
    }
    ctx->pc = 0x26C520u;
    SET_GPR_U32(ctx, 31, 0x26C528u);
    ctx->pc = 0x26C524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C520u;
            // 0x26c524: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C528u; }
        if (ctx->pc != 0x26C528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C528u; }
        if (ctx->pc != 0x26C528u) { return; }
    }
    ctx->pc = 0x26C528u;
label_26c528:
    // 0x26c528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c52c:
    // 0x26c52c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26c52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26c530:
    // 0x26c530: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26c534:
    if (ctx->pc == 0x26C534u) {
        ctx->pc = 0x26C534u;
            // 0x26c534: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x26C538u;
        goto label_26c538;
    }
    ctx->pc = 0x26C530u;
    {
        const bool branch_taken_0x26c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C530u;
            // 0x26c534: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c530) {
            ctx->pc = 0x26C54Cu;
            goto label_26c54c;
        }
    }
    ctx->pc = 0x26C538u;
label_26c538:
    // 0x26c538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c53c:
    // 0x26c53c: 0xc097e28  jal         func_25F8A0
label_26c540:
    if (ctx->pc == 0x26C540u) {
        ctx->pc = 0x26C540u;
            // 0x26c540: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C544u;
        goto label_26c544;
    }
    ctx->pc = 0x26C53Cu;
    SET_GPR_U32(ctx, 31, 0x26C544u);
    ctx->pc = 0x26C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C53Cu;
            // 0x26c540: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C544u; }
        if (ctx->pc != 0x26C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C544u; }
        if (ctx->pc != 0x26C544u) { return; }
    }
    ctx->pc = 0x26C544u;
label_26c544:
    // 0x26c544: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26c544u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26c548:
    // 0x26c548: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x26c548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_26c54c:
    // 0x26c54c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26c550:
    if (ctx->pc == 0x26C550u) {
        ctx->pc = 0x26C550u;
            // 0x26c550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C554u;
        goto label_26c554;
    }
    ctx->pc = 0x26C54Cu;
    {
        const bool branch_taken_0x26c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C54Cu;
            // 0x26c550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c54c) {
            ctx->pc = 0x26C56Cu;
            goto label_26c56c;
        }
    }
    ctx->pc = 0x26C554u;
label_26c554:
    // 0x26c554: 0xc097e18  jal         func_25F860
label_26c558:
    if (ctx->pc == 0x26C558u) {
        ctx->pc = 0x26C55Cu;
        goto label_26c55c;
    }
    ctx->pc = 0x26C554u;
    SET_GPR_U32(ctx, 31, 0x26C55Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C55Cu; }
        if (ctx->pc != 0x26C55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C55Cu; }
        if (ctx->pc != 0x26C55Cu) { return; }
    }
    ctx->pc = 0x26C55Cu;
label_26c55c:
    // 0x26c55c: 0x10000003  b           . + 4 + (0x3 << 2)
label_26c560:
    if (ctx->pc == 0x26C560u) {
        ctx->pc = 0x26C560u;
            // 0x26c560: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C564u;
        goto label_26c564;
    }
    ctx->pc = 0x26C55Cu;
    {
        const bool branch_taken_0x26c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C55Cu;
            // 0x26c560: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c55c) {
            ctx->pc = 0x26C56Cu;
            goto label_26c56c;
        }
    }
    ctx->pc = 0x26C564u;
label_26c564:
    // 0x26c564: 0x10000025  b           . + 4 + (0x25 << 2)
label_26c568:
    if (ctx->pc == 0x26C568u) {
        ctx->pc = 0x26C568u;
            // 0x26c568: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x26C56Cu;
        goto label_26c56c;
    }
    ctx->pc = 0x26C564u;
    {
        const bool branch_taken_0x26c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C564u;
            // 0x26c568: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c564) {
            ctx->pc = 0x26C5FCu;
            goto label_26c5fc;
        }
    }
    ctx->pc = 0x26C56Cu;
label_26c56c:
    // 0x26c56c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_26c570:
    if (ctx->pc == 0x26C570u) {
        ctx->pc = 0x26C574u;
        goto label_26c574;
    }
    ctx->pc = 0x26C56Cu;
    {
        const bool branch_taken_0x26c56c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c56c) {
            ctx->pc = 0x26C584u;
            goto label_26c584;
        }
    }
    ctx->pc = 0x26C574u;
label_26c574:
    // 0x26c574: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c578:
    // 0x26c578: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x26c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_26c57c:
    // 0x26c57c: 0x320f809  jalr        $t9
label_26c580:
    if (ctx->pc == 0x26C580u) {
        ctx->pc = 0x26C580u;
            // 0x26c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C584u;
        goto label_26c584;
    }
    ctx->pc = 0x26C57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C584u);
        ctx->pc = 0x26C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C57Cu;
            // 0x26c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C584u; }
            if (ctx->pc != 0x26C584u) { return; }
        }
        }
    }
    ctx->pc = 0x26C584u;
label_26c584:
    // 0x26c584: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c588:
    // 0x26c588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26c588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c58c:
    // 0x26c58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c590:
    // 0x26c590: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26c590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c594:
    // 0x26c594: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_26c598:
    // 0x26c598: 0x320f809  jalr        $t9
label_26c59c:
    if (ctx->pc == 0x26C59Cu) {
        ctx->pc = 0x26C59Cu;
            // 0x26c59c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C5A0u;
        goto label_26c5a0;
    }
    ctx->pc = 0x26C598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C5A0u);
        ctx->pc = 0x26C59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C598u;
            // 0x26c59c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C5A0u; }
            if (ctx->pc != 0x26C5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x26C5A0u;
label_26c5a0:
    // 0x26c5a0: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26c5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26c5a4:
    // 0x26c5a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_26c5a8:
    if (ctx->pc == 0x26C5A8u) {
        ctx->pc = 0x26C5A8u;
            // 0x26c5a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C5ACu;
        goto label_26c5ac;
    }
    ctx->pc = 0x26C5A4u;
    {
        const bool branch_taken_0x26c5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5A4u;
            // 0x26c5a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5a4) {
            ctx->pc = 0x26C5F8u;
            goto label_26c5f8;
        }
    }
    ctx->pc = 0x26C5ACu;
label_26c5ac:
    // 0x26c5ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x26c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_26c5b0:
    // 0x26c5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26c5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c5b4:
    // 0x26c5b4: 0x0  nop
    ctx->pc = 0x26c5b4u;
    // NOP
label_26c5b8:
    // 0x26c5b8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x26c5b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c5bc:
    // 0x26c5bc: 0x0  nop
    ctx->pc = 0x26c5bcu;
    // NOP
label_26c5c0:
    // 0x26c5c0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_26c5c4:
    if (ctx->pc == 0x26C5C4u) {
        ctx->pc = 0x26C5C4u;
            // 0x26c5c4: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x26C5C8u;
        goto label_26c5c8;
    }
    ctx->pc = 0x26C5C0u;
    {
        const bool branch_taken_0x26c5c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5C0u;
            // 0x26c5c4: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5c0) {
            ctx->pc = 0x26C5F4u;
            goto label_26c5f4;
        }
    }
    ctx->pc = 0x26C5C8u;
label_26c5c8:
    // 0x26c5c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26c5cc:
    if (ctx->pc == 0x26C5CCu) {
        ctx->pc = 0x26C5D0u;
        goto label_26c5d0;
    }
    ctx->pc = 0x26C5C8u;
    {
        const bool branch_taken_0x26c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5c8) {
            ctx->pc = 0x26C5F4u;
            goto label_26c5f4;
        }
    }
    ctx->pc = 0x26C5D0u;
label_26c5d0:
    // 0x26c5d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c5d4:
    // 0x26c5d4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x26c5d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_26c5d8:
    // 0x26c5d8: 0x320f809  jalr        $t9
label_26c5dc:
    if (ctx->pc == 0x26C5DCu) {
        ctx->pc = 0x26C5DCu;
            // 0x26c5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C5E0u;
        goto label_26c5e0;
    }
    ctx->pc = 0x26C5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C5E0u);
        ctx->pc = 0x26C5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5D8u;
            // 0x26c5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C5E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C5E0u; }
            if (ctx->pc != 0x26C5E0u) { return; }
        }
        }
    }
    ctx->pc = 0x26C5E0u;
label_26c5e0:
    // 0x26c5e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c5e4:
    // 0x26c5e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26c5e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26c5e8:
    // 0x26c5e8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_26c5ec:
    // 0x26c5ec: 0x320f809  jalr        $t9
label_26c5f0:
    if (ctx->pc == 0x26C5F0u) {
        ctx->pc = 0x26C5F0u;
            // 0x26c5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C5F4u;
        goto label_26c5f4;
    }
    ctx->pc = 0x26C5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C5F4u);
        ctx->pc = 0x26C5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5ECu;
            // 0x26c5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C5F4u; }
            if (ctx->pc != 0x26C5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x26C5F4u;
label_26c5f4:
    // 0x26c5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c5f8:
    // 0x26c5f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26c5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26c5fc:
    // 0x26c5fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26c600:
    // 0x26c600: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26c600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26c604:
    // 0x26c604: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26c604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c608:
    // 0x26c608: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26c608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26c60c:
    // 0x26c60c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26c60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c610:
    // 0x26c610: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26c610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c614:
    // 0x26c614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26c614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c618:
    // 0x26c618: 0x3e00008  jr          $ra
label_26c61c:
    if (ctx->pc == 0x26C61Cu) {
        ctx->pc = 0x26C61Cu;
            // 0x26c61c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x26C620u;
        goto label_fallthrough_0x26c618;
    }
    ctx->pc = 0x26C618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C618u;
            // 0x26c61c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26c618:
    ctx->pc = 0x26C620u;
}
