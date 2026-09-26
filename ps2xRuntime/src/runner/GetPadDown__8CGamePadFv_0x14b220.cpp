#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPadDown__8CGamePadFv
// Address: 0x14b220 - 0x14b24c
void GetPadDown__8CGamePadFv_0x14b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPadDown__8CGamePadFv_0x14b220");
#endif

    ctx->pc = 0x14b220u;

    // 0x14b220: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B224u;
    {
        const bool branch_taken_0x14b224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B224u;
            // 0x14b228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b224) {
            ctx->pc = 0x14B234u;
            goto label_14b234;
        }
    }
    ctx->pc = 0x14B22Cu;
    // 0x14b22c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B22Cu;
    {
        const bool branch_taken_0x14b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b22c) {
            ctx->pc = 0x14B244u;
            goto label_14b244;
        }
    }
    ctx->pc = 0x14B234u;
label_14b234:
    // 0x14b234: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x14b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x14b238: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b23c: 0x601827  not         $v1, $v1
    ctx->pc = 0x14b23cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x14b240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b244:
    // 0x14b244: 0x3e00008  jr          $ra
    ctx->pc = 0x14B244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B24Cu;
}
