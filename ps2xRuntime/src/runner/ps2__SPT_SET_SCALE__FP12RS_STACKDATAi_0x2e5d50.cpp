#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_SCALE__FP12RS_STACKDATAi
// Address: 0x2e5d50 - 0x2e5e1c
void ps2__SPT_SET_SCALE__FP12RS_STACKDATAi_0x2e5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_SCALE__FP12RS_STACKDATAi_0x2e5d50");
#endif

    switch (ctx->pc) {
        case 0x2e5d80u: goto label_2e5d80;
        case 0x2e5d90u: goto label_2e5d90;
        case 0x2e5da0u: goto label_2e5da0;
        case 0x2e5db4u: goto label_2e5db4;
        case 0x2e5dc0u: goto label_2e5dc0;
        case 0x2e5dc8u: goto label_2e5dc8;
        default: break;
    }

    ctx->pc = 0x2e5d50u;

    // 0x2e5d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5d54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e5d58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5d5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5d60: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5d64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5d68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5d70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e5d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5d74: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e5d74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e5d78: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5D78u;
    SET_GPR_U32(ctx, 31, 0x2E5D80u);
    ctx->pc = 0x2E5D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D78u;
            // 0x2e5d7c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D80u; }
        if (ctx->pc != 0x2E5D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D80u; }
        if (ctx->pc != 0x2E5D80u) { return; }
    }
    ctx->pc = 0x2E5D80u;
label_2e5d80:
    // 0x2e5d80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d88: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5D88u;
    SET_GPR_U32(ctx, 31, 0x2E5D90u);
    ctx->pc = 0x2E5D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D88u;
            // 0x2e5d8c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D90u; }
        if (ctx->pc != 0x2E5D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D90u; }
        if (ctx->pc != 0x2E5D90u) { return; }
    }
    ctx->pc = 0x2E5D90u;
label_2e5d90:
    // 0x2e5d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e5d94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5d98: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5D98u;
    SET_GPR_U32(ctx, 31, 0x2E5DA0u);
    ctx->pc = 0x2E5D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D98u;
            // 0x2e5d9c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DA0u; }
        if (ctx->pc != 0x2E5DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DA0u; }
        if (ctx->pc != 0x2E5DA0u) { return; }
    }
    ctx->pc = 0x2E5DA0u;
label_2e5da0:
    // 0x2e5da0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2e5da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e5da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5DA4u;
    {
        const bool branch_taken_0x2e5da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DA4u;
            // 0x2e5da8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5da4) {
            ctx->pc = 0x2E5DB8u;
            goto label_2e5db8;
        }
    }
    ctx->pc = 0x2E5DACu;
    // 0x2e5dac: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5DACu;
    SET_GPR_U32(ctx, 31, 0x2E5DB4u);
    ctx->pc = 0x2E5DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DACu;
            // 0x2e5db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DB4u; }
        if (ctx->pc != 0x2E5DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DB4u; }
        if (ctx->pc != 0x2E5DB4u) { return; }
    }
    ctx->pc = 0x2E5DB4u;
label_2e5db4:
    // 0x2e5db4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5db8:
    // 0x2e5db8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5DB8u;
    {
        const bool branch_taken_0x2e5db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DB8u;
            // 0x2e5dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5db8) {
            ctx->pc = 0x2E5DE4u;
            goto label_2e5de4;
        }
    }
    ctx->pc = 0x2E5DC0u;
label_2e5dc0:
    // 0x2e5dc0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5DC0u;
    SET_GPR_U32(ctx, 31, 0x2E5DC8u);
    ctx->pc = 0x2E5DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DC0u;
            // 0x2e5dc4: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DC8u; }
        if (ctx->pc != 0x2E5DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DC8u; }
        if (ctx->pc != 0x2E5DC8u) { return; }
    }
    ctx->pc = 0x2E5DC8u;
label_2e5dc8:
    // 0x2e5dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5DC8u;
    {
        const bool branch_taken_0x2e5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5dc8) {
            ctx->pc = 0x2E5DD8u;
            goto label_2e5dd8;
        }
    }
    ctx->pc = 0x2E5DD0u;
    // 0x2e5dd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5DD0u;
    {
        const bool branch_taken_0x2e5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DD0u;
            // 0x2e5dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dd0) {
            ctx->pc = 0x2E5DF8u;
            goto label_2e5df8;
        }
    }
    ctx->pc = 0x2E5DD8u;
label_2e5dd8:
    // 0x2e5dd8: 0xe4540040  swc1        $f20, 0x40($v0)
    ctx->pc = 0x2e5dd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2e5ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5de0: 0xe4550044  swc1        $f21, 0x44($v0)
    ctx->pc = 0x2e5de0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2e5de4:
    // 0x2e5de4: 0x0  nop
    ctx->pc = 0x2e5de4u;
    // NOP
    // 0x2e5de8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5dec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5df0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E5DF0u;
    {
        const bool branch_taken_0x2e5df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DF0u;
            // 0x2e5df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5df0) {
            ctx->pc = 0x2E5DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5dc0;
        }
    }
    ctx->pc = 0x2E5DF8u;
label_2e5df8:
    // 0x2e5df8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5dfc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e5e00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e5e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5e04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5e08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5e0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5e10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E14u;
            // 0x2e5e18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5E1Cu;
}
