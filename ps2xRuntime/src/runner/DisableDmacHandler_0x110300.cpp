#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisableDmacHandler
// Address: 0x110300 - 0x110310
void DisableDmacHandler_0x110300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableDmacHandler_0x110300");
#endif

    ctx->pc = 0x110300u;

    // 0x110300: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x110300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x110304: 0xc  syscall     0
    ctx->pc = 0x110304u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110308: 0x3e00008  jr          $ra
    ctx->pc = 0x110308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110310u;
}
