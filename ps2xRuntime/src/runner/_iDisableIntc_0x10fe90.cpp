#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _iDisableIntc
// Address: 0x10fe90 - 0x10fea0
void _iDisableIntc_0x10fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_iDisableIntc_0x10fe90");
#endif

    ctx->pc = 0x10fe90u;

    // 0x10fe90: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x10fe94: 0xc  syscall     0
    ctx->pc = 0x10fe94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fe98: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FEA0u;
}
