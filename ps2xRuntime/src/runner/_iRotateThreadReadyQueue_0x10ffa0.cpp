#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _iRotateThreadReadyQueue
// Address: 0x10ffa0 - 0x10ffb0
void _iRotateThreadReadyQueue_0x10ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_iRotateThreadReadyQueue_0x10ffa0");
#endif

    ctx->pc = 0x10ffa0u;

    // 0x10ffa0: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x10ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10ffa4: 0xc  syscall     0
    ctx->pc = 0x10ffa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FFB0u;
}
