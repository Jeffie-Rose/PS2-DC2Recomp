#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_ITEM_OVER__FP12RS_STACKDATAi
// Address: 0x27af30 - 0x27af64
void ps2__CHECK_ITEM_OVER__FP12RS_STACKDATAi_0x27af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_ITEM_OVER__FP12RS_STACKDATAi_0x27af30");
#endif

    switch (ctx->pc) {
        case 0x27af44u: goto label_27af44;
        case 0x27af50u: goto label_27af50;
        default: break;
    }

    ctx->pc = 0x27af30u;

    // 0x27af30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27af34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27af38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27af3c: 0xc0684ec  jal         func_1A13B0
    ctx->pc = 0x27AF3Cu;
    SET_GPR_U32(ctx, 31, 0x27AF44u);
    ctx->pc = 0x27AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF3Cu;
            // 0x27af40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B0u;
    if (runtime->hasFunction(0x1A13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF44u; }
        if (ctx->pc != 0x27AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemOver__Fv_0x1a13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF44u; }
        if (ctx->pc != 0x27AF44u) { return; }
    }
    ctx->pc = 0x27AF44u;
label_27af44:
    // 0x27af44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27af48: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27AF48u;
    SET_GPR_U32(ctx, 31, 0x27AF50u);
    ctx->pc = 0x27AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF48u;
            // 0x27af4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF50u; }
        if (ctx->pc != 0x27AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF50u; }
        if (ctx->pc != 0x27AF50u) { return; }
    }
    ctx->pc = 0x27AF50u;
label_27af50:
    // 0x27af50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27af50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27af54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27af58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF5Cu;
            // 0x27af60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AF64u;
}
