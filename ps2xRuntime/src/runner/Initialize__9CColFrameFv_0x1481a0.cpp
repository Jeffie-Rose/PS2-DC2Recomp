#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CColFrameFv
// Address: 0x1481a0 - 0x1481b0
void Initialize__9CColFrameFv_0x1481a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CColFrameFv_0x1481a0");
#endif

    ctx->pc = 0x1481a0u;

    // 0x1481a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1481a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1481a4: 0xac820110  sw          $v0, 0x110($a0)
    ctx->pc = 0x1481a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
    // 0x1481a8: 0x804d948  j           func_136520
    ctx->pc = 0x1481A8u;
    ctx->pc = 0x1481ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1481A8u;
            // 0x1481ac: 0xac800114  sw          $zero, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (runtime->hasFunction(0x136520u)) {
        auto targetFn = runtime->lookupFunction(0x136520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__8mgCFrameFv_0x136520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1481B0u;
}
