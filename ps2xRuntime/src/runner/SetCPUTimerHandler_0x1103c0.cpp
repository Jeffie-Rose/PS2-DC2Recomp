#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCPUTimerHandler
// Address: 0x1103c0 - 0x1103d0
void SetCPUTimerHandler_0x1103c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCPUTimerHandler_0x1103c0");
#endif

    ctx->pc = 0x1103c0u;

    // 0x1103c0: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1103c4: 0xc  syscall     0
    ctx->pc = 0x1103c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1103c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1103C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1103D0u;
}
