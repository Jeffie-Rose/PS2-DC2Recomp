#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__7CBubbleFv
// Address: 0x20cd10 - 0x20cfc4
void Step__7CBubbleFv_0x20cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__7CBubbleFv_0x20cd10");
#endif

    switch (ctx->pc) {
        case 0x20cd54u: goto label_20cd54;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cde8u: goto label_20cde8;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce70u: goto label_20ce70;
        case 0x20cea0u: goto label_20cea0;
        case 0x20ceb4u: goto label_20ceb4;
        case 0x20cf34u: goto label_20cf34;
        default: break;
    }

    ctx->pc = 0x20cd10u;

    // 0x20cd10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20cd14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20cd18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x20cd1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20cd20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20cd24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20cd28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20cd2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20cd30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20cd30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20cd34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20cd34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20cd38: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x20cd38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x20cd3c: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x20CD3Cu;
    {
        const bool branch_taken_0x20cd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD3Cu;
            // 0x20cd40: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd3c) {
            ctx->pc = 0x20CF98u;
            goto label_20cf98;
        }
    }
    ctx->pc = 0x20CD44u;
    // 0x20cd44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20cd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20cd48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd4c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x20CD4Cu;
    {
        const bool branch_taken_0x20cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD4Cu;
            // 0x20cd50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd4c) {
            ctx->pc = 0x20CF68u;
            goto label_20cf68;
        }
    }
    ctx->pc = 0x20CD54u;
label_20cd54:
    // 0x20cd54: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x20cd58: 0x749021  addu        $s2, $v1, $s4
    ctx->pc = 0x20cd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x20cd5c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x20cd5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x20cd60: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x20CD60u;
    {
        const bool branch_taken_0x20cd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd60) {
            ctx->pc = 0x20CEBCu;
            goto label_20cebc;
        }
    }
    ctx->pc = 0x20CD68u;
    // 0x20cd68: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x20cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20cd6c: 0x3c023e38  lui         $v0, 0x3E38
    ctx->pc = 0x20cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
    // 0x20cd70: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x20cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cd74: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x20cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x20cd78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20cd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cd7c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x20cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x20cd80: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x20cd84: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x20cd84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20cd88: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x20cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20cd90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20cd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cd94: 0x2484f8b0  addiu       $a0, $a0, -0x750
    ctx->pc = 0x20cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    // 0x20cd98: 0x2463f8d0  addiu       $v1, $v1, -0x730
    ctx->pc = 0x20cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965456));
    // 0x20cd9c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20cd9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x20cda0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20cda4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20cda8: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x20cda8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x20cdac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cdb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20cdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20cdb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20cdb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cdb8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x20cdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x20cdbc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x20cdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x20cdc0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x20cdc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20cdc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20cdc8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CDC8u;
    SET_GPR_U32(ctx, 31, 0x20CDD0u);
    ctx->pc = 0x20CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CDC8u;
            // 0x20cdcc: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDD0u; }
        if (ctx->pc != 0x20CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDD0u; }
        if (ctx->pc != 0x20CDD0u) { return; }
    }
    ctx->pc = 0x20CDD0u;
label_20cdd0:
    // 0x20cdd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20cdd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20cdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20cdd8: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x20cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cddc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x20cddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x20cde0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x20CDE0u;
    SET_GPR_U32(ctx, 31, 0x20CDE8u);
    ctx->pc = 0x20CDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CDE0u;
            // 0x20cde4: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDE8u; }
        if (ctx->pc != 0x20CDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDE8u; }
        if (ctx->pc != 0x20CDE8u) { return; }
    }
    ctx->pc = 0x20CDE8u;
label_20cde8:
    // 0x20cde8: 0x4600a942  mul.s       $f5, $f21, $f0
    ctx->pc = 0x20cde8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x20cdec: 0x3c023e0f  lui         $v0, 0x3E0F
    ctx->pc = 0x20cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15887 << 16));
    // 0x20cdf0: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x20cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x20cdf4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x20cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20cdf8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x20cdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20cdfc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x20cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ce00: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x20ce00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x20ce04: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x20ce04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x20ce08: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x20ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ce0c: 0x4614155c  madd.s      $f21, $f2, $f20
    ctx->pc = 0x20ce0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x20ce10: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x20ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ce14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20ce14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20ce18: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x20ce18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x20ce1c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CE1Cu;
    SET_GPR_U32(ctx, 31, 0x20CE24u);
    ctx->pc = 0x20CE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE1Cu;
            // 0x20ce20: 0x4614051c  madd.s      $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE24u; }
        if (ctx->pc != 0x20CE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE24u; }
        if (ctx->pc != 0x20CE24u) { return; }
    }
    ctx->pc = 0x20CE24u;
label_20ce24:
    // 0x20ce24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ce28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20ce28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20ce2c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x20ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ce30: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20ce30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20ce34: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x20ce38: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x20ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x20ce3c: 0x4602a802  mul.s       $f0, $f21, $f2
    ctx->pc = 0x20ce3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x20ce40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20ce40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20ce44: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x20ce44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x20ce48: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x20ce48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x20ce4c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x20ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ce50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ce50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ce54: 0x0  nop
    ctx->pc = 0x20ce54u;
    // NOP
    // 0x20ce58: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x20ce58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x20ce5c: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x20ce5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x20ce60: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x20ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ce64: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20ce64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20ce68: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x20CE68u;
    SET_GPR_U32(ctx, 31, 0x20CE70u);
    ctx->pc = 0x20CE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE68u;
            // 0x20ce6c: 0xe64c0004  swc1        $f12, 0x4($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE70u; }
        if (ctx->pc != 0x20CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE70u; }
        if (ctx->pc != 0x20CE70u) { return; }
    }
    ctx->pc = 0x20CE70u;
label_20ce70:
    // 0x20ce70: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x20ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ce74: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x20ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ce78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20ce78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ce7c: 0x0  nop
    ctx->pc = 0x20ce7cu;
    // NOP
    // 0x20ce80: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x20CE80u;
    {
        const bool branch_taken_0x20ce80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ce80) {
            ctx->pc = 0x20CEBCu;
            goto label_20cebc;
        }
    }
    ctx->pc = 0x20CE88u;
    // 0x20ce88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20ce8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20ce90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20ce94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ce94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ce98: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CE98u;
    SET_GPR_U32(ctx, 31, 0x20CEA0u);
    ctx->pc = 0x20CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE98u;
            // 0x20ce9c: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEA0u; }
        if (ctx->pc != 0x20CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEA0u; }
        if (ctx->pc != 0x20CEA0u) { return; }
    }
    ctx->pc = 0x20CEA0u;
label_20cea0:
    // 0x20cea0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x20cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cea4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20cea8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20cea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20ceac: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20CEACu;
    SET_GPR_U32(ctx, 31, 0x20CEB4u);
    ctx->pc = 0x20CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CEACu;
            // 0x20ceb0: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEB4u; }
        if (ctx->pc != 0x20CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEB4u; }
        if (ctx->pc != 0x20CEB4u) { return; }
    }
    ctx->pc = 0x20CEB4u;
label_20ceb4:
    // 0x20ceb4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x20ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20ceb8: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x20ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_20cebc:
    // 0x20cebc: 0x0  nop
    ctx->pc = 0x20cebcu;
    // NOP
    // 0x20cec0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x20cec0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x20cec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cec8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20CEC8u;
    {
        const bool branch_taken_0x20cec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20cec8) {
            ctx->pc = 0x20CF48u;
            goto label_20cf48;
        }
    }
    ctx->pc = 0x20CED0u;
    // 0x20ced0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x20ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ced4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20ced8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x20ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cee0: 0x0  nop
    ctx->pc = 0x20cee0u;
    // NOP
    // 0x20cee4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20cee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20cee8: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x20cee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x20ceec: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x20ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cef0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x20cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cef4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20cef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20cef8: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x20cef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x20cefc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x20cefcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20cf00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20cf04: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x20cf04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20cf08: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x20cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cf0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20cf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20cf10: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x20cf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x20cf14: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x20cf14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20cf18: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20CF18u;
    {
        const bool branch_taken_0x20cf18 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x20cf18) {
            ctx->pc = 0x20CF48u;
            goto label_20cf48;
        }
    }
    ctx->pc = 0x20CF20u;
    // 0x20cf20: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x20cf20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20cf24: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CF24u;
    {
        const bool branch_taken_0x20cf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF24u;
            // 0x20cf28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf24) {
            ctx->pc = 0x20CF3Cu;
            goto label_20cf3c;
        }
    }
    ctx->pc = 0x20CF2Cu;
    // 0x20cf2c: 0xc0832d8  jal         func_20CB60
    ctx->pc = 0x20CF2Cu;
    SET_GPR_U32(ctx, 31, 0x20CF34u);
    ctx->pc = 0x20CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF2Cu;
            // 0x20cf30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CB60u;
    if (runtime->hasFunction(0x20CB60u)) {
        auto targetFn = runtime->lookupFunction(0x20CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF34u; }
        if (ctx->pc != 0x20CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__7CBubbleFi_0x20cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF34u; }
        if (ctx->pc != 0x20CF34u) { return; }
    }
    ctx->pc = 0x20CF34u;
label_20cf34:
    // 0x20cf34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20CF34u;
    {
        const bool branch_taken_0x20cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf34) {
            ctx->pc = 0x20CF48u;
            goto label_20cf48;
        }
    }
    ctx->pc = 0x20CF3Cu;
label_20cf3c:
    // 0x20cf3c: 0x0  nop
    ctx->pc = 0x20cf3cu;
    // NOP
    // 0x20cf40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20cf44: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x20cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_20cf48:
    // 0x20cf48: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x20cf48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x20cf4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20cf50: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20CF50u;
    {
        const bool branch_taken_0x20cf50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20cf50) {
            ctx->pc = 0x20CF5Cu;
            goto label_20cf5c;
        }
    }
    ctx->pc = 0x20CF58u;
    // 0x20cf58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20cf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20cf5c:
    // 0x20cf5c: 0x0  nop
    ctx->pc = 0x20cf5cu;
    // NOP
    // 0x20cf60: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x20cf60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x20cf64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20cf68:
    // 0x20cf68: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x20cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x20cf6c: 0x225182b  sltu        $v1, $s1, $a1
    ctx->pc = 0x20cf6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20cf70: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x20CF70u;
    {
        const bool branch_taken_0x20cf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cf70) {
            ctx->pc = 0x20CD54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20cd54;
        }
    }
    ctx->pc = 0x20CF78u;
    // 0x20cf78: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20cf7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf80: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CF80u;
    {
        const bool branch_taken_0x20cf80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF80u;
            // 0x20cf84: 0x205082b  sltu        $at, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf80) {
            ctx->pc = 0x20CF98u;
            goto label_20cf98;
        }
    }
    ctx->pc = 0x20CF88u;
    // 0x20cf88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CF88u;
    {
        const bool branch_taken_0x20cf88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cf88) {
            ctx->pc = 0x20CF98u;
            goto label_20cf98;
        }
    }
    ctx->pc = 0x20CF90u;
    // 0x20cf90: 0xa2a00001  sb          $zero, 0x1($s5)
    ctx->pc = 0x20cf90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf94: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x20cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_20cf98:
    // 0x20cf98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20cf9c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20cfa0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20cfa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cfa4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20cfa8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20cfa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20cfac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20cfacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cfb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20cfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cfb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20cfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cfb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20cfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFBCu;
            // 0x20cfc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CFC4u;
}
