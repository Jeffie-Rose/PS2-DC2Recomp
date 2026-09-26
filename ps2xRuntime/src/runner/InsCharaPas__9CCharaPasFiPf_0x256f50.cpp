#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsCharaPas__9CCharaPasFiPf
// Address: 0x256f50 - 0x25701c
void InsCharaPas__9CCharaPasFiPf_0x256f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsCharaPas__9CCharaPasFiPf_0x256f50");
#endif

    switch (ctx->pc) {
        case 0x256f8cu: goto label_256f8c;
        case 0x256f94u: goto label_256f94;
        case 0x256fa8u: goto label_256fa8;
        case 0x256fb4u: goto label_256fb4;
        case 0x256fc0u: goto label_256fc0;
        default: break;
    }

    ctx->pc = 0x256f50u;

    // 0x256f50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x256f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x256f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x256f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x256f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x256f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f6c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x256f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256f70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256F70u;
    {
        const bool branch_taken_0x256f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F70u;
            // 0x256f74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f70) {
            ctx->pc = 0x256F80u;
            goto label_256f80;
        }
    }
    ctx->pc = 0x256F78u;
    // 0x256f78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x256F78u;
    {
        const bool branch_taken_0x256f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F78u;
            // 0x256f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f78) {
            ctx->pc = 0x257000u;
            goto label_257000;
        }
    }
    ctx->pc = 0x256F80u;
label_256f80:
    // 0x256f80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x256f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f84: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256F84u;
    SET_GPR_U32(ctx, 31, 0x256F8Cu);
    ctx->pc = 0x256F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256F84u;
            // 0x256f88: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256F8Cu; }
        if (ctx->pc != 0x256F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256F8Cu; }
        if (ctx->pc != 0x256F8Cu) { return; }
    }
    ctx->pc = 0x256F8Cu;
label_256f8c:
    // 0x256f8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F8Cu;
            // 0x256f90: 0x109100  sll         $s2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x256FC8u;
            goto label_256fc8;
        }
    }
    ctx->pc = 0x256F94u;
label_256f94:
    // 0x256f94: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x256F94u;
    {
        const bool branch_taken_0x256f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x256F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F94u;
            // 0x256f98: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f94) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x256F9Cu;
    // 0x256f9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x256f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x256fa0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256FA0u;
    SET_GPR_U32(ctx, 31, 0x256FA8u);
    ctx->pc = 0x256FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256FA0u;
            // 0x256fa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FA8u; }
        if (ctx->pc != 0x256FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FA8u; }
        if (ctx->pc != 0x256FA8u) { return; }
    }
    ctx->pc = 0x256FA8u;
label_256fa8:
    // 0x256fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256fac: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256FACu;
    SET_GPR_U32(ctx, 31, 0x256FB4u);
    ctx->pc = 0x256FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256FACu;
            // 0x256fb0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FB4u; }
        if (ctx->pc != 0x256FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FB4u; }
        if (ctx->pc != 0x256FB4u) { return; }
    }
    ctx->pc = 0x256FB4u;
label_256fb4:
    // 0x256fb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256fb8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256FB8u;
    SET_GPR_U32(ctx, 31, 0x256FC0u);
    ctx->pc = 0x256FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256FB8u;
            // 0x256fbc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FC0u; }
        if (ctx->pc != 0x256FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FC0u; }
        if (ctx->pc != 0x256FC0u) { return; }
    }
    ctx->pc = 0x256FC0u;
label_256fc0:
    // 0x256fc0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x256fc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_256fc8:
    // 0x256fc8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x256fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x256fcc: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x256fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x256fd0: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x256FD0u;
    {
        const bool branch_taken_0x256fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256FD0u;
            // 0x256fd4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fd0) {
            ctx->pc = 0x256F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256f94;
        }
    }
    ctx->pc = 0x256FD8u;
label_256fd8:
    // 0x256fd8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x256fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x256fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x256fe0: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x256fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x256fe4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x256fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x256fe8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x256fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256fec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256FECu;
    {
        const bool branch_taken_0x256fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256FECu;
            // 0x256ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fec) {
            ctx->pc = 0x257000u;
            goto label_257000;
        }
    }
    ctx->pc = 0x256FF4u;
    // 0x256ff4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256ff8: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x256ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x256ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257000:
    // 0x257000: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x257000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25700c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25700cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257014: 0x3e00008  jr          $ra
    ctx->pc = 0x257014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257014u;
            // 0x257018: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25701Cu;
}
