#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CMapPartsFv
// Address: 0x15e3d0 - 0x15e3d8
void Draw__9CMapPartsFv_0x15e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CMapPartsFv_0x15e3d0");
#endif

    ctx->pc = 0x15e3d0u;

    // 0x15e3d0: 0x8059a9c  j           func_166A70
    ctx->pc = 0x15E3D0u;
    ctx->pc = 0x15E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3D0u;
            // 0x15e3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166A70u;
    if (runtime->hasFunction(0x166A70u)) {
        auto targetFn = runtime->lookupFunction(0x166A70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawSub__9CMapPartsFi_0x166a70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15E3D8u;
}
