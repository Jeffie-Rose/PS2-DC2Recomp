#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1Psi
// Address: 0x21f9e0 - 0x21fb08
void SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1Psi_0x21f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1Psi_0x21f9e0");
#endif

    switch (ctx->pc) {
        case 0x21fa00u: goto label_21fa00;
        case 0x21fad0u: goto label_21fad0;
        default: break;
    }

    ctx->pc = 0x21f9e0u;

    // 0x21f9e0: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x21f9e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21f9e4: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x21F9E4u;
    {
        const bool branch_taken_0x21f9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9E4u;
            // 0x21f9e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9e4) {
            ctx->pc = 0x21FAFCu;
            goto label_21fafc;
        }
    }
    ctx->pc = 0x21F9ECu;
    // 0x21f9ec: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x21f9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21f9f0: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x21F9F0u;
    {
        const bool branch_taken_0x21f9f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9F0u;
            // 0x21f9f4: 0x24c8fff8  addiu       $t0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9f0) {
            ctx->pc = 0x21FABCu;
            goto label_21fabc;
        }
    }
    ctx->pc = 0x21F9F8u;
    // 0x21f9f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21f9f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f9fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fa00:
    // 0x21fa00: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x21fa00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21fa04: 0x8b6821  addu        $t5, $a0, $t3
    ctx->pc = 0x21fa04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x21fa08: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x21fa08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21fa0c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x21fa0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x21fa10: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x21fa10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21fa14: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x21fa18: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x21fa1c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa20: 0x0  nop
    ctx->pc = 0x21fa20u;
    // NOP
    // 0x21fa24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa28: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x21fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x21fa2c: 0x85870002  lh          $a3, 0x2($t4)
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x21fa30: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa34: 0x0  nop
    ctx->pc = 0x21fa34u;
    // NOP
    // 0x21fa38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa3c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x21fa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x21fa40: 0x85870004  lh          $a3, 0x4($t4)
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x21fa44: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa48: 0x0  nop
    ctx->pc = 0x21fa48u;
    // NOP
    // 0x21fa4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa50: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x21fa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x21fa54: 0x85870006  lh          $a3, 0x6($t4)
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x21fa58: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa5c: 0x0  nop
    ctx->pc = 0x21fa5cu;
    // NOP
    // 0x21fa60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa64: 0xe5a00010  swc1        $f0, 0x10($t5)
    ctx->pc = 0x21fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x21fa68: 0x85870008  lh          $a3, 0x8($t4)
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x21fa6c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa6cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa70: 0x0  nop
    ctx->pc = 0x21fa70u;
    // NOP
    // 0x21fa74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa78: 0xe5a00014  swc1        $f0, 0x14($t5)
    ctx->pc = 0x21fa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
    // 0x21fa7c: 0x8587000a  lh          $a3, 0xA($t4)
    ctx->pc = 0x21fa7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x21fa80: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa84: 0x0  nop
    ctx->pc = 0x21fa84u;
    // NOP
    // 0x21fa88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fa8c: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x21fa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
    // 0x21fa90: 0x8587000c  lh          $a3, 0xC($t4)
    ctx->pc = 0x21fa90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x21fa94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21fa94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fa98: 0x0  nop
    ctx->pc = 0x21fa98u;
    // NOP
    // 0x21fa9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fa9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21faa0: 0xe5a0001c  swc1        $f0, 0x1C($t5)
    ctx->pc = 0x21faa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 28), bits); }
    // 0x21faa4: 0x8587000e  lh          $a3, 0xE($t4)
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x21faa8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21faa8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21faac: 0x0  nop
    ctx->pc = 0x21faacu;
    // NOP
    // 0x21fab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21fab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fab4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x21FAB4u;
    {
        const bool branch_taken_0x21fab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAB4u;
            // 0x21fab8: 0xe5a00020  swc1        $f0, 0x20($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fab4) {
            ctx->pc = 0x21FA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21fa00;
        }
    }
    ctx->pc = 0x21FABCu;
label_21fabc:
    // 0x21fabc: 0x0  nop
    ctx->pc = 0x21fabcu;
    // NOP
    // 0x21fac0: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x21fac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21fac4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x21FAC4u;
    {
        const bool branch_taken_0x21fac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAC4u;
            // 0x21fac8: 0x95040  sll         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac4) {
            ctx->pc = 0x21FAFCu;
            goto label_21fafc;
        }
    }
    ctx->pc = 0x21FACCu;
    // 0x21facc: 0x95880  sll         $t3, $t1, 2
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_21fad0:
    // 0x21fad0: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21fad4: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x21fad8: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x21fad8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fadc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21fadcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21fae0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x21fae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x21fae4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x21fae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x21fae8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x21fae8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21faec: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x21faecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21faf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21faf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21faf4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x21FAF4u;
    {
        const bool branch_taken_0x21faf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAF4u;
            // 0x21faf8: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf4) {
            ctx->pc = 0x21FAD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21fad0;
        }
    }
    ctx->pc = 0x21FAFCu;
label_21fafc:
    // 0x21fafc: 0x0  nop
    ctx->pc = 0x21fafcu;
    // NOP
    // 0x21fb00: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FB08u;
}
