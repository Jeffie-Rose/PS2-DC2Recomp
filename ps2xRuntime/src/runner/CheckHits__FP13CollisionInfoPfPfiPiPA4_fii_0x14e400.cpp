#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHits__FP13CollisionInfoPfPfiPiPA4_fii
// Address: 0x14e400 - 0x14e818
void CheckHits__FP13CollisionInfoPfPfiPiPA4_fii_0x14e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHits__FP13CollisionInfoPfPfiPiPA4_fii_0x14e400");
#endif

    switch (ctx->pc) {
        case 0x14e468u: goto label_14e468;
        case 0x14e490u: goto label_14e490;
        case 0x14e4bcu: goto label_14e4bc;
        case 0x14e55cu: goto label_14e55c;
        case 0x14e568u: goto label_14e568;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e588u: goto label_14e588;
        case 0x14e5f8u: goto label_14e5f8;
        case 0x14e628u: goto label_14e628;
        case 0x14e634u: goto label_14e634;
        case 0x14e680u: goto label_14e680;
        case 0x14e688u: goto label_14e688;
        case 0x14e6d8u: goto label_14e6d8;
        case 0x14e6ecu: goto label_14e6ec;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e738u: goto label_14e738;
        case 0x14e740u: goto label_14e740;
        case 0x14e790u: goto label_14e790;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7b4u: goto label_14e7b4;
        default: break;
    }

    ctx->pc = 0x14e400u;

    // 0x14e400: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x14e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x14e404: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14e408: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14e40c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14e410: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x14e410u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e414: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14e418: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x14e418u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e41c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14e420: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x14e420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e424: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14e424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14e428: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14e428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e42c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14e430: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x14e430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e434: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e438: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x14e438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e43c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e440: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14e444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e448: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14e448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e44c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e450: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e454: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x14e454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x14e458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e45c: 0xafab00c8  sw          $t3, 0xC8($sp)
    ctx->pc = 0x14e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 11));
    // 0x14e460: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x14E460u;
    SET_GPR_U32(ctx, 31, 0x14E468u);
    ctx->pc = 0x14E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E460u;
            // 0x14e464: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E468u; }
        if (ctx->pc != 0x14E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E468u; }
        if (ctx->pc != 0x14E468u) { return; }
    }
    ctx->pc = 0x14E468u;
label_14e468:
    // 0x14e468: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14e468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14e46c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x14e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14e470: 0xd86a0000  lqc2        $vf10, 0x0($v1)
    ctx->pc = 0x14e470u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e474: 0xd84b0000  lqc2        $vf11, 0x0($v0)
    ctx->pc = 0x14e474u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e478: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14e478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e47c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x14e480: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x14e480u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e488: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x14E488u;
    {
        const bool branch_taken_0x14e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E488u;
            // 0x14e48c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e488) {
            ctx->pc = 0x14E650u;
            goto label_14e650;
        }
    }
    ctx->pc = 0x14E490u;
label_14e490:
    // 0x14e490: 0x86430046  lh          $v1, 0x46($s2)
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x14e494: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x14e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14e498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e49c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x14E49Cu;
    {
        const bool branch_taken_0x14e49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e49c) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E4A4u;
    // 0x14e4a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14e4a8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x14e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14e4ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4b0: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14e4b4: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x14E4B4u;
    SET_GPR_U32(ctx, 31, 0x14E4BCu);
    ctx->pc = 0x14E4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4B4u;
            // 0x14e4b8: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4BCu; }
        if (ctx->pc != 0x14E4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4BCu; }
        if (ctx->pc != 0x14E4BCu) { return; }
    }
    ctx->pc = 0x14E4BCu;
label_14e4bc:
    // 0x14e4bc: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x14e4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e4c0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e4c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e4c8: 0x0  nop
    ctx->pc = 0x14e4c8u;
    // NOP
    // 0x14e4cc: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
    ctx->pc = 0x14E4CCu;
    {
        const bool branch_taken_0x14e4cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e4cc) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E4D4u;
    // 0x14e4d4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x14e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e4d8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x14e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e4dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e4e0: 0x0  nop
    ctx->pc = 0x14e4e0u;
    // NOP
    // 0x14e4e4: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x14E4E4u;
    {
        const bool branch_taken_0x14e4e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e4e4) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E4ECu;
    // 0x14e4ec: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e4f0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x14e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e4f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e4f8: 0x0  nop
    ctx->pc = 0x14e4f8u;
    // NOP
    // 0x14e4fc: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x14E4FCu;
    {
        const bool branch_taken_0x14e4fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e4fc) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E504u;
    // 0x14e504: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x14e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e508: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x14e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e510: 0x0  nop
    ctx->pc = 0x14e510u;
    // NOP
    // 0x14e514: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x14E514u;
    {
        const bool branch_taken_0x14e514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e514) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E51Cu;
    // 0x14e51c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x14e51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e520: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x14e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e528: 0x0  nop
    ctx->pc = 0x14e528u;
    // NOP
    // 0x14e52c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x14E52Cu;
    {
        const bool branch_taken_0x14e52c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e52c) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E534u;
    // 0x14e534: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x14e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e538: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x14e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e53c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e540: 0x0  nop
    ctx->pc = 0x14e540u;
    // NOP
    // 0x14e544: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x14E544u;
    {
        const bool branch_taken_0x14e544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e544) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E54Cu;
    // 0x14e54c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14e550: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e554: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14E554u;
    SET_GPR_U32(ctx, 31, 0x14E55Cu);
    ctx->pc = 0x14E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E554u;
            // 0x14e558: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E55Cu; }
        if (ctx->pc != 0x14E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E55Cu; }
        if (ctx->pc != 0x14E55Cu) { return; }
    }
    ctx->pc = 0x14E55Cu;
label_14e55c:
    // 0x14e55c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x14e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e560: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x14E560u;
    SET_GPR_U32(ctx, 31, 0x14E568u);
    ctx->pc = 0x14E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E560u;
            // 0x14e564: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E568u; }
        if (ctx->pc != 0x14E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E568u; }
        if (ctx->pc != 0x14E568u) { return; }
    }
    ctx->pc = 0x14E568u;
label_14e568:
    // 0x14e568: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14e568u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14e56c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14e570: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14e570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e574: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14E574u;
    SET_GPR_U32(ctx, 31, 0x14E57Cu);
    ctx->pc = 0x14E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E574u;
            // 0x14e578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E57Cu; }
        if (ctx->pc != 0x14E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E57Cu; }
        if (ctx->pc != 0x14E57Cu) { return; }
    }
    ctx->pc = 0x14E57Cu;
label_14e57c:
    // 0x14e57c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x14e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e580: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x14E580u;
    SET_GPR_U32(ctx, 31, 0x14E588u);
    ctx->pc = 0x14E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E580u;
            // 0x14e584: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E588u; }
        if (ctx->pc != 0x14E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E588u; }
        if (ctx->pc != 0x14E588u) { return; }
    }
    ctx->pc = 0x14E588u;
label_14e588:
    // 0x14e588: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e58c: 0x0  nop
    ctx->pc = 0x14e58cu;
    // NOP
    // 0x14e590: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x14e590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e594: 0x0  nop
    ctx->pc = 0x14e594u;
    // NOP
    // 0x14e598: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14E598u;
    {
        const bool branch_taken_0x14e598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e598) {
            ctx->pc = 0x14E5B0u;
            goto label_14e5b0;
        }
    }
    ctx->pc = 0x14E5A0u;
    // 0x14e5a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14e5a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e5a4: 0x0  nop
    ctx->pc = 0x14e5a4u;
    // NOP
    // 0x14e5a8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x14E5A8u;
    {
        const bool branch_taken_0x14e5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e5a8) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E5B0u;
label_14e5b0:
    // 0x14e5b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e5b4: 0x0  nop
    ctx->pc = 0x14e5b4u;
    // NOP
    // 0x14e5b8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x14e5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e5bc: 0x0  nop
    ctx->pc = 0x14e5bcu;
    // NOP
    // 0x14e5c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14E5C0u;
    {
        const bool branch_taken_0x14e5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e5c0) {
            ctx->pc = 0x14E5D8u;
            goto label_14e5d8;
        }
    }
    ctx->pc = 0x14E5C8u;
    // 0x14e5c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e5cc: 0x0  nop
    ctx->pc = 0x14e5ccu;
    // NOP
    // 0x14e5d0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x14E5D0u;
    {
        const bool branch_taken_0x14e5d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e5d0) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E5D8u;
label_14e5d8:
    // 0x14e5d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e4: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14e5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14e5e8: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14e5ec: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x14e5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e5f0: 0xc04be94  jal         func_12FA50
    ctx->pc = 0x14E5F0u;
    SET_GPR_U32(ctx, 31, 0x14E5F8u);
    ctx->pc = 0x14E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5F0u;
            // 0x14e5f4: 0x27aa00d0  addiu       $t2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA50u;
    if (runtime->hasFunction(0x12FA50u)) {
        auto targetFn = runtime->lookupFunction(0x12FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E5F8u; }
        if (ctx->pc != 0x14E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E5F8u; }
        if (ctx->pc != 0x14E5F8u) { return; }
    }
    ctx->pc = 0x14E5F8u;
label_14e5f8:
    // 0x14e5f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E5F8u;
    {
        const bool branch_taken_0x14e5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5f8) {
            ctx->pc = 0x14E644u;
            goto label_14e644;
        }
    }
    ctx->pc = 0x14E600u;
    // 0x14e600: 0x23e082a  slt         $at, $s1, $fp
    ctx->pc = 0x14e600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14e604: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x14E604u;
    {
        const bool branch_taken_0x14e604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e604) {
            ctx->pc = 0x14E660u;
            goto label_14e660;
        }
    }
    ctx->pc = 0x14E60Cu;
    // 0x14e60c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14e610: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14e614: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x14e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x14e618: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x14e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14e61c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x14e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x14e620: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E620u;
    SET_GPR_U32(ctx, 31, 0x14E628u);
    ctx->pc = 0x14E624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E620u;
            // 0x14e624: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E628u; }
        if (ctx->pc != 0x14E628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E628u; }
        if (ctx->pc != 0x14E628u) { return; }
    }
    ctx->pc = 0x14E628u;
label_14e628:
    // 0x14e628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e62c: 0xc04c018  jal         func_130060
    ctx->pc = 0x14E62Cu;
    SET_GPR_U32(ctx, 31, 0x14E634u);
    ctx->pc = 0x14E630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E62Cu;
            // 0x14e630: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E634u; }
        if (ctx->pc != 0x14E634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E634u; }
        if (ctx->pc != 0x14E634u) { return; }
    }
    ctx->pc = 0x14E634u;
label_14e634:
    // 0x14e634: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14e638: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e63c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e640: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x14e640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_14e644:
    // 0x14e644: 0x0  nop
    ctx->pc = 0x14e644u;
    // NOP
    // 0x14e648: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e64c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x14e64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_14e650:
    // 0x14e650: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e654: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14e654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e658: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x14E658u;
    {
        const bool branch_taken_0x14e658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e658) {
            ctx->pc = 0x14E490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E660u;
label_14e660:
    // 0x14e660: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E660u;
    {
        const bool branch_taken_0x14e660 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e660) {
            ctx->pc = 0x14E670u;
            goto label_14e670;
        }
    }
    ctx->pc = 0x14E668u;
    // 0x14e668: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x14E668u;
    {
        const bool branch_taken_0x14e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E668u;
            // 0x14e66c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e668) {
            ctx->pc = 0x14E7E4u;
            goto label_14e7e4;
        }
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0x1ae0002d  blez        $s7, . + 4 + (0x2D << 2)
    ctx->pc = 0x14E670u;
    {
        const bool branch_taken_0x14e670 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x14e670) {
            ctx->pc = 0x14E728u;
            goto label_14e728;
        }
    }
    ctx->pc = 0x14E678u;
    // 0x14e678: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14E678u;
    {
        const bool branch_taken_0x14e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E678u;
            // 0x14e67c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e678) {
            ctx->pc = 0x14E718u;
            goto label_14e718;
        }
    }
    ctx->pc = 0x14E680u;
label_14e680:
    // 0x14e680: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14E680u;
    {
        const bool branch_taken_0x14e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E680u;
            // 0x14e684: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e680) {
            ctx->pc = 0x14E704u;
            goto label_14e704;
        }
    }
    ctx->pc = 0x14E688u;
label_14e688:
    // 0x14e688: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14e68c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x14e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e690: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e694: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e698: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x14e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e69c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x14e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e6a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e6a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e6a4: 0x0  nop
    ctx->pc = 0x14e6a4u;
    // NOP
    // 0x14e6a8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x14E6A8u;
    {
        const bool branch_taken_0x14e6a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e6a8) {
            ctx->pc = 0x14E6FCu;
            goto label_14e6fc;
        }
    }
    ctx->pc = 0x14E6B0u;
    // 0x14e6b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e6b4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14e6b8: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x14e6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x14e6bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14e6c0: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x14e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14e6c4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x14e6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14e6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e6cc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14e6d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E6D0u;
    SET_GPR_U32(ctx, 31, 0x14E6D8u);
    ctx->pc = 0x14E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6D0u;
            // 0x14e6d4: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6D8u; }
        if (ctx->pc != 0x14E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6D8u; }
        if (ctx->pc != 0x14E6D8u) { return; }
    }
    ctx->pc = 0x14E6D8u;
label_14e6d8:
    // 0x14e6d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14e6dc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e6e0: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14e6e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E6E4u;
    SET_GPR_U32(ctx, 31, 0x14E6ECu);
    ctx->pc = 0x14E6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6E4u;
            // 0x14e6e8: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6ECu; }
        if (ctx->pc != 0x14E6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6ECu; }
        if (ctx->pc != 0x14E6ECu) { return; }
    }
    ctx->pc = 0x14E6ECu;
label_14e6ec:
    // 0x14e6ec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e6f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14e6f4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E6F4u;
    SET_GPR_U32(ctx, 31, 0x14E6FCu);
    ctx->pc = 0x14E6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6F4u;
            // 0x14e6f8: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6FCu; }
        if (ctx->pc != 0x14E6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6FCu; }
        if (ctx->pc != 0x14E6FCu) { return; }
    }
    ctx->pc = 0x14E6FCu;
label_14e6fc:
    // 0x14e6fc: 0x0  nop
    ctx->pc = 0x14e6fcu;
    // NOP
    // 0x14e700: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14e704:
    // 0x14e704: 0x0  nop
    ctx->pc = 0x14e704u;
    // NOP
    // 0x14e708: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x14e708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14e70c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14E70Cu;
    {
        const bool branch_taken_0x14e70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e70c) {
            ctx->pc = 0x14E688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E714u;
    // 0x14e714: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14e718:
    // 0x14e718: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14e71c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14e71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e720: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x14E720u;
    {
        const bool branch_taken_0x14e720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e720) {
            ctx->pc = 0x14E680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e680;
        }
    }
    ctx->pc = 0x14E728u;
label_14e728:
    // 0x14e728: 0x6e1002d  bgez        $s7, . + 4 + (0x2D << 2)
    ctx->pc = 0x14E728u;
    {
        const bool branch_taken_0x14e728 = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x14e728) {
            ctx->pc = 0x14E7E0u;
            goto label_14e7e0;
        }
    }
    ctx->pc = 0x14E730u;
    // 0x14e730: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14E730u;
    {
        const bool branch_taken_0x14e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E730u;
            // 0x14e734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e730) {
            ctx->pc = 0x14E7D0u;
            goto label_14e7d0;
        }
    }
    ctx->pc = 0x14E738u;
label_14e738:
    // 0x14e738: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14E738u;
    {
        const bool branch_taken_0x14e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E738u;
            // 0x14e73c: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e738) {
            ctx->pc = 0x14E7BCu;
            goto label_14e7bc;
        }
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14e744: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x14e744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e748: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e74c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e750: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x14e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e754: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x14e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e758: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e75c: 0x0  nop
    ctx->pc = 0x14e75cu;
    // NOP
    // 0x14e760: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x14E760u;
    {
        const bool branch_taken_0x14e760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e760) {
            ctx->pc = 0x14E7B4u;
            goto label_14e7b4;
        }
    }
    ctx->pc = 0x14E768u;
    // 0x14e768: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e76c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14e770: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x14e774: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14e778: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x14e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14e77c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x14e77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14e780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e784: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14e784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14e788: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E788u;
    SET_GPR_U32(ctx, 31, 0x14E790u);
    ctx->pc = 0x14E78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E788u;
            // 0x14e78c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E790u; }
        if (ctx->pc != 0x14E790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E790u; }
        if (ctx->pc != 0x14E790u) { return; }
    }
    ctx->pc = 0x14E790u;
label_14e790:
    // 0x14e790: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14e794: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e798: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x14e798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14e79c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E79Cu;
    SET_GPR_U32(ctx, 31, 0x14E7A4u);
    ctx->pc = 0x14E7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E79Cu;
            // 0x14e7a0: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7A4u; }
        if (ctx->pc != 0x14E7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7A4u; }
        if (ctx->pc != 0x14E7A4u) { return; }
    }
    ctx->pc = 0x14E7A4u;
label_14e7a4:
    // 0x14e7a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14e7a8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14e7ac: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E7ACu;
    SET_GPR_U32(ctx, 31, 0x14E7B4u);
    ctx->pc = 0x14E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7ACu;
            // 0x14e7b0: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7B4u; }
        if (ctx->pc != 0x14E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7B4u; }
        if (ctx->pc != 0x14E7B4u) { return; }
    }
    ctx->pc = 0x14E7B4u;
label_14e7b4:
    // 0x14e7b4: 0x0  nop
    ctx->pc = 0x14e7b4u;
    // NOP
    // 0x14e7b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14e7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14e7bc:
    // 0x14e7bc: 0x0  nop
    ctx->pc = 0x14e7bcu;
    // NOP
    // 0x14e7c0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x14e7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14e7c4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14E7C4u;
    {
        const bool branch_taken_0x14e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7c4) {
            ctx->pc = 0x14E740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e740;
        }
    }
    ctx->pc = 0x14E7CCu;
    // 0x14e7cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14e7d0:
    // 0x14e7d0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14e7d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14e7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e7d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x14E7D8u;
    {
        const bool branch_taken_0x14e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7d8) {
            ctx->pc = 0x14E738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e738;
        }
    }
    ctx->pc = 0x14E7E0u;
label_14e7e0:
    // 0x14e7e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14e7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e7e4:
    // 0x14e7e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14e7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e7e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e7ec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14e7ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14e7f0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14e7f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e7f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14e7f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e7f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14e7f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e7fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14e7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e800: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14e800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e810: 0x3e00008  jr          $ra
    ctx->pc = 0x14E810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E810u;
            // 0x14e814: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E818u;
}
