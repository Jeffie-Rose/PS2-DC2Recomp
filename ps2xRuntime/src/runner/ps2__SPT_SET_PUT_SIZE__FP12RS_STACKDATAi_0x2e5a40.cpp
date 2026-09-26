#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_PUT_SIZE__FP12RS_STACKDATAi
// Address: 0x2e5a40 - 0x2e5b0c
void ps2__SPT_SET_PUT_SIZE__FP12RS_STACKDATAi_0x2e5a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_PUT_SIZE__FP12RS_STACKDATAi_0x2e5a40");
#endif

    switch (ctx->pc) {
        case 0x2e5a70u: goto label_2e5a70;
        case 0x2e5a80u: goto label_2e5a80;
        case 0x2e5a90u: goto label_2e5a90;
        case 0x2e5aa4u: goto label_2e5aa4;
        case 0x2e5ab0u: goto label_2e5ab0;
        case 0x2e5ab8u: goto label_2e5ab8;
        default: break;
    }

    ctx->pc = 0x2e5a40u;

    // 0x2e5a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e5a48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5a4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5a50: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5a54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5a58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5a60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e5a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5a64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e5a64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e5a68: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5A68u;
    SET_GPR_U32(ctx, 31, 0x2E5A70u);
    ctx->pc = 0x2E5A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A68u;
            // 0x2e5a6c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A70u; }
        if (ctx->pc != 0x2E5A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A70u; }
        if (ctx->pc != 0x2E5A70u) { return; }
    }
    ctx->pc = 0x2E5A70u;
label_2e5a70:
    // 0x2e5a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a78: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5A78u;
    SET_GPR_U32(ctx, 31, 0x2E5A80u);
    ctx->pc = 0x2E5A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A78u;
            // 0x2e5a7c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A80u; }
        if (ctx->pc != 0x2E5A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A80u; }
        if (ctx->pc != 0x2E5A80u) { return; }
    }
    ctx->pc = 0x2E5A80u;
label_2e5a80:
    // 0x2e5a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e5a84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5a88: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5A88u;
    SET_GPR_U32(ctx, 31, 0x2E5A90u);
    ctx->pc = 0x2E5A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A88u;
            // 0x2e5a8c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A90u; }
        if (ctx->pc != 0x2E5A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A90u; }
        if (ctx->pc != 0x2E5A90u) { return; }
    }
    ctx->pc = 0x2E5A90u;
label_2e5a90:
    // 0x2e5a90: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2e5a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e5a94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5A94u;
    {
        const bool branch_taken_0x2e5a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A94u;
            // 0x2e5a98: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a94) {
            ctx->pc = 0x2E5AA8u;
            goto label_2e5aa8;
        }
    }
    ctx->pc = 0x2E5A9Cu;
    // 0x2e5a9c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5AA4u);
    ctx->pc = 0x2E5AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A9Cu;
            // 0x2e5aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AA4u; }
        if (ctx->pc != 0x2E5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AA4u; }
        if (ctx->pc != 0x2E5AA4u) { return; }
    }
    ctx->pc = 0x2E5AA4u;
label_2e5aa4:
    // 0x2e5aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5aa8:
    // 0x2e5aa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5AA8u;
    {
        const bool branch_taken_0x2e5aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AA8u;
            // 0x2e5aac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5aa8) {
            ctx->pc = 0x2E5AD4u;
            goto label_2e5ad4;
        }
    }
    ctx->pc = 0x2E5AB0u;
label_2e5ab0:
    // 0x2e5ab0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5AB0u;
    SET_GPR_U32(ctx, 31, 0x2E5AB8u);
    ctx->pc = 0x2E5AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AB0u;
            // 0x2e5ab4: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AB8u; }
        if (ctx->pc != 0x2E5AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AB8u; }
        if (ctx->pc != 0x2E5AB8u) { return; }
    }
    ctx->pc = 0x2E5AB8u;
label_2e5ab8:
    // 0x2e5ab8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5AB8u;
    {
        const bool branch_taken_0x2e5ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ab8) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E5AC0u;
    // 0x2e5ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5AC0u;
    {
        const bool branch_taken_0x2e5ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AC0u;
            // 0x2e5ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ac0) {
            ctx->pc = 0x2E5AE8u;
            goto label_2e5ae8;
        }
    }
    ctx->pc = 0x2E5AC8u;
label_2e5ac8:
    // 0x2e5ac8: 0xe4540048  swc1        $f20, 0x48($v0)
    ctx->pc = 0x2e5ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2e5acc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5ad0: 0xe455004c  swc1        $f21, 0x4C($v0)
    ctx->pc = 0x2e5ad0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_2e5ad4:
    // 0x2e5ad4: 0x0  nop
    ctx->pc = 0x2e5ad4u;
    // NOP
    // 0x2e5ad8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5adc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5ae0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E5AE0u;
    {
        const bool branch_taken_0x2e5ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AE0u;
            // 0x2e5ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ae0) {
            ctx->pc = 0x2E5AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5ab0;
        }
    }
    ctx->pc = 0x2E5AE8u;
label_2e5ae8:
    // 0x2e5ae8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5aec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e5aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e5af0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e5af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5af4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5af8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B04u;
            // 0x2e5b08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5B0Cu;
}
