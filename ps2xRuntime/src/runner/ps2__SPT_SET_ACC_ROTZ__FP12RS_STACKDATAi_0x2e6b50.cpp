#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ACC_ROTZ__FP12RS_STACKDATAi
// Address: 0x2e6b50 - 0x2e6c00
void ps2__SPT_SET_ACC_ROTZ__FP12RS_STACKDATAi_0x2e6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ACC_ROTZ__FP12RS_STACKDATAi_0x2e6b50");
#endif

    switch (ctx->pc) {
        case 0x2e6b7cu: goto label_2e6b7c;
        case 0x2e6b8cu: goto label_2e6b8c;
        case 0x2e6ba0u: goto label_2e6ba0;
        case 0x2e6bacu: goto label_2e6bac;
        case 0x2e6bb4u: goto label_2e6bb4;
        default: break;
    }

    ctx->pc = 0x2e6b50u;

    // 0x2e6b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6b54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6b58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6b5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6b60: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6b64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6b68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6b70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6b74: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6B74u;
    SET_GPR_U32(ctx, 31, 0x2E6B7Cu);
    ctx->pc = 0x2E6B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B74u;
            // 0x2e6b78: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B7Cu; }
        if (ctx->pc != 0x2E6B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B7Cu; }
        if (ctx->pc != 0x2E6B7Cu) { return; }
    }
    ctx->pc = 0x2E6B7Cu;
label_2e6b7c:
    // 0x2e6b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b84: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6B84u;
    SET_GPR_U32(ctx, 31, 0x2E6B8Cu);
    ctx->pc = 0x2E6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B84u;
            // 0x2e6b88: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B8Cu; }
        if (ctx->pc != 0x2E6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B8Cu; }
        if (ctx->pc != 0x2E6B8Cu) { return; }
    }
    ctx->pc = 0x2E6B8Cu;
label_2e6b8c:
    // 0x2e6b8c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2e6b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e6b90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6B90u;
    {
        const bool branch_taken_0x2e6b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B90u;
            // 0x2e6b94: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b90) {
            ctx->pc = 0x2E6BA4u;
            goto label_2e6ba4;
        }
    }
    ctx->pc = 0x2E6B98u;
    // 0x2e6b98: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6B98u;
    SET_GPR_U32(ctx, 31, 0x2E6BA0u);
    ctx->pc = 0x2E6B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B98u;
            // 0x2e6b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BA0u; }
        if (ctx->pc != 0x2E6BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BA0u; }
        if (ctx->pc != 0x2E6BA0u) { return; }
    }
    ctx->pc = 0x2E6BA0u;
label_2e6ba0:
    // 0x2e6ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ba4:
    // 0x2e6ba4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6BA4u;
    {
        const bool branch_taken_0x2e6ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BA4u;
            // 0x2e6ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ba4) {
            ctx->pc = 0x2E6BCCu;
            goto label_2e6bcc;
        }
    }
    ctx->pc = 0x2E6BACu;
label_2e6bac:
    // 0x2e6bac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6BACu;
    SET_GPR_U32(ctx, 31, 0x2E6BB4u);
    ctx->pc = 0x2E6BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BACu;
            // 0x2e6bb0: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BB4u; }
        if (ctx->pc != 0x2E6BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BB4u; }
        if (ctx->pc != 0x2E6BB4u) { return; }
    }
    ctx->pc = 0x2E6BB4u;
label_2e6bb4:
    // 0x2e6bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6BB4u;
    {
        const bool branch_taken_0x2e6bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bb4) {
            ctx->pc = 0x2E6BC4u;
            goto label_2e6bc4;
        }
    }
    ctx->pc = 0x2E6BBCu;
    // 0x2e6bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6BBCu;
    {
        const bool branch_taken_0x2e6bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BBCu;
            // 0x2e6bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bbc) {
            ctx->pc = 0x2E6BE0u;
            goto label_2e6be0;
        }
    }
    ctx->pc = 0x2E6BC4u;
label_2e6bc4:
    // 0x2e6bc4: 0xe45400a4  swc1        $f20, 0xA4($v0)
    ctx->pc = 0x2e6bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2e6bc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e6bcc:
    // 0x2e6bcc: 0x0  nop
    ctx->pc = 0x2e6bccu;
    // NOP
    // 0x2e6bd0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6bd4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6bd8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E6BD8u;
    {
        const bool branch_taken_0x2e6bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BD8u;
            // 0x2e6bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bd8) {
            ctx->pc = 0x2E6BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6bac;
        }
    }
    ctx->pc = 0x2E6BE0u;
label_2e6be0:
    // 0x2e6be0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6be4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6be8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6bec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6bf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6bf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BF8u;
            // 0x2e6bfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6C00u;
}
