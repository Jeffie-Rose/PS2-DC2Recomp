#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCostumeKey__Fv
// Address: 0x2be030 - 0x2be038
void MenuCostumeKey__Fv_0x2be030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCostumeKey__Fv_0x2be030");
#endif

    ctx->pc = 0x2be030u;

    // 0x2be030: 0x80af318  j           func_2BCC60
    ctx->pc = 0x2BE030u;
    ctx->pc = 0x2BE034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE030u;
            // 0x2be034: 0x8f849c30  lw          $a0, -0x63D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCC60u;
    if (runtime->hasFunction(0x2BCC60u)) {
        auto targetFn = runtime->lookupFunction(0x2BCC60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__15CMenuCostumeSelFv_0x2bcc60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BE038u;
}
