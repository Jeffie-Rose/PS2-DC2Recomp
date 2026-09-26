#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FusionColor__FiiPf
// Address: 0x23aac0 - 0x23accc
void FusionColor__FiiPf_0x23aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FusionColor__FiiPf_0x23aac0");
#endif

    switch (ctx->pc) {
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab78u: goto label_23ab78;
        case 0x23abe4u: goto label_23abe4;
        case 0x23ac10u: goto label_23ac10;
        default: break;
    }

    ctx->pc = 0x23aac0u;

    // 0x23aac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23aac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23aac8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23aacc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23aad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23aad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23aad8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23aad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23aae0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23aae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aae4: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x23AAE4u;
    {
        const bool branch_taken_0x23aae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAE4u;
            // 0x23aae8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aae4) {
            ctx->pc = 0x23AC2Cu;
            goto label_23ac2c;
        }
    }
    ctx->pc = 0x23AAECu;
    // 0x23aaec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aaf0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23AAF0u;
    SET_GPR_U32(ctx, 31, 0x23AAF8u);
    ctx->pc = 0x23AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAF0u;
            // 0x23aaf4: 0xc42cde00  lwc1        $f12, -0x2200($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAF8u; }
        if (ctx->pc != 0x23AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAF8u; }
        if (ctx->pc != 0x23AAF8u) { return; }
    }
    ctx->pc = 0x23AAF8u;
label_23aaf8:
    // 0x23aaf8: 0xc7819644  lwc1        $f1, -0x69BC($gp)
    ctx->pc = 0x23aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23aafc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x23ab04: 0xc42cde04  lwc1        $f12, -0x21FC($at)
    ctx->pc = 0x23ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ab08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23ab08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23ab0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23ab0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23ab10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x23ab14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23ab18: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23AB18u;
    SET_GPR_U32(ctx, 31, 0x23AB20u);
    ctx->pc = 0x23AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB18u;
            // 0x23ab1c: 0xe420ddf0  swc1        $f0, -0x2210($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958576), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB20u; }
        if (ctx->pc != 0x23AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB20u; }
        if (ctx->pc != 0x23AB20u) { return; }
    }
    ctx->pc = 0x23AB20u;
label_23ab20:
    // 0x23ab20: 0xc7829644  lwc1        $f2, -0x69BC($gp)
    ctx->pc = 0x23ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ab24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab28: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x23ab2c: 0xc42cde08  lwc1        $f12, -0x21F8($at)
    ctx->pc = 0x23ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ab30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23ab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ab34: 0x0  nop
    ctx->pc = 0x23ab34u;
    // NOP
    // 0x23ab38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23ab38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23ab3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ab40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ab44: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23AB44u;
    SET_GPR_U32(ctx, 31, 0x23AB4Cu);
    ctx->pc = 0x23AB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB44u;
            // 0x23ab48: 0xe420ddf4  swc1        $f0, -0x220C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958580), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB4Cu; }
        if (ctx->pc != 0x23AB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB4Cu; }
        if (ctx->pc != 0x23AB4Cu) { return; }
    }
    ctx->pc = 0x23AB4Cu;
label_23ab4c:
    // 0x23ab4c: 0xc7829644  lwc1        $f2, -0x69BC($gp)
    ctx->pc = 0x23ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ab50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x23ab58: 0xc42cde0c  lwc1        $f12, -0x21F4($at)
    ctx->pc = 0x23ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ab5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23ab5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ab60: 0x0  nop
    ctx->pc = 0x23ab60u;
    // NOP
    // 0x23ab64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23ab64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23ab68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ab6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ab70: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23AB70u;
    SET_GPR_U32(ctx, 31, 0x23AB78u);
    ctx->pc = 0x23AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB70u;
            // 0x23ab74: 0xe420ddf8  swc1        $f0, -0x2208($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958584), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB78u; }
        if (ctx->pc != 0x23AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB78u; }
        if (ctx->pc != 0x23AB78u) { return; }
    }
    ctx->pc = 0x23AB78u;
label_23ab78:
    // 0x23ab78: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x23ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x23ab7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23ab80: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x23ab80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x23ab84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ab88: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x23ab88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23ab8c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x23ab90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23ab90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23ab94: 0x0  nop
    ctx->pc = 0x23ab94u;
    // NOP
    // 0x23ab98: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x23ab98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x23ab9c: 0x3c023ec2  lui         $v0, 0x3EC2
    ctx->pc = 0x23ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16066 << 16));
    // 0x23aba0: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x23aba4: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x23aba4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23aba8: 0xc7819644  lwc1        $f1, -0x69BC($gp)
    ctx->pc = 0x23aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23abacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23abb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x23abb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23abb4: 0x0  nop
    ctx->pc = 0x23abb4u;
    // NOP
    // 0x23abb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x23abb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x23abbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23abbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23abc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23abc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23abc4: 0xe422ddfc  swc1        $f2, -0x2204($at)
    ctx->pc = 0x23abc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958588), bits); }
    // 0x23abc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23abc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abcc: 0x0  nop
    ctx->pc = 0x23abccu;
    // NOP
    // 0x23abd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x23ABD0u;
    {
        const bool branch_taken_0x23abd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABD0u;
            // 0x23abd4: 0xe7809644  swc1        $f0, -0x69BC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abd0) {
            ctx->pc = 0x23ABDCu;
            goto label_23abdc;
        }
    }
    ctx->pc = 0x23ABD8u;
    // 0x23abd8: 0xe7819644  swc1        $f1, -0x69BC($gp)
    ctx->pc = 0x23abd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940228), bits); }
label_23abdc:
    // 0x23abdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23abdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abe0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23abe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23abe4:
    // 0x23abe4: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23abe8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23abec: 0x2463de00  addiu       $v1, $v1, -0x2200
    ctx->pc = 0x23abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x23abf0: 0x24420c20  addiu       $v0, $v0, 0xC20
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
    // 0x23abf4: 0x71a021  addu        $s4, $v1, $s1
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23abf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23abfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ac00: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x23ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ac04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ac04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ac08: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x23AC08u;
    SET_GPR_U32(ctx, 31, 0x23AC10u);
    ctx->pc = 0x23AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC08u;
            // 0x23ac0c: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC10u; }
        if (ctx->pc != 0x23AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC10u; }
        if (ctx->pc != 0x23AC10u) { return; }
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23ac14: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23ac14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23ac18: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x23ac18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ac1c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x23AC1Cu;
    {
        const bool branch_taken_0x23ac1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC1Cu;
            // 0x23ac20: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac1c) {
            ctx->pc = 0x23ABE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23abe4;
        }
    }
    ctx->pc = 0x23AC24u;
    // 0x23ac24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23AC24u;
    {
        const bool branch_taken_0x23ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac24) {
            ctx->pc = 0x23AC98u;
            goto label_23ac98;
        }
    }
    ctx->pc = 0x23AC2Cu;
label_23ac2c:
    // 0x23ac2c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac30: 0x3c0342ac  lui         $v1, 0x42AC
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17068 << 16));
    // 0x23ac34: 0xac20de00  sw          $zero, -0x2200($at)
    ctx->pc = 0x23ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958592), GPR_U32(ctx, 0));
    // 0x23ac38: 0x3c044280  lui         $a0, 0x4280
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17024 << 16));
    // 0x23ac3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac40: 0xaf839644  sw          $v1, -0x69BC($gp)
    ctx->pc = 0x23ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940228), GPR_U32(ctx, 3));
    // 0x23ac44: 0xac24ddf0  sw          $a0, -0x2210($at)
    ctx->pc = 0x23ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958576), GPR_U32(ctx, 4));
    // 0x23ac48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x23ac4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac50: 0xac23ddfc  sw          $v1, -0x2204($at)
    ctx->pc = 0x23ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958588), GPR_U32(ctx, 3));
    // 0x23ac54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac58: 0x3c034006  lui         $v1, 0x4006
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
    // 0x23ac5c: 0xac24ddf4  sw          $a0, -0x220C($at)
    ctx->pc = 0x23ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958580), GPR_U32(ctx, 4));
    // 0x23ac60: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x23ac64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac68: 0xac24ddf8  sw          $a0, -0x2208($at)
    ctx->pc = 0x23ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958584), GPR_U32(ctx, 4));
    // 0x23ac6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x23ac6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23ac70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac74: 0xac20de0c  sw          $zero, -0x21F4($at)
    ctx->pc = 0x23ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958604), GPR_U32(ctx, 0));
    // 0x23ac78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac7c: 0xc420de00  lwc1        $f0, -0x2200($at)
    ctx->pc = 0x23ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ac80: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x23ac80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23ac84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac88: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x23ac88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x23ac8c: 0xe421de04  swc1        $f1, -0x21FC($at)
    ctx->pc = 0x23ac8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958596), bits); }
    // 0x23ac90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23ac94: 0xe420de08  swc1        $f0, -0x21F8($at)
    ctx->pc = 0x23ac94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958600), bits); }
label_23ac98:
    // 0x23ac98: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC98u;
    {
        const bool branch_taken_0x23ac98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC98u;
            // 0x23ac9c: 0x3c0301ed  lui         $v1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac98) {
            ctx->pc = 0x23ACACu;
            goto label_23acac;
        }
    }
    ctx->pc = 0x23ACA0u;
    // 0x23aca0: 0x2463ddf0  addiu       $v1, $v1, -0x2210
    ctx->pc = 0x23aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958576));
    // 0x23aca4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x23aca4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23aca8: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x23aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_23acac:
    // 0x23acac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23acb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23acb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23acb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23acb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23acb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23acbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23acbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23acc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23acc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x23ACC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACC4u;
            // 0x23acc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23ACCCu;
}
