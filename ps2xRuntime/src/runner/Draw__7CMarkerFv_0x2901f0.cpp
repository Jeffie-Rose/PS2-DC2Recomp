#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CMarkerFv
// Address: 0x2901f0 - 0x29020c
void Draw__7CMarkerFv_0x2901f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CMarkerFv_0x2901f0");
#endif

    ctx->pc = 0x2901f0u;

    // 0x2901f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2901f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2901f4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2901F4u;
    {
        const bool branch_taken_0x2901f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2901f4) {
            ctx->pc = 0x290204u;
            goto label_290204;
        }
    }
    ctx->pc = 0x2901FCu;
    // 0x2901fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290200: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x290200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_290204:
    // 0x290204: 0x3e00008  jr          $ra
    ctx->pc = 0x290204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29020Cu;
}
