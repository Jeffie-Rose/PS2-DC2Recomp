#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WriteFileSocket__FPcPUii
// Address: 0x289410 - 0x289418
void WriteFileSocket__FPcPUii_0x289410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFileSocket__FPcPUii_0x289410");
#endif

    ctx->pc = 0x289410u;

    // 0x289410: 0x3e00008  jr          $ra
    ctx->pc = 0x289410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289418u;
}
