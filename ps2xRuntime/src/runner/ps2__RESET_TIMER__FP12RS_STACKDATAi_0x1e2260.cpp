#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_TIMER__FP12RS_STACKDATAi
// Address: 0x1e2260 - 0x1e2288
void ps2__RESET_TIMER__FP12RS_STACKDATAi_0x1e2260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_TIMER__FP12RS_STACKDATAi_0x1e2260");
#endif

    ctx->pc = 0x1e2260u;

    // 0x1e2260: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e2264: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1e2268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2268u;
    {
        const bool branch_taken_0x1e2268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2268) {
            ctx->pc = 0x1E2278u;
            goto label_1e2278;
        }
    }
    ctx->pc = 0x1E2270u;
    // 0x1e2270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2270u;
    {
        const bool branch_taken_0x1e2270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2270u;
            // 0x1e2274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2270) {
            ctx->pc = 0x1E2280u;
            goto label_1e2280;
        }
    }
    ctx->pc = 0x1E2278u;
label_1e2278:
    // 0x1e2278: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e2278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e227c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2280:
    // 0x1e2280: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2288u;
}
