#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CWaterFrameFv
// Address: 0x185ee0 - 0x185eec
void Initialize__11CWaterFrameFv_0x185ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CWaterFrameFv_0x185ee0");
#endif

    ctx->pc = 0x185ee0u;

    // 0x185ee0: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x185ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x185ee4: 0x804d948  j           func_136520
    ctx->pc = 0x185EE4u;
    ctx->pc = 0x185EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EE4u;
            // 0x185ee8: 0xac800114  sw          $zero, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (runtime->hasFunction(0x136520u)) {
        auto targetFn = runtime->lookupFunction(0x136520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__8mgCFrameFv_0x136520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185EECu;
}
