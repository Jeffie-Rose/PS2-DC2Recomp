#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__15BattleEffectManFv
// Address: 0x1c59d0 - 0x1c5ad8
void Step__15BattleEffectManFv_0x1c59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__15BattleEffectManFv_0x1c59d0");
#endif

    switch (ctx->pc) {
        case 0x1c59f8u: goto label_1c59f8;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a2cu: goto label_1c5a2c;
        case 0x1c5a34u: goto label_1c5a34;
        case 0x1c5a64u: goto label_1c5a64;
        case 0x1c5a6cu: goto label_1c5a6c;
        case 0x1c5a9cu: goto label_1c5a9c;
        case 0x1c5aa4u: goto label_1c5aa4;
        default: break;
    }

    ctx->pc = 0x1c59d0u;

    // 0x1c59d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c59d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c59d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c59dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c59dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c59e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c59e4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x1c59e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c59e8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1C59E8u;
    {
        const bool branch_taken_0x1c59e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59E8u;
            // 0x1c59ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59e8) {
            ctx->pc = 0x1C5A18u;
            goto label_1c5a18;
        }
    }
    ctx->pc = 0x1C59F0u;
    // 0x1c59f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C59F0u;
    {
        const bool branch_taken_0x1c59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59F0u;
            // 0x1c59f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59f0) {
            ctx->pc = 0x1C5A08u;
            goto label_1c5a08;
        }
    }
    ctx->pc = 0x1C59F8u;
label_1c59f8:
    // 0x1c59f8: 0xc070a50  jal         func_1C2940
    ctx->pc = 0x1C59F8u;
    SET_GPR_U32(ctx, 31, 0x1C5A00u);
    ctx->pc = 0x1C59FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59F8u;
            // 0x1c59fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2940u;
    if (runtime->hasFunction(0x1C2940u)) {
        auto targetFn = runtime->lookupFunction(0x1C2940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A00u; }
        if (ctx->pc != 0x1C5A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15CHitEffectImageFv_0x1c2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A00u; }
        if (ctx->pc != 0x1C5A00u) { return; }
    }
    ctx->pc = 0x1C5A00u;
label_1c5a00:
    // 0x1c5a00: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1c5a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5a08:
    // 0x1c5a08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5a0c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5a10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C5A10u;
    {
        const bool branch_taken_0x1c5a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a10) {
            ctx->pc = 0x1C59F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c59f8;
        }
    }
    ctx->pc = 0x1C5A18u;
label_1c5a18:
    // 0x1c5a18: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1c5a18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5a1c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5A1Cu;
    {
        const bool branch_taken_0x1c5a1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A1Cu;
            // 0x1c5a20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a1c) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C5A24u;
    // 0x1c5a24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5A24u;
    {
        const bool branch_taken_0x1c5a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a24) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A2Cu;
label_1c5a2c:
    // 0x1c5a2c: 0xc070c4c  jal         func_1C3130
    ctx->pc = 0x1C5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A34u);
    ctx->pc = 0x1C5A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A2Cu;
            // 0x1c5a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3130u;
    if (runtime->hasFunction(0x1C3130u)) {
        auto targetFn = runtime->lookupFunction(0x1C3130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A34u; }
        if (ctx->pc != 0x1C5A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CFlushEffectFv_0x1c3130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A34u; }
        if (ctx->pc != 0x1C5A34u) { return; }
    }
    ctx->pc = 0x1C5A34u;
label_1c5a34:
    // 0x1c5a34: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c5a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c5a38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5a3c:
    // 0x1c5a3c: 0x0  nop
    ctx->pc = 0x1c5a3cu;
    // NOP
    // 0x1c5a40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c5a44: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5a48: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5A48u;
    {
        const bool branch_taken_0x1c5a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a48) {
            ctx->pc = 0x1C5A2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5a2c;
        }
    }
    ctx->pc = 0x1C5A50u;
label_1c5a50:
    // 0x1c5a50: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x1c5a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5a54: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5A54u;
    {
        const bool branch_taken_0x1c5a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A54u;
            // 0x1c5a58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a54) {
            ctx->pc = 0x1C5A88u;
            goto label_1c5a88;
        }
    }
    ctx->pc = 0x1C5A5Cu;
    // 0x1c5a5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5A5Cu;
    {
        const bool branch_taken_0x1c5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a5c) {
            ctx->pc = 0x1C5A74u;
            goto label_1c5a74;
        }
    }
    ctx->pc = 0x1C5A64u;
label_1c5a64:
    // 0x1c5a64: 0xc070cb4  jal         func_1C32D0
    ctx->pc = 0x1C5A64u;
    SET_GPR_U32(ctx, 31, 0x1C5A6Cu);
    ctx->pc = 0x1C5A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A64u;
            // 0x1c5a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C32D0u;
    if (runtime->hasFunction(0x1C32D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C32D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A6Cu; }
        if (ctx->pc != 0x1C5A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__10CPowerLineFv_0x1c32d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A6Cu; }
        if (ctx->pc != 0x1C5A6Cu) { return; }
    }
    ctx->pc = 0x1C5A6Cu;
label_1c5a6c:
    // 0x1c5a6c: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1c5a70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5a74:
    // 0x1c5a74: 0x0  nop
    ctx->pc = 0x1c5a74u;
    // NOP
    // 0x1c5a78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5a7c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5a80: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5A80u;
    {
        const bool branch_taken_0x1c5a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a80) {
            ctx->pc = 0x1C5A64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5a64;
        }
    }
    ctx->pc = 0x1C5A88u;
label_1c5a88:
    // 0x1c5a88: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c5a8c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5A8Cu;
    {
        const bool branch_taken_0x1c5a8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A8Cu;
            // 0x1c5a90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a8c) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C5A94u;
    // 0x1c5a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5A94u;
    {
        const bool branch_taken_0x1c5a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a94) {
            ctx->pc = 0x1C5AACu;
            goto label_1c5aac;
        }
    }
    ctx->pc = 0x1C5A9Cu;
label_1c5a9c:
    // 0x1c5a9c: 0xc070e4c  jal         func_1C3930
    ctx->pc = 0x1C5A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C5AA4u);
    ctx->pc = 0x1C5AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A9Cu;
            // 0x1c5aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3930u;
    if (runtime->hasFunction(0x1C3930u)) {
        auto targetFn = runtime->lookupFunction(0x1C3930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AA4u; }
        if (ctx->pc != 0x1C5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CDeadEffectFv_0x1c3930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AA4u; }
        if (ctx->pc != 0x1C5AA4u) { return; }
    }
    ctx->pc = 0x1C5AA4u;
label_1c5aa4:
    // 0x1c5aa4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c5aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c5aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c5aac:
    // 0x1c5aac: 0x0  nop
    ctx->pc = 0x1c5aacu;
    // NOP
    // 0x1c5ab0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c5ab4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c5ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5ab8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5AB8u;
    {
        const bool branch_taken_0x1c5ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ab8) {
            ctx->pc = 0x1C5A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5a9c;
        }
    }
    ctx->pc = 0x1C5AC0u;
label_1c5ac0:
    // 0x1c5ac0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AD0u;
            // 0x1c5ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5AD8u;
}
