#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: demoAttractComplete__Fv
// Address: 0x1930e0 - 0x1930e8
void demoAttractComplete__Fv_0x1930e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoAttractComplete__Fv_0x1930e0");
#endif

    ctx->pc = 0x1930e0u;

    // 0x1930e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1930E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1930E8u;
}
