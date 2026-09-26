#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadItemSystemMes__9CGameDataFi
// Address: 0x195630 - 0x195720
void LoadItemSystemMes__9CGameDataFi_0x195630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadItemSystemMes__9CGameDataFi_0x195630");
#endif

    switch (ctx->pc) {
        case 0x195654u: goto label_195654;
        case 0x19566cu: goto label_19566c;
        case 0x195674u: goto label_195674;
        case 0x195688u: goto label_195688;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956f0u: goto label_1956f0;
        case 0x195704u: goto label_195704;
        default: break;
    }

    ctx->pc = 0x195630u;

    // 0x195630: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x195634: 0x34217880  ori         $at, $at, 0x7880
    ctx->pc = 0x195634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30848);
    // 0x195638: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x19563c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195640: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19564c: 0xc094430  jal         func_2510C0
    ctx->pc = 0x19564Cu;
    SET_GPR_U32(ctx, 31, 0x195654u);
    ctx->pc = 0x195650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19564Cu;
            // 0x195650: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195654u; }
        if (ctx->pc != 0x195654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195654u; }
        if (ctx->pc != 0x195654u) { return; }
    }
    ctx->pc = 0x195654u;
label_195654:
    // 0x195654: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19565c: 0x24841f70  addiu       $a0, $a0, 0x1F70
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8048));
    // 0x195660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195664: 0xc049c86  jal         func_127218
    ctx->pc = 0x195664u;
    SET_GPR_U32(ctx, 31, 0x19566Cu);
    ctx->pc = 0x195668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195664u;
            // 0x195668: 0x24062200  addiu       $a2, $zero, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19566Cu; }
        if (ctx->pc != 0x19566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19566Cu; }
        if (ctx->pc != 0x19566Cu) { return; }
    }
    ctx->pc = 0x19566Cu;
label_19566c:
    // 0x19566c: 0xc04e640  jal         func_139900
    ctx->pc = 0x19566Cu;
    SET_GPR_U32(ctx, 31, 0x195674u);
    ctx->pc = 0x195670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19566Cu;
            // 0x195670: 0x27a47840  addiu       $a0, $sp, 0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195674u; }
        if (ctx->pc != 0x195674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195674u; }
        if (ctx->pc != 0x195674u) { return; }
    }
    ctx->pc = 0x195674u;
label_195674:
    // 0x195674: 0x3c0501e7  lui         $a1, 0x1E7
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)487 << 16));
    // 0x195678: 0x27a47840  addiu       $a0, $sp, 0x7840
    ctx->pc = 0x195678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
    // 0x19567c: 0x24a51f70  addiu       $a1, $a1, 0x1F70
    ctx->pc = 0x19567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8048));
    // 0x195680: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x195680u;
    SET_GPR_U32(ctx, 31, 0x195688u);
    ctx->pc = 0x195684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195680u;
            // 0x195684: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195688u; }
        if (ctx->pc != 0x195688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195688u; }
        if (ctx->pc != 0x195688u) { return; }
    }
    ctx->pc = 0x195688u;
label_195688:
    // 0x195688: 0x27a27840  addiu       $v0, $sp, 0x7840
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
    // 0x19568c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19568cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195690: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195694: 0xaf828b58  sw          $v0, -0x74A8($gp)
    ctx->pc = 0x195694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 2));
    // 0x195698: 0x27a47870  addiu       $a0, $sp, 0x7870
    ctx->pc = 0x195698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30832));
    // 0x19569c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19569Cu;
    SET_GPR_U32(ctx, 31, 0x1956A4u);
    ctx->pc = 0x1956A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19569Cu;
            // 0x1956a0: 0x24a55430  addiu       $a1, $a1, 0x5430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956A4u; }
        if (ctx->pc != 0x1956A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956A4u; }
        if (ctx->pc != 0x1956A4u) { return; }
    }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x27a47870  addiu       $a0, $sp, 0x7870
    ctx->pc = 0x1956a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30832));
    // 0x1956a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1956a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956ac: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1956b0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1956B0u;
    SET_GPR_U32(ctx, 31, 0x1956B8u);
    ctx->pc = 0x1956B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956B0u;
            // 0x1956b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956B8u; }
        if (ctx->pc != 0x1956B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956B8u; }
        if (ctx->pc != 0x1956B8u) { return; }
    }
    ctx->pc = 0x1956B8u;
label_1956b8:
    // 0x1956b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1956B8u;
    {
        const bool branch_taken_0x1956b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1956B8u;
            // 0x1956bc: 0x27a478b0  addiu       $a0, $sp, 0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956b8) {
            ctx->pc = 0x1956F0u;
            goto label_1956f0;
        }
    }
    ctx->pc = 0x1956C0u;
    // 0x1956c0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1956C0u;
    SET_GPR_U32(ctx, 31, 0x1956C8u);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956C8u; }
        if (ctx->pc != 0x1956C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956C8u; }
        if (ctx->pc != 0x1956C8u) { return; }
    }
    ctx->pc = 0x1956C8u;
label_1956c8:
    // 0x1956c8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1956cc: 0x27a478b0  addiu       $a0, $sp, 0x78B0
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30896));
    // 0x1956d0: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1956D0u;
    SET_GPR_U32(ctx, 31, 0x1956D8u);
    ctx->pc = 0x1956D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956D0u;
            // 0x1956d4: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956D8u; }
        if (ctx->pc != 0x1956D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956D8u; }
        if (ctx->pc != 0x1956D8u) { return; }
    }
    ctx->pc = 0x1956D8u;
label_1956d8:
    // 0x1956d8: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1956dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1956dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956e0: 0xc051a60  jal         func_146980
    ctx->pc = 0x1956E0u;
    SET_GPR_U32(ctx, 31, 0x1956E8u);
    ctx->pc = 0x1956E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956E0u;
            // 0x1956e4: 0x27a478b0  addiu       $a0, $sp, 0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956E8u; }
        if (ctx->pc != 0x1956E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956E8u; }
        if (ctx->pc != 0x1956E8u) { return; }
    }
    ctx->pc = 0x1956E8u;
label_1956e8:
    // 0x1956e8: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1956E8u;
    SET_GPR_U32(ctx, 31, 0x1956F0u);
    ctx->pc = 0x1956ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956E8u;
            // 0x1956ec: 0x27a478b0  addiu       $a0, $sp, 0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956F0u; }
        if (ctx->pc != 0x1956F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956F0u; }
        if (ctx->pc != 0x1956F0u) { return; }
    }
    ctx->pc = 0x1956F0u;
label_1956f0:
    // 0x1956f0: 0x8fa57864  lw          $a1, 0x7864($sp)
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 30820)));
    // 0x1956f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1956f8: 0x8fa67868  lw          $a2, 0x7868($sp)
    ctx->pc = 0x1956f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 30824)));
    // 0x1956fc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1956FCu;
    SET_GPR_U32(ctx, 31, 0x195704u);
    ctx->pc = 0x195700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956FCu;
            // 0x195700: 0x24845450  addiu       $a0, $a0, 0x5450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195704u; }
        if (ctx->pc != 0x195704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195704u; }
        if (ctx->pc != 0x195704u) { return; }
    }
    ctx->pc = 0x195704u;
label_195704:
    // 0x195704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195708: 0x34018780  ori         $at, $zero, 0x8780
    ctx->pc = 0x195708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34688);
    // 0x19570c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19570cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195718: 0x3e00008  jr          $ra
    ctx->pc = 0x195718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195718u;
            // 0x19571c: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195720u;
}
