#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _InitTLB
// Address: 0x110550 - 0x110560
void ps2__InitTLB_0x110550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitTLB_0x110550");
#endif

    ctx->pc = 0x110550u;

    // 0x110550: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x110550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x110554: 0xc  syscall     0
    ctx->pc = 0x110554u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110558: 0x3e00008  jr          $ra
    ctx->pc = 0x110558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110560u;
}
