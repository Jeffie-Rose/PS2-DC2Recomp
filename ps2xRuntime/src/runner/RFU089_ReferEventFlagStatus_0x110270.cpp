#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU089_ReferEventFlagStatus
// Address: 0x110270 - 0x110280
void RFU089_ReferEventFlagStatus_0x110270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU089_ReferEventFlagStatus_0x110270");
#endif

    ctx->pc = 0x110270u;

    // 0x110270: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x110270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x110274: 0xc  syscall     0
    ctx->pc = 0x110274u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110278: 0x3e00008  jr          $ra
    ctx->pc = 0x110278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110280u;
}
