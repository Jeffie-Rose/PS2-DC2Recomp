#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU086_WaitEvnetFlag
// Address: 0x110240 - 0x110250
void RFU086_WaitEvnetFlag_0x110240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU086_WaitEvnetFlag_0x110240");
#endif

    ctx->pc = 0x110240u;

    // 0x110240: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x110240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x110244: 0xc  syscall     0
    ctx->pc = 0x110244u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110248: 0x3e00008  jr          $ra
    ctx->pc = 0x110248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110250u;
}
