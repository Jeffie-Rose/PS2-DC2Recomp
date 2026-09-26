#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RFU084_ClearEventFlag
// Address: 0x110220 - 0x110230
void RFU084_ClearEventFlag_0x110220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU084_ClearEventFlag_0x110220");
#endif

    ctx->pc = 0x110220u;

    // 0x110220: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x110220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x110224: 0xc  syscall     0
    ctx->pc = 0x110224u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x110228: 0x3e00008  jr          $ra
    ctx->pc = 0x110228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110230u;
}
