#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS
// Address: 0x31da30 - 0x31db6c
void grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30");
#endif

    switch (ctx->pc) {
        case 0x31da90u: goto label_31da90;
        default: break;
    }

    ctx->pc = 0x31da30u;

    // 0x31da30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31da34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31da38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31da3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31da40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31da48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31da48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31da4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31da50: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DA50u;
    {
        const bool branch_taken_0x31da50 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x31DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA50u;
            // 0x31da54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da50) {
            ctx->pc = 0x31DA68u;
            goto label_31da68;
        }
    }
    ctx->pc = 0x31DA58u;
    // 0x31da58: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31da5c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x31da5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31da60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA60u;
    {
        const bool branch_taken_0x31da60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA60u;
            // 0x31da64: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da60) {
            ctx->pc = 0x31DA70u;
            goto label_31da70;
        }
    }
    ctx->pc = 0x31DA68u;
label_31da68:
    // 0x31da68: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x31DA68u;
    {
        const bool branch_taken_0x31da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA68u;
            // 0x31da6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da68) {
            ctx->pc = 0x31DB50u;
            goto label_31db50;
        }
    }
    ctx->pc = 0x31DA70u;
label_31da70:
    // 0x31da70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x31da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31da74: 0x8c500190  lw          $s0, 0x190($v0)
    ctx->pc = 0x31da74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x31da78: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA78u;
    {
        const bool branch_taken_0x31da78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA78u;
            // 0x31da7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da78) {
            ctx->pc = 0x31DA88u;
            goto label_31da88;
        }
    }
    ctx->pc = 0x31DA80u;
    // 0x31da80: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31DA80u;
    {
        const bool branch_taken_0x31da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA80u;
            // 0x31da84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da80) {
            ctx->pc = 0x31DB54u;
            goto label_31db54;
        }
    }
    ctx->pc = 0x31DA88u;
label_31da88:
    // 0x31da88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x31DA88u;
    SET_GPR_U32(ctx, 31, 0x31DA90u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA90u; }
        if (ctx->pc != 0x31DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA90u; }
        if (ctx->pc != 0x31DA90u) { return; }
    }
    ctx->pc = 0x31DA90u;
label_31da90:
    // 0x31da90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31da90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31da94: 0x8e43018c  lw          $v1, 0x18C($s2)
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
    // 0x31da98: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31da9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31da9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31daa0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x31daa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31daa4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DAA4u;
    {
        const bool branch_taken_0x31daa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAA4u;
            // 0x31daa8: 0x4600a081  sub.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31daa4) {
            ctx->pc = 0x31DAB4u;
            goto label_31dab4;
        }
    }
    ctx->pc = 0x31DAACu;
    // 0x31daac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31DAACu;
    {
        const bool branch_taken_0x31daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAACu;
            // 0x31dab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31daac) {
            ctx->pc = 0x31DB50u;
            goto label_31db50;
        }
    }
    ctx->pc = 0x31DAB4u;
label_31dab4:
    // 0x31dab4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x31dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31dab8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31dabc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31dac0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x31dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31dac4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dac8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x31dac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x31dacc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31dad0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x31dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x31dad4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dad8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x31dad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x31dadc: 0x8062000c  lb          $v0, 0xC($v1)
    ctx->pc = 0x31dadcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31dae0: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x31dae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x31dae4: 0x8062000d  lb          $v0, 0xD($v1)
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x31dae8: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x31dae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x31daec: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x31daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31daf0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x31daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31daf4: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x31daf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x31daf8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x31daf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x31dafc: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x31dafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31db00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DB00u;
    {
        const bool branch_taken_0x31db00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB00u;
            // 0x31db04: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db00) {
            ctx->pc = 0x31DB10u;
            goto label_31db10;
        }
    }
    ctx->pc = 0x31DB08u;
    // 0x31db08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31DB08u;
    {
        const bool branch_taken_0x31db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB08u;
            // 0x31db0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db08) {
            ctx->pc = 0x31DB50u;
            goto label_31db50;
        }
    }
    ctx->pc = 0x31DB10u;
label_31db10:
    // 0x31db10: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x31db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31db14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31db14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31db18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31db1c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31db20: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x31db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31db24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31db28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31db28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31db2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31db2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31db30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31db30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31db34: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x31db34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x31db38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31db3c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x31db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31db40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31db40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31db44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31db44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31db48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31db48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31db4c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x31db4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_31db50:
    // 0x31db50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31db50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31db54:
    // 0x31db54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31db58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31db58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31db5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31db5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31db60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31db60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31db64: 0x3e00008  jr          $ra
    ctx->pc = 0x31DB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB64u;
            // 0x31db68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DB6Cu;
}
