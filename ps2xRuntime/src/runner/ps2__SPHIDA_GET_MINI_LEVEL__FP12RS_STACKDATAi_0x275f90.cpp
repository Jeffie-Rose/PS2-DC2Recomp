#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_MINI_LEVEL__FP12RS_STACKDATAi
// Address: 0x275f90 - 0x275fc4
void ps2__SPHIDA_GET_MINI_LEVEL__FP12RS_STACKDATAi_0x275f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_MINI_LEVEL__FP12RS_STACKDATAi_0x275f90");
#endif

    switch (ctx->pc) {
        case 0x275fb4u: goto label_275fb4;
        default: break;
    }

    ctx->pc = 0x275f90u;

    // 0x275f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275f98: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275f9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275F9Cu;
    {
        const bool branch_taken_0x275f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f9c) {
            ctx->pc = 0x275FACu;
            goto label_275fac;
        }
    }
    ctx->pc = 0x275FA4u;
    // 0x275fa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275FA4u;
    {
        const bool branch_taken_0x275fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FA4u;
            // 0x275fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fa4) {
            ctx->pc = 0x275FB8u;
            goto label_275fb8;
        }
    }
    ctx->pc = 0x275FACu;
label_275fac:
    // 0x275fac: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275FACu;
    SET_GPR_U32(ctx, 31, 0x275FB4u);
    ctx->pc = 0x275FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275FACu;
            // 0x275fb0: 0x8c4501f0  lw          $a1, 0x1F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FB4u; }
        if (ctx->pc != 0x275FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FB4u; }
        if (ctx->pc != 0x275FB4u) { return; }
    }
    ctx->pc = 0x275FB4u;
label_275fb4:
    // 0x275fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275fb8:
    // 0x275fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x275FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FBCu;
            // 0x275fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275FC4u;
}
