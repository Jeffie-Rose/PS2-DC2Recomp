#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PAUSE__FP12RS_STACKDATAi
// Address: 0x1e7220 - 0x1e729c
void ps2__SET_PAUSE__FP12RS_STACKDATAi_0x1e7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PAUSE__FP12RS_STACKDATAi_0x1e7220");
#endif

    switch (ctx->pc) {
        case 0x1e7250u: goto label_1e7250;
        case 0x1e725cu: goto label_1e725c;
        default: break;
    }

    ctx->pc = 0x1e7220u;

    // 0x1e7220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7230: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e7234: 0x24512f90  addiu       $s1, $v0, 0x2F90
    ctx->pc = 0x1e7234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1e7238: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7238u;
    {
        const bool branch_taken_0x1e7238 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7238u;
            // 0x1e723c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7238) {
            ctx->pc = 0x1E7248u;
            goto label_1e7248;
        }
    }
    ctx->pc = 0x1E7240u;
    // 0x1e7240: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7240u;
    {
        const bool branch_taken_0x1e7240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7240u;
            // 0x1e7244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7240) {
            ctx->pc = 0x1E7288u;
            goto label_1e7288;
        }
    }
    ctx->pc = 0x1E7248u;
label_1e7248:
    // 0x1e7248: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7248u;
    SET_GPR_U32(ctx, 31, 0x1E7250u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7250u; }
        if (ctx->pc != 0x1E7250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7250u; }
        if (ctx->pc != 0x1E7250u) { return; }
    }
    ctx->pc = 0x1E7250u;
label_1e7250:
    // 0x1e7250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7254: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7254u;
    SET_GPR_U32(ctx, 31, 0x1E725Cu);
    ctx->pc = 0x1E7258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7254u;
            // 0x1e7258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E725Cu; }
        if (ctx->pc != 0x1E725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E725Cu; }
        if (ctx->pc != 0x1E725Cu) { return; }
    }
    ctx->pc = 0x1E725Cu;
label_1e725c:
    // 0x1e725c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E725Cu;
    {
        const bool branch_taken_0x1e725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e725c) {
            ctx->pc = 0x1E7274u;
            goto label_1e7274;
        }
    }
    ctx->pc = 0x1E7264u;
    // 0x1e7264: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7268: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1e7268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1e726c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E726Cu;
    {
        const bool branch_taken_0x1e726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E726Cu;
            // 0x1e7270: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e726c) {
            ctx->pc = 0x1E7284u;
            goto label_1e7284;
        }
    }
    ctx->pc = 0x1E7274u;
label_1e7274:
    // 0x1e7274: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7278: 0x2001827  not         $v1, $s0
    ctx->pc = 0x1e7278u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e727c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e7280: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e7280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e7284:
    // 0x1e7284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7288:
    // 0x1e7288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e728c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e728cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7294: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7294u;
            // 0x1e7298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E729Cu;
}
