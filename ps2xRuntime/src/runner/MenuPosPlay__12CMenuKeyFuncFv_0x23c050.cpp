#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosPlay__12CMenuKeyFuncFv
// Address: 0x23c050 - 0x23c064
void MenuPosPlay__12CMenuKeyFuncFv_0x23c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosPlay__12CMenuKeyFuncFv_0x23c050");
#endif

    ctx->pc = 0x23c050u;

    // 0x23c050: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x23c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23c054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c058: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x23c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23c05c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C05Cu;
            // 0x23c060: 0xa0600003  sb          $zero, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C064u;
}
