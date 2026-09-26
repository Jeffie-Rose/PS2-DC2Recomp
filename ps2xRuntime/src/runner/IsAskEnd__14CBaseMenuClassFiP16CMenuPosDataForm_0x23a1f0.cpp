#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm
// Address: 0x23a1f0 - 0x23a22c
void IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0");
#endif

    ctx->pc = 0x23a1f0u;

    // 0x23a1f0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A1F0u;
    {
        const bool branch_taken_0x23a1f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a1f0) {
            ctx->pc = 0x23A1FCu;
            goto label_23a1fc;
        }
    }
    ctx->pc = 0x23A1F8u;
    // 0x23a1f8: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x23a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_23a1fc:
    // 0x23a1fc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23a200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a204: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a208: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23a20c: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x23a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x23a210: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A210u;
    {
        const bool branch_taken_0x23a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a210) {
            ctx->pc = 0x23A21Cu;
            goto label_23a21c;
        }
    }
    ctx->pc = 0x23A218u;
    // 0x23a218: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_23a21c:
    // 0x23a21c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x23a21cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a220: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x23a220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a224: 0x8094274  j           func_2509D0
    ctx->pc = 0x23A224u;
    ctx->pc = 0x23A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A224u;
            // 0x23a228: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23A22Cu;
}
