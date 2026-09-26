#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisableIntcHandler
// Address: 0x1102c0 - 0x1102d0
void DisableIntcHandler_0x1102c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableIntcHandler_0x1102c0");
#endif

    ctx->pc = 0x1102c0u;

    // 0x1102c0: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x1102c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1102c4: 0xc  syscall     0
    ctx->pc = 0x1102c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1102c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1102C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1102D0u;
}
