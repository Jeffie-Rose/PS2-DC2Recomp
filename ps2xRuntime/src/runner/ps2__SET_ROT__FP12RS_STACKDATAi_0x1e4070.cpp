#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ROT__FP12RS_STACKDATAi
// Address: 0x1e4070 - 0x1e40d8
void ps2__SET_ROT__FP12RS_STACKDATAi_0x1e4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ROT__FP12RS_STACKDATAi_0x1e4070");
#endif

    switch (ctx->pc) {
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        default: break;
    }

    ctx->pc = 0x1e4070u;

label_1e4070:
    // 0x1e4070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4074:
    // 0x1e4074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4078:
    // 0x1e4078: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e407c:
    if (ctx->pc == 0x1E407Cu) {
        ctx->pc = 0x1E407Cu;
            // 0x1e407c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1E4080u;
        goto label_1e4080;
    }
    ctx->pc = 0x1E4078u;
    {
        const bool branch_taken_0x1e4078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4078u;
            // 0x1e407c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4078) {
            ctx->pc = 0x1E4088u;
            goto label_1e4088;
        }
    }
    ctx->pc = 0x1E4080u;
label_1e4080:
    // 0x1e4080: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e4084:
    if (ctx->pc == 0x1E4084u) {
        ctx->pc = 0x1E4084u;
            // 0x1e4084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4088u;
        goto label_1e4088;
    }
    ctx->pc = 0x1E4080u;
    {
        const bool branch_taken_0x1e4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4080u;
            // 0x1e4084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4080) {
            ctx->pc = 0x1E40CCu;
            goto label_1e40cc;
        }
    }
    ctx->pc = 0x1E4088u;
label_1e4088:
    // 0x1e4088: 0xc0781ac  jal         func_1E06B0
label_1e408c:
    if (ctx->pc == 0x1E408Cu) {
        ctx->pc = 0x1E408Cu;
            // 0x1e408c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4090u;
        goto label_1e4090;
    }
    ctx->pc = 0x1E4088u;
    SET_GPR_U32(ctx, 31, 0x1E4090u);
    ctx->pc = 0x1E408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4088u;
            // 0x1e408c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4090u; }
        if (ctx->pc != 0x1E4090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4090u; }
        if (ctx->pc != 0x1E4090u) { return; }
    }
    ctx->pc = 0x1E4090u;
label_1e4090:
    // 0x1e4090: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e4090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e4094:
    // 0x1e4094: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e4094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e4098:
    // 0x1e4098: 0xc0781ac  jal         func_1E06B0
label_1e409c:
    if (ctx->pc == 0x1E409Cu) {
        ctx->pc = 0x1E409Cu;
            // 0x1e409c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E40A0u;
        goto label_1e40a0;
    }
    ctx->pc = 0x1E4098u;
    SET_GPR_U32(ctx, 31, 0x1E40A0u);
    ctx->pc = 0x1E409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4098u;
            // 0x1e409c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40A0u; }
        if (ctx->pc != 0x1E40A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40A0u; }
        if (ctx->pc != 0x1E40A0u) { return; }
    }
    ctx->pc = 0x1E40A0u;
label_1e40a0:
    // 0x1e40a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e40a4:
    // 0x1e40a4: 0xc0781ac  jal         func_1E06B0
label_1e40a8:
    if (ctx->pc == 0x1E40A8u) {
        ctx->pc = 0x1E40A8u;
            // 0x1e40a8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E40ACu;
        goto label_1e40ac;
    }
    ctx->pc = 0x1E40A4u;
    SET_GPR_U32(ctx, 31, 0x1E40ACu);
    ctx->pc = 0x1E40A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40A4u;
            // 0x1e40a8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40ACu; }
        if (ctx->pc != 0x1E40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40ACu; }
        if (ctx->pc != 0x1E40ACu) { return; }
    }
    ctx->pc = 0x1E40ACu;
label_1e40ac:
    // 0x1e40ac: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e40b0:
    // 0x1e40b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e40b4:
    // 0x1e40b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e40b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e40b8:
    // 0x1e40b8: 0x320f809  jalr        $t9
label_1e40bc:
    if (ctx->pc == 0x1E40BCu) {
        ctx->pc = 0x1E40BCu;
            // 0x1e40bc: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E40C0u;
        goto label_1e40c0;
    }
    ctx->pc = 0x1E40B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E40C0u);
        ctx->pc = 0x1E40BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40B8u;
            // 0x1e40bc: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E40C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E40C0u; }
            if (ctx->pc != 0x1E40C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E40C0u;
label_1e40c0:
    // 0x1e40c0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e40c4:
    // 0x1e40c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e40c8:
    // 0x1e40c8: 0xac601494  sw          $zero, 0x1494($v1)
    ctx->pc = 0x1e40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5268), GPR_U32(ctx, 0));
label_1e40cc:
    // 0x1e40cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e40ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e40d0:
    // 0x1e40d0: 0x3e00008  jr          $ra
label_1e40d4:
    if (ctx->pc == 0x1E40D4u) {
        ctx->pc = 0x1E40D4u;
            // 0x1e40d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E40D8u;
        goto label_fallthrough_0x1e40d0;
    }
    ctx->pc = 0x1E40D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E40D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40D0u;
            // 0x1e40d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e40d0:
    ctx->pc = 0x1E40D8u;
}
