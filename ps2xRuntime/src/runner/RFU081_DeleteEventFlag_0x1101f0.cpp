#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU081_DeleteEventFlag
// Address: 0x1101f0 - 0x110200
void RFU081_DeleteEventFlag_0x1101f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU081_DeleteEventFlag_0x1101f0");
#endif

    ctx->pc = 0x1101f0u;

    // 0x1101f0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1101f4: 0xc  syscall     0
    ctx->pc = 0x1101f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1101f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1101F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110200u;
}
