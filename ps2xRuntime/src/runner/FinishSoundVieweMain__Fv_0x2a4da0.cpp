#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FinishSoundVieweMain__Fv
// Address: 0x2a4da0 - 0x2a4da8
void FinishSoundVieweMain__Fv_0x2a4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FinishSoundVieweMain__Fv_0x2a4da0");
#endif

    ctx->pc = 0x2a4da0u;

    // 0x2a4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4DA8u;
}
