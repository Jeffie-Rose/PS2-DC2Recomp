#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CObjectFrameFv
// Address: 0x16a130 - 0x16a138
void Initialize__12CObjectFrameFv_0x16a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CObjectFrameFv_0x16a130");
#endif

    ctx->pc = 0x16a130u;

    // 0x16a130: 0x805a778  j           func_169DE0
    ctx->pc = 0x16A130u;
    ctx->pc = 0x16A134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A130u;
            // 0x16a134: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DE0u;
    if (runtime->hasFunction(0x169DE0u)) {
        auto targetFn = runtime->lookupFunction(0x169DE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__7CObjectFv_0x169de0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A138u;
}
