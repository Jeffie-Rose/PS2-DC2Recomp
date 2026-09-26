#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWallGroupNum__10CEditPartsFv
// Address: 0x1b5dc0 - 0x1b5de0
void GetWallGroupNum__10CEditPartsFv_0x1b5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWallGroupNum__10CEditPartsFv_0x1b5dc0");
#endif

    ctx->pc = 0x1b5dc0u;

    // 0x1b5dc0: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5DC4u;
    {
        const bool branch_taken_0x1b5dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5dc4) {
            ctx->pc = 0x1B5DD4u;
            goto label_1b5dd4;
        }
    }
    ctx->pc = 0x1B5DCCu;
    // 0x1b5dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5DCCu;
    {
        const bool branch_taken_0x1b5dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DCCu;
            // 0x1b5dd0: 0x8c420254  lw          $v0, 0x254($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dcc) {
            ctx->pc = 0x1B5DD8u;
            goto label_1b5dd8;
        }
    }
    ctx->pc = 0x1B5DD4u;
label_1b5dd4:
    // 0x1b5dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5dd8:
    // 0x1b5dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5DE0u;
}
