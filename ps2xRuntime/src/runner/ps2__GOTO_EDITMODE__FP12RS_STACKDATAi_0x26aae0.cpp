#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_EDITMODE__FP12RS_STACKDATAi
// Address: 0x26aae0 - 0x26aaf4
void ps2__GOTO_EDITMODE__FP12RS_STACKDATAi_0x26aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_EDITMODE__FP12RS_STACKDATAi_0x26aae0");
#endif

    ctx->pc = 0x26aae0u;

    // 0x26aae0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x26aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26aae4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26aae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26aae8: 0xac22e4fc  sw          $v0, -0x1B04($at)
    ctx->pc = 0x26aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
    // 0x26aaec: 0x3e00008  jr          $ra
    ctx->pc = 0x26AAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAECu;
            // 0x26aaf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AAF4u;
}
