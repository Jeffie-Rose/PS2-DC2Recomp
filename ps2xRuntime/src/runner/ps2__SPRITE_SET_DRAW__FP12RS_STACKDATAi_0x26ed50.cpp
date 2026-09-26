#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_DRAW__FP12RS_STACKDATAi
// Address: 0x26ed50 - 0x26eda8
void ps2__SPRITE_SET_DRAW__FP12RS_STACKDATAi_0x26ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_DRAW__FP12RS_STACKDATAi_0x26ed50");
#endif

    switch (ctx->pc) {
        case 0x26ed64u: goto label_26ed64;
        case 0x26ed70u: goto label_26ed70;
        case 0x26ed7cu: goto label_26ed7c;
        case 0x26ed94u: goto label_26ed94;
        default: break;
    }

    ctx->pc = 0x26ed50u;

    // 0x26ed50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ed54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ed58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ed5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ED5Cu;
    SET_GPR_U32(ctx, 31, 0x26ED64u);
    ctx->pc = 0x26ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED5Cu;
            // 0x26ed60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED64u; }
        if (ctx->pc != 0x26ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED64u; }
        if (ctx->pc != 0x26ED64u) { return; }
    }
    ctx->pc = 0x26ED64u;
label_26ed64:
    // 0x26ed64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed68: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ED68u;
    SET_GPR_U32(ctx, 31, 0x26ED70u);
    ctx->pc = 0x26ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED68u;
            // 0x26ed6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED70u; }
        if (ctx->pc != 0x26ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED70u; }
        if (ctx->pc != 0x26ED70u) { return; }
    }
    ctx->pc = 0x26ED70u;
label_26ed70:
    // 0x26ed70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed74: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26ED74u;
    SET_GPR_U32(ctx, 31, 0x26ED7Cu);
    ctx->pc = 0x26ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED74u;
            // 0x26ed78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED7Cu; }
        if (ctx->pc != 0x26ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED7Cu; }
        if (ctx->pc != 0x26ED7Cu) { return; }
    }
    ctx->pc = 0x26ED7Cu;
label_26ed7c:
    // 0x26ed7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED7Cu;
    {
        const bool branch_taken_0x26ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED7Cu;
            // 0x26ed80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed7c) {
            ctx->pc = 0x26ED8Cu;
            goto label_26ed8c;
        }
    }
    ctx->pc = 0x26ED84u;
    // 0x26ed84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED84u;
    {
        const bool branch_taken_0x26ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED84u;
            // 0x26ed88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed84) {
            ctx->pc = 0x26ED98u;
            goto label_26ed98;
        }
    }
    ctx->pc = 0x26ED8Cu;
label_26ed8c:
    // 0x26ed8c: 0xc0a42d8  jal         func_290B60
    ctx->pc = 0x26ED8Cu;
    SET_GPR_U32(ctx, 31, 0x26ED94u);
    ctx->pc = 0x290B60u;
    if (runtime->hasFunction(0x290B60u)) {
        auto targetFn = runtime->lookupFunction(0x290B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED94u; }
        if (ctx->pc != 0x26ED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawFlag__13CEventSprite2Fi_0x290b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED94u; }
        if (ctx->pc != 0x26ED94u) { return; }
    }
    ctx->pc = 0x26ED94u;
label_26ed94:
    // 0x26ed94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ed98:
    // 0x26ed98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ed9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ed9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eda0: 0x3e00008  jr          $ra
    ctx->pc = 0x26EDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDA0u;
            // 0x26eda4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EDA8u;
}
