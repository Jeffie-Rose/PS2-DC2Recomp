#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_GET_VECT1__FP12RS_STACKDATAi
// Address: 0x1e67f0 - 0x1e6874
void ps2__ESM_GET_VECT1__FP12RS_STACKDATAi_0x1e67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_GET_VECT1__FP12RS_STACKDATAi_0x1e67f0");
#endif

    switch (ctx->pc) {
        case 0x1e6814u: goto label_1e6814;
        case 0x1e6838u: goto label_1e6838;
        case 0x1e6848u: goto label_1e6848;
        case 0x1e6858u: goto label_1e6858;
        case 0x1e6864u: goto label_1e6864;
        default: break;
    }

    ctx->pc = 0x1e67f0u;

    // 0x1e67f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e67f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e67f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e67fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E67FCu;
    {
        const bool branch_taken_0x1e67fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67FCu;
            // 0x1e6800: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67fc) {
            ctx->pc = 0x1E680Cu;
            goto label_1e680c;
        }
    }
    ctx->pc = 0x1E6804u;
    // 0x1e6804: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E6804u;
    {
        const bool branch_taken_0x1e6804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6804u;
            // 0x1e6808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6804) {
            ctx->pc = 0x1E6864u;
            goto label_1e6864;
        }
    }
    ctx->pc = 0x1E680Cu;
label_1e680c:
    // 0x1e680c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E680Cu;
    SET_GPR_U32(ctx, 31, 0x1E6814u);
    ctx->pc = 0x1E6810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E680Cu;
            // 0x1e6810: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6814u; }
        if (ctx->pc != 0x1E6814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6814u; }
        if (ctx->pc != 0x1E6814u) { return; }
    }
    ctx->pc = 0x1E6814u;
label_1e6814:
    // 0x1e6814: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6818: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e681c: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6820: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e6824: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e6828: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e682c: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6830: 0xc0b88b4  jal         func_2E22D0
    ctx->pc = 0x1E6830u;
    SET_GPR_U32(ctx, 31, 0x1E6838u);
    ctx->pc = 0x1E6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6830u;
            // 0x1e6834: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E22D0u;
    if (runtime->hasFunction(0x2E22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6838u; }
        if (ctx->pc != 0x1E6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScriptVect1__16CEffectScriptManFPfii_0x2e22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6838u; }
        if (ctx->pc != 0x1E6838u) { return; }
    }
    ctx->pc = 0x1E6838u;
label_1e6838:
    // 0x1e6838: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e683c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6840: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E6840u;
    SET_GPR_U32(ctx, 31, 0x1E6848u);
    ctx->pc = 0x1E6844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6840u;
            // 0x1e6844: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6848u; }
        if (ctx->pc != 0x1E6848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6848u; }
        if (ctx->pc != 0x1E6848u) { return; }
    }
    ctx->pc = 0x1E6848u;
label_1e6848:
    // 0x1e6848: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e6848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e684c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6850: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E6850u;
    SET_GPR_U32(ctx, 31, 0x1E6858u);
    ctx->pc = 0x1E6854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6850u;
            // 0x1e6854: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6858u; }
        if (ctx->pc != 0x1E6858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6858u; }
        if (ctx->pc != 0x1E6858u) { return; }
    }
    ctx->pc = 0x1E6858u;
label_1e6858:
    // 0x1e6858: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e685c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E685Cu;
    SET_GPR_U32(ctx, 31, 0x1E6864u);
    ctx->pc = 0x1E6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E685Cu;
            // 0x1e6860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6864u; }
        if (ctx->pc != 0x1E6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6864u; }
        if (ctx->pc != 0x1E6864u) { return; }
    }
    ctx->pc = 0x1E6864u;
label_1e6864:
    // 0x1e6864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e686c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E686Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E686Cu;
            // 0x1e6870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6874u;
}
