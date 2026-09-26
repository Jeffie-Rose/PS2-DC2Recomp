#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CAutoMapGenFv
// Address: 0x1d9520 - 0x1d9528
void Step__11CAutoMapGenFv_0x1d9520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CAutoMapGenFv_0x1d9520");
#endif

    ctx->pc = 0x1d9520u;

    // 0x1d9520: 0x80755a0  j           func_1D5680
    ctx->pc = 0x1D9520u;
    ctx->pc = 0x1D9524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9520u;
            // 0x1d9524: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5680u;
    if (runtime->hasFunction(0x1D5680u)) {
        auto targetFn = runtime->lookupFunction(0x1D5680u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Step__13CHealingPointFv_0x1d5680(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D9528u;
}
