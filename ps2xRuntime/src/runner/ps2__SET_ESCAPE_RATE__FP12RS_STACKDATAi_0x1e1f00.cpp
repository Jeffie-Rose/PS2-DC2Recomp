#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ESCAPE_RATE__FP12RS_STACKDATAi
// Address: 0x1e1f00 - 0x1e2014
void ps2__SET_ESCAPE_RATE__FP12RS_STACKDATAi_0x1e1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ESCAPE_RATE__FP12RS_STACKDATAi_0x1e1f00");
#endif

    switch (ctx->pc) {
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1fb4u: goto label_1e1fb4;
        default: break;
    }

    ctx->pc = 0x1e1f00u;

    // 0x1e1f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1f08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e1f0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e1f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1f14: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1F14u;
    {
        const bool branch_taken_0x1e1f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F14u;
            // 0x1e1f18: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f14) {
            ctx->pc = 0x1E1F24u;
            goto label_1e1f24;
        }
    }
    ctx->pc = 0x1E1F1Cu;
    // 0x1e1f1c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E1F1Cu;
    {
        const bool branch_taken_0x1e1f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F1Cu;
            // 0x1e1f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f1c) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1F24u;
label_1e1f24:
    // 0x1e1f24: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1F24u;
    SET_GPR_U32(ctx, 31, 0x1E1F2Cu);
    ctx->pc = 0x1E1F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F24u;
            // 0x1e1f28: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F2Cu; }
        if (ctx->pc != 0x1E1F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F2Cu; }
        if (ctx->pc != 0x1E1F2Cu) { return; }
    }
    ctx->pc = 0x1E1F2Cu;
label_1e1f2c:
    // 0x1e1f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1f30: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1F30u;
    {
        const bool branch_taken_0x1e1f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1f30) {
            ctx->pc = 0x1E1F5Cu;
            goto label_1e1f5c;
        }
    }
    ctx->pc = 0x1E1F38u;
    // 0x1e1f38: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1f3c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e1f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1f48: 0x8c500484  lw          $s0, 0x484($v0)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1f4c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1F4Cu;
    {
        const bool branch_taken_0x1e1f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F4Cu;
            // 0x1e1f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f4c) {
            ctx->pc = 0x1E1F68u;
            goto label_1e1f68;
        }
    }
    ctx->pc = 0x1E1F54u;
    // 0x1e1f54: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E1F54u;
    {
        const bool branch_taken_0x1e1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F54u;
            // 0x1e1f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f54) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1F5Cu;
label_1e1f5c:
    // 0x1e1f5c: 0x8f908e70  lw          $s0, -0x7190($gp)
    ctx->pc = 0x1e1f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1f60: 0x0  nop
    ctx->pc = 0x1e1f60u;
    // NOP
    // 0x1e1f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f68:
    // 0x1e1f68: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1F68u;
    SET_GPR_U32(ctx, 31, 0x1E1F70u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F70u; }
        if (ctx->pc != 0x1E1F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F70u; }
        if (ctx->pc != 0x1E1F70u) { return; }
    }
    ctx->pc = 0x1E1F70u;
label_1e1f70:
    // 0x1e1f70: 0x8e02114c  lw          $v0, 0x114C($s0)
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4428)));
    // 0x1e1f74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e1f74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e1f78: 0x80420063  lb          $v0, 0x63($v0)
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 99)));
    // 0x1e1f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f80: 0x0  nop
    ctx->pc = 0x1e1f80u;
    // NOP
    // 0x1e1f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E1F88u;
    SET_GPR_U32(ctx, 31, 0x1E1F90u);
    ctx->pc = 0x1E1F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F88u;
            // 0x1e1f8c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F90u; }
        if (ctx->pc != 0x1E1F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F90u; }
        if (ctx->pc != 0x1E1F90u) { return; }
    }
    ctx->pc = 0x1E1F90u;
label_1e1f90:
    // 0x1e1f90: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1e1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
    // 0x1e1f94: 0xa0620063  sb          $v0, 0x63($v1)
    ctx->pc = 0x1e1f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e1f98: 0x8e02114c  lw          $v0, 0x114C($s0)
    ctx->pc = 0x1e1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4428)));
    // 0x1e1f9c: 0x80420064  lb          $v0, 0x64($v0)
    ctx->pc = 0x1e1f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e1fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fa4: 0x0  nop
    ctx->pc = 0x1e1fa4u;
    // NOP
    // 0x1e1fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1fac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E1FACu;
    SET_GPR_U32(ctx, 31, 0x1E1FB4u);
    ctx->pc = 0x1E1FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FACu;
            // 0x1e1fb0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FB4u; }
        if (ctx->pc != 0x1E1FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FB4u; }
        if (ctx->pc != 0x1E1FB4u) { return; }
    }
    ctx->pc = 0x1E1FB4u;
label_1e1fb4:
    // 0x1e1fb4: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1e1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
    // 0x1e1fb8: 0xa0620064  sb          $v0, 0x64($v1)
    ctx->pc = 0x1e1fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e1fbc: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1e1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
    // 0x1e1fc0: 0x24430063  addiu       $v1, $v0, 0x63
    ctx->pc = 0x1e1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 99));
    // 0x1e1fc4: 0x90420063  lbu         $v0, 0x63($v0)
    ctx->pc = 0x1e1fc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 99)));
    // 0x1e1fc8: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1e1fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1e1fcc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1FCCu;
    {
        const bool branch_taken_0x1e1fcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FCCu;
            // 0x1e1fd0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fcc) {
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1FD4u;
    // 0x1e1fd4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e1fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e1fd8:
    // 0x1e1fd8: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1e1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
    // 0x1e1fdc: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x1e1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1e1fe0: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e1fe4: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1e1fe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1e1fe8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1FE8u;
    {
        const bool branch_taken_0x1e1fe8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FE8u;
            // 0x1e1fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fe8) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1FF0u;
    // 0x1e1ff0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e1ff4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e1ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e1ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ffc:
    // 0x1e1ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e1ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2000: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e200c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E200Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E200Cu;
            // 0x1e2010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2014u;
}
