#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iGetCop0
// Address: 0x110380 - 0x110390
void iGetCop0_0x110380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iGetCop0_0x110380");
#endif

    ctx->pc = 0x110380u;

    // 0x110380: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x110384: 0xc  syscall     0
    ctx->pc = 0x110384u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110388: 0x3e00008  jr          $ra
    ctx->pc = 0x110388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110390u;
}
