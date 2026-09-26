#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU009
// Address: 0x10fd50 - 0x10fd60
void RFU009_0x10fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU009_0x10fd50");
#endif

    ctx->pc = 0x10fd50u;

    // 0x10fd50: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x10fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10fd54: 0xc  syscall     0
    ctx->pc = 0x10fd54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd58: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD60u;
}
