#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_BALL_COL__FP12RS_STACKDATAi
// Address: 0x275ea0 - 0x275ed4
void ps2__SPHIDA_GET_BALL_COL__FP12RS_STACKDATAi_0x275ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_BALL_COL__FP12RS_STACKDATAi_0x275ea0");
#endif

    switch (ctx->pc) {
        case 0x275ec4u: goto label_275ec4;
        default: break;
    }

    ctx->pc = 0x275ea0u;

    // 0x275ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275ea8: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275eac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275EACu;
    {
        const bool branch_taken_0x275eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275eac) {
            ctx->pc = 0x275EBCu;
            goto label_275ebc;
        }
    }
    ctx->pc = 0x275EB4u;
    // 0x275eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275EB4u;
    {
        const bool branch_taken_0x275eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275EB4u;
            // 0x275eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275eb4) {
            ctx->pc = 0x275EC8u;
            goto label_275ec8;
        }
    }
    ctx->pc = 0x275EBCu;
label_275ebc:
    // 0x275ebc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275EBCu;
    SET_GPR_U32(ctx, 31, 0x275EC4u);
    ctx->pc = 0x275EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275EBCu;
            // 0x275ec0: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EC4u; }
        if (ctx->pc != 0x275EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EC4u; }
        if (ctx->pc != 0x275EC4u) { return; }
    }
    ctx->pc = 0x275EC4u;
label_275ec4:
    // 0x275ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275ec8:
    // 0x275ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x275ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275ECCu;
            // 0x275ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275ED4u;
}
