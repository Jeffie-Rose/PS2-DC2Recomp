#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CTreasureBoxFv
// Address: 0x1bb310 - 0x1bb324
void Initialize__12CTreasureBoxFv_0x1bb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CTreasureBoxFv_0x1bb310");
#endif

    ctx->pc = 0x1bb310u;

    // 0x1bb310: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1bb310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb318: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1bb318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1bb31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB31Cu;
            // 0x1bb320: 0xac830058  sw          $v1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB324u;
}
