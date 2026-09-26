#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_VELO_ROTZ__FP12RS_STACKDATAi
// Address: 0x2e6aa0 - 0x2e6b50
void ps2__SPT_SET_VELO_ROTZ__FP12RS_STACKDATAi_0x2e6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_VELO_ROTZ__FP12RS_STACKDATAi_0x2e6aa0");
#endif

    switch (ctx->pc) {
        case 0x2e6accu: goto label_2e6acc;
        case 0x2e6adcu: goto label_2e6adc;
        case 0x2e6af0u: goto label_2e6af0;
        case 0x2e6afcu: goto label_2e6afc;
        case 0x2e6b04u: goto label_2e6b04;
        default: break;
    }

    ctx->pc = 0x2e6aa0u;

    // 0x2e6aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6aa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6aa8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6aac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6ab0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6ab4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6ab8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6ac0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ac4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6AC4u;
    SET_GPR_U32(ctx, 31, 0x2E6ACCu);
    ctx->pc = 0x2E6AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AC4u;
            // 0x2e6ac8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6ACCu; }
        if (ctx->pc != 0x2E6ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6ACCu; }
        if (ctx->pc != 0x2E6ACCu) { return; }
    }
    ctx->pc = 0x2E6ACCu;
label_2e6acc:
    // 0x2e6acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ad4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6AD4u;
    SET_GPR_U32(ctx, 31, 0x2E6ADCu);
    ctx->pc = 0x2E6AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AD4u;
            // 0x2e6ad8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6ADCu; }
        if (ctx->pc != 0x2E6ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6ADCu; }
        if (ctx->pc != 0x2E6ADCu) { return; }
    }
    ctx->pc = 0x2E6ADCu;
label_2e6adc:
    // 0x2e6adc: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2e6adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e6ae0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6AE0u;
    {
        const bool branch_taken_0x2e6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AE0u;
            // 0x2e6ae4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ae0) {
            ctx->pc = 0x2E6AF4u;
            goto label_2e6af4;
        }
    }
    ctx->pc = 0x2E6AE8u;
    // 0x2e6ae8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6AE8u;
    SET_GPR_U32(ctx, 31, 0x2E6AF0u);
    ctx->pc = 0x2E6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AE8u;
            // 0x2e6aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AF0u; }
        if (ctx->pc != 0x2E6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AF0u; }
        if (ctx->pc != 0x2E6AF0u) { return; }
    }
    ctx->pc = 0x2E6AF0u;
label_2e6af0:
    // 0x2e6af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6af4:
    // 0x2e6af4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6AF4u;
    {
        const bool branch_taken_0x2e6af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AF4u;
            // 0x2e6af8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6af4) {
            ctx->pc = 0x2E6B1Cu;
            goto label_2e6b1c;
        }
    }
    ctx->pc = 0x2E6AFCu;
label_2e6afc:
    // 0x2e6afc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6AFCu;
    SET_GPR_U32(ctx, 31, 0x2E6B04u);
    ctx->pc = 0x2E6B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AFCu;
            // 0x2e6b00: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B04u; }
        if (ctx->pc != 0x2E6B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B04u; }
        if (ctx->pc != 0x2E6B04u) { return; }
    }
    ctx->pc = 0x2E6B04u;
label_2e6b04:
    // 0x2e6b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6B04u;
    {
        const bool branch_taken_0x2e6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b04) {
            ctx->pc = 0x2E6B14u;
            goto label_2e6b14;
        }
    }
    ctx->pc = 0x2E6B0Cu;
    // 0x2e6b0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6B0Cu;
    {
        const bool branch_taken_0x2e6b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B0Cu;
            // 0x2e6b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b0c) {
            ctx->pc = 0x2E6B30u;
            goto label_2e6b30;
        }
    }
    ctx->pc = 0x2E6B14u;
label_2e6b14:
    // 0x2e6b14: 0xe45400a0  swc1        $f20, 0xA0($v0)
    ctx->pc = 0x2e6b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2e6b18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e6b1c:
    // 0x2e6b1c: 0x0  nop
    ctx->pc = 0x2e6b1cu;
    // NOP
    // 0x2e6b20: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6b24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6b28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E6B28u;
    {
        const bool branch_taken_0x2e6b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B28u;
            // 0x2e6b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b28) {
            ctx->pc = 0x2E6AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6afc;
        }
    }
    ctx->pc = 0x2E6B30u;
label_2e6b30:
    // 0x2e6b30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6b34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6b38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6b3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6b40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B48u;
            // 0x2e6b4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6B50u;
}
