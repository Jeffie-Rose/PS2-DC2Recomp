#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__17CMapEffect_SpriteFPf
// Address: 0x1c3f60 - 0x1c418c
void Set__17CMapEffect_SpriteFPf_0x1c3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__17CMapEffect_SpriteFPf_0x1c3f60");
#endif

    switch (ctx->pc) {
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f98u: goto label_1c3f98;
        case 0x1c3fe8u: goto label_1c3fe8;
        case 0x1c4034u: goto label_1c4034;
        case 0x1c4074u: goto label_1c4074;
        case 0x1c4084u: goto label_1c4084;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4178u: goto label_1c4178;
        default: break;
    }

    ctx->pc = 0x1c3f60u;

    // 0x1c3f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3f70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f74: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C3F74u;
    SET_GPR_U32(ctx, 31, 0x1C3F7Cu);
    ctx->pc = 0x1C3F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F74u;
            // 0x1c3f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F7Cu; }
        if (ctx->pc != 0x1C3F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F7Cu; }
        if (ctx->pc != 0x1C3F7Cu) { return; }
    }
    ctx->pc = 0x1C3F7Cu;
label_1c3f7c:
    // 0x1c3f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x1C3F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F80u;
            // 0x1c3f84: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F88u; }
        if (ctx->pc != 0x1C3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F88u; }
        if (ctx->pc != 0x1C3F88u) { return; }
    }
    ctx->pc = 0x1C3F88u;
label_1c3f88:
    // 0x1c3f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3f8c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1c3f90: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C3F90u;
    SET_GPR_U32(ctx, 31, 0x1C3F98u);
    ctx->pc = 0x1C3F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F90u;
            // 0x1c3f94: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F98u; }
        if (ctx->pc != 0x1C3F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F98u; }
        if (ctx->pc != 0x1C3F98u) { return; }
    }
    ctx->pc = 0x1C3F98u;
label_1c3f98:
    // 0x1c3f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3f9c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1c3fa0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c3fa4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c3fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3fa8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1c3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1c3fac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c3facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3fb0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c3fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3fb4: 0x0  nop
    ctx->pc = 0x1c3fb4u;
    // NOP
    // 0x1c3fb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c3fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c3fbc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c3fc0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c3fc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3fc4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1c3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3fc8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c3fc8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c3fcc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c3fccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c3fd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c3fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3fd4: 0x0  nop
    ctx->pc = 0x1c3fd4u;
    // NOP
    // 0x1c3fd8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c3fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c3fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c3fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c3fe0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C3FE0u;
    SET_GPR_U32(ctx, 31, 0x1C3FE8u);
    ctx->pc = 0x1C3FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FE0u;
            // 0x1c3fe4: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FE8u; }
        if (ctx->pc != 0x1C3FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FE8u; }
        if (ctx->pc != 0x1C3FE8u) { return; }
    }
    ctx->pc = 0x1C3FE8u;
label_1c3fe8:
    // 0x1c3fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3fec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c3fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c3ff0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1c3ff4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c3ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c3ff8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1c3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1c3ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4000: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1c4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4004: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x1c4004u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4008: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c400c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c400cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4014: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1c4014u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1c4018: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1c4018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c401c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c401cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4020: 0x0  nop
    ctx->pc = 0x1c4020u;
    // NOP
    // 0x1c4024: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c4024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c402c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C402Cu;
    SET_GPR_U32(ctx, 31, 0x1C4034u);
    ctx->pc = 0x1C4030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C402Cu;
            // 0x1c4030: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4034u; }
        if (ctx->pc != 0x1C4034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4034u; }
        if (ctx->pc != 0x1C4034u) { return; }
    }
    ctx->pc = 0x1C4034u;
label_1c4034:
    // 0x1c4034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4038: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c403c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c403cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4040: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1c4040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1c4044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4048: 0x0  nop
    ctx->pc = 0x1c4048u;
    // NOP
    // 0x1c404c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c404cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c4050: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1c4050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1c4054: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c405c: 0x0  nop
    ctx->pc = 0x1c405cu;
    // NOP
    // 0x1c4060: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c4060u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c4064: 0x0  nop
    ctx->pc = 0x1c4064u;
    // NOP
    // 0x1c4068: 0x0  nop
    ctx->pc = 0x1c4068u;
    // NOP
    // 0x1c406c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C406Cu;
    SET_GPR_U32(ctx, 31, 0x1C4074u);
    ctx->pc = 0x1C4070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C406Cu;
            // 0x1c4070: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4074u; }
        if (ctx->pc != 0x1C4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4074u; }
        if (ctx->pc != 0x1C4074u) { return; }
    }
    ctx->pc = 0x1C4074u;
label_1c4074:
    // 0x1c4074: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1c4074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1c4078: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1c4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c407c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C407Cu;
    SET_GPR_U32(ctx, 31, 0x1C4084u);
    ctx->pc = 0x1C4080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C407Cu;
            // 0x1c4080: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4084u; }
        if (ctx->pc != 0x1C4084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4084u; }
        if (ctx->pc != 0x1C4084u) { return; }
    }
    ctx->pc = 0x1C4084u;
label_1c4084:
    // 0x1c4084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4088: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c408c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c408cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4090: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c4094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4098: 0x0  nop
    ctx->pc = 0x1c4098u;
    // NOP
    // 0x1c409c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c409cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c40a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c40a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c40a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c40a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c40a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c40ac: 0x0  nop
    ctx->pc = 0x1c40acu;
    // NOP
    // 0x1c40b0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c40b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c40b4: 0x0  nop
    ctx->pc = 0x1c40b4u;
    // NOP
    // 0x1c40b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c40b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c40bc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C40BCu;
    SET_GPR_U32(ctx, 31, 0x1C40C4u);
    ctx->pc = 0x1C40C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40BCu;
            // 0x1c40c0: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40C4u; }
        if (ctx->pc != 0x1C40C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40C4u; }
        if (ctx->pc != 0x1C40C4u) { return; }
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c40c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c40c8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c40cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c40ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c40d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c40d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c40d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c40d8: 0x0  nop
    ctx->pc = 0x1c40d8u;
    // NOP
    // 0x1c40dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c40dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c40e0: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c40e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c40e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c40e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c40e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c40ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c40ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c40f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c40f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c40f4: 0x0  nop
    ctx->pc = 0x1c40f4u;
    // NOP
    // 0x1c40f8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c40f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c40fc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C40FCu;
    SET_GPR_U32(ctx, 31, 0x1C4104u);
    ctx->pc = 0x1C4100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40FCu;
            // 0x1c4100: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4104u; }
        if (ctx->pc != 0x1C4104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4104u; }
        if (ctx->pc != 0x1C4104u) { return; }
    }
    ctx->pc = 0x1C4104u;
label_1c4104:
    // 0x1c4104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4108: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c410c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4110: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c4110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4114: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c411c: 0x0  nop
    ctx->pc = 0x1c411cu;
    // NOP
    // 0x1c4120: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c4120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c4124: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c4124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c4128: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c4128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c412c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c4130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4134: 0x0  nop
    ctx->pc = 0x1c4134u;
    // NOP
    // 0x1c4138: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c413c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1c413cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1c4140: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1c4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4144: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c4144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c414c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c4150: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c4150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4154: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1c4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c415c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c4160: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1c4160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4164: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4168: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c416c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1c416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c4170: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C4170u;
    SET_GPR_U32(ctx, 31, 0x1C4178u);
    ctx->pc = 0x1C4174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4170u;
            // 0x1c4174: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4178u; }
        if (ctx->pc != 0x1C4178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4178u; }
        if (ctx->pc != 0x1C4178u) { return; }
    }
    ctx->pc = 0x1C4178u;
label_1c4178:
    // 0x1c4178: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c417c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c417cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4184u;
            // 0x1c4188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C418Cu;
}
