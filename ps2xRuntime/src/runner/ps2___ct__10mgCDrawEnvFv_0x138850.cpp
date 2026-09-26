#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10mgCDrawEnvFv
// Address: 0x138850 - 0x13887c
void ps2___ct__10mgCDrawEnvFv_0x138850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10mgCDrawEnvFv_0x138850");
#endif

    switch (ctx->pc) {
        case 0x138868u: goto label_138868;
        default: break;
    }

    ctx->pc = 0x138850u;

    // 0x138850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13885c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138860: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x138860u;
    SET_GPR_U32(ctx, 31, 0x138868u);
    ctx->pc = 0x138864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138860u;
            // 0x138864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138868u; }
        if (ctx->pc != 0x138868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCDrawEnvFi_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138868u; }
        if (ctx->pc != 0x138868u) { return; }
    }
    ctx->pc = 0x138868u;
label_138868:
    // 0x138868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13886c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138874: 0x3e00008  jr          $ra
    ctx->pc = 0x138874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138874u;
            // 0x138878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13887Cu;
}
