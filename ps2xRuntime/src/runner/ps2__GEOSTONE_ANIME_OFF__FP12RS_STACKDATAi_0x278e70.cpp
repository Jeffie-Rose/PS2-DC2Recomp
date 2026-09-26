#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GEOSTONE_ANIME_OFF__FP12RS_STACKDATAi
// Address: 0x278e70 - 0x278e80
void ps2__GEOSTONE_ANIME_OFF__FP12RS_STACKDATAi_0x278e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GEOSTONE_ANIME_OFF__FP12RS_STACKDATAi_0x278e70");
#endif

    ctx->pc = 0x278e70u;

    // 0x278e70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x278e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x278e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278e78: 0x3e00008  jr          $ra
    ctx->pc = 0x278E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E78u;
            // 0x278e7c: 0xac205828  sw          $zero, 0x5828($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 22568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278E80u;
}
