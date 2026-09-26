#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleOmakeOn__Fv
// Address: 0x29f0f0 - 0x29f0fc
void TitleOmakeOn__Fv_0x29f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleOmakeOn__Fv_0x29f0f0");
#endif

    ctx->pc = 0x29f0f0u;

    // 0x29f0f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0F4u;
            // 0x29f0f8: 0xa7839a3c  sh          $v1, -0x65C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941244), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F0FCu;
}
