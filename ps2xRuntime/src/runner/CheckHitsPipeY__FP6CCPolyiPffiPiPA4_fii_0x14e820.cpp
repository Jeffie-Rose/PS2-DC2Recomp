#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHitsPipeY__FP6CCPolyiPffiPiPA4_fii
// Address: 0x14e820 - 0x14ece8
void CheckHitsPipeY__FP6CCPolyiPffiPiPA4_fii_0x14e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitsPipeY__FP6CCPolyiPffiPiPA4_fii_0x14e820");
#endif

    switch (ctx->pc) {
        case 0x14e89cu: goto label_14e89c;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e950u: goto label_14e950;
        case 0x14e9f0u: goto label_14e9f0;
        case 0x14ea0cu: goto label_14ea0c;
        case 0x14eac4u: goto label_14eac4;
        case 0x14ead0u: goto label_14ead0;
        case 0x14eb20u: goto label_14eb20;
        case 0x14eb34u: goto label_14eb34;
        case 0x14eb84u: goto label_14eb84;
        case 0x14eb90u: goto label_14eb90;
        case 0x14eb9cu: goto label_14eb9c;
        case 0x14ebf8u: goto label_14ebf8;
        case 0x14ec0cu: goto label_14ec0c;
        case 0x14ec5cu: goto label_14ec5c;
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec74u: goto label_14ec74;
        default: break;
    }

    ctx->pc = 0x14e820u;

    // 0x14e820: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x14e824: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14e828: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14e82c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14e830: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e834: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14e838: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x14e838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e83c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14e840: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14e844: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14e848: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14e84c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e85c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14e860: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e864: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x14e864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e868: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x14e868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
    // 0x14e86c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e870: 0xafa900e0  sw          $t1, 0xE0($sp)
    ctx->pc = 0x14e870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
    // 0x14e874: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x14e874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14e878: 0xafaa00dc  sw          $t2, 0xDC($sp)
    ctx->pc = 0x14e878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 10));
    // 0x14e87c: 0xafab00d8  sw          $t3, 0xD8($sp)
    ctx->pc = 0x14e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 11));
    // 0x14e880: 0xc4d4000c  lwc1        $f20, 0xC($a2)
    ctx->pc = 0x14e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e884: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14e884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14e888: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14e888u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14e88c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x14e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e890: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x14e890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x14e894: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x14E894u;
    SET_GPR_U32(ctx, 31, 0x14E89Cu);
    ctx->pc = 0x14E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E894u;
            // 0x14e898: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E89Cu; }
        if (ctx->pc != 0x14E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E89Cu; }
        if (ctx->pc != 0x14E89Cu) { return; }
    }
    ctx->pc = 0x14E89Cu;
label_14e89c:
    // 0x14e89c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x14e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e8a0: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x14e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x14e8a4: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x14e8a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14e8a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14e8a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14e8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14e8b0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14e8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x14e8b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e8b8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14e8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14e8bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14e8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14e8c0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x14e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e8c4: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x14e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x14e8c8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14e8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14e8cc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x14e8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x14e8d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e8d4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14e8d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14e8d8: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x14E8D8u;
    {
        const bool branch_taken_0x14e8d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8D8u;
            // 0x14e8dc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8d8) {
            ctx->pc = 0x14EAF0u;
            goto label_14eaf0;
        }
    }
    ctx->pc = 0x14E8E0u;
    // 0x14e8e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14e8e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14e8e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e8e8:
    // 0x14e8e8: 0x86430046  lh          $v1, 0x46($s2)
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x14e8ec: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x14e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x14e8f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e8f4: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x14E8F4u;
    {
        const bool branch_taken_0x14e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e8f4) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E8FCu;
    // 0x14e8fc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x14e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14e900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e904: 0x0  nop
    ctx->pc = 0x14e904u;
    // NOP
    // 0x14e908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e90c: 0x0  nop
    ctx->pc = 0x14e90cu;
    // NOP
    // 0x14e910: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14E910u;
    {
        const bool branch_taken_0x14e910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e910) {
            ctx->pc = 0x14E91Cu;
            goto label_14e91c;
        }
    }
    ctx->pc = 0x14E918u;
    // 0x14e918: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14e918u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_14e91c:
    // 0x14e91c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x14e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x14e920: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14e920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14e924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e928: 0x0  nop
    ctx->pc = 0x14e928u;
    // NOP
    // 0x14e92c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e930: 0x0  nop
    ctx->pc = 0x14e930u;
    // NOP
    // 0x14e934: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x14E934u;
    {
        const bool branch_taken_0x14e934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E934u;
            // 0x14e938: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e934) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E93Cu;
    // 0x14e93c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x14e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14e940: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e944: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14e944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14e948: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x14E948u;
    SET_GPR_U32(ctx, 31, 0x14E950u);
    ctx->pc = 0x14E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E948u;
            // 0x14e94c: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E950u; }
        if (ctx->pc != 0x14E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E950u; }
        if (ctx->pc != 0x14E950u) { return; }
    }
    ctx->pc = 0x14E950u;
label_14e950:
    // 0x14e950: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x14e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e954: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x14e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e95c: 0x0  nop
    ctx->pc = 0x14e95cu;
    // NOP
    // 0x14e960: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E960u;
            // 0x14e964: 0x27a20124  addiu       $v0, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E968u;
    // 0x14e968: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x14e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e96c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e974: 0x0  nop
    ctx->pc = 0x14e974u;
    // NOP
    // 0x14e978: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x14E978u;
    {
        const bool branch_taken_0x14e978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E978u;
            // 0x14e97c: 0x27a20128  addiu       $v0, $sp, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e978) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E980u;
    // 0x14e980: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e984: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x14e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e98c: 0x0  nop
    ctx->pc = 0x14e98cu;
    // NOP
    // 0x14e990: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x14E990u;
    {
        const bool branch_taken_0x14e990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e990) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E998u;
    // 0x14e998: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x14e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e99c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e9a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e9a4: 0x0  nop
    ctx->pc = 0x14e9a4u;
    // NOP
    // 0x14e9a8: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x14E9A8u;
    {
        const bool branch_taken_0x14e9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9A8u;
            // 0x14e9ac: 0x27b50134  addiu       $s5, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9a8) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E9B0u;
    // 0x14e9b0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x14e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e9b4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x14e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e9b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e9bc: 0x0  nop
    ctx->pc = 0x14e9bcu;
    // NOP
    // 0x14e9c0: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x14E9C0u;
    {
        const bool branch_taken_0x14e9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9C0u;
            // 0x14e9c4: 0x27a20138  addiu       $v0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9c0) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E9C8u;
    // 0x14e9c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e9cc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e9d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14e9d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e9d4: 0x0  nop
    ctx->pc = 0x14e9d4u;
    // NOP
    // 0x14e9d8: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x14E9D8u;
    {
        const bool branch_taken_0x14e9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9D8u;
            // 0x14e9dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9d8) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E9E0u;
    // 0x14e9e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9e4: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x14e9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e9e8: 0xc0b7778  jal         func_2DDDE0
    ctx->pc = 0x14E9E8u;
    SET_GPR_U32(ctx, 31, 0x14E9F0u);
    ctx->pc = 0x14E9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9E8u;
            // 0x14e9ec: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDE0u;
    if (runtime->hasFunction(0x2DDDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DDDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9F0u; }
        if (ctx->pc != 0x14E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionPipeYPoly3__FPfPA4_fPfPA4_f_0x2ddde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9F0u; }
        if (ctx->pc != 0x14E9F0u) { return; }
    }
    ctx->pc = 0x14E9F0u;
label_14e9f0:
    // 0x14e9f0: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x14E9F0u;
    {
        const bool branch_taken_0x14e9f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9F0u;
            // 0x14e9f4: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9f0) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14E9F8u;
    // 0x14e9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x14E9FCu;
    {
        const bool branch_taken_0x14e9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9FCu;
            // 0x14ea00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9fc) {
            ctx->pc = 0x14EA90u;
            goto label_14ea90;
        }
    }
    ctx->pc = 0x14EA04u;
    // 0x14ea04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ea04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14ea0c:
    // 0x14ea0c: 0x0  nop
    ctx->pc = 0x14ea0cu;
    // NOP
    // 0x14ea10: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x14ea14: 0x24680150  addiu       $t0, $v1, 0x150
    ctx->pc = 0x14ea14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14ea18: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x14ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x14ea1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ea20: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x14ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ea24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ea24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ea28: 0x0  nop
    ctx->pc = 0x14ea28u;
    // NOP
    // 0x14ea2c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x14EA2Cu;
    {
        const bool branch_taken_0x14ea2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ea2c) {
            ctx->pc = 0x14EA7Cu;
            goto label_14ea7c;
        }
    }
    ctx->pc = 0x14EA34u;
    // 0x14ea34: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x14ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ea38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ea38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ea3c: 0x0  nop
    ctx->pc = 0x14ea3cu;
    // NOP
    // 0x14ea40: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x14EA40u;
    {
        const bool branch_taken_0x14ea40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ea40) {
            ctx->pc = 0x14EA7Cu;
            goto label_14ea7c;
        }
    }
    ctx->pc = 0x14EA48u;
    // 0x14ea48: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EA48u;
    {
        const bool branch_taken_0x14ea48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ea48) {
            ctx->pc = 0x14EA60u;
            goto label_14ea60;
        }
    }
    ctx->pc = 0x14EA50u;
    // 0x14ea50: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x14ea50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ea54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ea58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14EA58u;
    {
        const bool branch_taken_0x14ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA58u;
            // 0x14ea5c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea58) {
            ctx->pc = 0x14EA7Cu;
            goto label_14ea7c;
        }
    }
    ctx->pc = 0x14EA60u;
label_14ea60:
    // 0x14ea60: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x14ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ea64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ea64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ea68: 0x0  nop
    ctx->pc = 0x14ea68u;
    // NOP
    // 0x14ea6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14EA6Cu;
    {
        const bool branch_taken_0x14ea6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ea6c) {
            ctx->pc = 0x14EA7Cu;
            goto label_14ea7c;
        }
    }
    ctx->pc = 0x14EA74u;
    // 0x14ea74: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x14ea74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ea78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_14ea7c:
    // 0x14ea7c: 0x0  nop
    ctx->pc = 0x14ea7cu;
    // NOP
    // 0x14ea80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14ea84: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x14ea84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ea88: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14EA88u;
    {
        const bool branch_taken_0x14ea88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA88u;
            // 0x14ea8c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea88) {
            ctx->pc = 0x14EA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ea0c;
        }
    }
    ctx->pc = 0x14EA90u;
label_14ea90:
    // 0x14ea90: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x14EA90u;
    {
        const bool branch_taken_0x14ea90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea90) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14EA98u;
    // 0x14ea98: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x14ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14ea9c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x14ea9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14eaa0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14EAA0u;
    {
        const bool branch_taken_0x14eaa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eaa0) {
            ctx->pc = 0x14EAF0u;
            goto label_14eaf0;
        }
    }
    ctx->pc = 0x14EAA8u;
    // 0x14eaa8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14eaac: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x14eab0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14eab4: 0x54a821  addu        $s5, $v0, $s4
    ctx->pc = 0x14eab4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x14eab8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x14eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x14eabc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EABCu;
    SET_GPR_U32(ctx, 31, 0x14EAC4u);
    ctx->pc = 0x14EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EABCu;
            // 0x14eac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAC4u; }
        if (ctx->pc != 0x14EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAC4u; }
        if (ctx->pc != 0x14EAC4u) { return; }
    }
    ctx->pc = 0x14EAC4u;
label_14eac4:
    // 0x14eac4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eac8: 0xc04c018  jal         func_130060
    ctx->pc = 0x14EAC8u;
    SET_GPR_U32(ctx, 31, 0x14EAD0u);
    ctx->pc = 0x14EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAC8u;
            // 0x14eacc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAD0u; }
        if (ctx->pc != 0x14EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAD0u; }
        if (ctx->pc != 0x14EAD0u) { return; }
    }
    ctx->pc = 0x14EAD0u;
label_14ead0:
    // 0x14ead0: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x14ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x14ead4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x14ead4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x14ead8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x14ead8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x14eadc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14eadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14eae0:
    // 0x14eae0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14eae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14eae4: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x14eae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14eae8: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAE8u;
            // 0x14eaec: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14E8E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e8e8;
        }
    }
    ctx->pc = 0x14EAF0u;
label_14eaf0:
    // 0x14eaf0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x14eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14eaf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EAF4u;
    {
        const bool branch_taken_0x14eaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eaf4) {
            ctx->pc = 0x14EB04u;
            goto label_14eb04;
        }
    }
    ctx->pc = 0x14EAFCu;
    // 0x14eafc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14EAFCu;
    {
        const bool branch_taken_0x14eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAFCu;
            // 0x14eb00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eafc) {
            ctx->pc = 0x14ECB4u;
            goto label_14ecb4;
        }
    }
    ctx->pc = 0x14EB04u;
label_14eb04:
    // 0x14eb04: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14EB04u;
    {
        const bool branch_taken_0x14eb04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14EB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB04u;
            // 0x14eb08: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb04) {
            ctx->pc = 0x14EBD8u;
            goto label_14ebd8;
        }
    }
    ctx->pc = 0x14EB0Cu;
    // 0x14eb0c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14eb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14eb10: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14EB10u;
    {
        const bool branch_taken_0x14eb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB10u;
            // 0x14eb14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb10) {
            ctx->pc = 0x14EBD8u;
            goto label_14ebd8;
        }
    }
    ctx->pc = 0x14EB18u;
    // 0x14eb18: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x14eb1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14eb1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eb20:
    // 0x14eb20: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x14eb20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14eb24: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x14eb24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14eb28: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14EB28u;
    {
        const bool branch_taken_0x14eb28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB28u;
            // 0x14eb2c: 0x15f100  sll         $fp, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb28) {
            ctx->pc = 0x14EBB4u;
            goto label_14ebb4;
        }
    }
    ctx->pc = 0x14EB30u;
    // 0x14eb30: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_14eb34:
    // 0x14eb34: 0x0  nop
    ctx->pc = 0x14eb34u;
    // NOP
    // 0x14eb38: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x14eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14eb3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14eb40: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14eb44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14eb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb48: 0x5eb021  addu        $s6, $v0, $fp
    ctx->pc = 0x14eb48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14eb4c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eb50: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x14eb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eb54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14eb54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14eb58: 0x0  nop
    ctx->pc = 0x14eb58u;
    // NOP
    // 0x14eb5c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14EB5Cu;
    {
        const bool branch_taken_0x14eb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB5Cu;
            // 0x14eb60: 0x2133021  addu        $a2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb5c) {
            ctx->pc = 0x14EB9Cu;
            goto label_14eb9c;
        }
    }
    ctx->pc = 0x14EB64u;
    // 0x14eb64: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x14eb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14eb68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14eb6c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x14eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14eb70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14eb74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb78: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14eb7c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EB7Cu;
    SET_GPR_U32(ctx, 31, 0x14EB84u);
    ctx->pc = 0x14EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB7Cu;
            // 0x14eb80: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB84u; }
        if (ctx->pc != 0x14EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB84u; }
        if (ctx->pc != 0x14EB84u) { return; }
    }
    ctx->pc = 0x14EB84u;
label_14eb84:
    // 0x14eb84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb88: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EB88u;
    SET_GPR_U32(ctx, 31, 0x14EB90u);
    ctx->pc = 0x14EB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB88u;
            // 0x14eb8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB90u; }
        if (ctx->pc != 0x14EB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB90u; }
        if (ctx->pc != 0x14EB90u) { return; }
    }
    ctx->pc = 0x14EB90u;
label_14eb90:
    // 0x14eb90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb94: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EB94u;
    SET_GPR_U32(ctx, 31, 0x14EB9Cu);
    ctx->pc = 0x14EB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB94u;
            // 0x14eb98: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB9Cu; }
        if (ctx->pc != 0x14EB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EB9Cu; }
        if (ctx->pc != 0x14EB9Cu) { return; }
    }
    ctx->pc = 0x14EB9Cu;
label_14eb9c:
    // 0x14eb9c: 0x0  nop
    ctx->pc = 0x14eb9cu;
    // NOP
    // 0x14eba0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14eba4: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x14eba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14eba8: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14eba8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14ebac: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14EBACu;
    {
        const bool branch_taken_0x14ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBACu;
            // 0x14ebb0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebac) {
            ctx->pc = 0x14EB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eb34;
        }
    }
    ctx->pc = 0x14EBB4u;
label_14ebb4:
    // 0x14ebb4: 0x0  nop
    ctx->pc = 0x14ebb4u;
    // NOP
    // 0x14ebb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14ebbc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14ebc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14ebc4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14ebc8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14ebcc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14ebccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ebd0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14EBD0u;
    {
        const bool branch_taken_0x14ebd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBD0u;
            // 0x14ebd4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebd0) {
            ctx->pc = 0x14EB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eb20;
        }
    }
    ctx->pc = 0x14EBD8u;
label_14ebd8:
    // 0x14ebd8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x14ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14ebdc: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14EBDCu;
    {
        const bool branch_taken_0x14ebdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBDCu;
            // 0x14ebe0: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebdc) {
            ctx->pc = 0x14ECB0u;
            goto label_14ecb0;
        }
    }
    ctx->pc = 0x14EBE4u;
    // 0x14ebe4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14ebe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ebe8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14EBE8u;
    {
        const bool branch_taken_0x14ebe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBE8u;
            // 0x14ebec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe8) {
            ctx->pc = 0x14ECB0u;
            goto label_14ecb0;
        }
    }
    ctx->pc = 0x14EBF0u;
    // 0x14ebf0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x14ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x14ebf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ebf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ebf8:
    // 0x14ebf8: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x14ebf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14ebfc: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x14ebfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14ec00: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14EC00u;
    {
        const bool branch_taken_0x14ec00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC00u;
            // 0x14ec04: 0x16f100  sll         $fp, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec00) {
            ctx->pc = 0x14EC8Cu;
            goto label_14ec8c;
        }
    }
    ctx->pc = 0x14EC08u;
    // 0x14ec08: 0x169080  sll         $s2, $s6, 2
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_14ec0c:
    // 0x14ec0c: 0x0  nop
    ctx->pc = 0x14ec0cu;
    // NOP
    // 0x14ec10: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x14ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14ec14: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14ec18: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ec1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14ec1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec20: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14ec24: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec28: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x14ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ec2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ec30: 0x0  nop
    ctx->pc = 0x14ec30u;
    // NOP
    // 0x14ec34: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14EC34u;
    {
        const bool branch_taken_0x14ec34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC34u;
            // 0x14ec38: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec34) {
            ctx->pc = 0x14EC74u;
            goto label_14ec74;
        }
    }
    ctx->pc = 0x14EC3Cu;
    // 0x14ec3c: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14ec40: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ec44: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14ec48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ec4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14ec4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14ec54: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EC54u;
    SET_GPR_U32(ctx, 31, 0x14EC5Cu);
    ctx->pc = 0x14EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC54u;
            // 0x14ec58: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC5Cu; }
        if (ctx->pc != 0x14EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC5Cu; }
        if (ctx->pc != 0x14EC5Cu) { return; }
    }
    ctx->pc = 0x14EC5Cu;
label_14ec5c:
    // 0x14ec5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14ec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec60: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EC60u;
    SET_GPR_U32(ctx, 31, 0x14EC68u);
    ctx->pc = 0x14EC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC60u;
            // 0x14ec64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC68u; }
        if (ctx->pc != 0x14EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC68u; }
        if (ctx->pc != 0x14EC68u) { return; }
    }
    ctx->pc = 0x14EC68u;
label_14ec68:
    // 0x14ec68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec6c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EC6Cu;
    SET_GPR_U32(ctx, 31, 0x14EC74u);
    ctx->pc = 0x14EC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC6Cu;
            // 0x14ec70: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC74u; }
        if (ctx->pc != 0x14EC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC74u; }
        if (ctx->pc != 0x14EC74u) { return; }
    }
    ctx->pc = 0x14EC74u;
label_14ec74:
    // 0x14ec74: 0x0  nop
    ctx->pc = 0x14ec74u;
    // NOP
    // 0x14ec78: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14ec7c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x14ec7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14ec80: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14ec80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14ec84: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14EC84u;
    {
        const bool branch_taken_0x14ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC84u;
            // 0x14ec88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec84) {
            ctx->pc = 0x14EC0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ec0c;
        }
    }
    ctx->pc = 0x14EC8Cu;
label_14ec8c:
    // 0x14ec8c: 0x0  nop
    ctx->pc = 0x14ec8cu;
    // NOP
    // 0x14ec90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14ec94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14ec94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14ec98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14ec9c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x14ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x14eca0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14eca4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x14eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14eca8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14ECA8u;
    {
        const bool branch_taken_0x14eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECA8u;
            // 0x14ecac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eca8) {
            ctx->pc = 0x14EBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ebf8;
        }
    }
    ctx->pc = 0x14ECB0u;
label_14ecb0:
    // 0x14ecb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14ecb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14ecb4:
    // 0x14ecb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14ecb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ecbc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14ecbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ecc0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14ecc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ecc4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14ecc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ecc8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14ecc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14eccc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14ecccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ecd0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14ecd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ecd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ecd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ecd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ecd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ecdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ecdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ece0: 0x3e00008  jr          $ra
    ctx->pc = 0x14ECE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECE0u;
            // 0x14ece4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14ECE8u;
}
