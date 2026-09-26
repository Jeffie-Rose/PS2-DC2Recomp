#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableDispatchThread
// Address: 0x10ff60 - 0x10ff70
void EnableDispatchThread_0x10ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableDispatchThread_0x10ff60");
#endif

    ctx->pc = 0x10ff60u;

    // 0x10ff60: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x10ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x10ff64: 0xc  syscall     0
    ctx->pc = 0x10ff64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ff68: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FF70u;
}
