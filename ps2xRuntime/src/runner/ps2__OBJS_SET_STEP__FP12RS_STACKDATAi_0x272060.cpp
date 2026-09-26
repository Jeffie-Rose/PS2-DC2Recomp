#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_STEP__FP12RS_STACKDATAi
// Address: 0x272060 - 0x2720b4
void ps2__OBJS_SET_STEP__FP12RS_STACKDATAi_0x272060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_STEP__FP12RS_STACKDATAi_0x272060");
#endif

    switch (ctx->pc) {
        case 0x272074u: goto label_272074;
        case 0x272080u: goto label_272080;
        case 0x272088u: goto label_272088;
        case 0x2720a0u: goto label_2720a0;
        default: break;
    }

    ctx->pc = 0x272060u;

    // 0x272060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27206c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27206Cu;
    SET_GPR_U32(ctx, 31, 0x272074u);
    ctx->pc = 0x272070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27206Cu;
            // 0x272070: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272074u; }
        if (ctx->pc != 0x272074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272074u; }
        if (ctx->pc != 0x272074u) { return; }
    }
    ctx->pc = 0x272074u;
label_272074:
    // 0x272074: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x272074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272078: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272078u;
    SET_GPR_U32(ctx, 31, 0x272080u);
    ctx->pc = 0x27207Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272078u;
            // 0x27207c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272080u; }
        if (ctx->pc != 0x272080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272080u; }
        if (ctx->pc != 0x272080u) { return; }
    }
    ctx->pc = 0x272080u;
label_272080:
    // 0x272080: 0xc098a44  jal         func_262910
    ctx->pc = 0x272080u;
    SET_GPR_U32(ctx, 31, 0x272088u);
    ctx->pc = 0x272084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272080u;
            // 0x272084: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272088u; }
        if (ctx->pc != 0x272088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272088u; }
        if (ctx->pc != 0x272088u) { return; }
    }
    ctx->pc = 0x272088u;
label_272088:
    // 0x272088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272088u;
    {
        const bool branch_taken_0x272088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272088u;
            // 0x27208c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272088) {
            ctx->pc = 0x272098u;
            goto label_272098;
        }
    }
    ctx->pc = 0x272090u;
    // 0x272090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272090u;
    {
        const bool branch_taken_0x272090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272090u;
            // 0x272094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272090) {
            ctx->pc = 0x2720A4u;
            goto label_2720a4;
        }
    }
    ctx->pc = 0x272098u;
label_272098:
    // 0x272098: 0xc097424  jal         func_25D090
    ctx->pc = 0x272098u;
    SET_GPR_U32(ctx, 31, 0x2720A0u);
    ctx->pc = 0x27209Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272098u;
            // 0x27209c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D090u;
    if (runtime->hasFunction(0x25D090u)) {
        auto targetFn = runtime->lookupFunction(0x25D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720A0u; }
        if (ctx->pc != 0x2720A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStep__12CSceneObjSeqFf_0x25d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720A0u; }
        if (ctx->pc != 0x2720A0u) { return; }
    }
    ctx->pc = 0x2720A0u;
label_2720a0:
    // 0x2720a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2720a4:
    // 0x2720a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2720a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2720a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2720a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2720ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2720ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2720B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720ACu;
            // 0x2720b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2720B4u;
}
