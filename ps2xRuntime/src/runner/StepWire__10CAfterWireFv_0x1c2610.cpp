#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepWire__10CAfterWireFv
// Address: 0x1c2610 - 0x1c262c
void StepWire__10CAfterWireFv_0x1c2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepWire__10CAfterWireFv_0x1c2610");
#endif

    ctx->pc = 0x1c2610u;

    // 0x1c2610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c2614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2614u;
    {
        const bool branch_taken_0x1c2614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2614) {
            ctx->pc = 0x1C2624u;
            goto label_1c2624;
        }
    }
    ctx->pc = 0x1C261Cu;
    // 0x1c261c: 0x84830112  lh          $v1, 0x112($a0)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x1c2620: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1c2620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c2624:
    // 0x1c2624: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C262Cu;
}
