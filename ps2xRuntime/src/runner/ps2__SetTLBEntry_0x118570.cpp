#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SetTLBEntry
// Address: 0x118570 - 0x118580
void ps2__SetTLBEntry_0x118570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetTLBEntry_0x118570");
#endif

    ctx->pc = 0x118570u;

    // 0x118570: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x118574: 0xc  syscall     0
    ctx->pc = 0x118574u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118578: 0x3e00008  jr          $ra
    ctx->pc = 0x118578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118580u;
}
