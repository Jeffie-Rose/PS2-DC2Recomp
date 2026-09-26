#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEntryAddress
// Address: 0x110e38 - 0x110e48
void GetEntryAddress_0x110e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntryAddress_0x110e38");
#endif

    ctx->pc = 0x110e38u;

    // 0x110e38: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x110e3c: 0xc  syscall     0
    ctx->pc = 0x110e3cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110e40: 0x3e00008  jr          $ra
    ctx->pc = 0x110E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110E48u;
}
