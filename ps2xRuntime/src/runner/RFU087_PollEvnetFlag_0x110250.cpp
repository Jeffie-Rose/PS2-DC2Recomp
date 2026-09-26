#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU087_PollEvnetFlag
// Address: 0x110250 - 0x110260
void RFU087_PollEvnetFlag_0x110250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU087_PollEvnetFlag_0x110250");
#endif

    ctx->pc = 0x110250u;

    // 0x110250: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x110250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x110254: 0xc  syscall     0
    ctx->pc = 0x110254u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110258: 0x3e00008  jr          $ra
    ctx->pc = 0x110258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110260u;
}
