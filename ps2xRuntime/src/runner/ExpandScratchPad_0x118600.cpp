#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExpandScratchPad
// Address: 0x118600 - 0x118610
void ExpandScratchPad_0x118600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExpandScratchPad_0x118600");
#endif

    ctx->pc = 0x118600u;

    // 0x118600: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x118604: 0xc  syscall     0
    ctx->pc = 0x118604u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118608: 0x3e00008  jr          $ra
    ctx->pc = 0x118608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118610u;
}
