#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMonsterFile__Fii
// Address: 0x28ff20 - 0x290048
void LoadMonsterFile__Fii_0x28ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMonsterFile__Fii_0x28ff20");
#endif

    switch (ctx->pc) {
        case 0x28ff60u: goto label_28ff60;
        case 0x28ff6cu: goto label_28ff6c;
        case 0x28ff78u: goto label_28ff78;
        case 0x28ff84u: goto label_28ff84;
        case 0x28ff9cu: goto label_28ff9c;
        case 0x28ffa8u: goto label_28ffa8;
        case 0x28ffc0u: goto label_28ffc0;
        case 0x28ffe0u: goto label_28ffe0;
        case 0x28fff4u: goto label_28fff4;
        case 0x29000cu: goto label_29000c;
        case 0x290024u: goto label_290024;
        default: break;
    }

    ctx->pc = 0x28ff20u;

    // 0x28ff20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28ff24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28ff28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28ff2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28ff30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28ff34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28ff34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ff3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ff40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ff44: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28ff48: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x28FF48u;
    {
        const bool branch_taken_0x28ff48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF48u;
            // 0x28ff4c: 0x8f838dac  lw          $v1, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff48) {
            ctx->pc = 0x290024u;
            goto label_290024;
        }
    }
    ctx->pc = 0x28FF50u;
    // 0x28ff50: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x28FF50u;
    {
        const bool branch_taken_0x28ff50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF50u;
            // 0x28ff54: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff50) {
            ctx->pc = 0x28FFE8u;
            goto label_28ffe8;
        }
    }
    ctx->pc = 0x28FF58u;
    // 0x28ff58: 0xc076bb0  jal         func_1DAEC0
    ctx->pc = 0x28FF58u;
    SET_GPR_U32(ctx, 31, 0x28FF60u);
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF60u; }
        if (ctx->pc != 0x28FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF60u; }
        if (ctx->pc != 0x28FF60u) { return; }
    }
    ctx->pc = 0x28FF60u;
label_28ff60:
    // 0x28ff60: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28ff64: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x28FF64u;
    SET_GPR_U32(ctx, 31, 0x28FF6Cu);
    ctx->pc = 0x28FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF64u;
            // 0x28ff68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF6Cu; }
        if (ctx->pc != 0x28FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF6Cu; }
        if (ctx->pc != 0x28FF6Cu) { return; }
    }
    ctx->pc = 0x28FF6Cu;
label_28ff6c:
    // 0x28ff6c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28ff70: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x28FF70u;
    SET_GPR_U32(ctx, 31, 0x28FF78u);
    ctx->pc = 0x28FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF70u;
            // 0x28ff74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF78u; }
        if (ctx->pc != 0x28FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF78u; }
        if (ctx->pc != 0x28FF78u) { return; }
    }
    ctx->pc = 0x28FF78u;
label_28ff78:
    // 0x28ff78: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28ff7c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x28FF7Cu;
    SET_GPR_U32(ctx, 31, 0x28FF84u);
    ctx->pc = 0x28FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF7Cu;
            // 0x28ff80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF84u; }
        if (ctx->pc != 0x28FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF84u; }
        if (ctx->pc != 0x28FF84u) { return; }
    }
    ctx->pc = 0x28FF84u;
label_28ff84:
    // 0x28ff84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ff84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff88: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28FF88u;
    {
        const bool branch_taken_0x28ff88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ff88) {
            ctx->pc = 0x290024u;
            goto label_290024;
        }
    }
    ctx->pc = 0x28FF90u;
    // 0x28ff90: 0x8f928db8  lw          $s2, -0x7248($gp)
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28ff94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28ff94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28ff98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ff9c:
    // 0x28ff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffa0: 0xc04e704  jal         func_139C10
    ctx->pc = 0x28FFA0u;
    SET_GPR_U32(ctx, 31, 0x28FFA8u);
    ctx->pc = 0x28FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFA0u;
            // 0x28ffa4: 0x24050fa0  addiu       $a1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFA8u; }
        if (ctx->pc != 0x28FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFA8u; }
        if (ctx->pc != 0x28FFA8u) { return; }
    }
    ctx->pc = 0x28FFA8u;
label_28ffa8:
    // 0x28ffa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffac: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x28ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x28ffb0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x28ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x28ffb4: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x28ffb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28ffb8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x28FFB8u;
    SET_GPR_U32(ctx, 31, 0x28FFC0u);
    ctx->pc = 0x28FFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFB8u;
            // 0x28ffbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFC0u; }
        if (ctx->pc != 0x28FFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFC0u; }
        if (ctx->pc != 0x28FFC0u) { return; }
    }
    ctx->pc = 0x28FFC0u;
label_28ffc0:
    // 0x28ffc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28ffc4: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x28ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x28ffc8: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x28ffc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28ffcc: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x28ffd0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28FFD0u;
    {
        const bool branch_taken_0x28ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFD0u;
            // 0x28ffd4: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffd0) {
            ctx->pc = 0x28FF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ff9c;
        }
    }
    ctx->pc = 0x28FFD8u;
    // 0x28ffd8: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x28FFD8u;
    SET_GPR_U32(ctx, 31, 0x28FFE0u);
    ctx->pc = 0x28FFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFD8u;
            // 0x28ffdc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFE0u; }
        if (ctx->pc != 0x28FFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFE0u; }
        if (ctx->pc != 0x28FFE0u) { return; }
    }
    ctx->pc = 0x28FFE0u;
label_28ffe0:
    // 0x28ffe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FFE0u;
    {
        const bool branch_taken_0x28ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFE0u;
            // 0x28ffe4: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffe0) {
            ctx->pc = 0x290004u;
            goto label_290004;
        }
    }
    ctx->pc = 0x28FFE8u;
label_28ffe8:
    // 0x28ffe8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffec: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x28FFECu;
    SET_GPR_U32(ctx, 31, 0x28FFF4u);
    ctx->pc = 0x28FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFECu;
            // 0x28fff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFF4u; }
        if (ctx->pc != 0x28FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFF4u; }
        if (ctx->pc != 0x28FFF4u) { return; }
    }
    ctx->pc = 0x28FFF4u;
label_28fff4:
    // 0x28fff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fff8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x28FFF8u;
    {
        const bool branch_taken_0x28fff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fff8) {
            ctx->pc = 0x290024u;
            goto label_290024;
        }
    }
    ctx->pc = 0x290000u;
    // 0x290000: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x290000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_290004:
    // 0x290004: 0xc076db0  jal         func_1DB6C0
    ctx->pc = 0x290004u;
    SET_GPR_U32(ctx, 31, 0x29000Cu);
    ctx->pc = 0x290008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290004u;
            // 0x290008: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29000Cu; }
        if (ctx->pc != 0x29000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29000Cu; }
        if (ctx->pc != 0x29000Cu) { return; }
    }
    ctx->pc = 0x29000Cu;
label_29000c:
    // 0x29000c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29000Cu;
    {
        const bool branch_taken_0x29000c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29000c) {
            ctx->pc = 0x290024u;
            goto label_290024;
        }
    }
    ctx->pc = 0x290014u;
    // 0x290014: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x290014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x290018: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x290018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29001c: 0xc076e14  jal         func_1DB850
    ctx->pc = 0x29001Cu;
    SET_GPR_U32(ctx, 31, 0x290024u);
    ctx->pc = 0x290020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29001Cu;
            // 0x290020: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB850u;
    if (runtime->hasFunction(0x1DB850u)) {
        auto targetFn = runtime->lookupFunction(0x1DB850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290024u; }
        if (ctx->pc != 0x290024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryRefer__11CMonsterManFiP9mgCMemory_0x1db850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290024u; }
        if (ctx->pc != 0x290024u) { return; }
    }
    ctx->pc = 0x290024u;
label_290024:
    // 0x290024: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x290024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290028: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x290028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29002c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29002cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x290030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29003c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29003cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290040: 0x3e00008  jr          $ra
    ctx->pc = 0x290040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290040u;
            // 0x290044: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290048u;
}
