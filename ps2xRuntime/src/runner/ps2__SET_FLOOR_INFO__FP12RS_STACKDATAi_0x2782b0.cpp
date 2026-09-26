#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FLOOR_INFO__FP12RS_STACKDATAi
// Address: 0x2782b0 - 0x278428
void ps2__SET_FLOOR_INFO__FP12RS_STACKDATAi_0x2782b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FLOOR_INFO__FP12RS_STACKDATAi_0x2782b0");
#endif

    switch (ctx->pc) {
        case 0x2782d0u: goto label_2782d0;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f8u: goto label_2782f8;
        case 0x278328u: goto label_278328;
        case 0x278368u: goto label_278368;
        case 0x278370u: goto label_278370;
        case 0x278380u: goto label_278380;
        case 0x278388u: goto label_278388;
        case 0x278398u: goto label_278398;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783f4u: goto label_2783f4;
        default: break;
    }

    ctx->pc = 0x2782b0u;

    // 0x2782b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2782b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2782b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2782b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2782b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2782b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2782bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2782bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2782c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2782c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2782c4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2782c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2782c8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2782C8u;
    SET_GPR_U32(ctx, 31, 0x2782D0u);
    ctx->pc = 0x2782CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782C8u;
            // 0x2782cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782D0u; }
        if (ctx->pc != 0x2782D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782D0u; }
        if (ctx->pc != 0x2782D0u) { return; }
    }
    ctx->pc = 0x2782D0u;
label_2782d0:
    // 0x2782d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2782d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2782d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2782D8u;
    SET_GPR_U32(ctx, 31, 0x2782E0u);
    ctx->pc = 0x2782DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782D8u;
            // 0x2782dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782E0u; }
        if (ctx->pc != 0x2782E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782E0u; }
        if (ctx->pc != 0x2782E0u) { return; }
    }
    ctx->pc = 0x2782E0u;
label_2782e0:
    // 0x2782e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2782e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2782e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2782E8u;
    SET_GPR_U32(ctx, 31, 0x2782F0u);
    ctx->pc = 0x2782ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782E8u;
            // 0x2782ec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782F0u; }
        if (ctx->pc != 0x2782F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782F0u; }
        if (ctx->pc != 0x2782F0u) { return; }
    }
    ctx->pc = 0x2782F0u;
label_2782f0:
    // 0x2782f0: 0xc064220  jal         func_190880
    ctx->pc = 0x2782F0u;
    SET_GPR_U32(ctx, 31, 0x2782F8u);
    ctx->pc = 0x2782F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782F0u;
            // 0x2782f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782F8u; }
        if (ctx->pc != 0x2782F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782F8u; }
        if (ctx->pc != 0x2782F8u) { return; }
    }
    ctx->pc = 0x2782F8u;
label_2782f8:
    // 0x2782f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2782F8u;
    {
        const bool branch_taken_0x2782f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2782FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2782F8u;
            // 0x2782fc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782f8) {
            ctx->pc = 0x278308u;
            goto label_278308;
        }
    }
    ctx->pc = 0x278300u;
    // 0x278300: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x278300u;
    {
        const bool branch_taken_0x278300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278300u;
            // 0x278304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278300) {
            ctx->pc = 0x27840Cu;
            goto label_27840c;
        }
    }
    ctx->pc = 0x278308u;
label_278308:
    // 0x278308: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x278308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x27830c: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x27830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x278310: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278310u;
    {
        const bool branch_taken_0x278310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278310u;
            // 0x278314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278310) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x278318u;
    // 0x278318: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x278318u;
    {
        const bool branch_taken_0x278318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278318u;
            // 0x27831c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278318) {
            ctx->pc = 0x27840Cu;
            goto label_27840c;
        }
    }
    ctx->pc = 0x278320u;
label_278320:
    // 0x278320: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x278320u;
    SET_GPR_U32(ctx, 31, 0x278328u);
    ctx->pc = 0x278324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278320u;
            // 0x278324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278328u; }
        if (ctx->pc != 0x278328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278328u; }
        if (ctx->pc != 0x278328u) { return; }
    }
    ctx->pc = 0x278328u;
label_278328:
    // 0x278328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278328u;
    {
        const bool branch_taken_0x278328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278328u;
            // 0x27832c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278328) {
            ctx->pc = 0x278338u;
            goto label_278338;
        }
    }
    ctx->pc = 0x278330u;
    // 0x278330: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x278330u;
    {
        const bool branch_taken_0x278330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278330u;
            // 0x278334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278330) {
            ctx->pc = 0x27840Cu;
            goto label_27840c;
        }
    }
    ctx->pc = 0x278338u;
label_278338:
    // 0x278338: 0x2e610008  sltiu       $at, $s3, 0x8
    ctx->pc = 0x278338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x27833c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x27833Cu;
    {
        const bool branch_taken_0x27833c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27833Cu;
            // 0x278340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27833c) {
            ctx->pc = 0x278400u;
            goto label_278400;
        }
    }
    ctx->pc = 0x278344u;
    // 0x278344: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x278348: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27834c: 0x2463cb80  addiu       $v1, $v1, -0x3480
    ctx->pc = 0x27834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953856));
    // 0x278350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278358: 0x400008  jr          $v0
    ctx->pc = 0x278358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278360u: goto label_278360;
            case 0x278378u: goto label_278378;
            case 0x278390u: goto label_278390;
            case 0x2783A0u: goto label_2783a0;
            case 0x2783B0u: goto label_2783b0;
            case 0x2783C0u: goto label_2783c0;
            case 0x2783DCu: goto label_2783dc;
            case 0x2783ECu: goto label_2783ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278360u;
label_278360:
    // 0x278360: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x278360u;
    SET_GPR_U32(ctx, 31, 0x278368u);
    ctx->pc = 0x278364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278360u;
            // 0x278364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278368u; }
        if (ctx->pc != 0x278368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278368u; }
        if (ctx->pc != 0x278368u) { return; }
    }
    ctx->pc = 0x278368u;
label_278368:
    // 0x278368: 0xc0a248c  jal         func_289230
    ctx->pc = 0x278368u;
    SET_GPR_U32(ctx, 31, 0x278370u);
    ctx->pc = 0x27836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278368u;
            // 0x27836c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278370u; }
        if (ctx->pc != 0x278370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278370u; }
        if (ctx->pc != 0x278370u) { return; }
    }
    ctx->pc = 0x278370u;
label_278370:
    // 0x278370: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x278370u;
    {
        const bool branch_taken_0x278370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278370u;
            // 0x278374: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278370) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x278378u;
label_278378:
    // 0x278378: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x278378u;
    SET_GPR_U32(ctx, 31, 0x278380u);
    ctx->pc = 0x27837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278378u;
            // 0x27837c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278380u; }
        if (ctx->pc != 0x278380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278380u; }
        if (ctx->pc != 0x278380u) { return; }
    }
    ctx->pc = 0x278380u;
label_278380:
    // 0x278380: 0xc0a248c  jal         func_289230
    ctx->pc = 0x278380u;
    SET_GPR_U32(ctx, 31, 0x278388u);
    ctx->pc = 0x278384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278380u;
            // 0x278384: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278388u; }
        if (ctx->pc != 0x278388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278388u; }
        if (ctx->pc != 0x278388u) { return; }
    }
    ctx->pc = 0x278388u;
label_278388:
    // 0x278388: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x278388u;
    {
        const bool branch_taken_0x278388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278388u;
            // 0x27838c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278388) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x278390u;
label_278390:
    // 0x278390: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278390u;
    SET_GPR_U32(ctx, 31, 0x278398u);
    ctx->pc = 0x278394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278390u;
            // 0x278394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278398u; }
        if (ctx->pc != 0x278398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278398u; }
        if (ctx->pc != 0x278398u) { return; }
    }
    ctx->pc = 0x278398u;
label_278398:
    // 0x278398: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x278398u;
    {
        const bool branch_taken_0x278398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278398u;
            // 0x27839c: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278398) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783A0u;
label_2783a0:
    // 0x2783a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2783A0u;
    SET_GPR_U32(ctx, 31, 0x2783A8u);
    ctx->pc = 0x2783A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783A0u;
            // 0x2783a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783A8u; }
        if (ctx->pc != 0x2783A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783A8u; }
        if (ctx->pc != 0x2783A8u) { return; }
    }
    ctx->pc = 0x2783A8u;
label_2783a8:
    // 0x2783a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2783A8u;
    {
        const bool branch_taken_0x2783a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783A8u;
            // 0x2783ac: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783a8) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783B0u;
label_2783b0:
    // 0x2783b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2783B0u;
    SET_GPR_U32(ctx, 31, 0x2783B8u);
    ctx->pc = 0x2783B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783B0u;
            // 0x2783b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783B8u; }
        if (ctx->pc != 0x2783B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783B8u; }
        if (ctx->pc != 0x2783B8u) { return; }
    }
    ctx->pc = 0x2783B8u;
label_2783b8:
    // 0x2783b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2783B8u;
    {
        const bool branch_taken_0x2783b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783B8u;
            // 0x2783bc: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783b8) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783C0u;
label_2783c0:
    // 0x2783c0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2783C0u;
    SET_GPR_U32(ctx, 31, 0x2783C8u);
    ctx->pc = 0x2783C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783C0u;
            // 0x2783c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783C8u; }
        if (ctx->pc != 0x2783C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783C8u; }
        if (ctx->pc != 0x2783C8u) { return; }
    }
    ctx->pc = 0x2783C8u;
label_2783c8:
    // 0x2783c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2783c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2783cc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2783ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2783d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2783d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2783d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2783D4u;
    {
        const bool branch_taken_0x2783d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783D4u;
            // 0x2783d8: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783d4) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783DCu;
label_2783dc:
    // 0x2783dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2783DCu;
    SET_GPR_U32(ctx, 31, 0x2783E4u);
    ctx->pc = 0x2783E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783DCu;
            // 0x2783e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783E4u; }
        if (ctx->pc != 0x2783E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783E4u; }
        if (ctx->pc != 0x2783E4u) { return; }
    }
    ctx->pc = 0x2783E4u;
label_2783e4:
    // 0x2783e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2783E4u;
    {
        const bool branch_taken_0x2783e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783E4u;
            // 0x2783e8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783e4) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783ECu;
label_2783ec:
    // 0x2783ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2783ECu;
    SET_GPR_U32(ctx, 31, 0x2783F4u);
    ctx->pc = 0x2783F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783ECu;
            // 0x2783f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783F4u; }
        if (ctx->pc != 0x2783F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783F4u; }
        if (ctx->pc != 0x2783F4u) { return; }
    }
    ctx->pc = 0x2783F4u;
label_2783f4:
    // 0x2783f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2783F4u;
    {
        const bool branch_taken_0x2783f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783F4u;
            // 0x2783f8: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783f4) {
            ctx->pc = 0x278408u;
            goto label_278408;
        }
    }
    ctx->pc = 0x2783FCu;
    // 0x2783fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2783fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278400:
    // 0x278400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x278400u;
    {
        const bool branch_taken_0x278400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278400u;
            // 0x278404: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278400) {
            ctx->pc = 0x278410u;
            goto label_278410;
        }
    }
    ctx->pc = 0x278408u;
label_278408:
    // 0x278408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27840c:
    // 0x27840c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_278410:
    // 0x278410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x278414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27841c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27841cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278420: 0x3e00008  jr          $ra
    ctx->pc = 0x278420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278420u;
            // 0x278424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278428u;
}
