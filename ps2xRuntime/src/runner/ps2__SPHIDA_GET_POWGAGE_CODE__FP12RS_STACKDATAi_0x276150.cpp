#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_POWGAGE_CODE__FP12RS_STACKDATAi
// Address: 0x276150 - 0x276184
void ps2__SPHIDA_GET_POWGAGE_CODE__FP12RS_STACKDATAi_0x276150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_POWGAGE_CODE__FP12RS_STACKDATAi_0x276150");
#endif

    switch (ctx->pc) {
        case 0x276174u: goto label_276174;
        default: break;
    }

    ctx->pc = 0x276150u;

    // 0x276150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276158: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x276158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x27615c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27615Cu;
    {
        const bool branch_taken_0x27615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27615c) {
            ctx->pc = 0x27616Cu;
            goto label_27616c;
        }
    }
    ctx->pc = 0x276164u;
    // 0x276164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x276164u;
    {
        const bool branch_taken_0x276164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276164u;
            // 0x276168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276164) {
            ctx->pc = 0x276178u;
            goto label_276178;
        }
    }
    ctx->pc = 0x27616Cu;
label_27616c:
    // 0x27616c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27616Cu;
    SET_GPR_U32(ctx, 31, 0x276174u);
    ctx->pc = 0x276170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27616Cu;
            // 0x276170: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276174u; }
        if (ctx->pc != 0x276174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276174u; }
        if (ctx->pc != 0x276174u) { return; }
    }
    ctx->pc = 0x276174u;
label_276174:
    // 0x276174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276178:
    // 0x276178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27617c: 0x3e00008  jr          $ra
    ctx->pc = 0x27617Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27617Cu;
            // 0x276180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276184u;
}
