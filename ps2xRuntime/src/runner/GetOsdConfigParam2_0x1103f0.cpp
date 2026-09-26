#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOsdConfigParam2
// Address: 0x1103f0 - 0x110400
void GetOsdConfigParam2_0x1103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOsdConfigParam2_0x1103f0");
#endif

    ctx->pc = 0x1103f0u;

    // 0x1103f0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1103f4: 0xc  syscall     0
    ctx->pc = 0x1103f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1103f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1103F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110400u;
}
