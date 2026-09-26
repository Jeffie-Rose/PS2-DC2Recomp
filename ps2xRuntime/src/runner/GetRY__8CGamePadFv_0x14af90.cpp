#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRY__8CGamePadFv
// Address: 0x14af90 - 0x14af98
void GetRY__8CGamePadFv_0x14af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRY__8CGamePadFv_0x14af90");
#endif

    ctx->pc = 0x14af90u;

    // 0x14af90: 0x8052bbc  j           func_14AEF0
    ctx->pc = 0x14AF90u;
    ctx->pc = 0x14AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF90u;
            // 0x14af94: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AEF0u;
    if (runtime->hasFunction(0x14AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x14AEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        AxisCalibration__Fi_0x14aef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14AF98u;
}
