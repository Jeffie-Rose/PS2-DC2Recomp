#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _iEnableDmac
// Address: 0x10fea0 - 0x10feb0
void _iEnableDmac_0x10fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_iEnableDmac_0x10fea0");
#endif

    ctx->pc = 0x10fea0u;

    // 0x10fea0: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x10fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x10fea4: 0xc  syscall     0
    ctx->pc = 0x10fea4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10fea8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FEB0u;
}
