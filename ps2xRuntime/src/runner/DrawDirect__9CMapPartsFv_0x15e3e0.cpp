#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__9CMapPartsFv
// Address: 0x15e3e0 - 0x15e3e8
void DrawDirect__9CMapPartsFv_0x15e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__9CMapPartsFv_0x15e3e0");
#endif

    ctx->pc = 0x15e3e0u;

    // 0x15e3e0: 0x8059a9c  j           func_166A70
    ctx->pc = 0x15E3E0u;
    ctx->pc = 0x15E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3E0u;
            // 0x15e3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166A70u;
    if (runtime->hasFunction(0x166A70u)) {
        auto targetFn = runtime->lookupFunction(0x166A70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawSub__9CMapPartsFi_0x166a70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15E3E8u;
}
