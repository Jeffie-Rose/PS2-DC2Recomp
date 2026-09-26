#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGsHParam
// Address: 0x1101a0 - 0x1101b0
void GetGsHParam_0x1101a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGsHParam_0x1101a0");
#endif

    ctx->pc = 0x1101a0u;

    // 0x1101a0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1101a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1101a4: 0xc  syscall     0
    ctx->pc = 0x1101a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1101a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1101A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1101B0u;
}
