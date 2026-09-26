#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMenuDl3__FP10mgCTexture
// Address: 0x1f6a60 - 0x1f6a68
void InitMenuDl3__FP10mgCTexture_0x1f6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMenuDl3__FP10mgCTexture_0x1f6a60");
#endif

    ctx->pc = 0x1f6a60u;

    // 0x1f6a60: 0x808891c  j           func_222470
    ctx->pc = 0x1F6A60u;
    ctx->pc = 0x1F6A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A60u;
            // 0x1f6a64: 0x8f858fe4  lw          $a1, -0x701C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938596)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F6A68u;
}
