#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetDngMapPos__11CDngFreeMapFii
// Address: 0x1eac70 - 0x1eae08
void ResetDngMapPos__11CDngFreeMapFii_0x1eac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetDngMapPos__11CDngFreeMapFii_0x1eac70");
#endif

    switch (ctx->pc) {
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1ead10u: goto label_1ead10;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead88u: goto label_1ead88;
        default: break;
    }

    ctx->pc = 0x1eac70u;

    // 0x1eac70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1eac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1eac74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1eac78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1eac7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eac80: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1eac80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eac88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eac8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1eac8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eac94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eac98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eac9c: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EACA4u);
    ctx->pc = 0x1EACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC9Cu;
            // 0x1eaca0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACA4u; }
        if (ctx->pc != 0x1EACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACA4u; }
        if (ctx->pc != 0x1EACA4u) { return; }
    }
    ctx->pc = 0x1EACA4u;
label_1eaca4:
    // 0x1eaca4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1eaca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaca8: 0x12c00048  beqz        $s6, . + 4 + (0x48 << 2)
    ctx->pc = 0x1EACA8u;
    {
        const bool branch_taken_0x1eaca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACA8u;
            // 0x1eacac: 0x3c03c2c8  lui         $v1, 0xC2C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca8) {
            ctx->pc = 0x1EADCCu;
            goto label_1eadcc;
        }
    }
    ctx->pc = 0x1EACB0u;
    // 0x1eacb0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1eacb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eacb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacb8: 0x8450000c  lh          $s0, 0xC($v0)
    ctx->pc = 0x1eacb8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eacbc: 0x8451000e  lh          $s1, 0xE($v0)
    ctx->pc = 0x1eacbcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1eacc0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EACC0u;
    {
        const bool branch_taken_0x1eacc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACC0u;
            // 0x1eacc4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc0) {
            ctx->pc = 0x1EAD58u;
            goto label_1ead58;
        }
    }
    ctx->pc = 0x1EACC8u;
label_1eacc8:
    // 0x1eacc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1eaccc: 0x549821  addu        $s3, $v0, $s4
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1eacd0: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1eacd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EACD4u;
    {
        const bool branch_taken_0x1eacd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACD4u;
            // 0x1eacd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacd4) {
            ctx->pc = 0x1EACF0u;
            goto label_1eacf0;
        }
    }
    ctx->pc = 0x1EACDCu;
    // 0x1eacdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eacdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eace0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1eace0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eace4: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1eace8: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EACE8u;
    SET_GPR_U32(ctx, 31, 0x1EACF0u);
    ctx->pc = 0x1EACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACE8u;
            // 0x1eacec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACF0u; }
        if (ctx->pc != 0x1EACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACF0u; }
        if (ctx->pc != 0x1EACF0u) { return; }
    }
    ctx->pc = 0x1EACF0u;
label_1eacf0:
    // 0x1eacf0: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1eacf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EACF4u;
    {
        const bool branch_taken_0x1eacf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACF4u;
            // 0x1eacf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacf4) {
            ctx->pc = 0x1EAD10u;
            goto label_1ead10;
        }
    }
    ctx->pc = 0x1EACFCu;
    // 0x1eacfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eacfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead00: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1ead04: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1ead08: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EAD08u;
    SET_GPR_U32(ctx, 31, 0x1EAD10u);
    ctx->pc = 0x1EAD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD08u;
            // 0x1ead0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD10u; }
        if (ctx->pc != 0x1EAD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD10u; }
        if (ctx->pc != 0x1EAD10u) { return; }
    }
    ctx->pc = 0x1EAD10u;
label_1ead10:
    // 0x1ead10: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1ead14: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAD14u;
    {
        const bool branch_taken_0x1ead14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1EAD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD14u;
            // 0x1ead18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead14) {
            ctx->pc = 0x1EAD30u;
            goto label_1ead30;
        }
    }
    ctx->pc = 0x1EAD1Cu;
    // 0x1ead1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead20: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1ead24: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x1ead24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1ead28: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EAD28u;
    SET_GPR_U32(ctx, 31, 0x1EAD30u);
    ctx->pc = 0x1EAD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD28u;
            // 0x1ead2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD30u; }
        if (ctx->pc != 0x1EAD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD30u; }
        if (ctx->pc != 0x1EAD30u) { return; }
    }
    ctx->pc = 0x1EAD30u;
label_1ead30:
    // 0x1ead30: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x1ead30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ead34: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAD34u;
    {
        const bool branch_taken_0x1ead34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EAD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD34u;
            // 0x1ead38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead34) {
            ctx->pc = 0x1EAD50u;
            goto label_1ead50;
        }
    }
    ctx->pc = 0x1EAD3Cu;
    // 0x1ead3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ead3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead40: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1ead40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1ead44: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x1ead44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1ead48: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EAD48u;
    SET_GPR_U32(ctx, 31, 0x1EAD50u);
    ctx->pc = 0x1EAD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD48u;
            // 0x1ead4c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD50u; }
        if (ctx->pc != 0x1EAD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD50u; }
        if (ctx->pc != 0x1EAD50u) { return; }
    }
    ctx->pc = 0x1EAD50u;
label_1ead50:
    // 0x1ead50: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1ead54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ead54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ead58:
    // 0x1ead58: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1ead58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1ead5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ead5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ead60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ead60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ead64: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1EAD64u;
    {
        const bool branch_taken_0x1ead64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead64) {
            ctx->pc = 0x1EACC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eacc8;
        }
    }
    ctx->pc = 0x1EAD6Cu;
    // 0x1ead6c: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x1ead6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1ead70: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ead70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ead74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead78: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ead7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead80: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EAD80u;
    SET_GPR_U32(ctx, 31, 0x1EAD88u);
    ctx->pc = 0x1EAD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD80u;
            // 0x1ead84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD88u; }
        if (ctx->pc != 0x1EAD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD88u; }
        if (ctx->pc != 0x1EAD88u) { return; }
    }
    ctx->pc = 0x1EAD88u;
label_1ead88:
    // 0x1ead88: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1ead88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ead8c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x1ead90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ead90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ead94: 0x3c034350  lui         $v1, 0x4350
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17232 << 16));
    // 0x1ead98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ead98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ead9c: 0x0  nop
    ctx->pc = 0x1ead9cu;
    // NOP
    // 0x1eada0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1eada0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1eada4: 0xe6a00108  swc1        $f0, 0x108($s5)
    ctx->pc = 0x1eada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    // 0x1eada8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1eada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eadac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eadacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eadb0: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x1EADB0u;
    {
        const bool branch_taken_0x1eadb0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADB0u;
            // 0x1eadb4: 0xe6a0010c  swc1        $f0, 0x10C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadb0) {
            ctx->pc = 0x1EADDCu;
            goto label_1eaddc;
        }
    }
    ctx->pc = 0x1EADB8u;
    // 0x1eadb8: 0xc6a00108  lwc1        $f0, 0x108($s5)
    ctx->pc = 0x1eadb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eadbc: 0xe6a00100  swc1        $f0, 0x100($s5)
    ctx->pc = 0x1eadbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 256), bits); }
    // 0x1eadc0: 0xc6a0010c  lwc1        $f0, 0x10C($s5)
    ctx->pc = 0x1eadc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eadc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EADC4u;
    {
        const bool branch_taken_0x1eadc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADC4u;
            // 0x1eadc8: 0xe6a00104  swc1        $f0, 0x104($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadc4) {
            ctx->pc = 0x1EADDCu;
            goto label_1eaddc;
        }
    }
    ctx->pc = 0x1EADCCu;
label_1eadcc:
    // 0x1eadcc: 0xaea30100  sw          $v1, 0x100($s5)
    ctx->pc = 0x1eadccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 3));
    // 0x1eadd0: 0xaea30108  sw          $v1, 0x108($s5)
    ctx->pc = 0x1eadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 264), GPR_U32(ctx, 3));
    // 0x1eadd4: 0xaea30104  sw          $v1, 0x104($s5)
    ctx->pc = 0x1eadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 3));
    // 0x1eadd8: 0xaea3010c  sw          $v1, 0x10C($s5)
    ctx->pc = 0x1eadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 268), GPR_U32(ctx, 3));
label_1eaddc:
    // 0x1eaddc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1eaddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eade0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eade0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eade4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eade4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eade8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eade8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eadec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eadecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eadf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eadf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eadf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eadf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eadf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eadf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eadfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eadfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eae00: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE00u;
            // 0x1eae04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAE08u;
}
