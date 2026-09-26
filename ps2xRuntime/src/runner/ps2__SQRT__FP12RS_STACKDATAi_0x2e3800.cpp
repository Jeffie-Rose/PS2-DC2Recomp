#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SQRT__FP12RS_STACKDATAi
// Address: 0x2e3800 - 0x2e385c
void ps2__SQRT__FP12RS_STACKDATAi_0x2e3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SQRT__FP12RS_STACKDATAi_0x2e3800");
#endif

    switch (ctx->pc) {
        case 0x2e3824u: goto label_2e3824;
        case 0x2e382cu: goto label_2e382c;
        case 0x2e3834u: goto label_2e3834;
        case 0x2e383cu: goto label_2e383c;
        case 0x2e3848u: goto label_2e3848;
        default: break;
    }

    ctx->pc = 0x2e3800u;

    // 0x2e3800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e380c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E380Cu;
    {
        const bool branch_taken_0x2e380c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E380Cu;
            // 0x2e3810: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e380c) {
            ctx->pc = 0x2E381Cu;
            goto label_2e381c;
        }
    }
    ctx->pc = 0x2E3814u;
    // 0x2e3814: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3814u;
    {
        const bool branch_taken_0x2e3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3814u;
            // 0x2e3818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3814) {
            ctx->pc = 0x2E384Cu;
            goto label_2e384c;
        }
    }
    ctx->pc = 0x2E381Cu;
label_2e381c:
    // 0x2e381c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E381Cu;
    SET_GPR_U32(ctx, 31, 0x2E3824u);
    ctx->pc = 0x2E3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E381Cu;
            // 0x2e3820: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3824u; }
        if (ctx->pc != 0x2E3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3824u; }
        if (ctx->pc != 0x2E3824u) { return; }
    }
    ctx->pc = 0x2E3824u;
label_2e3824:
    // 0x2e3824: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E3824u;
    SET_GPR_U32(ctx, 31, 0x2E382Cu);
    ctx->pc = 0x2E3828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3824u;
            // 0x2e3828: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E382Cu; }
        if (ctx->pc != 0x2E382Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E382Cu; }
        if (ctx->pc != 0x2E382Cu) { return; }
    }
    ctx->pc = 0x2E382Cu;
label_2e382c:
    // 0x2e382c: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x2E382Cu;
    SET_GPR_U32(ctx, 31, 0x2E3834u);
    ctx->pc = 0x2E3830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E382Cu;
            // 0x2e3830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3834u; }
        if (ctx->pc != 0x2E3834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3834u; }
        if (ctx->pc != 0x2E3834u) { return; }
    }
    ctx->pc = 0x2E3834u;
label_2e3834:
    // 0x2e3834: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2E3834u;
    SET_GPR_U32(ctx, 31, 0x2E383Cu);
    ctx->pc = 0x2E3838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3834u;
            // 0x2e3838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E383Cu; }
        if (ctx->pc != 0x2E383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E383Cu; }
        if (ctx->pc != 0x2E383Cu) { return; }
    }
    ctx->pc = 0x2E383Cu;
label_2e383c:
    // 0x2e383c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3840: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3840u;
    SET_GPR_U32(ctx, 31, 0x2E3848u);
    ctx->pc = 0x2E3844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3840u;
            // 0x2e3844: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3848u; }
        if (ctx->pc != 0x2E3848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3848u; }
        if (ctx->pc != 0x2E3848u) { return; }
    }
    ctx->pc = 0x2E3848u;
label_2e3848:
    // 0x2e3848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e384c:
    // 0x2e384c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3854: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3854u;
            // 0x2e3858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E385Cu;
}
