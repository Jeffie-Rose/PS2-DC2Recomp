#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stepMain__Fv
// Address: 0x299330 - 0x2994f4
void stepMain__Fv_0x299330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stepMain__Fv_0x299330");
#endif

    switch (ctx->pc) {
        case 0x299374u: goto label_299374;
        case 0x2993a0u: goto label_2993a0;
        case 0x2993bcu: goto label_2993bc;
        case 0x2993e0u: goto label_2993e0;
        case 0x2993f0u: goto label_2993f0;
        case 0x299408u: goto label_299408;
        case 0x299414u: goto label_299414;
        case 0x299438u: goto label_299438;
        case 0x299448u: goto label_299448;
        case 0x299474u: goto label_299474;
        case 0x299488u: goto label_299488;
        case 0x299498u: goto label_299498;
        case 0x2994a8u: goto label_2994a8;
        case 0x2994bcu: goto label_2994bc;
        default: break;
    }

    ctx->pc = 0x299330u;

    // 0x299330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x299330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x299334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x299338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29933c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299344: 0x3c1201f0  lui         $s2, 0x1F0
    ctx->pc = 0x299344u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)496 << 16));
    // 0x299348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29934c: 0x26525490  addiu       $s2, $s2, 0x5490
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21648));
    // 0x299350: 0x83829928  lb          $v0, -0x66D8($gp)
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940968)));
    // 0x299354: 0x3c1001f0  lui         $s0, 0x1F0
    ctx->pc = 0x299354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)496 << 16));
    // 0x299358: 0x8f9198ec  lw          $s1, -0x6714($gp)
    ctx->pc = 0x299358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
    // 0x29935c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29935Cu;
    {
        const bool branch_taken_0x29935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29935Cu;
            // 0x299360: 0x26105350  addiu       $s0, $s0, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29935c) {
            ctx->pc = 0x299370u;
            goto label_299370;
        }
    }
    ctx->pc = 0x299364u;
    // 0x299364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299368: 0xaf809924  sw          $zero, -0x66DC($gp)
    ctx->pc = 0x299368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940964), GPR_U32(ctx, 0));
    // 0x29936c: 0xa3829928  sb          $v0, -0x66D8($gp)
    ctx->pc = 0x29936cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940968), (uint8_t)GPR_U32(ctx, 2));
label_299370:
    // 0x299370: 0xaf80991c  sw          $zero, -0x66E4($gp)
    ctx->pc = 0x299370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940956), GPR_U32(ctx, 0));
label_299374:
    // 0x299374: 0x93829904  lbu         $v0, -0x66FC($gp)
    ctx->pc = 0x299374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940932)));
    // 0x299378: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x299378u;
    {
        const bool branch_taken_0x299378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299378) {
            ctx->pc = 0x2993ACu;
            goto label_2993ac;
        }
    }
    ctx->pc = 0x299380u;
    // 0x299380: 0x8f8298f4  lw          $v0, -0x670C($gp)
    ctx->pc = 0x299380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940916)));
    // 0x299384: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x299384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x299388: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x299388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x29938c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x29938cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x299390: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x299390u;
    {
        const bool branch_taken_0x299390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x299394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299390u;
            // 0x299394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299390) {
            ctx->pc = 0x2993ACu;
            goto label_2993ac;
        }
    }
    ctx->pc = 0x299398u;
    // 0x299398: 0xc0a6b80  jal         func_29AE00
    ctx->pc = 0x299398u;
    SET_GPR_U32(ctx, 31, 0x2993A0u);
    ctx->pc = 0x29AE00u;
    if (runtime->hasFunction(0x29AE00u)) {
        auto targetFn = runtime->lookupFunction(0x29AE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993A0u; }
        if (ctx->pc != 0x2993A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileSeek__FP7StrFile_0x29ae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993A0u; }
        if (ctx->pc != 0x2993A0u) { return; }
    }
    ctx->pc = 0x2993A0u;
label_2993a0:
    // 0x2993a0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2993a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2993a4: 0x8c2254bc  lw          $v0, 0x54BC($at)
    ctx->pc = 0x2993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21692)));
    // 0x2993a8: 0xaf8298f4  sw          $v0, -0x670C($gp)
    ctx->pc = 0x2993a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940916), GPR_U32(ctx, 2));
label_2993ac:
    // 0x2993ac: 0x0  nop
    ctx->pc = 0x2993acu;
    // NOP
    // 0x2993b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2993b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993b4: 0xc0a6bbc  jal         func_29AEF0
    ctx->pc = 0x2993B4u;
    SET_GPR_U32(ctx, 31, 0x2993BCu);
    ctx->pc = 0x2993B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993B4u;
            // 0x2993b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AEF0u;
    if (runtime->hasFunction(0x29AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x29AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993BCu; }
        if (ctx->pc != 0x2993BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginPut__FP7ReadBufPPUc_0x29aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993BCu; }
        if (ctx->pc != 0x2993BCu) { return; }
    }
    ctx->pc = 0x2993BCu;
label_2993bc:
    // 0x2993bc: 0x8f8398f4  lw          $v1, -0x670C($gp)
    ctx->pc = 0x2993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940916)));
    // 0x2993c0: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2993C0u;
    {
        const bool branch_taken_0x2993c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2993C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2993C0u;
            // 0x2993c4: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993c0) {
            ctx->pc = 0x2993FCu;
            goto label_2993fc;
        }
    }
    ctx->pc = 0x2993C8u;
    // 0x2993c8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2993c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2993cc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2993CCu;
    {
        const bool branch_taken_0x2993cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2993cc) {
            ctx->pc = 0x2993FCu;
            goto label_2993fc;
        }
    }
    ctx->pc = 0x2993D4u;
    // 0x2993d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2993d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2993d8: 0xc0a6ba0  jal         func_29AE80
    ctx->pc = 0x2993D8u;
    SET_GPR_U32(ctx, 31, 0x2993E0u);
    ctx->pc = 0x2993DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993D8u;
            // 0x2993dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE80u;
    if (runtime->hasFunction(0x29AE80u)) {
        auto targetFn = runtime->lookupFunction(0x29AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993E0u; }
        if (ctx->pc != 0x2993E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileRead__FP7StrFilePvi_0x29ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993E0u; }
        if (ctx->pc != 0x2993E0u) { return; }
    }
    ctx->pc = 0x2993E0u;
label_2993e0:
    // 0x2993e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2993e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2993e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993e8: 0xc0a6bcc  jal         func_29AF30
    ctx->pc = 0x2993E8u;
    SET_GPR_U32(ctx, 31, 0x2993F0u);
    ctx->pc = 0x2993ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993E8u;
            // 0x2993ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF30u;
    if (runtime->hasFunction(0x29AF30u)) {
        auto targetFn = runtime->lookupFunction(0x29AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993F0u; }
        if (ctx->pc != 0x2993F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndPut__FP7ReadBufi_0x29af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993F0u; }
        if (ctx->pc != 0x2993F0u) { return; }
    }
    ctx->pc = 0x2993F0u;
label_2993f0:
    // 0x2993f0: 0x8f8298f4  lw          $v0, -0x670C($gp)
    ctx->pc = 0x2993f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940916)));
    // 0x2993f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2993f8: 0xaf8298f4  sw          $v0, -0x670C($gp)
    ctx->pc = 0x2993f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940916), GPR_U32(ctx, 2));
label_2993fc:
    // 0x2993fc: 0x0  nop
    ctx->pc = 0x2993fcu;
    // NOP
    // 0x299400: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x299400u;
    SET_GPR_U32(ctx, 31, 0x299408u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299408u; }
        if (ctx->pc != 0x299408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299408u; }
        if (ctx->pc != 0x299408u) { return; }
    }
    ctx->pc = 0x299408u;
label_299408:
    // 0x299408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29940c: 0xc0a6bec  jal         func_29AFB0
    ctx->pc = 0x29940Cu;
    SET_GPR_U32(ctx, 31, 0x299414u);
    ctx->pc = 0x299410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29940Cu;
            // 0x299410: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AFB0u;
    if (runtime->hasFunction(0x29AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x29AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299414u; }
        if (ctx->pc != 0x299414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginGet__FP7ReadBufPPUc_0x29afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299414u; }
        if (ctx->pc != 0x299414u) { return; }
    }
    ctx->pc = 0x299414u;
label_299414:
    // 0x299414: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x299414u;
    {
        const bool branch_taken_0x299414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x299418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299414u;
            // 0x299418: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299414) {
            ctx->pc = 0x299468u;
            goto label_299468;
        }
    }
    ctx->pc = 0x29941Cu;
    // 0x29941c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x29941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x299420: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x299420u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x299424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299428: 0x8c280008  lw          $t0, 0x8($at)
    ctx->pc = 0x299428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x29942c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29942cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299430: 0xc043532  jal         func_10D4C8
    ctx->pc = 0x299430u;
    SET_GPR_U32(ctx, 31, 0x299438u);
    ctx->pc = 0x299434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299430u;
            // 0x299434: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C8u;
    if (runtime->hasFunction(0x10D4C8u)) {
        auto targetFn = runtime->lookupFunction(0x10D4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299438u; }
        if (ctx->pc != 0x299438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDemuxPssRing_0x10d4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299438u; }
        if (ctx->pc != 0x299438u) { return; }
    }
    ctx->pc = 0x299438u;
label_299438:
    // 0x299438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x299438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29943c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299440: 0xc0a6c04  jal         func_29B010
    ctx->pc = 0x299440u;
    SET_GPR_U32(ctx, 31, 0x299448u);
    ctx->pc = 0x299444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299440u;
            // 0x299444: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B010u;
    if (runtime->hasFunction(0x29B010u)) {
        auto targetFn = runtime->lookupFunction(0x29B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299448u; }
        if (ctx->pc != 0x299448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndGet__FP7ReadBufi_0x29b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299448u; }
        if (ctx->pc != 0x299448u) { return; }
    }
    ctx->pc = 0x299448u;
label_299448:
    // 0x299448: 0x8f8298f0  lw          $v0, -0x6710($gp)
    ctx->pc = 0x299448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940912)));
    // 0x29944c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x29944cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x299450: 0xaf8298f0  sw          $v0, -0x6710($gp)
    ctx->pc = 0x299450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940912), GPR_U32(ctx, 2));
    // 0x299454: 0x8f8298f0  lw          $v0, -0x6710($gp)
    ctx->pc = 0x299454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940912)));
    // 0x299458: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299458u;
    {
        const bool branch_taken_0x299458 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x29945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299458u;
            // 0x29945c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299458) {
            ctx->pc = 0x299468u;
            goto label_299468;
        }
    }
    ctx->pc = 0x299460u;
    // 0x299460: 0x8c2254bc  lw          $v0, 0x54BC($at)
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21692)));
    // 0x299464: 0xaf8298f0  sw          $v0, -0x6710($gp)
    ctx->pc = 0x299464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940912), GPR_U32(ctx, 2));
label_299468:
    // 0x299468: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29946c: 0xc0a6cc8  jal         func_29B320
    ctx->pc = 0x29946Cu;
    SET_GPR_U32(ctx, 31, 0x299474u);
    ctx->pc = 0x299470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29946Cu;
            // 0x299470: 0x24845410  addiu       $a0, $a0, 0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B320u;
    if (runtime->hasFunction(0x29B320u)) {
        auto targetFn = runtime->lookupFunction(0x29B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299474u; }
        if (ctx->pc != 0x299474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecSendToIOP__FP8AudioDec_0x29b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299474u; }
        if (ctx->pc != 0x299474u) { return; }
    }
    ctx->pc = 0x299474u;
label_299474:
    // 0x299474: 0x938398fc  lbu         $v1, -0x6704($gp)
    ctx->pc = 0x299474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940924)));
    // 0x299478: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x299478u;
    {
        const bool branch_taken_0x299478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299478u;
            // 0x29947c: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299478) {
            ctx->pc = 0x2994C8u;
            goto label_2994c8;
        }
    }
    ctx->pc = 0x299480u;
    // 0x299480: 0xc0a6688  jal         func_299A20
    ctx->pc = 0x299480u;
    SET_GPR_U32(ctx, 31, 0x299488u);
    ctx->pc = 0x299484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299480u;
            // 0x299484: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299A20u;
    if (runtime->hasFunction(0x299A20u)) {
        auto targetFn = runtime->lookupFunction(0x299A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299488u; }
        if (ctx->pc != 0x299488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull__FP5VoBuf_0x299a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299488u; }
        if (ctx->pc != 0x299488u) { return; }
    }
    ctx->pc = 0x299488u;
label_299488:
    // 0x299488: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x299488u;
    {
        const bool branch_taken_0x299488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299488) {
            ctx->pc = 0x2994C8u;
            goto label_2994c8;
        }
    }
    ctx->pc = 0x299490u;
    // 0x299490: 0xc0a6fe8  jal         func_29BFA0
    ctx->pc = 0x299490u;
    SET_GPR_U32(ctx, 31, 0x299498u);
    ctx->pc = 0x29BFA0u;
    if (runtime->hasFunction(0x29BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x29BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299498u; }
        if (ctx->pc != 0x299498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isAudioOK__Fv_0x29bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299498u; }
        if (ctx->pc != 0x299498u) { return; }
    }
    ctx->pc = 0x299498u;
label_299498:
    // 0x299498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x299498u;
    {
        const bool branch_taken_0x299498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29949Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299498u;
            // 0x29949c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299498) {
            ctx->pc = 0x2994C8u;
            goto label_2994c8;
        }
    }
    ctx->pc = 0x2994A0u;
    // 0x2994a0: 0xc0a6e08  jal         func_29B820
    ctx->pc = 0x2994A0u;
    SET_GPR_U32(ctx, 31, 0x2994A8u);
    ctx->pc = 0x29B820u;
    if (runtime->hasFunction(0x29B820u)) {
        auto targetFn = runtime->lookupFunction(0x29B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994A8u; }
        if (ctx->pc != 0x2994A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        startDisplay__Fi_0x29b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994A8u; }
        if (ctx->pc != 0x2994A8u) { return; }
    }
    ctx->pc = 0x2994A8u;
label_2994a8:
    // 0x2994a8: 0x938398f8  lbu         $v1, -0x6708($gp)
    ctx->pc = 0x2994a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940920)));
    // 0x2994ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2994ACu;
    {
        const bool branch_taken_0x2994ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2994ACu;
            // 0x2994b0: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994ac) {
            ctx->pc = 0x2994BCu;
            goto label_2994bc;
        }
    }
    ctx->pc = 0x2994B4u;
    // 0x2994b4: 0xc0a6ca8  jal         func_29B2A0
    ctx->pc = 0x2994B4u;
    SET_GPR_U32(ctx, 31, 0x2994BCu);
    ctx->pc = 0x2994B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2994B4u;
            // 0x2994b8: 0x24845410  addiu       $a0, $a0, 0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B2A0u;
    if (runtime->hasFunction(0x29B2A0u)) {
        auto targetFn = runtime->lookupFunction(0x29B2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994BCu; }
        if (ctx->pc != 0x2994BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecStart__FP8AudioDec_0x29b2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994BCu; }
        if (ctx->pc != 0x2994BCu) { return; }
    }
    ctx->pc = 0x2994BCu;
label_2994bc:
    // 0x2994bc: 0x0  nop
    ctx->pc = 0x2994bcu;
    // NOP
    // 0x2994c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2994c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2994c4: 0xa38398fc  sb          $v1, -0x6704($gp)
    ctx->pc = 0x2994c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940924), (uint8_t)GPR_U32(ctx, 3));
label_2994c8:
    // 0x2994c8: 0x8f839920  lw          $v1, -0x66E0($gp)
    ctx->pc = 0x2994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940960)));
    // 0x2994cc: 0x1060ffa9  beqz        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2994CCu;
    {
        const bool branch_taken_0x2994cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2994CCu;
            // 0x2994d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994cc) {
            ctx->pc = 0x299374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299374;
        }
    }
    ctx->pc = 0x2994D4u;
    // 0x2994d4: 0xaf83991c  sw          $v1, -0x66E4($gp)
    ctx->pc = 0x2994d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940956), GPR_U32(ctx, 3));
    // 0x2994d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2994d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2994dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2994dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2994e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2994e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2994e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2994e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2994e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2994e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2994ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2994ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2994F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2994ECu;
            // 0x2994f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2994F4u;
}
