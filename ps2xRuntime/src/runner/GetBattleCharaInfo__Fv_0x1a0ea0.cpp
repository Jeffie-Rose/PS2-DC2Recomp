#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBattleCharaInfo__Fv
// Address: 0x1a0ea0 - 0x1a0eac
void GetBattleCharaInfo__Fv_0x1a0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBattleCharaInfo__Fv_0x1a0ea0");
#endif

    ctx->pc = 0x1a0ea0u;

    // 0x1a0ea0: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1a0ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EA4u;
            // 0x1a0ea8: 0x2442b130  addiu       $v0, $v0, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0EACu;
}
