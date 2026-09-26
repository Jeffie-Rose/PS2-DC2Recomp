#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FindAddress
// Address: 0x118cc0 - 0x118cd0
void FindAddress_0x118cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindAddress_0x118cc0");
#endif

    ctx->pc = 0x118cc0u;

    // 0x118cc0: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x118cc4: 0xc  syscall     0
    ctx->pc = 0x118cc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x118CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118CD0u;
}
