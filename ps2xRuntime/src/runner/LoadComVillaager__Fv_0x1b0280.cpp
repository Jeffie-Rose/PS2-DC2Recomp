#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadComVillaager__Fv
// Address: 0x1b0280 - 0x1b0288
void LoadComVillaager__Fv_0x1b0280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadComVillaager__Fv_0x1b0280");
#endif

    ctx->pc = 0x1b0280u;

    // 0x1b0280: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0288u;
}
