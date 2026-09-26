#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FCAMERA_ANGLE__FP12RS_STACKDATAi
// Address: 0x269080 - 0x2690d4
void ps2__GET_FCAMERA_ANGLE__FP12RS_STACKDATAi_0x269080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FCAMERA_ANGLE__FP12RS_STACKDATAi_0x269080");
#endif

    switch (ctx->pc) {
        case 0x26909cu: goto label_26909c;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690c0u: goto label_2690c0;
        default: break;
    }

    ctx->pc = 0x269080u;

    // 0x269080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26908c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269090: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269094: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x269094u;
    SET_GPR_U32(ctx, 31, 0x26909Cu);
    ctx->pc = 0x269098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269094u;
            // 0x269098: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26909Cu; }
        if (ctx->pc != 0x26909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26909Cu; }
        if (ctx->pc != 0x26909Cu) { return; }
    }
    ctx->pc = 0x26909Cu;
label_26909c:
    // 0x26909c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26909Cu;
    {
        const bool branch_taken_0x26909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2690A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26909Cu;
            // 0x2690a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26909c) {
            ctx->pc = 0x2690ACu;
            goto label_2690ac;
        }
    }
    ctx->pc = 0x2690A4u;
    // 0x2690a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2690A4u;
    {
        const bool branch_taken_0x2690a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2690A4u;
            // 0x2690a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690a4) {
            ctx->pc = 0x2690C4u;
            goto label_2690c4;
        }
    }
    ctx->pc = 0x2690ACu;
label_2690ac:
    // 0x2690ac: 0xc04c678  jal         func_1319E0
    ctx->pc = 0x2690ACu;
    SET_GPR_U32(ctx, 31, 0x2690B4u);
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690B4u; }
        if (ctx->pc != 0x2690B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690B4u; }
        if (ctx->pc != 0x2690B4u) { return; }
    }
    ctx->pc = 0x2690B4u;
label_2690b4:
    // 0x2690b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2690b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690b8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2690B8u;
    SET_GPR_U32(ctx, 31, 0x2690C0u);
    ctx->pc = 0x2690BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2690B8u;
            // 0x2690bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690C0u; }
        if (ctx->pc != 0x2690C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2690C0u; }
        if (ctx->pc != 0x2690C0u) { return; }
    }
    ctx->pc = 0x2690C0u;
label_2690c0:
    // 0x2690c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2690c4:
    // 0x2690c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2690c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2690c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2690c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2690cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2690CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2690D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2690CCu;
            // 0x2690d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2690D4u;
}
