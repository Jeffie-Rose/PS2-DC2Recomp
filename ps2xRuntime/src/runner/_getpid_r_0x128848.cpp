#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _getpid_r
// Address: 0x128848 - 0x128864
void _getpid_r_0x128848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getpid_r_0x128848");
#endif

    switch (ctx->pc) {
        case 0x128858u: goto label_128858;
        default: break;
    }

    ctx->pc = 0x128848u;

    // 0x128848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12884c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128850: 0xc04422c  jal         func_1108B0
    ctx->pc = 0x128850u;
    SET_GPR_U32(ctx, 31, 0x128858u);
    ctx->pc = 0x1108B0u;
    if (runtime->hasFunction(0x1108B0u)) {
        auto targetFn = runtime->lookupFunction(0x1108B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getpid_0x1108b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    }
    ctx->pc = 0x128858u;
label_128858:
    // 0x128858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12885c: 0x3e00008  jr          $ra
    ctx->pc = 0x12885Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12885Cu;
            // 0x128860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128864u;
}
