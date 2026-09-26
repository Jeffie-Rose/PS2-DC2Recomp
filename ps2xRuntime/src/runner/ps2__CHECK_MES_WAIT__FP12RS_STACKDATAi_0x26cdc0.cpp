#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MES_WAIT__FP12RS_STACKDATAi
// Address: 0x26cdc0 - 0x26ce18
void ps2__CHECK_MES_WAIT__FP12RS_STACKDATAi_0x26cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MES_WAIT__FP12RS_STACKDATAi_0x26cdc0");
#endif

    switch (ctx->pc) {
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26ce04u: goto label_26ce04;
        default: break;
    }

    ctx->pc = 0x26cdc0u;

    // 0x26cdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26cdc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26cdc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26cdcc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CDCCu;
    SET_GPR_U32(ctx, 31, 0x26CDD4u);
    ctx->pc = 0x26CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDCCu;
            // 0x26cdd0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD4u; }
        if (ctx->pc != 0x26CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD4u; }
        if (ctx->pc != 0x26CDD4u) { return; }
    }
    ctx->pc = 0x26CDD4u;
label_26cdd4:
    // 0x26cdd4: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CDD4u;
    SET_GPR_U32(ctx, 31, 0x26CDDCu);
    ctx->pc = 0x26CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDD4u;
            // 0x26cdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDDCu; }
        if (ctx->pc != 0x26CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDDCu; }
        if (ctx->pc != 0x26CDDCu) { return; }
    }
    ctx->pc = 0x26CDDCu;
label_26cddc:
    // 0x26cddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CDDCu;
    {
        const bool branch_taken_0x26cddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDDCu;
            // 0x26cde0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cddc) {
            ctx->pc = 0x26CDECu;
            goto label_26cdec;
        }
    }
    ctx->pc = 0x26CDE4u;
    // 0x26cde4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CDE4u;
    {
        const bool branch_taken_0x26cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDE4u;
            // 0x26cde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cde4) {
            ctx->pc = 0x26CE08u;
            goto label_26ce08;
        }
    }
    ctx->pc = 0x26CDECu;
label_26cdec:
    // 0x26cdec: 0xc054f84  jal         func_153E10
    ctx->pc = 0x26CDECu;
    SET_GPR_U32(ctx, 31, 0x26CDF4u);
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDF4u; }
        if (ctx->pc != 0x26CDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDF4u; }
        if (ctx->pc != 0x26CDF4u) { return; }
    }
    ctx->pc = 0x26CDF4u;
label_26cdf4:
    // 0x26cdf4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x26cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x26cdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdfc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26CDFCu;
    SET_GPR_U32(ctx, 31, 0x26CE04u);
    ctx->pc = 0x26CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDFCu;
            // 0x26ce00: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE04u; }
        if (ctx->pc != 0x26CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE04u; }
        if (ctx->pc != 0x26CE04u) { return; }
    }
    ctx->pc = 0x26CE04u;
label_26ce04:
    // 0x26ce04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce08:
    // 0x26ce08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ce08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ce0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ce0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ce10: 0x3e00008  jr          $ra
    ctx->pc = 0x26CE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE10u;
            // 0x26ce14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CE18u;
}
