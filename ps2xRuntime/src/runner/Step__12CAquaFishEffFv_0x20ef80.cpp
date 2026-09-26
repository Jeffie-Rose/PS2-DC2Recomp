#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CAquaFishEffFv
// Address: 0x20ef80 - 0x20efc0
void Step__12CAquaFishEffFv_0x20ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CAquaFishEffFv_0x20ef80");
#endif

    ctx->pc = 0x20ef80u;

    // 0x20ef80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ef84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20EF84u;
    {
        const bool branch_taken_0x20ef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef84) {
            ctx->pc = 0x20EFB8u;
            goto label_20efb8;
        }
    }
    ctx->pc = 0x20EF8Cu;
    // 0x20ef8c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x20ef8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20ef90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EF90u;
    {
        const bool branch_taken_0x20ef90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef90) {
            ctx->pc = 0x20EFB8u;
            goto label_20efb8;
        }
    }
    ctx->pc = 0x20EF98u;
    // 0x20ef98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20ef9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20efa0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x20efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x20efa4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20efa8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EFA8u;
    {
        const bool branch_taken_0x20efa8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x20efa8) {
            ctx->pc = 0x20EFB8u;
            goto label_20efb8;
        }
    }
    ctx->pc = 0x20EFB0u;
    // 0x20efb0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20efb4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x20efb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_20efb8:
    // 0x20efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x20EFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20EFC0u;
}
