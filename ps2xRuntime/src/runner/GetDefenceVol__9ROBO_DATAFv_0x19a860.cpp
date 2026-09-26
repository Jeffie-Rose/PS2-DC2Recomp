#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefenceVol__9ROBO_DATAFv
// Address: 0x19a860 - 0x19a874
void GetDefenceVol__9ROBO_DATAFv_0x19a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefenceVol__9ROBO_DATAFv_0x19a860");
#endif

    ctx->pc = 0x19a860u;

    // 0x19a860: 0x948201e8  lhu         $v0, 0x1E8($a0)
    ctx->pc = 0x19a860u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x19a864: 0x848300d0  lh          $v1, 0xD0($a0)
    ctx->pc = 0x19a864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x19a868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A86Cu;
            // 0x19a870: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A874u;
}
