#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iGsPutIMR
// Address: 0x110430 - 0x110440
void iGsPutIMR_0x110430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iGsPutIMR_0x110430");
#endif

    ctx->pc = 0x110430u;

    // 0x110430: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x110434: 0xc  syscall     0
    ctx->pc = 0x110434u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110438: 0x3e00008  jr          $ra
    ctx->pc = 0x110438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110440u;
}
