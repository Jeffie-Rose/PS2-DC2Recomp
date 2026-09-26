#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_COLOR__FP12RS_STACKDATAi
// Address: 0x26ec30 - 0x26ecc8
void ps2__IMG_SET_COLOR__FP12RS_STACKDATAi_0x26ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_COLOR__FP12RS_STACKDATAi_0x26ec30");
#endif

    switch (ctx->pc) {
        case 0x26ec50u: goto label_26ec50;
        case 0x26ec60u: goto label_26ec60;
        case 0x26ec70u: goto label_26ec70;
        case 0x26ec80u: goto label_26ec80;
        case 0x26ec8cu: goto label_26ec8c;
        case 0x26ecacu: goto label_26ecac;
        default: break;
    }

    ctx->pc = 0x26ec30u;

    // 0x26ec30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ec34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ec38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ec3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ec40: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26ec40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ec44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ec48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EC48u;
    SET_GPR_U32(ctx, 31, 0x26EC50u);
    ctx->pc = 0x26EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC48u;
            // 0x26ec4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC50u; }
        if (ctx->pc != 0x26EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC50u; }
        if (ctx->pc != 0x26EC50u) { return; }
    }
    ctx->pc = 0x26EC50u;
label_26ec50:
    // 0x26ec50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ec54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EC58u;
    SET_GPR_U32(ctx, 31, 0x26EC60u);
    ctx->pc = 0x26EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC58u;
            // 0x26ec5c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC60u; }
        if (ctx->pc != 0x26EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC60u; }
        if (ctx->pc != 0x26EC60u) { return; }
    }
    ctx->pc = 0x26EC60u;
label_26ec60:
    // 0x26ec60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ec64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec68: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EC68u;
    SET_GPR_U32(ctx, 31, 0x26EC70u);
    ctx->pc = 0x26EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC68u;
            // 0x26ec6c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC70u; }
        if (ctx->pc != 0x26EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC70u; }
        if (ctx->pc != 0x26EC70u) { return; }
    }
    ctx->pc = 0x26EC70u;
label_26ec70:
    // 0x26ec70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ec74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec78: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EC78u;
    SET_GPR_U32(ctx, 31, 0x26EC80u);
    ctx->pc = 0x26EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC78u;
            // 0x26ec7c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC80u; }
        if (ctx->pc != 0x26EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC80u; }
        if (ctx->pc != 0x26EC80u) { return; }
    }
    ctx->pc = 0x26EC80u;
label_26ec80:
    // 0x26ec80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec84: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EC84u;
    SET_GPR_U32(ctx, 31, 0x26EC8Cu);
    ctx->pc = 0x26EC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC84u;
            // 0x26ec88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC8Cu; }
        if (ctx->pc != 0x26EC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC8Cu; }
        if (ctx->pc != 0x26EC8Cu) { return; }
    }
    ctx->pc = 0x26EC8Cu;
label_26ec8c:
    // 0x26ec8c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26ec90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ec94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26ec98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec9c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26ec9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eca0: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26eca4: 0xc0a4214  jal         func_290850
    ctx->pc = 0x26ECA4u;
    SET_GPR_U32(ctx, 31, 0x26ECACu);
    ctx->pc = 0x26ECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECA4u;
            // 0x26eca8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290850u;
    if (runtime->hasFunction(0x290850u)) {
        auto targetFn = runtime->lookupFunction(0x290850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECACu; }
        if (ctx->pc != 0x26ECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__18CEventSpriteMotherFiiiii_0x290850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECACu; }
        if (ctx->pc != 0x26ECACu) { return; }
    }
    ctx->pc = 0x26ECACu;
label_26ecac:
    // 0x26ecac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ecacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ecb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ecb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ecb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ecb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ecb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ecb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ecbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECC0u;
            // 0x26ecc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ECC8u;
}
