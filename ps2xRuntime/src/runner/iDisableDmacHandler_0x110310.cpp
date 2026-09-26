#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iDisableDmacHandler
// Address: 0x110310 - 0x110320
void iDisableDmacHandler_0x110310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iDisableDmacHandler_0x110310");
#endif

    ctx->pc = 0x110310u;

    // 0x110310: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x110310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x110314: 0xc  syscall     0
    ctx->pc = 0x110314u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110318: 0x3e00008  jr          $ra
    ctx->pc = 0x110318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110320u;
}
