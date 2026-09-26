#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitEnd__14CBaseMenuClassFv
// Address: 0x1f24e0 - 0x1f24e8
void ExitEnd__14CBaseMenuClassFv_0x1f24e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitEnd__14CBaseMenuClassFv_0x1f24e0");
#endif

    ctx->pc = 0x1f24e0u;

    // 0x1f24e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F24E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F24E8u;
}
