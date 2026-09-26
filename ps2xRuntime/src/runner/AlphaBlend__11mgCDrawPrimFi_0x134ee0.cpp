#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AlphaBlend__11mgCDrawPrimFi
// Address: 0x134ee0 - 0x134ee8
void AlphaBlend__11mgCDrawPrimFi_0x134ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AlphaBlend__11mgCDrawPrimFi_0x134ee0");
#endif

    ctx->pc = 0x134ee0u;

    // 0x134ee0: 0x804e25c  j           func_138970
    ctx->pc = 0x134EE0u;
    ctx->pc = 0x134EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134EE0u;
            // 0x134ee4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x134EE8u;
}
