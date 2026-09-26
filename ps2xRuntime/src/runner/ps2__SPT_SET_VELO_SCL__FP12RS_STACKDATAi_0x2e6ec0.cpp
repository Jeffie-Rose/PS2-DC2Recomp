#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_VELO_SCL__FP12RS_STACKDATAi
// Address: 0x2e6ec0 - 0x2e6f8c
void ps2__SPT_SET_VELO_SCL__FP12RS_STACKDATAi_0x2e6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_VELO_SCL__FP12RS_STACKDATAi_0x2e6ec0");
#endif

    switch (ctx->pc) {
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f38u: goto label_2e6f38;
        default: break;
    }

    ctx->pc = 0x2e6ec0u;

    // 0x2e6ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6ec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6ec8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6ecc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6ed0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6ed4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6ed8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6edc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6ee0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ee4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6ee4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e6ee8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6EE8u;
    SET_GPR_U32(ctx, 31, 0x2E6EF0u);
    ctx->pc = 0x2E6EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6EE8u;
            // 0x2e6eec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EF0u; }
        if (ctx->pc != 0x2E6EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EF0u; }
        if (ctx->pc != 0x2E6EF0u) { return; }
    }
    ctx->pc = 0x2E6EF0u;
label_2e6ef0:
    // 0x2e6ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ef8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6EF8u;
    SET_GPR_U32(ctx, 31, 0x2E6F00u);
    ctx->pc = 0x2E6EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6EF8u;
            // 0x2e6efc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F00u; }
        if (ctx->pc != 0x2E6F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F00u; }
        if (ctx->pc != 0x2E6F00u) { return; }
    }
    ctx->pc = 0x2E6F00u;
label_2e6f00:
    // 0x2e6f00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e6f04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e6f08: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6F08u;
    SET_GPR_U32(ctx, 31, 0x2E6F10u);
    ctx->pc = 0x2E6F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F08u;
            // 0x2e6f0c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F10u; }
        if (ctx->pc != 0x2E6F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F10u; }
        if (ctx->pc != 0x2E6F10u) { return; }
    }
    ctx->pc = 0x2E6F10u;
label_2e6f10:
    // 0x2e6f10: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2e6f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e6f14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6F14u;
    {
        const bool branch_taken_0x2e6f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F14u;
            // 0x2e6f18: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f14) {
            ctx->pc = 0x2E6F28u;
            goto label_2e6f28;
        }
    }
    ctx->pc = 0x2E6F1Cu;
    // 0x2e6f1c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F24u);
    ctx->pc = 0x2E6F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F1Cu;
            // 0x2e6f20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F24u; }
        if (ctx->pc != 0x2E6F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F24u; }
        if (ctx->pc != 0x2E6F24u) { return; }
    }
    ctx->pc = 0x2E6F24u;
label_2e6f24:
    // 0x2e6f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f28:
    // 0x2e6f28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6F28u;
    {
        const bool branch_taken_0x2e6f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F28u;
            // 0x2e6f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f28) {
            ctx->pc = 0x2E6F54u;
            goto label_2e6f54;
        }
    }
    ctx->pc = 0x2E6F30u;
label_2e6f30:
    // 0x2e6f30: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6F30u;
    SET_GPR_U32(ctx, 31, 0x2E6F38u);
    ctx->pc = 0x2E6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F30u;
            // 0x2e6f34: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F38u; }
        if (ctx->pc != 0x2E6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F38u; }
        if (ctx->pc != 0x2E6F38u) { return; }
    }
    ctx->pc = 0x2E6F38u;
label_2e6f38:
    // 0x2e6f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6F38u;
    {
        const bool branch_taken_0x2e6f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f38) {
            ctx->pc = 0x2E6F48u;
            goto label_2e6f48;
        }
    }
    ctx->pc = 0x2E6F40u;
    // 0x2e6f40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6F40u;
    {
        const bool branch_taken_0x2e6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F40u;
            // 0x2e6f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f40) {
            ctx->pc = 0x2E6F68u;
            goto label_2e6f68;
        }
    }
    ctx->pc = 0x2E6F48u;
label_2e6f48:
    // 0x2e6f48: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x2e6f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2e6f4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6f50: 0xe45500ac  swc1        $f21, 0xAC($v0)
    ctx->pc = 0x2e6f50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2e6f54:
    // 0x2e6f54: 0x0  nop
    ctx->pc = 0x2e6f54u;
    // NOP
    // 0x2e6f58: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6f5c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6f60: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E6F60u;
    {
        const bool branch_taken_0x2e6f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F60u;
            // 0x2e6f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f60) {
            ctx->pc = 0x2E6F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6f30;
        }
    }
    ctx->pc = 0x2E6F68u;
label_2e6f68:
    // 0x2e6f68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6f6c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6f70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6f74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6f78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6f7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F84u;
            // 0x2e6f88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6F8Cu;
}
