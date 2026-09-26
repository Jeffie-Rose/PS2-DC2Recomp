#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: rsSetStack__FP12RS_STACKDATAi
// Address: 0x188860 - 0x188880
void rsSetStack__FP12RS_STACKDATAi_0x188860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rsSetStack__FP12RS_STACKDATAi_0x188860");
#endif

    ctx->pc = 0x188860u;

    // 0x188860: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188864: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188868: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188868u;
    {
        const bool branch_taken_0x188868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x188868) {
            ctx->pc = 0x188878u;
            goto label_188878;
        }
    }
    ctx->pc = 0x188870u;
    // 0x188870: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x188870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188874: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x188874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_188878:
    // 0x188878: 0x3e00008  jr          $ra
    ctx->pc = 0x188878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188880u;
}
