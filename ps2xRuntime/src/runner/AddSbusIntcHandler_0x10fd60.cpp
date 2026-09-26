#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddSbusIntcHandler
// Address: 0x10fd60 - 0x10fd70
void AddSbusIntcHandler_0x10fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddSbusIntcHandler_0x10fd60");
#endif

    ctx->pc = 0x10fd60u;

    // 0x10fd60: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fd64: 0xc  syscall     0
    ctx->pc = 0x10fd64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd68: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD70u;
}
