#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHaveItemInfo__12CMenuKeyFuncFii
// Address: 0x23ea50 - 0x23ebf8
void SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50");
#endif

    switch (ctx->pc) {
        case 0x23eadcu: goto label_23eadc;
        case 0x23eaecu: goto label_23eaec;
        case 0x23eb24u: goto label_23eb24;
        case 0x23eb50u: goto label_23eb50;
        case 0x23eb60u: goto label_23eb60;
        case 0x23eba0u: goto label_23eba0;
        default: break;
    }

    ctx->pc = 0x23ea50u;

    // 0x23ea50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ea54: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x23ea54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x23ea58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ea5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23ea60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ea64: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x23ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x23ea68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea6c: 0xa0450005  sb          $a1, 0x5($v0)
    ctx->pc = 0x23ea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ea70: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23ea74: 0xa0450005  sb          $a1, 0x5($v0)
    ctx->pc = 0x23ea74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ea78: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x23ea7c: 0xa0450005  sb          $a1, 0x5($v0)
    ctx->pc = 0x23ea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ea80: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x23ea84: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x23ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x23ea88: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23ea8c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x23ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x23ea90: 0x848500c2  lh          $a1, 0xC2($a0)
    ctx->pc = 0x23ea90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x23ea94: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23ea98: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x23ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x23ea9c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x23ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x23eaa0: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x23eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x23eaa4: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23eaa8: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x23eaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eaac: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23eab0: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x23eab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eab4: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x23eab8: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x23EAB8u;
    {
        const bool branch_taken_0x23eab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAB8u;
            // 0x23eabc: 0xa0430009  sb          $v1, 0x9($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab8) {
            ctx->pc = 0x23EB08u;
            goto label_23eb08;
        }
    }
    ctx->pc = 0x23EAC0u;
    // 0x23eac0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x23eac4: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x23eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x23eac8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x23eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x23eacc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EACCu;
            // 0x23ead0: 0x240201aa  addiu       $v0, $zero, 0x1AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23EAF4u;
            goto label_23eaf4;
        }
    }
    ctx->pc = 0x23EAD4u;
    // 0x23ead4: 0xc065c94  jal         func_197250
    ctx->pc = 0x23EAD4u;
    SET_GPR_U32(ctx, 31, 0x23EADCu);
    ctx->pc = 0x23EAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAD4u;
            // 0x23ead8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EADCu; }
        if (ctx->pc != 0x23EADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpectolNo__13CGameDataUsedFv_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EADCu; }
        if (ctx->pc != 0x23EADCu) { return; }
    }
    ctx->pc = 0x23EADCu;
label_23eadc:
    // 0x23eadc: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x23eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x23eae0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x23eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x23eae4: 0xc08b100  jal         func_22C400
    ctx->pc = 0x23EAE4u;
    SET_GPR_U32(ctx, 31, 0x23EAECu);
    ctx->pc = 0x23EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAE4u;
            // 0x23eae8: 0x8e040144  lw          $a0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C400u;
    if (runtime->hasFunction(0x22C400u)) {
        auto targetFn = runtime->lookupFunction(0x22C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EAECu; }
        if (ctx->pc != 0x23EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE_0x22c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EAECu; }
        if (ctx->pc != 0x23EAECu) { return; }
    }
    ctx->pc = 0x23EAECu;
label_23eaec:
    // 0x23eaec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23EAECu;
    {
        const bool branch_taken_0x23eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAECu;
            // 0x23eaf0: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaec) {
            ctx->pc = 0x23EB0Cu;
            goto label_23eb0c;
        }
    }
    ctx->pc = 0x23EAF4u;
label_23eaf4:
    // 0x23eaf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EAF4u;
    {
        const bool branch_taken_0x23eaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23eaf4) {
            ctx->pc = 0x23EB08u;
            goto label_23eb08;
        }
    }
    ctx->pc = 0x23EAFCu;
    // 0x23eafc: 0x860300d0  lh          $v1, 0xD0($s0)
    ctx->pc = 0x23eafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x23eb00: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x23eb04: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x23eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_23eb08:
    // 0x23eb08: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_23eb0c:
    // 0x23eb0c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x23eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x23eb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23eb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23eb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23eb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb1c: 0xc092afc  jal         func_24ABF0
    ctx->pc = 0x23EB1Cu;
    SET_GPR_U32(ctx, 31, 0x23EB24u);
    ctx->pc = 0x23EB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EB1Cu;
            // 0x23eb20: 0xa0400045  sb          $zero, 0x45($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB24u; }
        if (ctx->pc != 0x23EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB24u; }
        if (ctx->pc != 0x23EB24u) { return; }
    }
    ctx->pc = 0x23EB24u;
label_23eb24:
    // 0x23eb24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EB24u;
    {
        const bool branch_taken_0x23eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb24) {
            ctx->pc = 0x23EB3Cu;
            goto label_23eb3c;
        }
    }
    ctx->pc = 0x23EB2Cu;
    // 0x23eb2c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x23eb30: 0x90620045  lbu         $v0, 0x45($v1)
    ctx->pc = 0x23eb30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x23eb34: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23eb38: 0xa0620045  sb          $v0, 0x45($v1)
    ctx->pc = 0x23eb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 2));
label_23eb3c:
    // 0x23eb3c: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x23eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eb40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23eb44: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x23eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x23eb48: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x23EB48u;
    SET_GPR_U32(ctx, 31, 0x23EB50u);
    ctx->pc = 0x23EB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EB48u;
            // 0x23eb4c: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB50u; }
        if (ctx->pc != 0x23EB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB50u; }
        if (ctx->pc != 0x23EB50u) { return; }
    }
    ctx->pc = 0x23EB50u;
label_23eb50:
    // 0x23eb50: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23EB50u;
    {
        const bool branch_taken_0x23eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EB50u;
            // 0x23eb54: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb50) {
            ctx->pc = 0x23EBE0u;
            goto label_23ebe0;
        }
    }
    ctx->pc = 0x23EB58u;
    // 0x23eb58: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23EB58u;
    SET_GPR_U32(ctx, 31, 0x23EB60u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB60u; }
        if (ctx->pc != 0x23EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB60u; }
        if (ctx->pc != 0x23EB60u) { return; }
    }
    ctx->pc = 0x23EB60u;
label_23eb60:
    // 0x23eb60: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eb64: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23eb68: 0x24030137  addiu       $v1, $zero, 0x137
    ctx->pc = 0x23eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x23eb6c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x23eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x23eb70: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eb74: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x23eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x23eb78: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eb7c: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x23eb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x23eb80: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eb84: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x23eb84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x23eb88: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x23eb8c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23eb90: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EB90u;
    {
        const bool branch_taken_0x23eb90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23eb90) {
            ctx->pc = 0x23EBE8u;
            goto label_23ebe8;
        }
    }
    ctx->pc = 0x23EB98u;
    // 0x23eb98: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23EB98u;
    SET_GPR_U32(ctx, 31, 0x23EBA0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBA0u; }
        if (ctx->pc != 0x23EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBA0u; }
        if (ctx->pc != 0x23EBA0u) { return; }
    }
    ctx->pc = 0x23EBA0u;
label_23eba0:
    // 0x23eba0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x23eba4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23eba8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23ebac: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x23ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x23ebb0: 0x84264da0  lh          $a2, 0x4DA0($at)
    ctx->pc = 0x23ebb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
    // 0x23ebb4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23ebb8: 0xac660034  sw          $a2, 0x34($v1)
    ctx->pc = 0x23ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 6));
    // 0x23ebbc: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23ebc0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x23ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x23ebc4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23ebc8: 0xa0650007  sb          $a1, 0x7($v1)
    ctx->pc = 0x23ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ebcc: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23ebd0: 0xa0650008  sb          $a1, 0x8($v1)
    ctx->pc = 0x23ebd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ebd4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23ebd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23EBD8u;
    {
        const bool branch_taken_0x23ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBD8u;
            // 0x23ebdc: 0xa0640009  sb          $a0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebd8) {
            ctx->pc = 0x23EBE8u;
            goto label_23ebe8;
        }
    }
    ctx->pc = 0x23EBE0u;
label_23ebe0:
    // 0x23ebe0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23ebe4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x23ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_23ebe8:
    // 0x23ebe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBF0u;
            // 0x23ebf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EBF8u;
}
