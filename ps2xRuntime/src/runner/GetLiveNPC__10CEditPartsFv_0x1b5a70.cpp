#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLiveNPC__10CEditPartsFv
// Address: 0x1b5a70 - 0x1b5a90
void GetLiveNPC__10CEditPartsFv_0x1b5a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLiveNPC__10CEditPartsFv_0x1b5a70");
#endif

    ctx->pc = 0x1b5a70u;

    // 0x1b5a70: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1b5a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A74u;
    {
        const bool branch_taken_0x1b5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a74) {
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B5A7Cu;
    // 0x1b5a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5A7Cu;
    {
        const bool branch_taken_0x1b5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A7Cu;
            // 0x1b5a80: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a7c) {
            ctx->pc = 0x1B5A88u;
            goto label_1b5a88;
        }
    }
    ctx->pc = 0x1B5A84u;
label_1b5a84:
    // 0x1b5a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5a88:
    // 0x1b5a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5A90u;
}
