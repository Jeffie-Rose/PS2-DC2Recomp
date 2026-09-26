#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcPhotoExp__15CInventUserDataFv
// Address: 0x1feec0 - 0x1fef34
void CalcPhotoExp__15CInventUserDataFv_0x1feec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcPhotoExp__15CInventUserDataFv_0x1feec0");
#endif

    switch (ctx->pc) {
        case 0x1feed4u: goto label_1feed4;
        case 0x1feedcu: goto label_1feedc;
        default: break;
    }

    ctx->pc = 0x1feec0u;

    // 0x1feec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1feecc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FEECCu;
    SET_GPR_U32(ctx, 31, 0x1FEED4u);
    ctx->pc = 0x1FEED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEECCu;
            // 0x1feed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEED4u; }
        if (ctx->pc != 0x1FEED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEED4u; }
        if (ctx->pc != 0x1FEED4u) { return; }
    }
    ctx->pc = 0x1FEED4u;
label_1feed4:
    // 0x1feed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1feed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1feed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feedc:
    // 0x1feedc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1feee0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1feee4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1feee8: 0x84234dd0  lh          $v1, 0x4DD0($at)
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19920)));
    // 0x1feeec: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEEECu;
    {
        const bool branch_taken_0x1feeec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEECu;
            // 0x1feef0: 0x286103e8  slti        $at, $v1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feeec) {
            ctx->pc = 0x1FEF0Cu;
            goto label_1fef0c;
        }
    }
    ctx->pc = 0x1FEEF4u;
    // 0x1feef4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEEF4u;
    {
        const bool branch_taken_0x1feef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feef4) {
            ctx->pc = 0x1FEF04u;
            goto label_1fef04;
        }
    }
    ctx->pc = 0x1FEEFCu;
    // 0x1feefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEEFCu;
    {
        const bool branch_taken_0x1feefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEFCu;
            // 0x1fef00: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feefc) {
            ctx->pc = 0x1FEF0Cu;
            goto label_1fef0c;
        }
    }
    ctx->pc = 0x1FEF04u;
label_1fef04:
    // 0x1fef04: 0x0  nop
    ctx->pc = 0x1fef04u;
    // NOP
    // 0x1fef08: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1fef0c:
    // 0x1fef0c: 0x0  nop
    ctx->pc = 0x1fef0cu;
    // NOP
    // 0x1fef10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fef14: 0x28830200  slti        $v1, $a0, 0x200
    ctx->pc = 0x1fef14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fef18: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FEF18u;
    {
        const bool branch_taken_0x1fef18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF18u;
            // 0x1fef1c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef18) {
            ctx->pc = 0x1FEEDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1feedc;
        }
    }
    ctx->pc = 0x1FEF20u;
    // 0x1fef20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fef20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fef28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fef28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF2Cu;
            // 0x1fef30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEF34u;
}
