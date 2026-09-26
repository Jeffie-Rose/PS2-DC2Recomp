#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPolygonEnvReset__Fv
// Address: 0x234680 - 0x23468c
void MenuPolygonEnvReset__Fv_0x234680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPolygonEnvReset__Fv_0x234680");
#endif

    ctx->pc = 0x234680u;

    // 0x234680: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x234680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x234684: 0x8050dec  j           func_1437B0
    ctx->pc = 0x234684u;
    ctx->pc = 0x234688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234684u;
            // 0x234688: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23468Cu;
}
