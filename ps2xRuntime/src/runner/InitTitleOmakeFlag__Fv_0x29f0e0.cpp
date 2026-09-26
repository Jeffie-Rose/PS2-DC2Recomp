#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTitleOmakeFlag__Fv
// Address: 0x29f0e0 - 0x29f0ec
void InitTitleOmakeFlag__Fv_0x29f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTitleOmakeFlag__Fv_0x29f0e0");
#endif

    ctx->pc = 0x29f0e0u;

    // 0x29f0e0: 0xa7809a3c  sh          $zero, -0x65C4($gp)
    ctx->pc = 0x29f0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941244), (uint16_t)GPR_U32(ctx, 0));
    // 0x29f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0E4u;
            // 0x29f0e8: 0xaf808ad4  sw          $zero, -0x752C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F0ECu;
}
