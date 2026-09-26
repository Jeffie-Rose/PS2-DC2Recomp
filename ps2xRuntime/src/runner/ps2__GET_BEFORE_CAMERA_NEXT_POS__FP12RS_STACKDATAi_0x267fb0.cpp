#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BEFORE_CAMERA_NEXT_POS__FP12RS_STACKDATAi
// Address: 0x267fb0 - 0x268024
void ps2__GET_BEFORE_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x267fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BEFORE_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x267fb0");
#endif

    switch (ctx->pc) {
        case 0x267fccu: goto label_267fcc;
        case 0x267fe4u: goto label_267fe4;
        case 0x267ff4u: goto label_267ff4;
        case 0x268004u: goto label_268004;
        case 0x268010u: goto label_268010;
        default: break;
    }

    ctx->pc = 0x267fb0u;

    // 0x267fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x267fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fc0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267fc4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x267FC4u;
    SET_GPR_U32(ctx, 31, 0x267FCCu);
    ctx->pc = 0x267FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FC4u;
            // 0x267fc8: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FCCu; }
        if (ctx->pc != 0x267FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FCCu; }
        if (ctx->pc != 0x267FCCu) { return; }
    }
    ctx->pc = 0x267FCCu;
label_267fcc:
    // 0x267fcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267FCCu;
    {
        const bool branch_taken_0x267fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FCCu;
            // 0x267fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fcc) {
            ctx->pc = 0x267FDCu;
            goto label_267fdc;
        }
    }
    ctx->pc = 0x267FD4u;
    // 0x267fd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267FD4u;
    {
        const bool branch_taken_0x267fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FD4u;
            // 0x267fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fd4) {
            ctx->pc = 0x268014u;
            goto label_268014;
        }
    }
    ctx->pc = 0x267FDCu;
label_267fdc:
    // 0x267fdc: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x267FDCu;
    SET_GPR_U32(ctx, 31, 0x267FE4u);
    ctx->pc = 0x267FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FDCu;
            // 0x267fe0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FE4u; }
        if (ctx->pc != 0x267FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextPos__9mgCCameraFPf_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FE4u; }
        if (ctx->pc != 0x267FE4u) { return; }
    }
    ctx->pc = 0x267FE4u;
label_267fe4:
    // 0x267fe4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x267fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fec: 0xc097e54  jal         func_25F950
    ctx->pc = 0x267FECu;
    SET_GPR_U32(ctx, 31, 0x267FF4u);
    ctx->pc = 0x267FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FECu;
            // 0x267ff0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FF4u; }
        if (ctx->pc != 0x267FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FF4u; }
        if (ctx->pc != 0x267FF4u) { return; }
    }
    ctx->pc = 0x267FF4u;
label_267ff4:
    // 0x267ff4: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x267ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ffc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x267FFCu;
    SET_GPR_U32(ctx, 31, 0x268004u);
    ctx->pc = 0x268000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FFCu;
            // 0x268000: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268004u; }
        if (ctx->pc != 0x268004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268004u; }
        if (ctx->pc != 0x268004u) { return; }
    }
    ctx->pc = 0x268004u;
label_268004:
    // 0x268004: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x268004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268008: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268008u;
    SET_GPR_U32(ctx, 31, 0x268010u);
    ctx->pc = 0x26800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268008u;
            // 0x26800c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268010u; }
        if (ctx->pc != 0x268010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268010u; }
        if (ctx->pc != 0x268010u) { return; }
    }
    ctx->pc = 0x268010u;
label_268010:
    // 0x268010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268014:
    // 0x268014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26801c: 0x3e00008  jr          $ra
    ctx->pc = 0x26801Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26801Cu;
            // 0x268020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268024u;
}
