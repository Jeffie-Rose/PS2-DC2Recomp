#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi
// Address: 0x1e0d70 - 0x1e0e00
void ps2__SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x1e0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x1e0d70");
#endif

    switch (ctx->pc) {
        case 0x1e0d90u: goto label_1e0d90;
        case 0x1e0dacu: goto label_1e0dac;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0dc0u: goto label_1e0dc0;
        case 0x1e0dd0u: goto label_1e0dd0;
        case 0x1e0ddcu: goto label_1e0ddc;
        case 0x1e0de8u: goto label_1e0de8;
        default: break;
    }

    ctx->pc = 0x1e0d70u;

    // 0x1e0d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d84: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e0d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e0d88: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E0D88u;
    SET_GPR_U32(ctx, 31, 0x1E0D90u);
    ctx->pc = 0x1E0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D88u;
            // 0x1e0d8c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D90u; }
        if (ctx->pc != 0x1E0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D90u; }
        if (ctx->pc != 0x1E0D90u) { return; }
    }
    ctx->pc = 0x1E0D90u;
label_1e0d90:
    // 0x1e0d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D94u;
    {
        const bool branch_taken_0x1e0d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D94u;
            // 0x1e0d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d94) {
            ctx->pc = 0x1E0DA4u;
            goto label_1e0da4;
        }
    }
    ctx->pc = 0x1E0D9Cu;
    // 0x1e0d9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0D9Cu;
    {
        const bool branch_taken_0x1e0d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D9Cu;
            // 0x1e0da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d9c) {
            ctx->pc = 0x1E0DECu;
            goto label_1e0dec;
        }
    }
    ctx->pc = 0x1E0DA4u;
label_1e0da4:
    // 0x1e0da4: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x1E0DA4u;
    SET_GPR_U32(ctx, 31, 0x1E0DACu);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DACu; }
        if (ctx->pc != 0x1E0DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DACu; }
        if (ctx->pc != 0x1E0DACu) { return; }
    }
    ctx->pc = 0x1E0DACu;
label_1e0dac:
    // 0x1e0dac: 0xc0bb030  jal         func_2EC0C0
    ctx->pc = 0x1E0DACu;
    SET_GPR_U32(ctx, 31, 0x1E0DB4u);
    ctx->pc = 0x1E0DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DACu;
            // 0x1e0db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DB4u; }
        if (ctx->pc != 0x1E0DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DB4u; }
        if (ctx->pc != 0x1E0DB4u) { return; }
    }
    ctx->pc = 0x1E0DB4u;
label_1e0db4:
    // 0x1e0db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0db8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0DB8u;
    SET_GPR_U32(ctx, 31, 0x1E0DC0u);
    ctx->pc = 0x1E0DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DB8u;
            // 0x1e0dbc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DC0u; }
        if (ctx->pc != 0x1E0DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DC0u; }
        if (ctx->pc != 0x1E0DC0u) { return; }
    }
    ctx->pc = 0x1E0DC0u;
label_1e0dc0:
    // 0x1e0dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dc4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e0dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e0dc8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0DC8u;
    SET_GPR_U32(ctx, 31, 0x1E0DD0u);
    ctx->pc = 0x1E0DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DC8u;
            // 0x1e0dcc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD0u; }
        if (ctx->pc != 0x1E0DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD0u; }
        if (ctx->pc != 0x1E0DD0u) { return; }
    }
    ctx->pc = 0x1E0DD0u;
label_1e0dd0:
    // 0x1e0dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dd4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0DD4u;
    SET_GPR_U32(ctx, 31, 0x1E0DDCu);
    ctx->pc = 0x1E0DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DD4u;
            // 0x1e0dd8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DDCu; }
        if (ctx->pc != 0x1E0DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DDCu; }
        if (ctx->pc != 0x1E0DDCu) { return; }
    }
    ctx->pc = 0x1E0DDCu;
label_1e0ddc:
    // 0x1e0ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0de0: 0xc04c508  jal         func_131420
    ctx->pc = 0x1E0DE0u;
    SET_GPR_U32(ctx, 31, 0x1E0DE8u);
    ctx->pc = 0x1E0DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DE0u;
            // 0x1e0de4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DE8u; }
        if (ctx->pc != 0x1E0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DE8u; }
        if (ctx->pc != 0x1E0DE8u) { return; }
    }
    ctx->pc = 0x1E0DE8u;
label_1e0de8:
    // 0x1e0de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0dec:
    // 0x1e0dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DF8u;
            // 0x1e0dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0E00u;
}
