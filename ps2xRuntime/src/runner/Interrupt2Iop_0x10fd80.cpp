#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Interrupt2Iop
// Address: 0x10fd80 - 0x10fd90
void Interrupt2Iop_0x10fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Interrupt2Iop_0x10fd80");
#endif

    ctx->pc = 0x10fd80u;

    // 0x10fd80: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10fd84: 0xc  syscall     0
    ctx->pc = 0x10fd84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd88: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD90u;
}
