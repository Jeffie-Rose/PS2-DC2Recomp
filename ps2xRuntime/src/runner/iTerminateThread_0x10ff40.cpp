#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iTerminateThread
// Address: 0x10ff40 - 0x10ff50
void iTerminateThread_0x10ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iTerminateThread_0x10ff40");
#endif

    ctx->pc = 0x10ff40u;

    // 0x10ff40: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x10ff44: 0xc  syscall     0
    ctx->pc = 0x10ff44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FF50u;
}
