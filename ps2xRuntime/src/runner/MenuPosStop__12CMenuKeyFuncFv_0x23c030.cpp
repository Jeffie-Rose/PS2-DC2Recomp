#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosStop__12CMenuKeyFuncFv
// Address: 0x23c030 - 0x23c048
void MenuPosStop__12CMenuKeyFuncFv_0x23c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosStop__12CMenuKeyFuncFv_0x23c030");
#endif

    ctx->pc = 0x23c030u;

    // 0x23c030: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c038: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x23c038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x23c03c: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x23c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23c040: 0x3e00008  jr          $ra
    ctx->pc = 0x23C040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C040u;
            // 0x23c044: 0xa0650003  sb          $a1, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C048u;
}
