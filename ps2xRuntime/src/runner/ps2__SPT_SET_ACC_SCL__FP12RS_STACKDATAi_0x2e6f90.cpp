#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ACC_SCL__FP12RS_STACKDATAi
// Address: 0x2e6f90 - 0x2e705c
void ps2__SPT_SET_ACC_SCL__FP12RS_STACKDATAi_0x2e6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ACC_SCL__FP12RS_STACKDATAi_0x2e6f90");
#endif

    switch (ctx->pc) {
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7008u: goto label_2e7008;
        default: break;
    }

    ctx->pc = 0x2e6f90u;

    // 0x2e6f90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6f94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6f98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6f9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6fa0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6fa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6fa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6fb0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6fb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6fb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e6fb8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6FB8u;
    SET_GPR_U32(ctx, 31, 0x2E6FC0u);
    ctx->pc = 0x2E6FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FB8u;
            // 0x2e6fbc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FC0u; }
        if (ctx->pc != 0x2E6FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FC0u; }
        if (ctx->pc != 0x2E6FC0u) { return; }
    }
    ctx->pc = 0x2E6FC0u;
label_2e6fc0:
    // 0x2e6fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fc8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6FC8u;
    SET_GPR_U32(ctx, 31, 0x2E6FD0u);
    ctx->pc = 0x2E6FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FC8u;
            // 0x2e6fcc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FD0u; }
        if (ctx->pc != 0x2E6FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FD0u; }
        if (ctx->pc != 0x2E6FD0u) { return; }
    }
    ctx->pc = 0x2E6FD0u;
label_2e6fd0:
    // 0x2e6fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e6fd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e6fd8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6FD8u;
    SET_GPR_U32(ctx, 31, 0x2E6FE0u);
    ctx->pc = 0x2E6FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FD8u;
            // 0x2e6fdc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FE0u; }
        if (ctx->pc != 0x2E6FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FE0u; }
        if (ctx->pc != 0x2E6FE0u) { return; }
    }
    ctx->pc = 0x2E6FE0u;
label_2e6fe0:
    // 0x2e6fe0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2e6fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e6fe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6FE4u;
    {
        const bool branch_taken_0x2e6fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FE4u;
            // 0x2e6fe8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fe4) {
            ctx->pc = 0x2E6FF8u;
            goto label_2e6ff8;
        }
    }
    ctx->pc = 0x2E6FECu;
    // 0x2e6fec: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6FECu;
    SET_GPR_U32(ctx, 31, 0x2E6FF4u);
    ctx->pc = 0x2E6FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FECu;
            // 0x2e6ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FF4u; }
        if (ctx->pc != 0x2E6FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FF4u; }
        if (ctx->pc != 0x2E6FF4u) { return; }
    }
    ctx->pc = 0x2E6FF4u;
label_2e6ff4:
    // 0x2e6ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ff8:
    // 0x2e6ff8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6FF8u;
    {
        const bool branch_taken_0x2e6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FF8u;
            // 0x2e6ffc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ff8) {
            ctx->pc = 0x2E7024u;
            goto label_2e7024;
        }
    }
    ctx->pc = 0x2E7000u;
label_2e7000:
    // 0x2e7000: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E7000u;
    SET_GPR_U32(ctx, 31, 0x2E7008u);
    ctx->pc = 0x2E7004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7000u;
            // 0x2e7004: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7008u; }
        if (ctx->pc != 0x2E7008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7008u; }
        if (ctx->pc != 0x2E7008u) { return; }
    }
    ctx->pc = 0x2E7008u;
label_2e7008:
    // 0x2e7008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7008u;
    {
        const bool branch_taken_0x2e7008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7008) {
            ctx->pc = 0x2E7018u;
            goto label_2e7018;
        }
    }
    ctx->pc = 0x2E7010u;
    // 0x2e7010: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7010u;
    {
        const bool branch_taken_0x2e7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7010u;
            // 0x2e7014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7010) {
            ctx->pc = 0x2E7038u;
            goto label_2e7038;
        }
    }
    ctx->pc = 0x2E7018u;
label_2e7018:
    // 0x2e7018: 0xe45400b0  swc1        $f20, 0xB0($v0)
    ctx->pc = 0x2e7018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2e701c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7020: 0xe45500b4  swc1        $f21, 0xB4($v0)
    ctx->pc = 0x2e7020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_2e7024:
    // 0x2e7024: 0x0  nop
    ctx->pc = 0x2e7024u;
    // NOP
    // 0x2e7028: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e702c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e702cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7030: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E7030u;
    {
        const bool branch_taken_0x2e7030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7030u;
            // 0x2e7034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7030) {
            ctx->pc = 0x2E7000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7000;
        }
    }
    ctx->pc = 0x2E7038u;
label_2e7038:
    // 0x2e7038: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e7038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e703c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e7040: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e7040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7044: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7048: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e7048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e704c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e704cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e7050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7054: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7054u;
            // 0x2e7058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E705Cu;
}
