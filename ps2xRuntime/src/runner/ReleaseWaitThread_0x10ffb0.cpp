#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReleaseWaitThread
// Address: 0x10ffb0 - 0x10ffc0
void ReleaseWaitThread_0x10ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseWaitThread_0x10ffb0");
#endif

    ctx->pc = 0x10ffb0u;

    // 0x10ffb0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x10ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x10ffb4: 0xc  syscall     0
    ctx->pc = 0x10ffb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FFC0u;
}
