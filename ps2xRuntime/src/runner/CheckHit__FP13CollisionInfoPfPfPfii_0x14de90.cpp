#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHit__FP13CollisionInfoPfPfPfii
// Address: 0x14de90 - 0x14e1bc
void CheckHit__FP13CollisionInfoPfPfPfii_0x14de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHit__FP13CollisionInfoPfPfPfii_0x14de90");
#endif

    switch (ctx->pc) {
        case 0x14df04u: goto label_14df04;
        case 0x14df3cu: goto label_14df3c;
        case 0x14df64u: goto label_14df64;
        case 0x14e000u: goto label_14e000;
        case 0x14e00cu: goto label_14e00c;
        case 0x14e020u: goto label_14e020;
        case 0x14e02cu: goto label_14e02c;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0bcu: goto label_14e0bc;
        case 0x14e12cu: goto label_14e12c;
        case 0x14e15cu: goto label_14e15c;
        default: break;
    }

    ctx->pc = 0x14de90u;

    // 0x14de90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x14de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x14de94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14de98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14de9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14dea0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x14dea0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dea4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14dea8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14deac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14deacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14deb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14deb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14deb8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14deb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14debc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14debcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14dec0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14dec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dec4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14dec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14dec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14decc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14deccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14ded0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ded4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14ded4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14ded8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DED8u;
    {
        const bool branch_taken_0x14ded8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DED8u;
            // 0x14dedc: 0xafa900bc  sw          $t1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ded8) {
            ctx->pc = 0x14DEE8u;
            goto label_14dee8;
        }
    }
    ctx->pc = 0x14DEE0u;
    // 0x14dee0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x14DEE0u;
    {
        const bool branch_taken_0x14dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEE0u;
            // 0x14dee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dee0) {
            ctx->pc = 0x14E184u;
            goto label_14e184;
        }
    }
    ctx->pc = 0x14DEE8u;
label_14dee8:
    // 0x14dee8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14deec: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x14deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14def0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14def0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14def4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14def4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14def8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x14def8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14defc: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x14DEFCu;
    SET_GPR_U32(ctx, 31, 0x14DF04u);
    ctx->pc = 0x14DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEFCu;
            // 0x14df00: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF04u; }
        if (ctx->pc != 0x14DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF04u; }
        if (ctx->pc != 0x14DF04u) { return; }
    }
    ctx->pc = 0x14DF04u;
label_14df04:
    // 0x14df04: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14df08: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x14df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14df0c: 0xd86a0000  lqc2        $vf10, 0x0($v1)
    ctx->pc = 0x14df0cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14df10: 0xd84b0000  lqc2        $vf11, 0x0($v0)
    ctx->pc = 0x14df10u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14df14: 0x0  nop
    ctx->pc = 0x14df14u;
    // NOP
    // 0x14df18: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x14df18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14df1c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DF1Cu;
    {
        const bool branch_taken_0x14df1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF1Cu;
            // 0x14df20: 0x8e170000  lw          $s7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df1c) {
            ctx->pc = 0x14DF2Cu;
            goto label_14df2c;
        }
    }
    ctx->pc = 0x14DF24u;
    // 0x14df24: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DF24u;
    {
        const bool branch_taken_0x14df24 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF24u;
            // 0x14df28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df24) {
            ctx->pc = 0x14DF34u;
            goto label_14df34;
        }
    }
    ctx->pc = 0x14DF2Cu;
label_14df2c:
    // 0x14df2c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x14DF2Cu;
    {
        const bool branch_taken_0x14df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF2Cu;
            // 0x14df30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df2c) {
            ctx->pc = 0x14E184u;
            goto label_14e184;
        }
    }
    ctx->pc = 0x14DF34u;
label_14df34:
    // 0x14df34: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x14DF34u;
    {
        const bool branch_taken_0x14df34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df34) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14DF3Cu;
label_14df3c:
    // 0x14df3c: 0x86430046  lh          $v1, 0x46($s2)
    ctx->pc = 0x14df3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x14df40: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14df44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14df48: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x14DF48u;
    {
        const bool branch_taken_0x14df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF48u;
            // 0x14df4c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df48) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DF50u;
    // 0x14df50: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x14df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14df54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14df54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df58: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14df58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14df5c: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x14DF5Cu;
    SET_GPR_U32(ctx, 31, 0x14DF64u);
    ctx->pc = 0x14DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF5Cu;
            // 0x14df60: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF64u; }
        if (ctx->pc != 0x14DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF64u; }
        if (ctx->pc != 0x14DF64u) { return; }
    }
    ctx->pc = 0x14DF64u;
label_14df64:
    // 0x14df64: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x14df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df68: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14df6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14df70: 0x0  nop
    ctx->pc = 0x14df70u;
    // NOP
    // 0x14df74: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
    ctx->pc = 0x14DF74u;
    {
        const bool branch_taken_0x14df74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14df74) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DF7Cu;
    // 0x14df7c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x14df7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df80: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x14df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14df84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14df88: 0x0  nop
    ctx->pc = 0x14df88u;
    // NOP
    // 0x14df8c: 0x45010075  bc1t        . + 4 + (0x75 << 2)
    ctx->pc = 0x14DF8Cu;
    {
        const bool branch_taken_0x14df8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14df8c) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DF94u;
    // 0x14df94: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df98: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x14df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14df9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dfa0: 0x0  nop
    ctx->pc = 0x14dfa0u;
    // NOP
    // 0x14dfa4: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x14DFA4u;
    {
        const bool branch_taken_0x14dfa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dfa4) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DFACu;
    // 0x14dfac: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x14dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dfb0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x14dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dfb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14dfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dfb8: 0x0  nop
    ctx->pc = 0x14dfb8u;
    // NOP
    // 0x14dfbc: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x14DFBCu;
    {
        const bool branch_taken_0x14dfbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dfbc) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DFC4u;
    // 0x14dfc4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x14dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dfc8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x14dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dfcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14dfccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dfd0: 0x0  nop
    ctx->pc = 0x14dfd0u;
    // NOP
    // 0x14dfd4: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x14DFD4u;
    {
        const bool branch_taken_0x14dfd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dfd4) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DFDCu;
    // 0x14dfdc: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x14dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dfe0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x14dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dfe4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14dfe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dfe8: 0x0  nop
    ctx->pc = 0x14dfe8u;
    // NOP
    // 0x14dfec: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x14DFECu;
    {
        const bool branch_taken_0x14dfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFECu;
            // 0x14dff0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfec) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14DFF4u;
    // 0x14dff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14dff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dff8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14DFF8u;
    SET_GPR_U32(ctx, 31, 0x14E000u);
    ctx->pc = 0x14DFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFF8u;
            // 0x14dffc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E000u; }
        if (ctx->pc != 0x14E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E000u; }
        if (ctx->pc != 0x14E000u) { return; }
    }
    ctx->pc = 0x14E000u;
label_14e000:
    // 0x14e000: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x14e000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e004: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x14E004u;
    SET_GPR_U32(ctx, 31, 0x14E00Cu);
    ctx->pc = 0x14E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E004u;
            // 0x14e008: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E00Cu; }
        if (ctx->pc != 0x14E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E00Cu; }
        if (ctx->pc != 0x14E00Cu) { return; }
    }
    ctx->pc = 0x14E00Cu;
label_14e00c:
    // 0x14e00c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x14e00cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x14e010: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14e014: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e018: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14E018u;
    SET_GPR_U32(ctx, 31, 0x14E020u);
    ctx->pc = 0x14E01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E018u;
            // 0x14e01c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E020u; }
        if (ctx->pc != 0x14E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E020u; }
        if (ctx->pc != 0x14E020u) { return; }
    }
    ctx->pc = 0x14E020u;
label_14e020:
    // 0x14e020: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x14e020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e024: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x14E024u;
    SET_GPR_U32(ctx, 31, 0x14E02Cu);
    ctx->pc = 0x14E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E024u;
            // 0x14e028: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E02Cu; }
        if (ctx->pc != 0x14E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E02Cu; }
        if (ctx->pc != 0x14E02Cu) { return; }
    }
    ctx->pc = 0x14E02Cu;
label_14e02c:
    // 0x14e02c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e030: 0x0  nop
    ctx->pc = 0x14e030u;
    // NOP
    // 0x14e034: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x14e034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e038: 0x0  nop
    ctx->pc = 0x14e038u;
    // NOP
    // 0x14e03c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14E03Cu;
    {
        const bool branch_taken_0x14e03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e03c) {
            ctx->pc = 0x14E054u;
            goto label_14e054;
        }
    }
    ctx->pc = 0x14E044u;
    // 0x14e044: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14e044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e048: 0x0  nop
    ctx->pc = 0x14e048u;
    // NOP
    // 0x14e04c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x14E04Cu;
    {
        const bool branch_taken_0x14e04c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e04c) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14E054u;
label_14e054:
    // 0x14e054: 0x0  nop
    ctx->pc = 0x14e054u;
    // NOP
    // 0x14e058: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e05c: 0x0  nop
    ctx->pc = 0x14e05cu;
    // NOP
    // 0x14e060: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x14e060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e064: 0x0  nop
    ctx->pc = 0x14e064u;
    // NOP
    // 0x14e068: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14E068u;
    {
        const bool branch_taken_0x14e068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e068) {
            ctx->pc = 0x14E080u;
            goto label_14e080;
        }
    }
    ctx->pc = 0x14E070u;
    // 0x14e070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e074: 0x0  nop
    ctx->pc = 0x14e074u;
    // NOP
    // 0x14e078: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x14E078u;
    {
        const bool branch_taken_0x14e078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e078) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14E080u;
label_14e080:
    // 0x14e080: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e084: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e088: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e08c: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14e090: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x14e090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14e094: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x14e094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e098: 0xc04be94  jal         func_12FA50
    ctx->pc = 0x14E098u;
    SET_GPR_U32(ctx, 31, 0x14E0A0u);
    ctx->pc = 0x14E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E098u;
            // 0x14e09c: 0x27aa00c0  addiu       $t2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA50u;
    if (runtime->hasFunction(0x12FA50u)) {
        auto targetFn = runtime->lookupFunction(0x12FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0A0u; }
        if (ctx->pc != 0x14E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0A0u; }
        if (ctx->pc != 0x14E0A0u) { return; }
    }
    ctx->pc = 0x14E0A0u;
label_14e0a0:
    // 0x14e0a0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14E0A0u;
    {
        const bool branch_taken_0x14e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e0a0) {
            ctx->pc = 0x14E164u;
            goto label_14e164;
        }
    }
    ctx->pc = 0x14E0A8u;
    // 0x14e0a8: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E0A8u;
    {
        const bool branch_taken_0x14e0a8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0A8u;
            // 0x14e0ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0a8) {
            ctx->pc = 0x14E0C4u;
            goto label_14e0c4;
        }
    }
    ctx->pc = 0x14E0B0u;
    // 0x14e0b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14e0b4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E0B4u;
    SET_GPR_U32(ctx, 31, 0x14E0BCu);
    ctx->pc = 0x14E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0B4u;
            // 0x14e0b8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0BCu; }
        if (ctx->pc != 0x14E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0BCu; }
        if (ctx->pc != 0x14E0BCu) { return; }
    }
    ctx->pc = 0x14E0BCu;
label_14e0bc:
    // 0x14e0bc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14E0BCu;
    {
        const bool branch_taken_0x14e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e0bc) {
            ctx->pc = 0x14E17Cu;
            goto label_14e17c;
        }
    }
    ctx->pc = 0x14E0C4u;
label_14e0c4:
    // 0x14e0c4: 0x0  nop
    ctx->pc = 0x14e0c4u;
    // NOP
    // 0x14e0c8: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x14e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e0cc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x14e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0d0: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x14e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e0d4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x14e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e0d8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x14e0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x14e0dc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x14e0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14e0e0: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x14e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e0e4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x14e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0e8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x14e0e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14e0ec: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x14e0ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x14e0f0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x14e0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14e0f4: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x14e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e0f8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x14e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0fc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x14e0fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x14e100: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x14e100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14e104: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x14e104u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x14e108: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x14e108u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x14e10c: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x14e10cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x14e110: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E110u;
    {
        const bool branch_taken_0x14e110 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E110u;
            // 0x14e114: 0x4600001c  madd.s      $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e110) {
            ctx->pc = 0x14E134u;
            goto label_14e134;
        }
    }
    ctx->pc = 0x14E118u;
    // 0x14e118: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14e118u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14e11c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e120: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x14e120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14e124: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E124u;
    SET_GPR_U32(ctx, 31, 0x14E12Cu);
    ctx->pc = 0x14E128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E124u;
            // 0x14e128: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E12Cu; }
        if (ctx->pc != 0x14E12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E12Cu; }
        if (ctx->pc != 0x14E12Cu) { return; }
    }
    ctx->pc = 0x14E12Cu;
label_14e12c:
    // 0x14e12c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14E12Cu;
    {
        const bool branch_taken_0x14e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e12c) {
            ctx->pc = 0x14E15Cu;
            goto label_14e15c;
        }
    }
    ctx->pc = 0x14E134u;
label_14e134:
    // 0x14e134: 0x0  nop
    ctx->pc = 0x14e134u;
    // NOP
    // 0x14e138: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14e138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e13c: 0x0  nop
    ctx->pc = 0x14e13cu;
    // NOP
    // 0x14e140: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14E140u;
    {
        const bool branch_taken_0x14e140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e140) {
            ctx->pc = 0x14E15Cu;
            goto label_14e15c;
        }
    }
    ctx->pc = 0x14E148u;
    // 0x14e148: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14e148u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14e14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e150: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14e154: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14E154u;
    SET_GPR_U32(ctx, 31, 0x14E15Cu);
    ctx->pc = 0x14E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E154u;
            // 0x14e158: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E15Cu; }
        if (ctx->pc != 0x14E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E15Cu; }
        if (ctx->pc != 0x14E15Cu) { return; }
    }
    ctx->pc = 0x14E15Cu;
label_14e15c:
    // 0x14e15c: 0x0  nop
    ctx->pc = 0x14e15cu;
    // NOP
    // 0x14e160: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x14e160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e164:
    // 0x14e164: 0x0  nop
    ctx->pc = 0x14e164u;
    // NOP
    // 0x14e168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e16c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_14e170:
    // 0x14e170: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x14e170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x14e174: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x14E174u;
    {
        const bool branch_taken_0x14e174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e174) {
            ctx->pc = 0x14DF3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14df3c;
        }
    }
    ctx->pc = 0x14E17Cu;
label_14e17c:
    // 0x14e17c: 0x0  nop
    ctx->pc = 0x14e17cu;
    // NOP
    // 0x14e180: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14e180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e184:
    // 0x14e184: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14e184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e188: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e18c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14e18cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14e190: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e194: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14e194u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e198: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14e198u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e19c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14e19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e1a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14e1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e1a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14e1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e1a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e1ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e1b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1B4u;
            // 0x14e1b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E1BCu;
}
