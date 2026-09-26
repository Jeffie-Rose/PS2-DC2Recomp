#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveDmacHandler
// Address: 0x10fe10 - 0x10fe20
void RemoveDmacHandler_0x10fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveDmacHandler_0x10fe10");
#endif

    ctx->pc = 0x10fe10u;

    // 0x10fe10: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x10fe14: 0xc  syscall     0
    ctx->pc = 0x10fe14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FE20u;
}
