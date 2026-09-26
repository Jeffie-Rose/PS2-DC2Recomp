#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PutTLBEntry
// Address: 0x118550 - 0x118560
void PutTLBEntry_0x118550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutTLBEntry_0x118550");
#endif

    ctx->pc = 0x118550u;

    // 0x118550: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x118554: 0xc  syscall     0
    ctx->pc = 0x118554u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118558: 0x3e00008  jr          $ra
    ctx->pc = 0x118558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118560u;
}
