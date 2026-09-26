#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU090_iReferEventFlagStatus
// Address: 0x110280 - 0x110290
void RFU090_iReferEventFlagStatus_0x110280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU090_iReferEventFlagStatus_0x110280");
#endif

    ctx->pc = 0x110280u;

    // 0x110280: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x110280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x110284: 0xc  syscall     0
    ctx->pc = 0x110284u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110288: 0x3e00008  jr          $ra
    ctx->pc = 0x110288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110290u;
}
