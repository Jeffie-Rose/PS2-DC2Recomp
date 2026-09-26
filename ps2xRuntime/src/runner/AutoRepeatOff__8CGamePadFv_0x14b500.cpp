#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoRepeatOff__8CGamePadFv
// Address: 0x14b500 - 0x14b508
void AutoRepeatOff__8CGamePadFv_0x14b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoRepeatOff__8CGamePadFv_0x14b500");
#endif

    ctx->pc = 0x14b500u;

    // 0x14b500: 0x8052bf4  j           func_14AFD0
    ctx->pc = 0x14B500u;
    ctx->pc = 0x14B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B500u;
            // 0x14b504: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AFD0u;
    if (runtime->hasFunction(0x14AFD0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CancelAutoRepeat__8CGamePadFi_0x14afd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14B508u;
}
