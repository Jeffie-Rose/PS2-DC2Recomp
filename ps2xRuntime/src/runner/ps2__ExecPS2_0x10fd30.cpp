#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ExecPS2
// Address: 0x10fd30 - 0x10fd40
void ps2__ExecPS2_0x10fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ExecPS2_0x10fd30");
#endif

    ctx->pc = 0x10fd30u;

    // 0x10fd30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10fd34: 0xc  syscall     0
    ctx->pc = 0x10fd34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fd38: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD40u;
}
