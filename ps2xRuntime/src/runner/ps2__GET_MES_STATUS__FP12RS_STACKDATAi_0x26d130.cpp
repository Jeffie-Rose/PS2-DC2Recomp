#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MES_STATUS__FP12RS_STACKDATAi
// Address: 0x26d130 - 0x26d184
void ps2__GET_MES_STATUS__FP12RS_STACKDATAi_0x26d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MES_STATUS__FP12RS_STACKDATAi_0x26d130");
#endif

    switch (ctx->pc) {
        case 0x26d144u: goto label_26d144;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d164u: goto label_26d164;
        case 0x26d170u: goto label_26d170;
        default: break;
    }

    ctx->pc = 0x26d130u;

    // 0x26d130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d13c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D13Cu;
    SET_GPR_U32(ctx, 31, 0x26D144u);
    ctx->pc = 0x26D140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D13Cu;
            // 0x26d140: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D144u; }
        if (ctx->pc != 0x26D144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D144u; }
        if (ctx->pc != 0x26D144u) { return; }
    }
    ctx->pc = 0x26D144u;
label_26d144:
    // 0x26d144: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D144u;
    SET_GPR_U32(ctx, 31, 0x26D14Cu);
    ctx->pc = 0x26D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D144u;
            // 0x26d148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D14Cu; }
        if (ctx->pc != 0x26D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D14Cu; }
        if (ctx->pc != 0x26D14Cu) { return; }
    }
    ctx->pc = 0x26D14Cu;
label_26d14c:
    // 0x26d14c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D14Cu;
    {
        const bool branch_taken_0x26d14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D14Cu;
            // 0x26d150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d14c) {
            ctx->pc = 0x26D15Cu;
            goto label_26d15c;
        }
    }
    ctx->pc = 0x26D154u;
    // 0x26d154: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D154u;
    {
        const bool branch_taken_0x26d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D154u;
            // 0x26d158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d154) {
            ctx->pc = 0x26D174u;
            goto label_26d174;
        }
    }
    ctx->pc = 0x26D15Cu;
label_26d15c:
    // 0x26d15c: 0xc054f84  jal         func_153E10
    ctx->pc = 0x26D15Cu;
    SET_GPR_U32(ctx, 31, 0x26D164u);
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D164u; }
        if (ctx->pc != 0x26D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D164u; }
        if (ctx->pc != 0x26D164u) { return; }
    }
    ctx->pc = 0x26D164u;
label_26d164:
    // 0x26d164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d168: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D168u;
    SET_GPR_U32(ctx, 31, 0x26D170u);
    ctx->pc = 0x26D16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D168u;
            // 0x26d16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D170u; }
        if (ctx->pc != 0x26D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D170u; }
        if (ctx->pc != 0x26D170u) { return; }
    }
    ctx->pc = 0x26D170u;
label_26d170:
    // 0x26d170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d174:
    // 0x26d174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d17c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D17Cu;
            // 0x26d180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D184u;
}
