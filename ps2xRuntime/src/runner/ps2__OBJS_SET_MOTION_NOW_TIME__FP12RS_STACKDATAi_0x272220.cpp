#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_MOTION_NOW_TIME__FP12RS_STACKDATAi
// Address: 0x272220 - 0x272274
void ps2__OBJS_SET_MOTION_NOW_TIME__FP12RS_STACKDATAi_0x272220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_MOTION_NOW_TIME__FP12RS_STACKDATAi_0x272220");
#endif

    switch (ctx->pc) {
        case 0x272234u: goto label_272234;
        case 0x272240u: goto label_272240;
        case 0x272248u: goto label_272248;
        case 0x272260u: goto label_272260;
        default: break;
    }

    ctx->pc = 0x272220u;

    // 0x272220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27222c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27222Cu;
    SET_GPR_U32(ctx, 31, 0x272234u);
    ctx->pc = 0x272230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27222Cu;
            // 0x272230: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272234u; }
        if (ctx->pc != 0x272234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272234u; }
        if (ctx->pc != 0x272234u) { return; }
    }
    ctx->pc = 0x272234u;
label_272234:
    // 0x272234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x272234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272238: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 31, 0x272240u);
    ctx->pc = 0x27223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272238u;
            // 0x27223c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272240u; }
        if (ctx->pc != 0x272240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272240u; }
        if (ctx->pc != 0x272240u) { return; }
    }
    ctx->pc = 0x272240u;
label_272240:
    // 0x272240: 0xc098a44  jal         func_262910
    ctx->pc = 0x272240u;
    SET_GPR_U32(ctx, 31, 0x272248u);
    ctx->pc = 0x272244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272240u;
            // 0x272244: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272248u; }
        if (ctx->pc != 0x272248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272248u; }
        if (ctx->pc != 0x272248u) { return; }
    }
    ctx->pc = 0x272248u;
label_272248:
    // 0x272248: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272248u;
    {
        const bool branch_taken_0x272248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272248u;
            // 0x27224c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272248) {
            ctx->pc = 0x272258u;
            goto label_272258;
        }
    }
    ctx->pc = 0x272250u;
    // 0x272250: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272250u;
    {
        const bool branch_taken_0x272250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272250u;
            // 0x272254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272250) {
            ctx->pc = 0x272264u;
            goto label_272264;
        }
    }
    ctx->pc = 0x272258u;
label_272258:
    // 0x272258: 0xc097450  jal         func_25D140
    ctx->pc = 0x272258u;
    SET_GPR_U32(ctx, 31, 0x272260u);
    ctx->pc = 0x27225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272258u;
            // 0x27225c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D140u;
    if (runtime->hasFunction(0x25D140u)) {
        auto targetFn = runtime->lookupFunction(0x25D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272260u; }
        if (ctx->pc != 0x272260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionNowTime__12CSceneObjSeqFf_0x25d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272260u; }
        if (ctx->pc != 0x272260u) { return; }
    }
    ctx->pc = 0x272260u;
label_272260:
    // 0x272260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272264:
    // 0x272264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27226c: 0x3e00008  jr          $ra
    ctx->pc = 0x27226Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27226Cu;
            // 0x272270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272274u;
}
