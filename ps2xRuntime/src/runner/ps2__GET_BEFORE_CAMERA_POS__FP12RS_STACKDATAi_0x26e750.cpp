#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BEFORE_CAMERA_POS__FP12RS_STACKDATAi
// Address: 0x26e750 - 0x26e7c4
void ps2__GET_BEFORE_CAMERA_POS__FP12RS_STACKDATAi_0x26e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BEFORE_CAMERA_POS__FP12RS_STACKDATAi_0x26e750");
#endif

    switch (ctx->pc) {
        case 0x26e76cu: goto label_26e76c;
        case 0x26e784u: goto label_26e784;
        case 0x26e794u: goto label_26e794;
        case 0x26e7a4u: goto label_26e7a4;
        case 0x26e7b0u: goto label_26e7b0;
        default: break;
    }

    ctx->pc = 0x26e750u;

    // 0x26e750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e760: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26e764: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x26E764u;
    SET_GPR_U32(ctx, 31, 0x26E76Cu);
    ctx->pc = 0x26E768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E764u;
            // 0x26e768: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E76Cu; }
        if (ctx->pc != 0x26E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E76Cu; }
        if (ctx->pc != 0x26E76Cu) { return; }
    }
    ctx->pc = 0x26E76Cu;
label_26e76c:
    // 0x26e76c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E76Cu;
    {
        const bool branch_taken_0x26e76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E76Cu;
            // 0x26e770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e76c) {
            ctx->pc = 0x26E77Cu;
            goto label_26e77c;
        }
    }
    ctx->pc = 0x26E774u;
    // 0x26e774: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E774u;
    {
        const bool branch_taken_0x26e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E774u;
            // 0x26e778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e774) {
            ctx->pc = 0x26E7B4u;
            goto label_26e7b4;
        }
    }
    ctx->pc = 0x26E77Cu;
label_26e77c:
    // 0x26e77c: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x26E77Cu;
    SET_GPR_U32(ctx, 31, 0x26E784u);
    ctx->pc = 0x26E780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E77Cu;
            // 0x26e780: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E784u; }
        if (ctx->pc != 0x26E784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E784u; }
        if (ctx->pc != 0x26E784u) { return; }
    }
    ctx->pc = 0x26E784u;
label_26e784:
    // 0x26e784: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e78c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E78Cu;
    SET_GPR_U32(ctx, 31, 0x26E794u);
    ctx->pc = 0x26E790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E78Cu;
            // 0x26e790: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E794u; }
        if (ctx->pc != 0x26E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E794u; }
        if (ctx->pc != 0x26E794u) { return; }
    }
    ctx->pc = 0x26E794u;
label_26e794:
    // 0x26e794: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e79c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E79Cu;
    SET_GPR_U32(ctx, 31, 0x26E7A4u);
    ctx->pc = 0x26E7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E79Cu;
            // 0x26e7a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7A4u; }
        if (ctx->pc != 0x26E7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7A4u; }
        if (ctx->pc != 0x26E7A4u) { return; }
    }
    ctx->pc = 0x26E7A4u;
label_26e7a4:
    // 0x26e7a4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e7a8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E7A8u;
    SET_GPR_U32(ctx, 31, 0x26E7B0u);
    ctx->pc = 0x26E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7A8u;
            // 0x26e7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7B0u; }
        if (ctx->pc != 0x26E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7B0u; }
        if (ctx->pc != 0x26E7B0u) { return; }
    }
    ctx->pc = 0x26E7B0u;
label_26e7b0:
    // 0x26e7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e7b4:
    // 0x26e7b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7BCu;
            // 0x26e7c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E7C4u;
}
