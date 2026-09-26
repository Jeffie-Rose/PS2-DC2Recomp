#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isceSifDmaStat
// Address: 0x110490 - 0x1104a0
void isceSifDmaStat_0x110490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isceSifDmaStat_0x110490");
#endif

    ctx->pc = 0x110490u;

    // 0x110490: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x110490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x110494: 0xc  syscall     0
    ctx->pc = 0x110494u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110498: 0x3e00008  jr          $ra
    ctx->pc = 0x110498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1104A0u;
}
