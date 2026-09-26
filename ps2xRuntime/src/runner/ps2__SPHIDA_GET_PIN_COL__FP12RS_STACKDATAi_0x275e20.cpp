#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_PIN_COL__FP12RS_STACKDATAi
// Address: 0x275e20 - 0x275e54
void ps2__SPHIDA_GET_PIN_COL__FP12RS_STACKDATAi_0x275e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_PIN_COL__FP12RS_STACKDATAi_0x275e20");
#endif

    switch (ctx->pc) {
        case 0x275e44u: goto label_275e44;
        default: break;
    }

    ctx->pc = 0x275e20u;

    // 0x275e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275e28: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275E2Cu;
    {
        const bool branch_taken_0x275e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275e2c) {
            ctx->pc = 0x275E3Cu;
            goto label_275e3c;
        }
    }
    ctx->pc = 0x275E34u;
    // 0x275e34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275E34u;
    {
        const bool branch_taken_0x275e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E34u;
            // 0x275e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e34) {
            ctx->pc = 0x275E48u;
            goto label_275e48;
        }
    }
    ctx->pc = 0x275E3Cu;
label_275e3c:
    // 0x275e3c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275E3Cu;
    SET_GPR_U32(ctx, 31, 0x275E44u);
    ctx->pc = 0x275E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275E3Cu;
            // 0x275e40: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E44u; }
        if (ctx->pc != 0x275E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E44u; }
        if (ctx->pc != 0x275E44u) { return; }
    }
    ctx->pc = 0x275E44u;
label_275e44:
    // 0x275e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275e48:
    // 0x275e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x275E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E4Cu;
            // 0x275e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275E54u;
}
