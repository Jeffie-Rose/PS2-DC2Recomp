#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU116
// Address: 0x110460 - 0x110470
void RFU116_0x110460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU116_0x110460");
#endif

    ctx->pc = 0x110460u;

    // 0x110460: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x110460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x110464: 0xc  syscall     0
    ctx->pc = 0x110464u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110468: 0x3e00008  jr          $ra
    ctx->pc = 0x110468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110470u;
}
