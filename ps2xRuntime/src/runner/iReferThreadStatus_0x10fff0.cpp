#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iReferThreadStatus
// Address: 0x10fff0 - 0x110000
void iReferThreadStatus_0x10fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iReferThreadStatus_0x10fff0");
#endif

    ctx->pc = 0x10fff0u;

    // 0x10fff0: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x10fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x10fff4: 0xc  syscall     0
    ctx->pc = 0x10fff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110000u;
}
