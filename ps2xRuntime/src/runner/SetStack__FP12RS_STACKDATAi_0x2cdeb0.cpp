#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStack__FP12RS_STACKDATAi
// Address: 0x2cdeb0 - 0x2cded0
void SetStack__FP12RS_STACKDATAi_0x2cdeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__FP12RS_STACKDATAi_0x2cdeb0");
#endif

    ctx->pc = 0x2cdeb0u;

    // 0x2cdeb0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2cdeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cdeb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cdeb8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDEB8u;
    {
        const bool branch_taken_0x2cdeb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cdeb8) {
            ctx->pc = 0x2CDEC8u;
            goto label_2cdec8;
        }
    }
    ctx->pc = 0x2CDEC0u;
    // 0x2cdec0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cdec4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2cdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2cdec8:
    // 0x2cdec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDED0u;
}
