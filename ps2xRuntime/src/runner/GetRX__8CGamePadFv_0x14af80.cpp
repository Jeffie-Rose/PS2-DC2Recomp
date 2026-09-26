#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRX__8CGamePadFv
// Address: 0x14af80 - 0x14af88
void GetRX__8CGamePadFv_0x14af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRX__8CGamePadFv_0x14af80");
#endif

    ctx->pc = 0x14af80u;

    // 0x14af80: 0x8052bbc  j           func_14AEF0
    ctx->pc = 0x14AF80u;
    ctx->pc = 0x14AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF80u;
            // 0x14af84: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AEF0u;
    if (runtime->hasFunction(0x14AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x14AEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        AxisCalibration__Fi_0x14aef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14AF88u;
}
