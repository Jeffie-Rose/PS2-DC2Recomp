#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPtr__14CItemUseTargetFiPv
// Address: 0x196710 - 0x196768
void SetPtr__14CItemUseTargetFiPv_0x196710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPtr__14CItemUseTargetFiPv_0x196710");
#endif

    ctx->pc = 0x196710u;

    // 0x196710: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x196710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x196714: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196718: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196718u;
    {
        const bool branch_taken_0x196718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196718) {
            ctx->pc = 0x196724u;
            goto label_196724;
        }
    }
    ctx->pc = 0x196720u;
    // 0x196720: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x196720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_196724:
    // 0x196724: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19672c: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19672Cu;
    {
        const bool branch_taken_0x19672c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19672c) {
            ctx->pc = 0x196738u;
            goto label_196738;
        }
    }
    ctx->pc = 0x196734u;
    // 0x196734: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x196734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_196738:
    // 0x196738: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x196738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19673c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196740: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196740u;
    {
        const bool branch_taken_0x196740 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x196740) {
            ctx->pc = 0x19674Cu;
            goto label_19674c;
        }
    }
    ctx->pc = 0x196748u;
    // 0x196748: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x196748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_19674c:
    // 0x19674c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19674cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196754: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196754u;
    {
        const bool branch_taken_0x196754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x196754) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x19675Cu;
    // 0x19675c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x19675cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_196760:
    // 0x196760: 0x3e00008  jr          $ra
    ctx->pc = 0x196760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196768u;
}
