#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeInMenuBGMVol__12CMenuKeyFuncFi
// Address: 0x23ef40 - 0x23ef58
void FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40");
#endif

    ctx->pc = 0x23ef40u;

    // 0x23ef40: 0xac850154  sw          $a1, 0x154($a0)
    ctx->pc = 0x23ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
    // 0x23ef44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ef48: 0x84850150  lh          $a1, 0x150($a0)
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x23ef4c: 0xa4850158  sh          $a1, 0x158($a0)
    ctx->pc = 0x23ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 344), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x23EF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF50u;
            // 0x23ef54: 0xa483015a  sh          $v1, 0x15A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 346), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EF58u;
}
