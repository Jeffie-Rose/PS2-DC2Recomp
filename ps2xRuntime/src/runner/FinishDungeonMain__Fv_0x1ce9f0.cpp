#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FinishDungeonMain__Fv
// Address: 0x1ce9f0 - 0x1ce9f8
void FinishDungeonMain__Fv_0x1ce9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FinishDungeonMain__Fv_0x1ce9f0");
#endif

    ctx->pc = 0x1ce9f0u;

    // 0x1ce9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE9F8u;
}
