#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowNPC__16CBattleCharaInfoFv
// Address: 0x19f250 - 0x19f258
void GetNowNPC__16CBattleCharaInfoFv_0x19f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowNPC__16CBattleCharaInfoFv_0x19f250");
#endif

    ctx->pc = 0x19f250u;

    // 0x19f250: 0x3e00008  jr          $ra
    ctx->pc = 0x19F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F250u;
            // 0x19f254: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F258u;
}
