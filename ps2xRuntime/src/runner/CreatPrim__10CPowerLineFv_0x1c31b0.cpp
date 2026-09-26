#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPrim__10CPowerLineFv
// Address: 0x1c31b0 - 0x1c32cc
void CreatPrim__10CPowerLineFv_0x1c31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPrim__10CPowerLineFv_0x1c31b0");
#endif

    switch (ctx->pc) {
        case 0x1c31e8u: goto label_1c31e8;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c3230u: goto label_1c3230;
        case 0x1c325cu: goto label_1c325c;
        default: break;
    }

    ctx->pc = 0x1c31b0u;

    // 0x1c31b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c31b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c31b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c31bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c31c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c31c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c31c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c31c8: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1c31cc: 0xc4940020  lwc1        $f20, 0x20($a0)
    ctx->pc = 0x1c31ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c31d0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1c31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1c31d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c31d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c31dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c31e0: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C31E0u;
    SET_GPR_U32(ctx, 31, 0x1C31E8u);
    ctx->pc = 0x1C31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31E0u;
            // 0x1c31e4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E8u; }
        if (ctx->pc != 0x1C31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E8u; }
        if (ctx->pc != 0x1C31E8u) { return; }
    }
    ctx->pc = 0x1C31E8u;
label_1c31e8:
    // 0x1c31e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c31e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c31ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c31f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c31f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c31f4: 0x0  nop
    ctx->pc = 0x1c31f4u;
    // NOP
    // 0x1c31f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c31f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c31fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c31fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c3200: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3200u;
    SET_GPR_U32(ctx, 31, 0x1C3208u);
    ctx->pc = 0x1C3204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3200u;
            // 0x1c3204: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3208u; }
        if (ctx->pc != 0x1C3208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3208u; }
        if (ctx->pc != 0x1C3208u) { return; }
    }
    ctx->pc = 0x1C3208u;
label_1c3208:
    // 0x1c3208: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x1c3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c320c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c3210: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c3214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3218: 0x0  nop
    ctx->pc = 0x1c3218u;
    // NOP
    // 0x1c321c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c321cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c3220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c3220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c3224: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1c3224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c3228: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3228u;
    SET_GPR_U32(ctx, 31, 0x1C3230u);
    ctx->pc = 0x1C322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3228u;
            // 0x1c322c: 0xc6340020  lwc1        $f20, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3230u; }
        if (ctx->pc != 0x1C3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3230u; }
        if (ctx->pc != 0x1C3230u) { return; }
    }
    ctx->pc = 0x1C3230u;
label_1c3230:
    // 0x1c3230: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1c3230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c3234: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c323c: 0x0  nop
    ctx->pc = 0x1c323cu;
    // NOP
    // 0x1c3240: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3244: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c3244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c3248: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1c3248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c324c: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1c324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3250: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c3250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c3254: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3254u;
    SET_GPR_U32(ctx, 31, 0x1C325Cu);
    ctx->pc = 0x1C3258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3254u;
            // 0x1c3258: 0xc6340024  lwc1        $f20, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C325Cu; }
        if (ctx->pc != 0x1C325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C325Cu; }
        if (ctx->pc != 0x1C325Cu) { return; }
    }
    ctx->pc = 0x1C325Cu;
label_1c325c:
    // 0x1c325c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1c325cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c3260: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3268: 0x0  nop
    ctx->pc = 0x1c3268u;
    // NOP
    // 0x1c326c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c326cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c3270: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1c3270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1c3274: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c3274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c3278: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c3278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c327c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1c327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c3280: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1c3280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c3284: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c3288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c328c: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1c328cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x1c3290: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1c3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c3294: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1c3294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1c3298: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1c3298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c329c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C329Cu;
    {
        const bool branch_taken_0x1c329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c329c) {
            ctx->pc = 0x1C32A8u;
            goto label_1c32a8;
        }
    }
    ctx->pc = 0x1C32A4u;
    // 0x1c32a4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x1c32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_1c32a8:
    // 0x1c32a8: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c32ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c32acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c32b0: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x1c32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x1c32b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c32b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c32b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c32b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c32bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c32bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c32c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c32c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c32c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32C4u;
            // 0x1c32c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C32CCu;
}
