#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LoadExecPS2
// Address: 0x10fd20 - 0x10fd30
void ps2__LoadExecPS2_0x10fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LoadExecPS2_0x10fd20");
#endif

    ctx->pc = 0x10fd20u;

    // 0x10fd20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10fd24: 0xc  syscall     0
    ctx->pc = 0x10fd24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd28: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD30u;
}
