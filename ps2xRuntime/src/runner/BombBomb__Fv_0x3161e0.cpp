#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BombBomb__Fv
// Address: 0x3161e0 - 0x31621c
void BombBomb__Fv_0x3161e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BombBomb__Fv_0x3161e0");
#endif

    switch (ctx->pc) {
        case 0x316204u: goto label_316204;
        default: break;
    }

    ctx->pc = 0x3161e0u;

    // 0x3161e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3161e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3161e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3161e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3161e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3161ec: 0x8f83a308  lw          $v1, -0x5CF8($gp)
    ctx->pc = 0x3161ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943496)));
    // 0x3161f0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3161F0u;
    {
        const bool branch_taken_0x3161f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3161F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3161F0u;
            // 0x3161f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161f0) {
            ctx->pc = 0x316210u;
            goto label_316210;
        }
    }
    ctx->pc = 0x3161F8u;
    // 0x3161f8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3161f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3161fc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x3161FCu;
    SET_GPR_U32(ctx, 31, 0x316204u);
    ctx->pc = 0x316200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3161FCu;
            // 0x316200: 0x2484f990  addiu       $a0, $a0, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316204u; }
        if (ctx->pc != 0x316204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316204u; }
        if (ctx->pc != 0x316204u) { return; }
    }
    ctx->pc = 0x316204u;
label_316204:
    // 0x316204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316208: 0xaf80a30c  sw          $zero, -0x5CF4($gp)
    ctx->pc = 0x316208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 0));
    // 0x31620c: 0xaf82a310  sw          $v0, -0x5CF0($gp)
    ctx->pc = 0x31620cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943504), GPR_U32(ctx, 2));
label_316210:
    // 0x316210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316214: 0x3e00008  jr          $ra
    ctx->pc = 0x316214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316214u;
            // 0x316218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31621Cu;
}
