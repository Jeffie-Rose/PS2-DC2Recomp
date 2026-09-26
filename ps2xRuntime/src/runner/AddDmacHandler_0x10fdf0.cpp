#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddDmacHandler
// Address: 0x10fdf0 - 0x10fe00
void AddDmacHandler_0x10fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddDmacHandler_0x10fdf0");
#endif

    ctx->pc = 0x10fdf0u;

    // 0x10fdf0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x10fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x10fdf4: 0xc  syscall     0
    ctx->pc = 0x10fdf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FE00u;
}
