#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFileHeader__FPiPi
// Address: 0x148830 - 0x14884c
void GetFileHeader__FPiPi_0x148830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFileHeader__FPiPi_0x148830");
#endif

    ctx->pc = 0x148830u;

    // 0x148830: 0x8f83889c  lw          $v1, -0x7764($gp)
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936732)));
    // 0x148834: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x148838: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x148838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x14883c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14883cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x148840: 0x8f8388a4  lw          $v1, -0x775C($gp)
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x148844: 0x3e00008  jr          $ra
    ctx->pc = 0x148844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148844u;
            // 0x148848: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14884Cu;
}
