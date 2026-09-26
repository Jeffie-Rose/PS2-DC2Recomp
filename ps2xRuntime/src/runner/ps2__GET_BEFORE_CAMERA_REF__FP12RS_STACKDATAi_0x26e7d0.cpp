#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BEFORE_CAMERA_REF__FP12RS_STACKDATAi
// Address: 0x26e7d0 - 0x26e844
void ps2__GET_BEFORE_CAMERA_REF__FP12RS_STACKDATAi_0x26e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BEFORE_CAMERA_REF__FP12RS_STACKDATAi_0x26e7d0");
#endif

    switch (ctx->pc) {
        case 0x26e7ecu: goto label_26e7ec;
        case 0x26e804u: goto label_26e804;
        case 0x26e814u: goto label_26e814;
        case 0x26e824u: goto label_26e824;
        case 0x26e830u: goto label_26e830;
        default: break;
    }

    ctx->pc = 0x26e7d0u;

    // 0x26e7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e7e0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26e7e4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x26E7E4u;
    SET_GPR_U32(ctx, 31, 0x26E7ECu);
    ctx->pc = 0x26E7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7E4u;
            // 0x26e7e8: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7ECu; }
        if (ctx->pc != 0x26E7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7ECu; }
        if (ctx->pc != 0x26E7ECu) { return; }
    }
    ctx->pc = 0x26E7ECu;
label_26e7ec:
    // 0x26e7ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E7ECu;
    {
        const bool branch_taken_0x26e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7ECu;
            // 0x26e7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7ec) {
            ctx->pc = 0x26E7FCu;
            goto label_26e7fc;
        }
    }
    ctx->pc = 0x26E7F4u;
    // 0x26e7f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E7F4u;
    {
        const bool branch_taken_0x26e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7F4u;
            // 0x26e7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7f4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E7FCu;
label_26e7fc:
    // 0x26e7fc: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x26E7FCu;
    SET_GPR_U32(ctx, 31, 0x26E804u);
    ctx->pc = 0x26E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7FCu;
            // 0x26e800: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E804u; }
        if (ctx->pc != 0x26E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E804u; }
        if (ctx->pc != 0x26E804u) { return; }
    }
    ctx->pc = 0x26E804u;
label_26e804:
    // 0x26e804: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e80c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E80Cu;
    SET_GPR_U32(ctx, 31, 0x26E814u);
    ctx->pc = 0x26E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E80Cu;
            // 0x26e810: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E814u; }
        if (ctx->pc != 0x26E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E814u; }
        if (ctx->pc != 0x26E814u) { return; }
    }
    ctx->pc = 0x26E814u;
label_26e814:
    // 0x26e814: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26e814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e81c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E81Cu;
    SET_GPR_U32(ctx, 31, 0x26E824u);
    ctx->pc = 0x26E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E81Cu;
            // 0x26e820: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E824u; }
        if (ctx->pc != 0x26E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E824u; }
        if (ctx->pc != 0x26E824u) { return; }
    }
    ctx->pc = 0x26E824u;
label_26e824:
    // 0x26e824: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e828: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E828u;
    SET_GPR_U32(ctx, 31, 0x26E830u);
    ctx->pc = 0x26E82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E828u;
            // 0x26e82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E830u; }
        if (ctx->pc != 0x26E830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E830u; }
        if (ctx->pc != 0x26E830u) { return; }
    }
    ctx->pc = 0x26E830u;
label_26e830:
    // 0x26e830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e834:
    // 0x26e834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E83Cu;
            // 0x26e840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E844u;
}
