#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi
// Address: 0x1e0b80 - 0x1e0c10
void ps2__SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x1e0b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x1e0b80");
#endif

    switch (ctx->pc) {
        case 0x1e0ba0u: goto label_1e0ba0;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0be0u: goto label_1e0be0;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0bf8u: goto label_1e0bf8;
        default: break;
    }

    ctx->pc = 0x1e0b80u;

    // 0x1e0b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b94: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e0b98: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E0B98u;
    SET_GPR_U32(ctx, 31, 0x1E0BA0u);
    ctx->pc = 0x1E0B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B98u;
            // 0x1e0b9c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BA0u; }
        if (ctx->pc != 0x1E0BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BA0u; }
        if (ctx->pc != 0x1E0BA0u) { return; }
    }
    ctx->pc = 0x1E0BA0u;
label_1e0ba0:
    // 0x1e0ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ba4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0BA4u;
    {
        const bool branch_taken_0x1e0ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BA4u;
            // 0x1e0ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba4) {
            ctx->pc = 0x1E0BB4u;
            goto label_1e0bb4;
        }
    }
    ctx->pc = 0x1E0BACu;
    // 0x1e0bac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0BACu;
    {
        const bool branch_taken_0x1e0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BACu;
            // 0x1e0bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bac) {
            ctx->pc = 0x1E0BFCu;
            goto label_1e0bfc;
        }
    }
    ctx->pc = 0x1E0BB4u;
label_1e0bb4:
    // 0x1e0bb4: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x1E0BB4u;
    SET_GPR_U32(ctx, 31, 0x1E0BBCu);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BBCu; }
        if (ctx->pc != 0x1E0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BBCu; }
        if (ctx->pc != 0x1E0BBCu) { return; }
    }
    ctx->pc = 0x1E0BBCu;
label_1e0bbc:
    // 0x1e0bbc: 0xc0bb030  jal         func_2EC0C0
    ctx->pc = 0x1E0BBCu;
    SET_GPR_U32(ctx, 31, 0x1E0BC4u);
    ctx->pc = 0x1E0BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BBCu;
            // 0x1e0bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC4u; }
        if (ctx->pc != 0x1E0BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC4u; }
        if (ctx->pc != 0x1E0BC4u) { return; }
    }
    ctx->pc = 0x1E0BC4u;
label_1e0bc4:
    // 0x1e0bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bc8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0BC8u;
    SET_GPR_U32(ctx, 31, 0x1E0BD0u);
    ctx->pc = 0x1E0BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BC8u;
            // 0x1e0bcc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BD0u; }
        if (ctx->pc != 0x1E0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BD0u; }
        if (ctx->pc != 0x1E0BD0u) { return; }
    }
    ctx->pc = 0x1E0BD0u;
label_1e0bd0:
    // 0x1e0bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bd4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e0bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e0bd8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0BD8u;
    SET_GPR_U32(ctx, 31, 0x1E0BE0u);
    ctx->pc = 0x1E0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BD8u;
            // 0x1e0bdc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BE0u; }
        if (ctx->pc != 0x1E0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BE0u; }
        if (ctx->pc != 0x1E0BE0u) { return; }
    }
    ctx->pc = 0x1E0BE0u;
label_1e0be0:
    // 0x1e0be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0be4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0BE4u;
    SET_GPR_U32(ctx, 31, 0x1E0BECu);
    ctx->pc = 0x1E0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BE4u;
            // 0x1e0be8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BECu; }
        if (ctx->pc != 0x1E0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BECu; }
        if (ctx->pc != 0x1E0BECu) { return; }
    }
    ctx->pc = 0x1E0BECu;
label_1e0bec:
    // 0x1e0bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bf0: 0xc04c51c  jal         func_131470
    ctx->pc = 0x1E0BF0u;
    SET_GPR_U32(ctx, 31, 0x1E0BF8u);
    ctx->pc = 0x1E0BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BF0u;
            // 0x1e0bf4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BF8u; }
        if (ctx->pc != 0x1E0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BF8u; }
        if (ctx->pc != 0x1E0BF8u) { return; }
    }
    ctx->pc = 0x1E0BF8u;
label_1e0bf8:
    // 0x1e0bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0bfc:
    // 0x1e0bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C08u;
            // 0x1e0c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0C10u;
}
