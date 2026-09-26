#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_FOLLOW__FP12RS_STACKDATAi
// Address: 0x1e0ce0 - 0x1e0d64
void ps2__SET_CAMERA_FOLLOW__FP12RS_STACKDATAi_0x1e0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_FOLLOW__FP12RS_STACKDATAi_0x1e0ce0");
#endif

    switch (ctx->pc) {
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d1cu: goto label_1e0d1c;
        case 0x1e0d2cu: goto label_1e0d2c;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d4cu: goto label_1e0d4c;
        default: break;
    }

    ctx->pc = 0x1e0ce0u;

    // 0x1e0ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cf4: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e0cf8: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E0CF8u;
    SET_GPR_U32(ctx, 31, 0x1E0D00u);
    ctx->pc = 0x1E0CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CF8u;
            // 0x1e0cfc: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D00u; }
        if (ctx->pc != 0x1E0D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D00u; }
        if (ctx->pc != 0x1E0D00u) { return; }
    }
    ctx->pc = 0x1E0D00u;
label_1e0d00:
    // 0x1e0d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D04u;
    {
        const bool branch_taken_0x1e0d04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D04u;
            // 0x1e0d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d04) {
            ctx->pc = 0x1E0D14u;
            goto label_1e0d14;
        }
    }
    ctx->pc = 0x1E0D0Cu;
    // 0x1e0d0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0D0Cu;
    {
        const bool branch_taken_0x1e0d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D0Cu;
            // 0x1e0d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d0c) {
            ctx->pc = 0x1E0D50u;
            goto label_1e0d50;
        }
    }
    ctx->pc = 0x1E0D14u;
label_1e0d14:
    // 0x1e0d14: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0D14u;
    SET_GPR_U32(ctx, 31, 0x1E0D1Cu);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D1Cu; }
        if (ctx->pc != 0x1E0D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D1Cu; }
        if (ctx->pc != 0x1E0D1Cu) { return; }
    }
    ctx->pc = 0x1E0D1Cu;
label_1e0d1c:
    // 0x1e0d1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0D1Cu;
    {
        const bool branch_taken_0x1e0d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D1Cu;
            // 0x1e0d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d1c) {
            ctx->pc = 0x1E0D3Cu;
            goto label_1e0d3c;
        }
    }
    ctx->pc = 0x1E0D24u;
    // 0x1e0d24: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x1E0D24u;
    SET_GPR_U32(ctx, 31, 0x1E0D2Cu);
    ctx->pc = 0x1E0D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D24u;
            // 0x1e0d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D2Cu; }
        if (ctx->pc != 0x1E0D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D2Cu; }
        if (ctx->pc != 0x1E0D2Cu) { return; }
    }
    ctx->pc = 0x1E0D2Cu;
label_1e0d2c:
    // 0x1e0d2c: 0xc0bb00c  jal         func_2EC030
    ctx->pc = 0x1E0D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D34u);
    ctx->pc = 0x1E0D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D2Cu;
            // 0x1e0d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D34u; }
        if (ctx->pc != 0x1E0D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D34u; }
        if (ctx->pc != 0x1E0D34u) { return; }
    }
    ctx->pc = 0x1E0D34u;
label_1e0d34:
    // 0x1e0d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0D34u;
    {
        const bool branch_taken_0x1e0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D34u;
            // 0x1e0d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d34) {
            ctx->pc = 0x1E0D50u;
            goto label_1e0d50;
        }
    }
    ctx->pc = 0x1E0D3Cu;
label_1e0d3c:
    // 0x1e0d3c: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x1E0D3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D44u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D44u; }
        if (ctx->pc != 0x1E0D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D44u; }
        if (ctx->pc != 0x1E0D44u) { return; }
    }
    ctx->pc = 0x1E0D44u;
label_1e0d44:
    // 0x1e0d44: 0xc0bb030  jal         func_2EC0C0
    ctx->pc = 0x1E0D44u;
    SET_GPR_U32(ctx, 31, 0x1E0D4Cu);
    ctx->pc = 0x1E0D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D44u;
            // 0x1e0d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D4Cu; }
        if (ctx->pc != 0x1E0D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D4Cu; }
        if (ctx->pc != 0x1E0D4Cu) { return; }
    }
    ctx->pc = 0x1E0D4Cu;
label_1e0d4c:
    // 0x1e0d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0d50:
    // 0x1e0d50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D5Cu;
            // 0x1e0d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0D64u;
}
