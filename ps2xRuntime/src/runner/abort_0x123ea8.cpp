#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: abort
// Address: 0x123ea8 - 0x123ec8
void abort_0x123ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("abort_0x123ea8");
#endif

    switch (ctx->pc) {
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ec0u: goto label_123ec0;
        default: break;
    }

    ctx->pc = 0x123ea8u;

    // 0x123ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123eb0:
    // 0x123eb0: 0xc04a1d0  jal         func_128740
    ctx->pc = 0x123EB0u;
    SET_GPR_U32(ctx, 31, 0x123EB8u);
    ctx->pc = 0x123EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123EB0u;
            // 0x123eb4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128740u;
    if (runtime->hasFunction(0x128740u)) {
        auto targetFn = runtime->lookupFunction(0x128740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EB8u; }
        if (ctx->pc != 0x123EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        raise_0x128740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EB8u; }
        if (ctx->pc != 0x123EB8u) { return; }
    }
    ctx->pc = 0x123EB8u;
label_123eb8:
    // 0x123eb8: 0xc04002e  jal         func_1000B8
    ctx->pc = 0x123EB8u;
    SET_GPR_U32(ctx, 31, 0x123EC0u);
    ctx->pc = 0x123EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123EB8u;
            // 0x123ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000B8u;
    if (runtime->hasFunction(0x1000B8u)) {
        auto targetFn = runtime->lookupFunction(0x1000B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EC0u; }
        if (ctx->pc != 0x123EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _exit_0x1000b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EC0u; }
        if (ctx->pc != 0x123EC0u) { return; }
    }
    ctx->pc = 0x123EC0u;
label_123ec0:
    // 0x123ec0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x123EC0u;
    {
        const bool branch_taken_0x123ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ec0) {
            ctx->pc = 0x123EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123eb0;
        }
    }
    ctx->pc = 0x123EC8u;
}
