#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU088_iPollEvnetFlag
// Address: 0x110260 - 0x110270
void RFU088_iPollEvnetFlag_0x110260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU088_iPollEvnetFlag_0x110260");
#endif

    ctx->pc = 0x110260u;

    // 0x110260: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x110260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x110264: 0xc  syscall     0
    ctx->pc = 0x110264u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110268: 0x3e00008  jr          $ra
    ctx->pc = 0x110268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110270u;
}
