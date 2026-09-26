#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU082_SetEventFlag
// Address: 0x110200 - 0x110210
void RFU082_SetEventFlag_0x110200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU082_SetEventFlag_0x110200");
#endif

    ctx->pc = 0x110200u;

    // 0x110200: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x110200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x110204: 0xc  syscall     0
    ctx->pc = 0x110204u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110208: 0x3e00008  jr          $ra
    ctx->pc = 0x110208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110210u;
}
