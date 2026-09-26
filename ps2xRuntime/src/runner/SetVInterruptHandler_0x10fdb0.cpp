#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVInterruptHandler
// Address: 0x10fdb0 - 0x10fdc0
void SetVInterruptHandler_0x10fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVInterruptHandler_0x10fdb0");
#endif

    ctx->pc = 0x10fdb0u;

    // 0x10fdb0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10fdb4: 0xc  syscall     0
    ctx->pc = 0x10fdb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FDC0u;
}
