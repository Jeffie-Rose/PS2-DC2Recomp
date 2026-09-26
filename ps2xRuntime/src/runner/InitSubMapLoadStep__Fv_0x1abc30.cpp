#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSubMapLoadStep__Fv
// Address: 0x1abc30 - 0x1abc40
void InitSubMapLoadStep__Fv_0x1abc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSubMapLoadStep__Fv_0x1abc30");
#endif

    ctx->pc = 0x1abc30u;

    // 0x1abc30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1abc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1abc34: 0xaf808c84  sw          $zero, -0x737C($gp)
    ctx->pc = 0x1abc34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 0));
    // 0x1abc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC38u;
            // 0x1abc3c: 0xaf838c88  sw          $v1, -0x7378($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABC40u;
}
