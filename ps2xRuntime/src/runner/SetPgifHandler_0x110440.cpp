#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPgifHandler
// Address: 0x110440 - 0x110450
void SetPgifHandler_0x110440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPgifHandler_0x110440");
#endif

    ctx->pc = 0x110440u;

    // 0x110440: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x110440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x110444: 0xc  syscall     0
    ctx->pc = 0x110444u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110448: 0x3e00008  jr          $ra
    ctx->pc = 0x110448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110450u;
}
