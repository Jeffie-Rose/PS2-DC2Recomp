#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iPutTLBEntry
// Address: 0x118560 - 0x118570
void iPutTLBEntry_0x118560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iPutTLBEntry_0x118560");
#endif

    ctx->pc = 0x118560u;

    // 0x118560: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x118560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x118564: 0xc  syscall     0
    ctx->pc = 0x118564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118568: 0x3e00008  jr          $ra
    ctx->pc = 0x118568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118570u;
}
