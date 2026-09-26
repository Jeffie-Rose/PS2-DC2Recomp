#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_TEXB__FP12RS_STACKDATAi
// Address: 0x275fd0 - 0x276004
void ps2__SPHIDA_GET_TEXB__FP12RS_STACKDATAi_0x275fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_TEXB__FP12RS_STACKDATAi_0x275fd0");
#endif

    switch (ctx->pc) {
        case 0x275ff4u: goto label_275ff4;
        default: break;
    }

    ctx->pc = 0x275fd0u;

    // 0x275fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275fd8: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275fdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275FDCu;
    {
        const bool branch_taken_0x275fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fdc) {
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275FE4u;
    // 0x275fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275FE4u;
    {
        const bool branch_taken_0x275fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FE4u;
            // 0x275fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fe4) {
            ctx->pc = 0x275FF8u;
            goto label_275ff8;
        }
    }
    ctx->pc = 0x275FECu;
label_275fec:
    // 0x275fec: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275FECu;
    SET_GPR_U32(ctx, 31, 0x275FF4u);
    ctx->pc = 0x275FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275FECu;
            // 0x275ff0: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FF4u; }
        if (ctx->pc != 0x275FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FF4u; }
        if (ctx->pc != 0x275FF4u) { return; }
    }
    ctx->pc = 0x275FF4u;
label_275ff4:
    // 0x275ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275ff8:
    // 0x275ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x275FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FFCu;
            // 0x276000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276004u;
}
