#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: defMain__Fv
// Address: 0x2992a0 - 0x2992b8
void defMain__Fv_0x2992a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("defMain__Fv_0x2992a0");
#endif

    switch (ctx->pc) {
        case 0x2992a8u: goto label_2992a8;
        case 0x2992b0u: goto label_2992b0;
        default: break;
    }

    ctx->pc = 0x2992a0u;

    // 0x2992a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2992a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2992a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2992a8:
    // 0x2992a8: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x2992A8u;
    SET_GPR_U32(ctx, 31, 0x2992B0u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992B0u; }
        if (ctx->pc != 0x2992B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992B0u; }
        if (ctx->pc != 0x2992B0u) { return; }
    }
    ctx->pc = 0x2992B0u;
label_2992b0:
    // 0x2992b0: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x2992B0u;
    {
        const bool branch_taken_0x2992b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2992b0) {
            ctx->pc = 0x2992A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2992a8;
        }
    }
    ctx->pc = 0x2992B8u;
}
