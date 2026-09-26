#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: skip__10CRunScriptFv
// Address: 0x1873b0 - 0x1873bc
void skip__10CRunScriptFv_0x1873b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("skip__10CRunScriptFv_0x1873b0");
#endif

    ctx->pc = 0x1873b0u;

    // 0x1873b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1873b4: 0x8061c78  j           func_1871E0
    ctx->pc = 0x1873B4u;
    ctx->pc = 0x1873B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1873B4u;
            // 0x1873b8: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871E0u;
    if (runtime->hasFunction(0x1871E0u)) {
        auto targetFn = runtime->lookupFunction(0x1871E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        resume__10CRunScriptFv_0x1871e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1873BCu;
}
