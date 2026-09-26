#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_MOTION_WAIT_TIME__FP12RS_STACKDATAi
// Address: 0x272280 - 0x2722d4
void ps2__OBJS_SET_MOTION_WAIT_TIME__FP12RS_STACKDATAi_0x272280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_MOTION_WAIT_TIME__FP12RS_STACKDATAi_0x272280");
#endif

    switch (ctx->pc) {
        case 0x272294u: goto label_272294;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722c0u: goto label_2722c0;
        default: break;
    }

    ctx->pc = 0x272280u;

    // 0x272280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27228c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27228Cu;
    SET_GPR_U32(ctx, 31, 0x272294u);
    ctx->pc = 0x272290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27228Cu;
            // 0x272290: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272294u; }
        if (ctx->pc != 0x272294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272294u; }
        if (ctx->pc != 0x272294u) { return; }
    }
    ctx->pc = 0x272294u;
label_272294:
    // 0x272294: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272298: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272298u;
    SET_GPR_U32(ctx, 31, 0x2722A0u);
    ctx->pc = 0x27229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272298u;
            // 0x27229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722A0u; }
        if (ctx->pc != 0x2722A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722A0u; }
        if (ctx->pc != 0x2722A0u) { return; }
    }
    ctx->pc = 0x2722A0u;
label_2722a0:
    // 0x2722a0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2722A0u;
    SET_GPR_U32(ctx, 31, 0x2722A8u);
    ctx->pc = 0x2722A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2722A0u;
            // 0x2722a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722A8u; }
        if (ctx->pc != 0x2722A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722A8u; }
        if (ctx->pc != 0x2722A8u) { return; }
    }
    ctx->pc = 0x2722A8u;
label_2722a8:
    // 0x2722a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2722A8u;
    {
        const bool branch_taken_0x2722a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2722ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722A8u;
            // 0x2722ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722a8) {
            ctx->pc = 0x2722B8u;
            goto label_2722b8;
        }
    }
    ctx->pc = 0x2722B0u;
    // 0x2722b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2722B0u;
    {
        const bool branch_taken_0x2722b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722B0u;
            // 0x2722b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722b0) {
            ctx->pc = 0x2722C4u;
            goto label_2722c4;
        }
    }
    ctx->pc = 0x2722B8u;
label_2722b8:
    // 0x2722b8: 0xc097460  jal         func_25D180
    ctx->pc = 0x2722B8u;
    SET_GPR_U32(ctx, 31, 0x2722C0u);
    ctx->pc = 0x2722BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2722B8u;
            // 0x2722bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D180u;
    if (runtime->hasFunction(0x25D180u)) {
        auto targetFn = runtime->lookupFunction(0x25D180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722C0u; }
        if (ctx->pc != 0x2722C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionWaitTime__12CSceneObjSeqFf_0x25d180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722C0u; }
        if (ctx->pc != 0x2722C0u) { return; }
    }
    ctx->pc = 0x2722C0u;
label_2722c0:
    // 0x2722c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2722c4:
    // 0x2722c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2722c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2722c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2722c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2722cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2722CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2722D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722CCu;
            // 0x2722d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2722D4u;
}
