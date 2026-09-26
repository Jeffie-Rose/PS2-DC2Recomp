#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHitsSphere__FP6CCPolyiPfiPiPA4_fii
// Address: 0x14f200 - 0x14f5e4
void CheckHitsSphere__FP6CCPolyiPfiPiPA4_fii_0x14f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitsSphere__FP6CCPolyiPfiPiPA4_fii_0x14f200");
#endif

    switch (ctx->pc) {
        case 0x14f2d8u: goto label_14f2d8;
        case 0x14f300u: goto label_14f300;
        case 0x14f398u: goto label_14f398;
        case 0x14f3acu: goto label_14f3ac;
        case 0x14f3d4u: goto label_14f3d4;
        case 0x14f420u: goto label_14f420;
        case 0x14f434u: goto label_14f434;
        case 0x14f484u: goto label_14f484;
        case 0x14f490u: goto label_14f490;
        case 0x14f49cu: goto label_14f49c;
        case 0x14f4f8u: goto label_14f4f8;
        case 0x14f50cu: goto label_14f50c;
        case 0x14f55cu: goto label_14f55c;
        case 0x14f568u: goto label_14f568;
        case 0x14f574u: goto label_14f574;
        default: break;
    }

    ctx->pc = 0x14f200u;

    // 0x14f200: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x14f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x14f204: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f208: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14f20c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f210: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14f214: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f218: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x14f218u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f21c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f220: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x14f220u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f228: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x14f228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f22c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f230: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x14f230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x14f234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f23c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14f23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14f244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f24c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14f24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f250: 0xafa900d0  sw          $t1, 0xD0($sp)
    ctx->pc = 0x14f250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 9));
    // 0x14f254: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x14f254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f258: 0xafaa00cc  sw          $t2, 0xCC($sp)
    ctx->pc = 0x14f258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 10));
    // 0x14f25c: 0xafab00c8  sw          $t3, 0xC8($sp)
    ctx->pc = 0x14f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 11));
    // 0x14f260: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x14f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f264: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x14f264u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f268: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x14f268u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x14f26c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x14f26cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f270: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x14f270u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x14f274: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f278: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x14f27c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f27cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f280: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x14f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x14f284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f28c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f290: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x14f294: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f29c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f2a0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x14f2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2a4: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x14f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x14f2a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f2ac: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14f2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x14f2b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f2b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f2bc: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x14f2c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f2c8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x14F2C8u;
    {
        const bool branch_taken_0x14f2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2C8u;
            // 0x14f2cc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2c8) {
            ctx->pc = 0x14F3F0u;
            goto label_14f3f0;
        }
    }
    ctx->pc = 0x14F2D0u;
    // 0x14f2d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f2d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14f2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f2d8:
    // 0x14f2d8: 0x86630046  lh          $v1, 0x46($s3)
    ctx->pc = 0x14f2d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x14f2dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x14f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14f2e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f2e4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x14F2E4u;
    {
        const bool branch_taken_0x14f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2E4u;
            // 0x14f2e8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e4) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F2ECu;
    // 0x14f2ec: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x14f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f2f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14f2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2f4: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x14f2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x14f2f8: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x14F2F8u;
    SET_GPR_U32(ctx, 31, 0x14F300u);
    ctx->pc = 0x14F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2F8u;
            // 0x14f2fc: 0x26680020  addiu       $t0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F300u; }
        if (ctx->pc != 0x14F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F300u; }
        if (ctx->pc != 0x14F300u) { return; }
    }
    ctx->pc = 0x14F300u;
label_14f300:
    // 0x14f300: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x14f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f304: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x14f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f30c: 0x0  nop
    ctx->pc = 0x14f30cu;
    // NOP
    // 0x14f310: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x14F310u;
    {
        const bool branch_taken_0x14f310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F310u;
            // 0x14f314: 0x27a20114  addiu       $v0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f310) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F318u;
    // 0x14f318: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f31c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x14f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f324: 0x0  nop
    ctx->pc = 0x14f324u;
    // NOP
    // 0x14f328: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F328u;
            // 0x14f32c: 0x27a20118  addiu       $v0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F330u;
    // 0x14f330: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f334: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x14f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f33c: 0x0  nop
    ctx->pc = 0x14f33cu;
    // NOP
    // 0x14f340: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x14F340u;
    {
        const bool branch_taken_0x14f340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f340) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F348u;
    // 0x14f348: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x14f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f34c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x14f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f350: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f354: 0x0  nop
    ctx->pc = 0x14f354u;
    // NOP
    // 0x14f358: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x14F358u;
    {
        const bool branch_taken_0x14f358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F358u;
            // 0x14f35c: 0x27a20124  addiu       $v0, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f358) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F360u;
    // 0x14f360: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f364: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x14f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f36c: 0x0  nop
    ctx->pc = 0x14f36cu;
    // NOP
    // 0x14f370: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F370u;
            // 0x14f374: 0x27a20128  addiu       $v0, $sp, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F378u;
    // 0x14f378: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f37c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x14f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f384: 0x0  nop
    ctx->pc = 0x14f384u;
    // NOP
    // 0x14f388: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x14F388u;
    {
        const bool branch_taken_0x14f388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F388u;
            // 0x14f38c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f388) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F390u;
    // 0x14f390: 0xc041be0  jal         func_106F80
    ctx->pc = 0x14F390u;
    SET_GPR_U32(ctx, 31, 0x14F398u);
    ctx->pc = 0x14F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F390u;
            // 0x14f394: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F398u; }
        if (ctx->pc != 0x14F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F398u; }
        if (ctx->pc != 0x14F398u) { return; }
    }
    ctx->pc = 0x14F398u;
label_14f398:
    // 0x14f398: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f39c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3a0: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x14f3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14f3a4: 0xc0b7910  jal         func_2DE440
    ctx->pc = 0x14F3A4u;
    SET_GPR_U32(ctx, 31, 0x14F3ACu);
    ctx->pc = 0x14F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3A4u;
            // 0x14f3a8: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE440u;
    if (runtime->hasFunction(0x2DE440u)) {
        auto targetFn = runtime->lookupFunction(0x2DE440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3ACu; }
        if (ctx->pc != 0x14F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionSpherePoly3__FPfPA4_fPfPf_0x2de440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3ACu; }
        if (ctx->pc != 0x14F3ACu) { return; }
    }
    ctx->pc = 0x14F3ACu;
label_14f3ac:
    // 0x14f3ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14F3ACu;
    {
        const bool branch_taken_0x14f3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3ACu;
            // 0x14f3b0: 0x23e082a  slt         $at, $s1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3ac) {
            ctx->pc = 0x14F3E0u;
            goto label_14f3e0;
        }
    }
    ctx->pc = 0x14F3B4u;
    // 0x14f3b4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14F3B4u;
    {
        const bool branch_taken_0x14f3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3b4) {
            ctx->pc = 0x14F3F0u;
            goto label_14f3f0;
        }
    }
    ctx->pc = 0x14F3BCu;
    // 0x14f3bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f3c0: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x14f3c4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x14f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14f3c8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14f3cc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F3CCu;
    SET_GPR_U32(ctx, 31, 0x14F3D4u);
    ctx->pc = 0x14F3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3CCu;
            // 0x14f3d0: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3D4u; }
        if (ctx->pc != 0x14F3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3D4u; }
        if (ctx->pc != 0x14F3D4u) { return; }
    }
    ctx->pc = 0x14F3D4u;
label_14f3d4:
    // 0x14f3d4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14f3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x14f3d8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x14f3dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14f3e0:
    // 0x14f3e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14f3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14f3e4: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x14f3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x14f3e8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x14F3E8u;
    {
        const bool branch_taken_0x14f3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3E8u;
            // 0x14f3ec: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e8) {
            ctx->pc = 0x14F2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f2d8;
        }
    }
    ctx->pc = 0x14F3F0u;
label_14f3f0:
    // 0x14f3f0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x14f3f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F404u;
            goto label_14f404;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14F3FCu;
    {
        const bool branch_taken_0x14f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3FCu;
            // 0x14f400: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3fc) {
            ctx->pc = 0x14F5B4u;
            goto label_14f5b4;
        }
    }
    ctx->pc = 0x14F404u;
label_14f404:
    // 0x14f404: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F404u;
    {
        const bool branch_taken_0x14f404 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F404u;
            // 0x14f408: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f404) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F40Cu;
    // 0x14f40c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14f40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f410: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14F410u;
    {
        const bool branch_taken_0x14f410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F410u;
            // 0x14f414: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f410) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F418u;
    // 0x14f418: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14f418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14f41c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f41cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f420:
    // 0x14f420: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f424: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x14f424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f428: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F428u;
    {
        const bool branch_taken_0x14f428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F428u;
            // 0x14f42c: 0x12f100  sll         $fp, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f428) {
            ctx->pc = 0x14F4B4u;
            goto label_14f4b4;
        }
    }
    ctx->pc = 0x14F430u;
    // 0x14f430: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_14f434:
    // 0x14f434: 0x0  nop
    ctx->pc = 0x14f434u;
    // NOP
    // 0x14f438: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f43c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x14f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f440: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f444: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f448: 0x5eb021  addu        $s6, $v0, $fp
    ctx->pc = 0x14f448u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14f44c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f450: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x14f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f458: 0x0  nop
    ctx->pc = 0x14f458u;
    // NOP
    // 0x14f45c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14F45Cu;
    {
        const bool branch_taken_0x14f45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F45Cu;
            // 0x14f460: 0x2143021  addu        $a2, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f45c) {
            ctx->pc = 0x14F49Cu;
            goto label_14f49c;
        }
    }
    ctx->pc = 0x14F464u;
    // 0x14f464: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x14f468: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f46c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14f470: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f474: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14f474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f478: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14f478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14f47c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F47Cu;
    SET_GPR_U32(ctx, 31, 0x14F484u);
    ctx->pc = 0x14F480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F47Cu;
            // 0x14f480: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F484u; }
        if (ctx->pc != 0x14F484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F484u; }
        if (ctx->pc != 0x14F484u) { return; }
    }
    ctx->pc = 0x14F484u;
label_14f484:
    // 0x14f484: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14f484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f488: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F488u;
    SET_GPR_U32(ctx, 31, 0x14F490u);
    ctx->pc = 0x14F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F488u;
            // 0x14f48c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F490u; }
        if (ctx->pc != 0x14F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F490u; }
        if (ctx->pc != 0x14F490u) { return; }
    }
    ctx->pc = 0x14F490u;
label_14f490:
    // 0x14f490: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f494: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F494u;
    SET_GPR_U32(ctx, 31, 0x14F49Cu);
    ctx->pc = 0x14F498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F494u;
            // 0x14f498: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F49Cu; }
        if (ctx->pc != 0x14F49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F49Cu; }
        if (ctx->pc != 0x14F49Cu) { return; }
    }
    ctx->pc = 0x14F49Cu;
label_14f49c:
    // 0x14f49c: 0x0  nop
    ctx->pc = 0x14f49cu;
    // NOP
    // 0x14f4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14f4a4: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x14f4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f4a8: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14f4a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14f4ac: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14F4ACu;
    {
        const bool branch_taken_0x14f4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4ACu;
            // 0x14f4b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ac) {
            ctx->pc = 0x14F434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f434;
        }
    }
    ctx->pc = 0x14F4B4u;
label_14f4b4:
    // 0x14f4b4: 0x0  nop
    ctx->pc = 0x14f4b4u;
    // NOP
    // 0x14f4b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f4bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f4c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f4c4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x14f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x14f4c8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14f4cc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x14f4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f4d0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14F4D0u;
    {
        const bool branch_taken_0x14f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4D0u;
            // 0x14f4d4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4d0) {
            ctx->pc = 0x14F420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f420;
        }
    }
    ctx->pc = 0x14F4D8u;
label_14f4d8:
    // 0x14f4d8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x14f4dc: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F4DCu;
    {
        const bool branch_taken_0x14f4dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4DCu;
            // 0x14f4e0: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4dc) {
            ctx->pc = 0x14F5B0u;
            goto label_14f5b0;
        }
    }
    ctx->pc = 0x14F4E4u;
    // 0x14f4e4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14f4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f4e8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14F4E8u;
    {
        const bool branch_taken_0x14f4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4E8u;
            // 0x14f4ec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4e8) {
            ctx->pc = 0x14F5B0u;
            goto label_14f5b0;
        }
    }
    ctx->pc = 0x14F4F0u;
    // 0x14f4f0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x14f4f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f4f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f4f8:
    // 0x14f4f8: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f4fc: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x14f4fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f500: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F500u;
    {
        const bool branch_taken_0x14f500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F500u;
            // 0x14f504: 0x16f100  sll         $fp, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f500) {
            ctx->pc = 0x14F58Cu;
            goto label_14f58c;
        }
    }
    ctx->pc = 0x14F508u;
    // 0x14f508: 0x169080  sll         $s2, $s6, 2
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_14f50c:
    // 0x14f50c: 0x0  nop
    ctx->pc = 0x14f50cu;
    // NOP
    // 0x14f510: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x14f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f514: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f518: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f51c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14f51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f520: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x14f520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14f524: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f528: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x14f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f52c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f530: 0x0  nop
    ctx->pc = 0x14f530u;
    // NOP
    // 0x14f534: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14F534u;
    {
        const bool branch_taken_0x14f534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F534u;
            // 0x14f538: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f534) {
            ctx->pc = 0x14F574u;
            goto label_14f574;
        }
    }
    ctx->pc = 0x14F53Cu;
    // 0x14f53c: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x14f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14f540: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f544: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14f548: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f54c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14f54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f550: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14f550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14f554: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F554u;
    SET_GPR_U32(ctx, 31, 0x14F55Cu);
    ctx->pc = 0x14F558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F554u;
            // 0x14f558: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F55Cu; }
        if (ctx->pc != 0x14F55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F55Cu; }
        if (ctx->pc != 0x14F55Cu) { return; }
    }
    ctx->pc = 0x14F55Cu;
label_14f55c:
    // 0x14f55c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14f55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f560: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F560u;
    SET_GPR_U32(ctx, 31, 0x14F568u);
    ctx->pc = 0x14F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F560u;
            // 0x14f564: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F568u; }
        if (ctx->pc != 0x14F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F568u; }
        if (ctx->pc != 0x14F568u) { return; }
    }
    ctx->pc = 0x14F568u;
label_14f568:
    // 0x14f568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f56c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F56Cu;
    SET_GPR_U32(ctx, 31, 0x14F574u);
    ctx->pc = 0x14F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F56Cu;
            // 0x14f570: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F574u; }
        if (ctx->pc != 0x14F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F574u; }
        if (ctx->pc != 0x14F574u) { return; }
    }
    ctx->pc = 0x14F574u;
label_14f574:
    // 0x14f574: 0x0  nop
    ctx->pc = 0x14f574u;
    // NOP
    // 0x14f578: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14f57c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x14f57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f580: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14f580u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14f584: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14F584u;
    {
        const bool branch_taken_0x14f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F584u;
            // 0x14f588: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f584) {
            ctx->pc = 0x14F50Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f50c;
        }
    }
    ctx->pc = 0x14F58Cu;
label_14f58c:
    // 0x14f58c: 0x0  nop
    ctx->pc = 0x14f58cu;
    // NOP
    // 0x14f590: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f594: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14f594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f598: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f59c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14f5a0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14f5a4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x14f5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f5a8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14F5A8u;
    {
        const bool branch_taken_0x14f5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5A8u;
            // 0x14f5ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5a8) {
            ctx->pc = 0x14F4F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f4f8;
        }
    }
    ctx->pc = 0x14F5B0u;
label_14f5b0:
    // 0x14f5b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f5b4:
    // 0x14f5b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14f5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f5b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14f5b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f5bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14f5bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f5c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14f5c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f5c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14f5c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f5c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f5c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f5cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f5d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f5d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f5d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14F5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5DCu;
            // 0x14f5e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F5E4u;
}
