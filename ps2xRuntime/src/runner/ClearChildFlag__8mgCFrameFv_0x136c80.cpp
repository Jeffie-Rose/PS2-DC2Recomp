#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearChildFlag__8mgCFrameFv
// Address: 0x136c80 - 0x136cd4
void ClearChildFlag__8mgCFrameFv_0x136c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearChildFlag__8mgCFrameFv_0x136c80");
#endif

    switch (ctx->pc) {
        case 0x136ca8u: goto label_136ca8;
        default: break;
    }

    ctx->pc = 0x136c80u;

    // 0x136c80: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x136c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x136c84: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x136C84u;
    {
        const bool branch_taken_0x136c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C84u;
            // 0x136c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c84) {
            ctx->pc = 0x136CCCu;
            goto label_136ccc;
        }
    }
    ctx->pc = 0x136C8Cu;
    // 0x136c8c: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x136c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x136c90: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x136c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x136c94: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136c98: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x136C98u;
    {
        const bool branch_taken_0x136c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c98) {
            ctx->pc = 0x136CCCu;
            goto label_136ccc;
        }
    }
    ctx->pc = 0x136CA0u;
    // 0x136ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136CA0u;
    {
        const bool branch_taken_0x136ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ca0) {
            ctx->pc = 0x136CB4u;
            goto label_136cb4;
        }
    }
    ctx->pc = 0x136CA8u;
label_136ca8:
    // 0x136ca8: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x136ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x136cac: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x136cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136cb0: 0x0  nop
    ctx->pc = 0x136cb0u;
    // NOP
label_136cb4:
    // 0x136cb4: 0x0  nop
    ctx->pc = 0x136cb4u;
    // NOP
    // 0x136cb8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136cbc: 0x0  nop
    ctx->pc = 0x136cbcu;
    // NOP
    // 0x136cc0: 0x0  nop
    ctx->pc = 0x136cc0u;
    // NOP
    // 0x136cc4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x136CC4u;
    {
        const bool branch_taken_0x136cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cc4) {
            ctx->pc = 0x136CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136ca8;
        }
    }
    ctx->pc = 0x136CCCu;
label_136ccc:
    // 0x136ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x136CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136CD4u;
}
