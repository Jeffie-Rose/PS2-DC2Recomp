#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TRG_ON_MOS__FP12RS_STACKDATAi
// Address: 0x2d1c00 - 0x2d1c14
void ps2__TRG_ON_MOS__FP12RS_STACKDATAi_0x2d1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TRG_ON_MOS__FP12RS_STACKDATAi_0x2d1c00");
#endif

    ctx->pc = 0x2d1c00u;

    // 0x2d1c00: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c08: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C0Cu;
            // 0x2d1c10: 0xac6203bc  sw          $v0, 0x3BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1C14u;
}
