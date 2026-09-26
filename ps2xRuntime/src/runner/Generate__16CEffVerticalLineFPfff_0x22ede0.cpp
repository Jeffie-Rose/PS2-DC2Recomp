#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__16CEffVerticalLineFPfff
// Address: 0x22ede0 - 0x22efa0
void Generate__16CEffVerticalLineFPfff_0x22ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__16CEffVerticalLineFPfff_0x22ede0");
#endif

    switch (ctx->pc) {
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eeecu: goto label_22eeec;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef54u: goto label_22ef54;
        case 0x22ef74u: goto label_22ef74;
        default: break;
    }

    ctx->pc = 0x22ede0u;

    // 0x22ede0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ede4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x22ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x22ede8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22edec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22edecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22edf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22edf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22edf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22edf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edfc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22edfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22ee00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ee00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ee04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22ee04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22ee08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ee0c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EE0Cu;
    SET_GPR_U32(ctx, 31, 0x22EE14u);
    ctx->pc = 0x22EE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE0Cu;
            // 0x22ee10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE14u; }
        if (ctx->pc != 0x22EE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE14u; }
        if (ctx->pc != 0x22EE14u) { return; }
    }
    ctx->pc = 0x22EE14u;
label_22ee14:
    // 0x22ee14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22ee18: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x22ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x22ee1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ee1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ee20: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x22ee20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22ee24: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22ee24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ee28: 0x3c023ff3  lui         $v0, 0x3FF3
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16371 << 16));
    // 0x22ee2c: 0x4601a543  div.s       $f21, $f20, $f1
    ctx->pc = 0x22ee2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x22ee30: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x22ee34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22ee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22ee38: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x22ee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x22ee3c: 0x0  nop
    ctx->pc = 0x22ee3cu;
    // NOP
    // 0x22ee40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ee40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee44: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EE44u;
    SET_GPR_U32(ctx, 31, 0x22EE4Cu);
    ctx->pc = 0x22EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE44u;
            // 0x22ee48: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE4Cu; }
        if (ctx->pc != 0x22EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE4Cu; }
        if (ctx->pc != 0x22EE4Cu) { return; }
    }
    ctx->pc = 0x22EE4Cu;
label_22ee4c:
    // 0x22ee4c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x22ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22ee50: 0x3c023ff3  lui         $v0, 0x3FF3
    ctx->pc = 0x22ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16371 << 16));
    // 0x22ee54: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x22ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x22ee58: 0x3c023f42  lui         $v0, 0x3F42
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16194 << 16));
    // 0x22ee5c: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x22ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x22ee60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ee60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ee64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22ee64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ee68: 0x0  nop
    ctx->pc = 0x22ee68u;
    // NOP
    // 0x22ee6c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x22ee6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22ee70: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x22ee74: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x22ee74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x22ee78: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22ee7c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x22ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x22ee80: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee84: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22ee84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22ee88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22ee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ee8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22ee8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ee90: 0x46141302  mul.s       $f12, $f2, $f20
    ctx->pc = 0x22ee90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x22ee94: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EE94u;
    SET_GPR_U32(ctx, 31, 0x22EE9Cu);
    ctx->pc = 0x22EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE94u;
            // 0x22ee98: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE9Cu; }
        if (ctx->pc != 0x22EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE9Cu; }
        if (ctx->pc != 0x22EE9Cu) { return; }
    }
    ctx->pc = 0x22EE9Cu;
label_22ee9c:
    // 0x22ee9c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22eea0: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x22eea4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22eea8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x22eeac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22eeb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22eeb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eeb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22eeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22eeb8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x22eeb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22eebc: 0x4615081d  msub.s      $f0, $f1, $f21
    ctx->pc = 0x22eebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
    // 0x22eec0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x22eec4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x22eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eec8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EEC8u;
    SET_GPR_U32(ctx, 31, 0x22EED0u);
    ctx->pc = 0x22EECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEC8u;
            // 0x22eecc: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EED0u; }
        if (ctx->pc != 0x22EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EED0u; }
        if (ctx->pc != 0x22EED0u) { return; }
    }
    ctx->pc = 0x22EED0u;
label_22eed0:
    // 0x22eed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22eed4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22eed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22eed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eedc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22eedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22eee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22eee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22eee4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EEE4u;
    SET_GPR_U32(ctx, 31, 0x22EEECu);
    ctx->pc = 0x22EEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEE4u;
            // 0x22eee8: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEECu; }
        if (ctx->pc != 0x22EEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEECu; }
        if (ctx->pc != 0x22EEECu) { return; }
    }
    ctx->pc = 0x22EEECu;
label_22eeec:
    // 0x22eeec: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x22eef0: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x22eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x22eef4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x22eef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x22eef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22eef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eefc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22eefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ef00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ef04: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EF04u;
    SET_GPR_U32(ctx, 31, 0x22EF0Cu);
    ctx->pc = 0x22EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF04u;
            // 0x22ef08: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF0Cu; }
        if (ctx->pc != 0x22EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF0Cu; }
        if (ctx->pc != 0x22EF0Cu) { return; }
    }
    ctx->pc = 0x22EF0Cu;
label_22ef0c:
    // 0x22ef0c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x22ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x22ef10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef14: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EF14u;
    SET_GPR_U32(ctx, 31, 0x22EF1Cu);
    ctx->pc = 0x22EF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF14u;
            // 0x22ef18: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF1Cu; }
        if (ctx->pc != 0x22EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF1Cu; }
        if (ctx->pc != 0x22EF1Cu) { return; }
    }
    ctx->pc = 0x22EF1Cu;
label_22ef1c:
    // 0x22ef1c: 0x3c034290  lui         $v1, 0x4290
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17040 << 16));
    // 0x22ef20: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x22ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x22ef24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ef24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ef28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ef2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ef30: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x22EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF30u;
            // 0x22ef34: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x22ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x22ef3c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x22ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x22ef40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ef40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ef44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ef48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ef4c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EF4Cu;
    SET_GPR_U32(ctx, 31, 0x22EF54u);
    ctx->pc = 0x22EF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF4Cu;
            // 0x22ef50: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF54u; }
        if (ctx->pc != 0x22EF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF54u; }
        if (ctx->pc != 0x22EF54u) { return; }
    }
    ctx->pc = 0x22EF54u;
label_22ef54:
    // 0x22ef54: 0x3c03430a  lui         $v1, 0x430A
    ctx->pc = 0x22ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17162 << 16));
    // 0x22ef58: 0x3c023cf2  lui         $v0, 0x3CF2
    ctx->pc = 0x22ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15602 << 16));
    // 0x22ef5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ef5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ef60: 0x3442cab2  ori         $v0, $v0, 0xCAB2
    ctx->pc = 0x22ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51890);
    // 0x22ef64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ef68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ef6c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x22EF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF6Cu;
            // 0x22ef70: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF74u; }
        if (ctx->pc != 0x22EF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF74u; }
        if (ctx->pc != 0x22EF74u) { return; }
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x3c033d72  lui         $v1, 0x3D72
    ctx->pc = 0x22ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15730 << 16));
    // 0x22ef78: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x22ef78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x22ef7c: 0x3463cab2  ori         $v1, $v1, 0xCAB2
    ctx->pc = 0x22ef7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51890);
    // 0x22ef80: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x22ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x22ef84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ef88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ef8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22ef8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ef90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ef94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x22EF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF98u;
            // 0x22ef9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EFA0u;
}
