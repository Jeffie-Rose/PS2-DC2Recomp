#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__13CEventSprite2FPf
// Address: 0x290b90 - 0x290b98
void SetColor__13CEventSprite2FPf_0x290b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__13CEventSprite2FPf_0x290b90");
#endif

    ctx->pc = 0x290b90u;

    // 0x290b90: 0x8041c5c  j           func_107170
    ctx->pc = 0x290B90u;
    ctx->pc = 0x290B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290B90u;
            // 0x290b94: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x107170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x290B98u;
}
