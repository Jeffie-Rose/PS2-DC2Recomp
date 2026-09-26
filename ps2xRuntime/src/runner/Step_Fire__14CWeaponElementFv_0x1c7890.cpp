#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step_Fire__14CWeaponElementFv
// Address: 0x1c7890 - 0x1c7d48
void Step_Fire__14CWeaponElementFv_0x1c7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step_Fire__14CWeaponElementFv_0x1c7890");
#endif

    switch (ctx->pc) {
        case 0x1c78d4u: goto label_1c78d4;
        case 0x1c7908u: goto label_1c7908;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7ce8u: goto label_1c7ce8;
        default: break;
    }

    ctx->pc = 0x1c7890u;

    // 0x1c7890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c7894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c7898: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c789c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c78a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c78a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c78a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c78a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c78b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c78b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c78b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c78b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c78bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c78c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c78c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c78c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c78c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c78c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c78ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c78d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c78d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c78d4:
    // 0x1c78d4: 0x2d1a021  addu        $s4, $s6, $s1
    ctx->pc = 0x1c78d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1c78d8: 0xc6800520  lwc1        $f0, 0x520($s4)
    ctx->pc = 0x1c78d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c78dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c78dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c78e0: 0x0  nop
    ctx->pc = 0x1c78e0u;
    // NOP
    // 0x1c78e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c78e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c78e8: 0x0  nop
    ctx->pc = 0x1c78e8u;
    // NOP
    // 0x1c78ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C78ECu;
    {
        const bool branch_taken_0x1c78ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C78F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78ECu;
            // 0x1c78f0: 0x26950520  addiu       $s5, $s4, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78ec) {
            ctx->pc = 0x1C78FCu;
            goto label_1c78fc;
        }
    }
    ctx->pc = 0x1C78F4u;
    // 0x1c78f4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1C78F4u;
    {
        const bool branch_taken_0x1c78f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78F4u;
            // 0x1c78f8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f4) {
            ctx->pc = 0x1C7A74u;
            goto label_1c7a74;
        }
    }
    ctx->pc = 0x1C78FCu;
label_1c78fc:
    // 0x1c78fc: 0x0  nop
    ctx->pc = 0x1c78fcu;
    // NOP
    // 0x1c7900: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7900u;
    SET_GPR_U32(ctx, 31, 0x1C7908u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7908u; }
        if (ctx->pc != 0x1C7908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7908u; }
        if (ctx->pc != 0x1C7908u) { return; }
    }
    ctx->pc = 0x1C7908u;
label_1c7908:
    // 0x1c7908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c790c: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x1c790cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x1c7910: 0x3467999a  ori         $a3, $v1, 0x999A
    ctx->pc = 0x1c7910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c7914: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1c7914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7918: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c7918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c791c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1c791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1c7920: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c7924: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x1c7924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c7928: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c7928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1c792c: 0x268804a0  addiu       $t0, $s4, 0x4A0
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1184));
    // 0x1c7930: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1c7930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c7934: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1c7934u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7938: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1c7938u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c793c: 0x0  nop
    ctx->pc = 0x1c793cu;
    // NOP
    // 0x1c7940: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7944: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x1c7944u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1c7948: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1c7948u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c794c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1c794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7950: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1c7950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1c7954: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7958: 0x0  nop
    ctx->pc = 0x1c7958u;
    // NOP
    // 0x1c795c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c795cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c7960: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1c7960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1c7964: 0xc68204a0  lwc1        $f2, 0x4A0($s4)
    ctx->pc = 0x1c7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c796c: 0x0  nop
    ctx->pc = 0x1c796cu;
    // NOP
    // 0x1c7970: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c7970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c7974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7978: 0x0  nop
    ctx->pc = 0x1c7978u;
    // NOP
    // 0x1c797c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C797Cu;
    {
        const bool branch_taken_0x1c797c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C797Cu;
            // 0x1c7980: 0xe68104a0  swc1        $f1, 0x4A0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c797c) {
            ctx->pc = 0x1C798Cu;
            goto label_1c798c;
        }
    }
    ctx->pc = 0x1C7984u;
    // 0x1c7984: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1c7984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1c7988: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1c798c:
    // 0x1c798c: 0x0  nop
    ctx->pc = 0x1c798cu;
    // NOP
    // 0x1c7990: 0x86c4073a  lh          $a0, 0x73A($s6)
    ctx->pc = 0x1c7990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c7994: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7998: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7998u;
    {
        const bool branch_taken_0x1c7998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c7998) {
            ctx->pc = 0x1C79F8u;
            goto label_1c79f8;
        }
    }
    ctx->pc = 0x1C79A0u;
    // 0x1c79a0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C79A0u;
    SET_GPR_U32(ctx, 31, 0x1C79A8u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C79A8u; }
        if (ctx->pc != 0x1C79A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C79A8u; }
        if (ctx->pc != 0x1C79A8u) { return; }
    }
    ctx->pc = 0x1C79A8u;
label_1c79a8:
    // 0x1c79a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c79a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c79ac: 0x0  nop
    ctx->pc = 0x1c79acu;
    // NOP
    // 0x1c79b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c79b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c79b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c79b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c79b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c79bc: 0x0  nop
    ctx->pc = 0x1c79bcu;
    // NOP
    // 0x1c79c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c79c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c79c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c79c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c79c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c79cc: 0x0  nop
    ctx->pc = 0x1c79ccu;
    // NOP
    // 0x1c79d0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c79d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c79d4: 0x0  nop
    ctx->pc = 0x1c79d4u;
    // NOP
    // 0x1c79d8: 0x0  nop
    ctx->pc = 0x1c79d8u;
    // NOP
    // 0x1c79dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C79DCu;
    SET_GPR_U32(ctx, 31, 0x1C79E4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C79E4u; }
        if (ctx->pc != 0x1C79E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C79E4u; }
        if (ctx->pc != 0x1C79E4u) { return; }
    }
    ctx->pc = 0x1C79E4u;
label_1c79e4:
    // 0x1c79e4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1c79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c79e8: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1c79ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c79f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c79f4: 0xa46406fa  sh          $a0, 0x6FA($v1)
    ctx->pc = 0x1c79f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1786), (uint16_t)GPR_U32(ctx, 4));
label_1c79f8:
    // 0x1c79f8: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1c79fc: 0x246506ba  addiu       $a1, $v1, 0x6BA
    ctx->pc = 0x1c79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1722));
    // 0x1c7a00: 0x846306ba  lh          $v1, 0x6BA($v1)
    ctx->pc = 0x1c7a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1722)));
    // 0x1c7a04: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7A04u;
    {
        const bool branch_taken_0x1c7a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a04) {
            ctx->pc = 0x1C7A3Cu;
            goto label_1c7a3c;
        }
    }
    ctx->pc = 0x1C7A0Cu;
    // 0x1c7a0c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7a10: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1c7a14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7a18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a1c: 0x0  nop
    ctx->pc = 0x1c7a1cu;
    // NOP
    // 0x1c7a20: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c7a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c7a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7a28: 0x0  nop
    ctx->pc = 0x1c7a28u;
    // NOP
    // 0x1c7a2c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C7A2Cu;
    {
        const bool branch_taken_0x1c7a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A2Cu;
            // 0x1c7a30: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a2c) {
            ctx->pc = 0x1C7A74u;
            goto label_1c7a74;
        }
    }
    ctx->pc = 0x1C7A34u;
    // 0x1c7a34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C7A34u;
    {
        const bool branch_taken_0x1c7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A34u;
            // 0x1c7a38: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a34) {
            ctx->pc = 0x1C7A74u;
            goto label_1c7a74;
        }
    }
    ctx->pc = 0x1C7A3Cu;
label_1c7a3c:
    // 0x1c7a3c: 0x0  nop
    ctx->pc = 0x1c7a3cu;
    // NOP
    // 0x1c7a40: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x1c7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7a44: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c7a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7a48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1c7a4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c7a4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a54: 0x0  nop
    ctx->pc = 0x1c7a54u;
    // NOP
    // 0x1c7a58: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7a60: 0x0  nop
    ctx->pc = 0x1c7a60u;
    // NOP
    // 0x1c7a64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7A64u;
    {
        const bool branch_taken_0x1c7a64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A64u;
            // 0x1c7a68: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a64) {
            ctx->pc = 0x1C7A74u;
            goto label_1c7a74;
        }
    }
    ctx->pc = 0x1C7A6Cu;
    // 0x1c7a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7a70: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1c7a70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1c7a74:
    // 0x1c7a74: 0x0  nop
    ctx->pc = 0x1c7a74u;
    // NOP
    // 0x1c7a78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7a7c: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c7a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c7a80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c7a84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1c7a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c7a88: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1C7A88u;
    {
        const bool branch_taken_0x1c7a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A88u;
            // 0x1c7a8c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a88) {
            ctx->pc = 0x1C78D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c78d4;
        }
    }
    ctx->pc = 0x1C7A90u;
    // 0x1c7a90: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c7a94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7a98: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c7a98u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7a9c: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c7a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c7aa0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7AA0u;
    {
        const bool branch_taken_0x1c7aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AA0u;
            // 0x1c7aa4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7aa0) {
            ctx->pc = 0x1C7AACu;
            goto label_1c7aac;
        }
    }
    ctx->pc = 0x1C7AA8u;
    // 0x1c7aa8: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c7aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
label_1c7aac:
    // 0x1c7aac: 0x86c306b8  lh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1720)));
    // 0x1c7ab0: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1C7AB0u;
    {
        const bool branch_taken_0x1c7ab0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c7ab0) {
            ctx->pc = 0x1C7D04u;
            goto label_1c7d04;
        }
    }
    ctx->pc = 0x1C7AB8u;
    // 0x1c7ab8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7abc: 0xa6c306b8  sh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c7abcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7ac0: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c7ac4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7ac8: 0xa6c306b6  sh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c7ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7acc: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c7accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c7ad0: 0x1c60008c  bgtz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C7AD0u;
    {
        const bool branch_taken_0x1c7ad0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C7AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AD0u;
            // 0x1c7ad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ad0) {
            ctx->pc = 0x1C7D04u;
            goto label_1c7d04;
        }
    }
    ctx->pc = 0x1C7AD8u;
    // 0x1c7ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ae0:
    // 0x1c7ae0: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x1c7ae4: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7ae8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c7ae8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7aec: 0x0  nop
    ctx->pc = 0x1c7aecu;
    // NOP
    // 0x1c7af0: 0x45000080  bc1f        . + 4 + (0x80 << 2)
    ctx->pc = 0x1C7AF0u;
    {
        const bool branch_taken_0x1c7af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7af0) {
            ctx->pc = 0x1C7CF4u;
            goto label_1c7cf4;
        }
    }
    ctx->pc = 0x1C7AF8u;
    // 0x1c7af8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7AF8u;
    SET_GPR_U32(ctx, 31, 0x1C7B00u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B00u; }
        if (ctx->pc != 0x1C7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B00u; }
        if (ctx->pc != 0x1C7B00u) { return; }
    }
    ctx->pc = 0x1C7B00u;
label_1c7b00:
    // 0x1c7b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7b04: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7b08: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c7b0c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1c7b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7b14: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c7b18: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c7b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7b20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c7b20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7b2c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c7b2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7b30: 0x0  nop
    ctx->pc = 0x1c7b30u;
    // NOP
    // 0x1c7b34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c7b34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c7b38: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c7b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c7b3c: 0xe4600420  swc1        $f0, 0x420($v1)
    ctx->pc = 0x1c7b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1056), bits); }
    // 0x1c7b40: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7B40u;
    SET_GPR_U32(ctx, 31, 0x1C7B48u);
    ctx->pc = 0x1C7B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B40u;
            // 0x1c7b44: 0xac6204a0  sw          $v0, 0x4A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B48u; }
        if (ctx->pc != 0x1C7B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B48u; }
        if (ctx->pc != 0x1C7B48u) { return; }
    }
    ctx->pc = 0x1C7B48u;
label_1c7b48:
    // 0x1c7b48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7b4c: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1c7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1c7b50: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c7b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7b54: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c7b58: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c7b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c7b5c: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c7b60: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7b64: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1c7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c7b68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c7b68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c7b6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c7b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7b70: 0x0  nop
    ctx->pc = 0x1c7b70u;
    // NOP
    // 0x1c7b74: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c7b74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c7b78: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7b7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c7b7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7b80: 0x0  nop
    ctx->pc = 0x1c7b80u;
    // NOP
    // 0x1c7b84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c7b88: 0xe4600520  swc1        $f0, 0x520($v1)
    ctx->pc = 0x1c7b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1312), bits); }
    // 0x1c7b8c: 0xa44006ba  sh          $zero, 0x6BA($v0)
    ctx->pc = 0x1c7b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7b90: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7B90u;
    SET_GPR_U32(ctx, 31, 0x1C7B98u);
    ctx->pc = 0x1C7B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B90u;
            // 0x1c7b94: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B98u; }
        if (ctx->pc != 0x1C7B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B98u; }
        if (ctx->pc != 0x1C7B98u) { return; }
    }
    ctx->pc = 0x1C7B98u;
label_1c7b98:
    // 0x1c7b98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c7b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7b9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7ba0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7ba4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1c7ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c7ba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c7bac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7bb0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c7bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c7bb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7bbc: 0x0  nop
    ctx->pc = 0x1c7bbcu;
    // NOP
    // 0x1c7bc0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7bc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7bc4: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7bc8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7bcc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1c7bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c7bd0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7BD0u;
    SET_GPR_U32(ctx, 31, 0x1C7BD8u);
    ctx->pc = 0x1C7BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BD0u;
            // 0x1c7bd4: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BD8u; }
        if (ctx->pc != 0x1C7BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BD8u; }
        if (ctx->pc != 0x1C7BD8u) { return; }
    }
    ctx->pc = 0x1C7BD8u;
label_1c7bd8:
    // 0x1c7bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7bdc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7be0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7be8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7bf0: 0x0  nop
    ctx->pc = 0x1c7bf0u;
    // NOP
    // 0x1c7bf4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7bf8: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x1c7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c00: 0x0  nop
    ctx->pc = 0x1c7c00u;
    // NOP
    // 0x1c7c04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7c04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7c08: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7c0c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1c7c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1c7c10: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7C10u;
    SET_GPR_U32(ctx, 31, 0x1C7C18u);
    ctx->pc = 0x1C7C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C10u;
            // 0x1c7c14: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C18u; }
        if (ctx->pc != 0x1C7C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C18u; }
        if (ctx->pc != 0x1C7C18u) { return; }
    }
    ctx->pc = 0x1C7C18u;
label_1c7c18:
    // 0x1c7c18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c7c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7c1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7c20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c24: 0x2162021  addu        $a0, $s0, $s6
    ctx->pc = 0x1c7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7c28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c7c2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7c30: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c7c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c7c34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c3c: 0x0  nop
    ctx->pc = 0x1c7c3cu;
    // NOP
    // 0x1c7c40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7c40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7c44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7c48: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7c4c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1c7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1c7c50: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7C50u;
    SET_GPR_U32(ctx, 31, 0x1C7C58u);
    ctx->pc = 0x1C7C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C50u;
            // 0x1c7c54: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C58u; }
        if (ctx->pc != 0x1C7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C58u; }
        if (ctx->pc != 0x1C7C58u) { return; }
    }
    ctx->pc = 0x1C7C58u;
label_1c7c58:
    // 0x1c7c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c5c: 0x0  nop
    ctx->pc = 0x1c7c5cu;
    // NOP
    // 0x1c7c60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7c64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c7c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c6c: 0x0  nop
    ctx->pc = 0x1c7c6cu;
    // NOP
    // 0x1c7c70: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7c74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c7c: 0x0  nop
    ctx->pc = 0x1c7c7cu;
    // NOP
    // 0x1c7c80: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7c80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7c84: 0x0  nop
    ctx->pc = 0x1c7c84u;
    // NOP
    // 0x1c7c88: 0x0  nop
    ctx->pc = 0x1c7c88u;
    // NOP
    // 0x1c7c8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C94u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C94u; }
        if (ctx->pc != 0x1C7C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C94u; }
        if (ctx->pc != 0x1C7C94u) { return; }
    }
    ctx->pc = 0x1C7C94u;
label_1c7c94:
    // 0x1c7c94: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c7c98: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c7c9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c7ca0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c7ca4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x1C7CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CA4u;
            // 0x1c7ca8: 0xa46206fa  sh          $v0, 0x6FA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1786), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CACu; }
        if (ctx->pc != 0x1C7CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CACu; }
        if (ctx->pc != 0x1C7CACu) { return; }
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x86c306b4  lh          $v1, 0x6B4($s6)
    ctx->pc = 0x1c7cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1716)));
    // 0x1c7cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7cb4: 0x0  nop
    ctx->pc = 0x1c7cb4u;
    // NOP
    // 0x1c7cb8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c7cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c7cbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7cc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7cc8: 0x0  nop
    ctx->pc = 0x1c7cc8u;
    // NOP
    // 0x1c7ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7cd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7cd4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7cd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7cd8: 0x0  nop
    ctx->pc = 0x1c7cd8u;
    // NOP
    // 0x1c7cdc: 0x0  nop
    ctx->pc = 0x1c7cdcu;
    // NOP
    // 0x1c7ce0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7CE0u;
    SET_GPR_U32(ctx, 31, 0x1C7CE8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE8u; }
        if (ctx->pc != 0x1C7CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE8u; }
        if (ctx->pc != 0x1C7CE8u) { return; }
    }
    ctx->pc = 0x1C7CE8u;
label_1c7ce8:
    // 0x1c7ce8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7cec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7CECu;
    {
        const bool branch_taken_0x1c7cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CECu;
            // 0x1c7cf0: 0xa6c306b6  sh          $v1, 0x6B6($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cec) {
            ctx->pc = 0x1C7D04u;
            goto label_1c7d04;
        }
    }
    ctx->pc = 0x1C7CF4u;
label_1c7cf4:
    // 0x1c7cf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c7cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7cf8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c7cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c7cfc: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1C7CFCu;
    {
        const bool branch_taken_0x1c7cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CFCu;
            // 0x1c7d00: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cfc) {
            ctx->pc = 0x1C7AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7ae0;
        }
    }
    ctx->pc = 0x1C7D04u;
label_1c7d04:
    // 0x1c7d04: 0x0  nop
    ctx->pc = 0x1c7d04u;
    // NOP
    // 0x1c7d08: 0x2ae30020  slti        $v1, $s7, 0x20
    ctx->pc = 0x1c7d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c7d0c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7D0Cu;
    {
        const bool branch_taken_0x1c7d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d0c) {
            ctx->pc = 0x1C7D18u;
            goto label_1c7d18;
        }
    }
    ctx->pc = 0x1C7D14u;
    // 0x1c7d14: 0xa6c005ac  sh          $zero, 0x5AC($s6)
    ctx->pc = 0x1c7d14u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1452), (uint16_t)GPR_U32(ctx, 0));
label_1c7d18:
    // 0x1c7d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c7d1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7d20: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c7d20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7d24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7d24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7d28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c7d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7d2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7d30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7d34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7d38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7d3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D40u;
            // 0x1c7d44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7D48u;
}
