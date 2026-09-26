#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuManualKey__Fv
// Address: 0x2c0340 - 0x2c0348
void MenuManualKey__Fv_0x2c0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuManualKey__Fv_0x2c0340");
#endif

    ctx->pc = 0x2c0340u;

    // 0x2c0340: 0x80b0268  j           func_2C09A0
    ctx->pc = 0x2C0340u;
    ctx->pc = 0x2C0344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0340u;
            // 0x2c0344: 0x8f849c7c  lw          $a0, -0x6384($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C09A0u;
    if (runtime->hasFunction(0x2C09A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C09A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__11CManualMenuFv_0x2c09a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C0348u;
}
