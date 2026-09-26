#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect<f>9mgRect<i>ffiiii
// Address: 0x2255c0 - 0x2257bc
void DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_ffiiii_0x2255c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_ffiiii_0x2255c0");
#endif

    switch (ctx->pc) {
        case 0x2256d4u: goto label_2256d4;
        case 0x2256e0u: goto label_2256e0;
        case 0x2256f8u: goto label_2256f8;
        case 0x225700u: goto label_225700;
        case 0x225708u: goto label_225708;
        case 0x22571cu: goto label_22571c;
        case 0x225738u: goto label_225738;
        case 0x225744u: goto label_225744;
        case 0x225754u: goto label_225754;
        case 0x225760u: goto label_225760;
        case 0x225788u: goto label_225788;
        default: break;
    }

    ctx->pc = 0x2255c0u;

    // 0x2255c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2255c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2255c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2255c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2255c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2255c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2255cc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2255ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2255d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2255d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2255d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2255d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2255d8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2255dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2255dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2255e0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2255e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2255e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2255e8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2255e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2255ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2255f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2255f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2255f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2255f8: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2255fc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2255fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x225600: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x225600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x225604: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x225604u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x225608: 0x2442cea0  addiu       $v0, $v0, -0x3160
    ctx->pc = 0x225608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954656));
    // 0x22560c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22560cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x225610: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x225610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225614: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x225614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x225618: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x225618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22561c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x22561cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x225620: 0x46046d03  div.s       $f20, $f13, $f4
    ctx->pc = 0x225620u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[13], ctx->f[4]); }
    // 0x225624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225628: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x225628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22562c: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x22562cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x225630: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x225630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x225634: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x225634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x225638: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x225638u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x22563c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22563cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225640: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x225640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x225644: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x225644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225648: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x225648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22564c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x22564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x225650: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x225650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225654: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x225654u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x225658: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x225658u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x22565c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x22565cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x225660: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x225660u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x225664: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x225664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x225668: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22566c: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x22566cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x225670: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x225670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x225674: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x225674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x225678: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x225678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22567c: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x22567cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225680: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x225680u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x225684: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x225684u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225688: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x225688u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22568c: 0x0  nop
    ctx->pc = 0x22568cu;
    // NOP
    // 0x225690: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225698: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x225698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22569c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x22569cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2256a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2256a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2256a4: 0x0  nop
    ctx->pc = 0x2256a4u;
    // NOP
    // 0x2256a8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2256a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2256ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2256acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2256b0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2256b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2256b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2256b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2256b8: 0x46021d40  add.s       $f21, $f3, $f2
    ctx->pc = 0x2256b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2256bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2256bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2256c0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2256c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2256c4: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2256c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2256c8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2256c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2256cc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2256CCu;
    SET_GPR_U32(ctx, 31, 0x2256D4u);
    ctx->pc = 0x2256D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256CCu;
            // 0x2256d0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256D4u; }
        if (ctx->pc != 0x2256D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256D4u; }
        if (ctx->pc != 0x2256D4u) { return; }
    }
    ctx->pc = 0x2256D4u;
label_2256d4:
    // 0x2256d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2256d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256d8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2256D8u;
    SET_GPR_U32(ctx, 31, 0x2256E0u);
    ctx->pc = 0x2256DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256D8u;
            // 0x2256dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256E0u; }
        if (ctx->pc != 0x2256E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256E0u; }
        if (ctx->pc != 0x2256E0u) { return; }
    }
    ctx->pc = 0x2256E0u;
label_2256e0:
    // 0x2256e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2256e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2256e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2256e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256ec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2256ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2256F0u;
    SET_GPR_U32(ctx, 31, 0x2256F8u);
    ctx->pc = 0x2256F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256F0u;
            // 0x2256f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256F8u; }
        if (ctx->pc != 0x2256F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256F8u; }
        if (ctx->pc != 0x2256F8u) { return; }
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2256f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2256fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225700:
    // 0x225700: 0xc047964  jal         func_11E590
    ctx->pc = 0x225700u;
    SET_GPR_U32(ctx, 31, 0x225708u);
    ctx->pc = 0x225704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225700u;
            // 0x225704: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225708u; }
        if (ctx->pc != 0x225708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225708u; }
        if (ctx->pc != 0x225708u) { return; }
    }
    ctx->pc = 0x225708u;
label_225708:
    // 0x225708: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x225708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22570c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x22570cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x225710: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x225710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x225714: 0xc047a42  jal         func_11E908
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x225718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225714u;
            // 0x225718: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22571Cu; }
        if (ctx->pc != 0x22571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22571Cu; }
        if (ctx->pc != 0x22571Cu) { return; }
    }
    ctx->pc = 0x22571Cu;
label_22571c:
    // 0x22571c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22571cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x225720: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x225720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x225724: 0x245300b0  addiu       $s3, $v0, 0xB0
    ctx->pc = 0x225724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x225728: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x225728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x22572c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x225730: 0xc0a248c  jal         func_289230
    ctx->pc = 0x225730u;
    SET_GPR_U32(ctx, 31, 0x225738u);
    ctx->pc = 0x225734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225730u;
            // 0x225734: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225738u; }
        if (ctx->pc != 0x225738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225738u; }
        if (ctx->pc != 0x225738u) { return; }
    }
    ctx->pc = 0x225738u;
label_225738:
    // 0x225738: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x225738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22573c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22573Cu;
    SET_GPR_U32(ctx, 31, 0x225744u);
    ctx->pc = 0x225740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22573Cu;
            // 0x225740: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225744u; }
        if (ctx->pc != 0x225744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225744u; }
        if (ctx->pc != 0x225744u) { return; }
    }
    ctx->pc = 0x225744u;
label_225744:
    // 0x225744: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x225744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x225748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22574c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22574Cu;
    SET_GPR_U32(ctx, 31, 0x225754u);
    ctx->pc = 0x225750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22574Cu;
            // 0x225750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225754u; }
        if (ctx->pc != 0x225754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225754u; }
        if (ctx->pc != 0x225754u) { return; }
    }
    ctx->pc = 0x225754u;
label_225754:
    // 0x225754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225758: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x225758u;
    SET_GPR_U32(ctx, 31, 0x225760u);
    ctx->pc = 0x22575Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225758u;
            // 0x22575c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225760u; }
        if (ctx->pc != 0x225760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225760u; }
        if (ctx->pc != 0x225760u) { return; }
    }
    ctx->pc = 0x225760u;
label_225760:
    // 0x225760: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x225764: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225768: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22576c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x225770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225774: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x225774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x225778: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x225778u;
    {
        const bool branch_taken_0x225778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225778u;
            // 0x22577c: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225778) {
            ctx->pc = 0x225700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225700;
        }
    }
    ctx->pc = 0x225780u;
    // 0x225780: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x225780u;
    SET_GPR_U32(ctx, 31, 0x225788u);
    ctx->pc = 0x225784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225780u;
            // 0x225784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225788u; }
        if (ctx->pc != 0x225788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225788u; }
        if (ctx->pc != 0x225788u) { return; }
    }
    ctx->pc = 0x225788u;
label_225788:
    // 0x225788: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x225788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22578c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x225790: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x225790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x225794: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x225794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x225798: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x225798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22579c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2257a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2257a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2257a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2257a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2257a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2257a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2257ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2257acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2257b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2257b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2257b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2257B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2257B4u;
            // 0x2257b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2257BCu;
}
