#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU008
// Address: 0x10fd40 - 0x10fd50
void RFU008_0x10fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU008_0x10fd40");
#endif

    ctx->pc = 0x10fd40u;

    // 0x10fd40: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10fd44: 0xc  syscall     0
    ctx->pc = 0x10fd44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD50u;
}
