#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetEE
// Address: 0x10fcd0 - 0x10fce0
void ResetEE_0x10fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetEE_0x10fcd0");
#endif

    ctx->pc = 0x10fcd0u;

    // 0x10fcd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fcd4: 0xc  syscall     0
    ctx->pc = 0x10fcd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FCE0u;
}
