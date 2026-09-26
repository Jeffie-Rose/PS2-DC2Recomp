#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _init_signal
// Address: 0x128798 - 0x1287bc
void _init_signal_0x128798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_0x128798");
#endif

    switch (ctx->pc) {
        case 0x1287b0u: goto label_1287b0;
        default: break;
    }

    ctx->pc = 0x128798u;

    // 0x128798: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12879c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12879cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1287a0: 0x8c443b84  lw          $a0, 0x3B84($v0)
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
    // 0x1287a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1287a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1287a8: 0xc04a126  jal         func_128498
    ctx->pc = 0x1287A8u;
    SET_GPR_U32(ctx, 31, 0x1287B0u);
    ctx->pc = 0x128498u;
    if (runtime->hasFunction(0x128498u)) {
        auto targetFn = runtime->lookupFunction(0x128498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287B0u; }
        if (ctx->pc != 0x1287B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x128498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287B0u; }
        if (ctx->pc != 0x1287B0u) { return; }
    }
    ctx->pc = 0x1287B0u;
label_1287b0:
    // 0x1287b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1287b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1287B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287B4u;
            // 0x1287b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1287BCu;
}
