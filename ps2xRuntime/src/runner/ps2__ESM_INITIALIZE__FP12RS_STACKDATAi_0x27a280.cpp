#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_INITIALIZE__FP12RS_STACKDATAi
// Address: 0x27a280 - 0x27a3a8
void ps2__ESM_INITIALIZE__FP12RS_STACKDATAi_0x27a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_INITIALIZE__FP12RS_STACKDATAi_0x27a280");
#endif

    switch (ctx->pc) {
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        case 0x27a2f8u: goto label_27a2f8;
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a300u: goto label_27a300;
        case 0x27a304u: goto label_27a304;
        case 0x27a308u: goto label_27a308;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a310u: goto label_27a310;
        case 0x27a314u: goto label_27a314;
        case 0x27a318u: goto label_27a318;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        case 0x27a350u: goto label_27a350;
        case 0x27a354u: goto label_27a354;
        case 0x27a358u: goto label_27a358;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a360u: goto label_27a360;
        case 0x27a364u: goto label_27a364;
        case 0x27a368u: goto label_27a368;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a370u: goto label_27a370;
        case 0x27a374u: goto label_27a374;
        case 0x27a378u: goto label_27a378;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a380u: goto label_27a380;
        case 0x27a384u: goto label_27a384;
        case 0x27a388u: goto label_27a388;
        case 0x27a38cu: goto label_27a38c;
        case 0x27a390u: goto label_27a390;
        case 0x27a394u: goto label_27a394;
        case 0x27a398u: goto label_27a398;
        case 0x27a39cu: goto label_27a39c;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3a4u: goto label_27a3a4;
        default: break;
    }

    ctx->pc = 0x27a280u;

label_27a280:
    // 0x27a280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27a284:
    // 0x27a284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27a288:
    // 0x27a288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27a28c:
    // 0x27a28c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27a290:
    // 0x27a290: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x27a290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_27a294:
    // 0x27a294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27a298:
    // 0x27a298: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27a298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27a29c:
    // 0x27a29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27a2a0:
    // 0x27a2a0: 0xc097e18  jal         func_25F860
label_27a2a4:
    if (ctx->pc == 0x27A2A4u) {
        ctx->pc = 0x27A2A4u;
            // 0x27a2a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2A8u;
        goto label_27a2a8;
    }
    ctx->pc = 0x27A2A0u;
    SET_GPR_U32(ctx, 31, 0x27A2A8u);
    ctx->pc = 0x27A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2A0u;
            // 0x27a2a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2A8u; }
        if (ctx->pc != 0x27A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2A8u; }
        if (ctx->pc != 0x27A2A8u) { return; }
    }
    ctx->pc = 0x27A2A8u;
label_27a2a8:
    // 0x27a2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a2ac:
    // 0x27a2ac: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x27a2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_27a2b0:
    // 0x27a2b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27a2b4:
    if (ctx->pc == 0x27A2B4u) {
        ctx->pc = 0x27A2B4u;
            // 0x27a2b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2B8u;
        goto label_27a2b8;
    }
    ctx->pc = 0x27A2B0u;
    {
        const bool branch_taken_0x27a2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2B0u;
            // 0x27a2b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2b0) {
            ctx->pc = 0x27A2C4u;
            goto label_27a2c4;
        }
    }
    ctx->pc = 0x27A2B8u;
label_27a2b8:
    // 0x27a2b8: 0xc097e18  jal         func_25F860
label_27a2bc:
    if (ctx->pc == 0x27A2BCu) {
        ctx->pc = 0x27A2C0u;
        goto label_27a2c0;
    }
    ctx->pc = 0x27A2B8u;
    SET_GPR_U32(ctx, 31, 0x27A2C0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2C0u; }
        if (ctx->pc != 0x27A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2C0u; }
        if (ctx->pc != 0x27A2C0u) { return; }
    }
    ctx->pc = 0x27A2C0u;
label_27a2c0:
    // 0x27a2c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a2c4:
    // 0x27a2c4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27a2c8:
    // 0x27a2c8: 0xc0a0c64  jal         func_283190
label_27a2cc:
    if (ctx->pc == 0x27A2CCu) {
        ctx->pc = 0x27A2CCu;
            // 0x27a2cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D0u;
        goto label_27a2d0;
    }
    ctx->pc = 0x27A2C8u;
    SET_GPR_U32(ctx, 31, 0x27A2D0u);
    ctx->pc = 0x27A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2C8u;
            // 0x27a2cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2D0u; }
        if (ctx->pc != 0x27A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2D0u; }
        if (ctx->pc != 0x27A2D0u) { return; }
    }
    ctx->pc = 0x27A2D0u;
label_27a2d0:
    // 0x27a2d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27a2d4:
    if (ctx->pc == 0x27A2D4u) {
        ctx->pc = 0x27A2D4u;
            // 0x27a2d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D8u;
        goto label_27a2d8;
    }
    ctx->pc = 0x27A2D0u;
    {
        const bool branch_taken_0x27a2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2D0u;
            // 0x27a2d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d0) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2D8u;
label_27a2d8:
    // 0x27a2d8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_27a2dc:
    if (ctx->pc == 0x27A2DCu) {
        ctx->pc = 0x27A2DCu;
            // 0x27a2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2E0u;
        goto label_27a2e0;
    }
    ctx->pc = 0x27A2D8u;
    {
        const bool branch_taken_0x27a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2D8u;
            // 0x27a2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d8) {
            ctx->pc = 0x27A38Cu;
            goto label_27a38c;
        }
    }
    ctx->pc = 0x27A2E0u;
label_27a2e0:
    // 0x27a2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a2e4:
    // 0x27a2e4: 0xc04e748  jal         func_139D20
label_27a2e8:
    if (ctx->pc == 0x27A2E8u) {
        ctx->pc = 0x27A2E8u;
            // 0x27a2e8: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->pc = 0x27A2ECu;
        goto label_27a2ec;
    }
    ctx->pc = 0x27A2E4u;
    SET_GPR_U32(ctx, 31, 0x27A2ECu);
    ctx->pc = 0x27A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2E4u;
            // 0x27a2e8: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2ECu; }
        if (ctx->pc != 0x27A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2ECu; }
        if (ctx->pc != 0x27A2ECu) { return; }
    }
    ctx->pc = 0x27A2ECu;
label_27a2ec:
    // 0x27a2ec: 0x24041190  addiu       $a0, $zero, 0x1190
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
label_27a2f0:
    // 0x27a2f0: 0xc04e638  jal         func_1398E0
label_27a2f4:
    if (ctx->pc == 0x27A2F4u) {
        ctx->pc = 0x27A2F4u;
            // 0x27a2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A2F8u;
        goto label_27a2f8;
    }
    ctx->pc = 0x27A2F0u;
    SET_GPR_U32(ctx, 31, 0x27A2F8u);
    ctx->pc = 0x27A2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2F0u;
            // 0x27a2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2F8u; }
        if (ctx->pc != 0x27A2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2F8u; }
        if (ctx->pc != 0x27A2F8u) { return; }
    }
    ctx->pc = 0x27A2F8u;
label_27a2f8:
    // 0x27a2f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_27a2fc:
    if (ctx->pc == 0x27A2FCu) {
        ctx->pc = 0x27A2FCu;
            // 0x27a2fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A300u;
        goto label_27a300;
    }
    ctx->pc = 0x27A2F8u;
    {
        const bool branch_taken_0x27a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2F8u;
            // 0x27a2fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2f8) {
            ctx->pc = 0x27A34Cu;
            goto label_27a34c;
        }
    }
    ctx->pc = 0x27A300u;
label_27a300:
    // 0x27a300: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27a300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27a304:
    // 0x27a304: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x27a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_27a308:
    // 0x27a308: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x27a308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_27a30c:
    // 0x27a30c: 0x8e59004c  lw          $t9, 0x4C($s2)
    ctx->pc = 0x27a30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_27a310:
    // 0x27a310: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27a310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27a314:
    // 0x27a314: 0x320f809  jalr        $t9
label_27a318:
    if (ctx->pc == 0x27A318u) {
        ctx->pc = 0x27A318u;
            // 0x27a318: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x27A31Cu;
        goto label_27a31c;
    }
    ctx->pc = 0x27A314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A31Cu);
        ctx->pc = 0x27A318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A314u;
            // 0x27a318: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27A31Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27A31Cu; }
            if (ctx->pc != 0x27A31Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27A31Cu;
label_27a31c:
    // 0x27a31c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27a320:
    // 0x27a320: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x27a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_27a324:
    // 0x27a324: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x27a324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_27a328:
    // 0x27a328: 0x8e59004c  lw          $t9, 0x4C($s2)
    ctx->pc = 0x27a328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_27a32c:
    // 0x27a32c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27a32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27a330:
    // 0x27a330: 0x320f809  jalr        $t9
label_27a334:
    if (ctx->pc == 0x27A334u) {
        ctx->pc = 0x27A334u;
            // 0x27a334: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x27A338u;
        goto label_27a338;
    }
    ctx->pc = 0x27A330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A338u);
        ctx->pc = 0x27A334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A330u;
            // 0x27a334: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27A338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27A338u; }
            if (ctx->pc != 0x27A338u) { return; }
        }
        }
    }
    ctx->pc = 0x27A338u;
label_27a338:
    // 0x27a338: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27a33c:
    // 0x27a33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27a340:
    // 0x27a340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a344:
    // 0x27a344: 0xc0b7f78  jal         func_2DFDE0
label_27a348:
    if (ctx->pc == 0x27A348u) {
        ctx->pc = 0x27A348u;
            // 0x27a348: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A34Cu;
        goto label_27a34c;
    }
    ctx->pc = 0x27A344u;
    SET_GPR_U32(ctx, 31, 0x27A34Cu);
    ctx->pc = 0x27A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A344u;
            // 0x27a348: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A34Cu; }
        if (ctx->pc != 0x27A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A34Cu; }
        if (ctx->pc != 0x27A34Cu) { return; }
    }
    ctx->pc = 0x27A34Cu;
label_27a34c:
    // 0x27a34c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_27a350:
    if (ctx->pc == 0x27A350u) {
        ctx->pc = 0x27A350u;
            // 0x27a350: 0xaf9297ec  sw          $s2, -0x6814($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 18));
        ctx->pc = 0x27A354u;
        goto label_27a354;
    }
    ctx->pc = 0x27A34Cu;
    {
        const bool branch_taken_0x27a34c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A34Cu;
            // 0x27a350: 0xaf9297ec  sw          $s2, -0x6814($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a34c) {
            ctx->pc = 0x27A35Cu;
            goto label_27a35c;
        }
    }
    ctx->pc = 0x27A354u;
label_27a354:
    // 0x27a354: 0x1000000d  b           . + 4 + (0xD << 2)
label_27a358:
    if (ctx->pc == 0x27A358u) {
        ctx->pc = 0x27A358u;
            // 0x27a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27A35Cu;
        goto label_27a35c;
    }
    ctx->pc = 0x27A354u;
    {
        const bool branch_taken_0x27a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A354u;
            // 0x27a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a354) {
            ctx->pc = 0x27A38Cu;
            goto label_27a38c;
        }
    }
    ctx->pc = 0x27A35Cu;
label_27a35c:
    // 0x27a35c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27a360:
    // 0x27a360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27a364:
    // 0x27a364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a368:
    // 0x27a368: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x27a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
label_27a36c:
    // 0x27a36c: 0x8c422e80  lw          $v0, 0x2E80($v0)
    ctx->pc = 0x27a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
label_27a370:
    // 0x27a370: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x27a370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_27a374:
    // 0x27a374: 0xc0b7f78  jal         func_2DFDE0
label_27a378:
    if (ctx->pc == 0x27A378u) {
        ctx->pc = 0x27A378u;
            // 0x27a378: 0x513823  subu        $a3, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x27A37Cu;
        goto label_27a37c;
    }
    ctx->pc = 0x27A374u;
    SET_GPR_U32(ctx, 31, 0x27A37Cu);
    ctx->pc = 0x27A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A374u;
            // 0x27a378: 0x513823  subu        $a3, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A37Cu; }
        if (ctx->pc != 0x27A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A37Cu; }
        if (ctx->pc != 0x27A37Cu) { return; }
    }
    ctx->pc = 0x27A37Cu;
label_27a37c:
    // 0x27a37c: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x27a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_27a380:
    // 0x27a380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a384:
    // 0x27a384: 0x8f8397ec  lw          $v1, -0x6814($gp)
    ctx->pc = 0x27a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
label_27a388:
    // 0x27a388: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x27a388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_27a38c:
    // 0x27a38c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27a390:
    // 0x27a390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27a394:
    // 0x27a394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a398:
    // 0x27a398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a39c:
    // 0x27a39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27a3a0:
    // 0x27a3a0: 0x3e00008  jr          $ra
label_27a3a4:
    if (ctx->pc == 0x27A3A4u) {
        ctx->pc = 0x27A3A4u;
            // 0x27a3a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27A3A8u;
        goto label_fallthrough_0x27a3a0;
    }
    ctx->pc = 0x27A3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3A0u;
            // 0x27a3a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27a3a0:
    ctx->pc = 0x27A3A8u;
}
