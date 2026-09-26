#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BGM_LOAD_ENABLE__FP12RS_STACKDATAi
// Address: 0x273a90 - 0x273aa8
void ps2__BGM_LOAD_ENABLE__FP12RS_STACKDATAi_0x273a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BGM_LOAD_ENABLE__FP12RS_STACKDATAi_0x273a90");
#endif

    ctx->pc = 0x273a90u;

    // 0x273a90: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273a94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a9c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x273a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x273aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x273AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AA0u;
            // 0x273aa4: 0xac20906c  sw          $zero, -0x6F94($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273AA8u;
}
