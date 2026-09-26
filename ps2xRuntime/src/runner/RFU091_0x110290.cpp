#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU091
// Address: 0x110290 - 0x1102a0
void RFU091_0x110290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU091_0x110290");
#endif

    ctx->pc = 0x110290u;

    // 0x110290: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x110290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x110294: 0xc  syscall     0
    ctx->pc = 0x110294u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110298: 0x3e00008  jr          $ra
    ctx->pc = 0x110298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1102A0u;
}
