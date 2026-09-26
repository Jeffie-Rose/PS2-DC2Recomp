#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: demQuit__Fv
// Address: 0x1930b0 - 0x1930b8
void demQuit__Fv_0x1930b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demQuit__Fv_0x1930b0");
#endif

    ctx->pc = 0x1930b0u;

    // 0x1930b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1930B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1930B8u;
}
