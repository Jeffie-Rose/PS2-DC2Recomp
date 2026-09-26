#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData__13mgCMDTBuilderFPf
// Address: 0x133dc0 - 0x133e38
void SetData__13mgCMDTBuilderFPf_0x133dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData__13mgCMDTBuilderFPf_0x133dc0");
#endif

    ctx->pc = 0x133dc0u;

    // 0x133dc0: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133dc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x133dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133dc8: 0x10c30019  beq         $a2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x133DC8u;
    {
        const bool branch_taken_0x133dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x133dc8) {
            ctx->pc = 0x133E30u;
            goto label_133e30;
        }
    }
    ctx->pc = 0x133DD0u;
    // 0x133dd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133dd4: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x133DD4u;
    {
        const bool branch_taken_0x133dd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x133dd4) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133DDCu;
    // 0x133ddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x133ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133de0: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x133DE0u;
    {
        const bool branch_taken_0x133de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x133de0) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133DE8u;
    // 0x133de8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133dec: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x133DECu;
    {
        const bool branch_taken_0x133dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x133dec) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133DF4u;
    // 0x133df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133df8: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133DF8u;
    {
        const bool branch_taken_0x133df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x133df8) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133E00u;
    // 0x133e00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x133E00u;
    {
        const bool branch_taken_0x133e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e00) {
            ctx->pc = 0x133E30u;
            goto label_133e30;
        }
    }
    ctx->pc = 0x133E08u;
label_133e08:
    // 0x133e08: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x133e08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133e0c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x133e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x133e10: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x133e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x133e14: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x133e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x133e18: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x133e18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x133e1c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x133e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x133e20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133e24: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x133e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x133e28: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x133E28u;
    {
        const bool branch_taken_0x133e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e28) {
            ctx->pc = 0x133E30u;
            goto label_133e30;
        }
    }
    ctx->pc = 0x133E30u;
label_133e30:
    // 0x133e30: 0x3e00008  jr          $ra
    ctx->pc = 0x133E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133E38u;
}
