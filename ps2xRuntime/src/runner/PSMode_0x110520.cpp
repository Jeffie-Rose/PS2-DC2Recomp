#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PSMode
// Address: 0x110520 - 0x110530
void PSMode_0x110520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PSMode_0x110520");
#endif

    ctx->pc = 0x110520u;

    // 0x110520: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x110520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x110524: 0xc  syscall     0
    ctx->pc = 0x110524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110528: 0x3e00008  jr          $ra
    ctx->pc = 0x110528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110530u;
}
