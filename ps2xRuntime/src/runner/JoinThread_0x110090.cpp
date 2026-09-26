#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: JoinThread
// Address: 0x110090 - 0x1100a0
void JoinThread_0x110090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JoinThread_0x110090");
#endif

    ctx->pc = 0x110090u;

    // 0x110090: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x110090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x110094: 0xc  syscall     0
    ctx->pc = 0x110094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110098: 0x3e00008  jr          $ra
    ctx->pc = 0x110098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1100A0u;
}
