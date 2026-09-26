#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CFireAfterHitFv
// Address: 0x1d4850 - 0x1d4878
void ps2___ct__13CFireAfterHitFv_0x1d4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CFireAfterHitFv_0x1d4850");
#endif

    switch (ctx->pc) {
        case 0x1d4864u: goto label_1d4864;
        default: break;
    }

    ctx->pc = 0x1d4850u;

    // 0x1d4850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d485c: 0xc06fd3c  jal         func_1BF4F0
    ctx->pc = 0x1D485Cu;
    SET_GPR_U32(ctx, 31, 0x1D4864u);
    ctx->pc = 0x1D4860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D485Cu;
            // 0x1d4860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF4F0u;
    if (runtime->hasFunction(0x1BF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4864u; }
        if (ctx->pc != 0x1D4864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CFireAfterHitFv_0x1bf4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4864u; }
        if (ctx->pc != 0x1D4864u) { return; }
    }
    ctx->pc = 0x1D4864u;
label_1d4864:
    // 0x1d4864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d4864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d486c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d486cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4870: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4870u;
            // 0x1d4874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4878u;
}
