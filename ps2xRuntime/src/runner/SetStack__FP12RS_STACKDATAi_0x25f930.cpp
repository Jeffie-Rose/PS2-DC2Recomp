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
// Address: 0x25f930 - 0x25f950
void SetStack__FP12RS_STACKDATAi_0x25f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__FP12RS_STACKDATAi_0x25f930");
#endif

    ctx->pc = 0x25f930u;

    // 0x25f930: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x25f930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f934: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f938: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F938u;
    {
        const bool branch_taken_0x25f938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x25f938) {
            ctx->pc = 0x25F948u;
            goto label_25f948;
        }
    }
    ctx->pc = 0x25F940u;
    // 0x25f940: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25f944: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x25f944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_25f948:
    // 0x25f948: 0x3e00008  jr          $ra
    ctx->pc = 0x25F948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F950u;
}
