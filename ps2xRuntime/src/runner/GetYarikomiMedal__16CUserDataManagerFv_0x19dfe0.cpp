#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetYarikomiMedal__16CUserDataManagerFv
// Address: 0x19dfe0 - 0x19dff0
void GetYarikomiMedal__16CUserDataManagerFv_0x19dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetYarikomiMedal__16CUserDataManagerFv_0x19dfe0");
#endif

    ctx->pc = 0x19dfe0u;

    // 0x19dfe0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19dfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19dfe4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19dfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFE8u;
            // 0x19dfec: 0x84224da0  lh          $v0, 0x4DA0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DFF0u;
}
