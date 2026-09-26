#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_MOVE__FP12RS_STACKDATAi
// Address: 0x26eb50 - 0x26ebcc
void ps2__IMG_SET_MOVE__FP12RS_STACKDATAi_0x26eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_MOVE__FP12RS_STACKDATAi_0x26eb50");
#endif

    switch (ctx->pc) {
        case 0x26eb6cu: goto label_26eb6c;
        case 0x26eb7cu: goto label_26eb7c;
        case 0x26eb8cu: goto label_26eb8c;
        case 0x26eb98u: goto label_26eb98;
        case 0x26ebb4u: goto label_26ebb4;
        default: break;
    }

    ctx->pc = 0x26eb50u;

    // 0x26eb50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26eb54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26eb58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26eb5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26eb60: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26eb64: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EB64u;
    SET_GPR_U32(ctx, 31, 0x26EB6Cu);
    ctx->pc = 0x26EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB64u;
            // 0x26eb68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB6Cu; }
        if (ctx->pc != 0x26EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB6Cu; }
        if (ctx->pc != 0x26EB6Cu) { return; }
    }
    ctx->pc = 0x26EB6Cu;
label_26eb6c:
    // 0x26eb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb74: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EB74u;
    SET_GPR_U32(ctx, 31, 0x26EB7Cu);
    ctx->pc = 0x26EB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB74u;
            // 0x26eb78: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB7Cu; }
        if (ctx->pc != 0x26EB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB7Cu; }
        if (ctx->pc != 0x26EB7Cu) { return; }
    }
    ctx->pc = 0x26EB7Cu;
label_26eb7c:
    // 0x26eb7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26eb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26eb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb84: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EB84u;
    SET_GPR_U32(ctx, 31, 0x26EB8Cu);
    ctx->pc = 0x26EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB84u;
            // 0x26eb88: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB8Cu; }
        if (ctx->pc != 0x26EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB8Cu; }
        if (ctx->pc != 0x26EB8Cu) { return; }
    }
    ctx->pc = 0x26EB8Cu;
label_26eb8c:
    // 0x26eb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb90: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EB90u;
    SET_GPR_U32(ctx, 31, 0x26EB98u);
    ctx->pc = 0x26EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB90u;
            // 0x26eb94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB98u; }
        if (ctx->pc != 0x26EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB98u; }
        if (ctx->pc != 0x26EB98u) { return; }
    }
    ctx->pc = 0x26EB98u;
label_26eb98:
    // 0x26eb98: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26eb9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26eb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26eba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26eba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba8: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26ebac: 0xc0a41ec  jal         func_2907B0
    ctx->pc = 0x26EBACu;
    SET_GPR_U32(ctx, 31, 0x26EBB4u);
    ctx->pc = 0x26EBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBACu;
            // 0x26ebb0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2907B0u;
    if (runtime->hasFunction(0x2907B0u)) {
        auto targetFn = runtime->lookupFunction(0x2907B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBB4u; }
        if (ctx->pc != 0x26EBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMove__18CEventSpriteMotherFiiii_0x2907b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBB4u; }
        if (ctx->pc != 0x26EBB4u) { return; }
    }
    ctx->pc = 0x26EBB4u;
label_26ebb4:
    // 0x26ebb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26ebb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ebb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ebbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ebbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ebc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ebc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBC4u;
            // 0x26ebc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EBCCu;
}
