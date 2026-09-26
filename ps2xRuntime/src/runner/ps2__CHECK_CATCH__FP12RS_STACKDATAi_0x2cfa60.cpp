#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_CATCH__FP12RS_STACKDATAi
// Address: 0x2cfa60 - 0x2cfaf0
void ps2__CHECK_CATCH__FP12RS_STACKDATAi_0x2cfa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_CATCH__FP12RS_STACKDATAi_0x2cfa60");
#endif

    switch (ctx->pc) {
        case 0x2cfa80u: goto label_2cfa80;
        case 0x2cfaa0u: goto label_2cfaa0;
        case 0x2cfab4u: goto label_2cfab4;
        case 0x2cfac8u: goto label_2cfac8;
        case 0x2cfad4u: goto label_2cfad4;
        default: break;
    }

    ctx->pc = 0x2cfa60u;

    // 0x2cfa60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfa64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cfa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfa68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cfa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cfa6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cfa70: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2cfa70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cfa74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cfa78: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CFA78u;
    SET_GPR_U32(ctx, 31, 0x2CFA80u);
    ctx->pc = 0x2CFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA78u;
            // 0x2cfa7c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA80u; }
        if (ctx->pc != 0x2CFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA80u; }
        if (ctx->pc != 0x2CFA80u) { return; }
    }
    ctx->pc = 0x2CFA80u;
label_2cfa80:
    // 0x2cfa80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfa80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfa88: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFA88u;
    {
        const bool branch_taken_0x2cfa88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA88u;
            // 0x2cfa8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa88) {
            ctx->pc = 0x2CFAA4u;
            goto label_2cfaa4;
        }
    }
    ctx->pc = 0x2CFA90u;
    // 0x2cfa90: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfa94: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfa98: 0xc05ab4c  jal         func_16AD30
    ctx->pc = 0x2CFA98u;
    SET_GPR_U32(ctx, 31, 0x2CFAA0u);
    ctx->pc = 0x2CFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA98u;
            // 0x2cfa9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AD30u;
    if (runtime->hasFunction(0x16AD30u)) {
        auto targetFn = runtime->lookupFunction(0x16AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAA0u; }
        if (ctx->pc != 0x2CFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnemyCatch__12CActionCharaFPc_0x16ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAA0u; }
        if (ctx->pc != 0x2CFAA0u) { return; }
    }
    ctx->pc = 0x2CFAA0u;
label_2cfaa0:
    // 0x2cfaa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cfaa4:
    // 0x2cfaa4: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFAA4u;
    {
        const bool branch_taken_0x2cfaa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAA4u;
            // 0x2cfaa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfaa4) {
            ctx->pc = 0x2CFAD4u;
            goto label_2cfad4;
        }
    }
    ctx->pc = 0x2CFAACu;
    // 0x2cfaac: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CFAACu;
    SET_GPR_U32(ctx, 31, 0x2CFAB4u);
    ctx->pc = 0x2CFAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAACu;
            // 0x2cfab0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAB4u; }
        if (ctx->pc != 0x2CFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAB4u; }
        if (ctx->pc != 0x2CFAB4u) { return; }
    }
    ctx->pc = 0x2CFAB4u;
label_2cfab4:
    // 0x2cfab4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cfab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfabc: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfac0: 0xc05ab18  jal         func_16AC60
    ctx->pc = 0x2CFAC0u;
    SET_GPR_U32(ctx, 31, 0x2CFAC8u);
    ctx->pc = 0x2CFAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAC0u;
            // 0x2cfac4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AC60u;
    if (runtime->hasFunction(0x16AC60u)) {
        auto targetFn = runtime->lookupFunction(0x16AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAC8u; }
        if (ctx->pc != 0x2CFAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeri__12CActionCharaFPci_0x16ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAC8u; }
        if (ctx->pc != 0x2CFAC8u) { return; }
    }
    ctx->pc = 0x2CFAC8u;
label_2cfac8:
    // 0x2cfac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cfac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfacc: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CFACCu;
    SET_GPR_U32(ctx, 31, 0x2CFAD4u);
    ctx->pc = 0x2CFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFACCu;
            // 0x2cfad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAD4u; }
        if (ctx->pc != 0x2CFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAD4u; }
        if (ctx->pc != 0x2CFAD4u) { return; }
    }
    ctx->pc = 0x2CFAD4u;
label_2cfad4:
    // 0x2cfad4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cfad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfadc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cfadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAE8u;
            // 0x2cfaec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFAF0u;
}
