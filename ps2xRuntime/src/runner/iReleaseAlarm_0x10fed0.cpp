#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iReleaseAlarm
// Address: 0x10fed0 - 0x10fee0
void iReleaseAlarm_0x10fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iReleaseAlarm_0x10fed0");
#endif

    ctx->pc = 0x10fed0u;

    // 0x10fed0: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x10fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x10fed4: 0xc  syscall     0
    ctx->pc = 0x10fed4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fed8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FEE0u;
}
