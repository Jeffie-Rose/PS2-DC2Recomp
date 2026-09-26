#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLY__8CGamePadFv
// Address: 0x14afb0 - 0x14afb8
void GetLY__8CGamePadFv_0x14afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLY__8CGamePadFv_0x14afb0");
#endif

    ctx->pc = 0x14afb0u;

    // 0x14afb0: 0x8052bbc  j           func_14AEF0
    ctx->pc = 0x14AFB0u;
    ctx->pc = 0x14AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFB0u;
            // 0x14afb4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AEF0u;
    if (runtime->hasFunction(0x14AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x14AEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        AxisCalibration__Fi_0x14aef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14AFB8u;
}
