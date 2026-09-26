#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearSubMapNo__Fv
// Address: 0x2dec30 - 0x2dec3c
void ClearSubMapNo__Fv_0x2dec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearSubMapNo__Fv_0x2dec30");
#endif

    ctx->pc = 0x2dec30u;

    // 0x2dec30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2dec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dec34: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC34u;
            // 0x2dec38: 0xaf839eb0  sw          $v1, -0x6150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEC3Cu;
}
