#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU083_iSetEventFlag
// Address: 0x110210 - 0x110220
void RFU083_iSetEventFlag_0x110210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU083_iSetEventFlag_0x110210");
#endif

    ctx->pc = 0x110210u;

    // 0x110210: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x110214: 0xc  syscall     0
    ctx->pc = 0x110214u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110218: 0x3e00008  jr          $ra
    ctx->pc = 0x110218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110220u;
}
