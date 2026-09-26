#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CChillAfterHitFv
// Address: 0x1d4880 - 0x1d48a8
void ps2___ct__14CChillAfterHitFv_0x1d4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CChillAfterHitFv_0x1d4880");
#endif

    switch (ctx->pc) {
        case 0x1d4894u: goto label_1d4894;
        default: break;
    }

    ctx->pc = 0x1d4880u;

    // 0x1d4880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d488c: 0xc06f9bc  jal         func_1BE6F0
    ctx->pc = 0x1D488Cu;
    SET_GPR_U32(ctx, 31, 0x1D4894u);
    ctx->pc = 0x1D4890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D488Cu;
            // 0x1d4890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6F0u;
    if (runtime->hasFunction(0x1BE6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4894u; }
        if (ctx->pc != 0x1D4894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CChillAfterHitFv_0x1be6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4894u; }
        if (ctx->pc != 0x1D4894u) { return; }
    }
    ctx->pc = 0x1D4894u;
label_1d4894:
    // 0x1d4894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d4894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d489c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d489cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48A0u;
            // 0x1d48a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D48A8u;
}
