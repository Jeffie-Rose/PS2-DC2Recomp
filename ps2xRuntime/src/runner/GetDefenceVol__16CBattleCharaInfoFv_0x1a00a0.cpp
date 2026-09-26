#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefenceVol__16CBattleCharaInfoFv
// Address: 0x1a00a0 - 0x1a00a8
void GetDefenceVol__16CBattleCharaInfoFv_0x1a00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefenceVol__16CBattleCharaInfoFv_0x1a00a0");
#endif

    ctx->pc = 0x1a00a0u;

    // 0x1a00a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A00A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A00A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00A0u;
            // 0x1a00a4: 0x8482006c  lh          $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A00A8u;
}
