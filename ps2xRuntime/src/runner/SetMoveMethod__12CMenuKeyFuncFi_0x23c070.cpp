#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMoveMethod__12CMenuKeyFuncFi
// Address: 0x23c070 - 0x23c07c
void SetMoveMethod__12CMenuKeyFuncFi_0x23c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMoveMethod__12CMenuKeyFuncFi_0x23c070");
#endif

    ctx->pc = 0x23c070u;

    // 0x23c070: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c074: 0x808f020  j           func_23C080
    ctx->pc = 0x23C074u;
    ctx->pc = 0x23C078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C074u;
            // 0x23c078: 0xa0450020  sb          $a1, 0x20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C080u;
    if (runtime->hasFunction(0x23C080u)) {
        auto targetFn = runtime->lookupFunction(0x23C080u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetWakuMoveMethod__12CMenuKeyFuncFi_0x23c080(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23C07Cu;
}
