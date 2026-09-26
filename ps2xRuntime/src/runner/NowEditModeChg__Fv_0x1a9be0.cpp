#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowEditModeChg__Fv
// Address: 0x1a9be0 - 0x1a9bfc
void NowEditModeChg__Fv_0x1a9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowEditModeChg__Fv_0x1a9be0");
#endif

    ctx->pc = 0x1a9be0u;

    // 0x1a9be0: 0x8f828ca4  lw          $v0, -0x735C($gp)
    ctx->pc = 0x1a9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937764)));
    // 0x1a9be4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9BE4u;
    {
        const bool branch_taken_0x1a9be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BE4u;
            // 0x1a9be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9be4) {
            ctx->pc = 0x1A9BF4u;
            goto label_1a9bf4;
        }
    }
    ctx->pc = 0x1A9BECu;
    // 0x1a9bec: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x1a9bf0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1a9bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9bf4:
    // 0x1a9bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9BFCu;
}
