#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetPortVol__Fif
// Address: 0x18d420 - 0x18d524
void sndSetPortVol__Fif_0x18d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetPortVol__Fif_0x18d420");
#endif

    switch (ctx->pc) {
        case 0x18d43cu: goto label_18d43c;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d504u: goto label_18d504;
        case 0x18d50cu: goto label_18d50c;
        default: break;
    }

    ctx->pc = 0x18d420u;

    // 0x18d420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18d42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18d430: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18d430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18d434: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18D434u;
    SET_GPR_U32(ctx, 31, 0x18D43Cu);
    ctx->pc = 0x18D438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D434u;
            // 0x18d438: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D43Cu; }
        if (ctx->pc != 0x18D43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D43Cu; }
        if (ctx->pc != 0x18D43Cu) { return; }
    }
    ctx->pc = 0x18D43Cu;
label_18d43c:
    // 0x18d43c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d440: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18D440u;
    {
        const bool branch_taken_0x18d440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d440) {
            ctx->pc = 0x18D50Cu;
            goto label_18d50c;
        }
    }
    ctx->pc = 0x18D448u;
    // 0x18d448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d44c: 0x460002f  bltz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x18D44Cu;
    {
        const bool branch_taken_0x18d44c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18d44c) {
            ctx->pc = 0x18D50Cu;
            goto label_18d50c;
        }
    }
    ctx->pc = 0x18D454u;
    // 0x18d454: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18d458: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D458u;
    {
        const bool branch_taken_0x18d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d458) {
            ctx->pc = 0x18D468u;
            goto label_18d468;
        }
    }
    ctx->pc = 0x18D460u;
    // 0x18d460: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18D460u;
    {
        const bool branch_taken_0x18d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D460u;
            // 0x18d464: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d460) {
            ctx->pc = 0x18D510u;
            goto label_18d510;
        }
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d46c: 0x0  nop
    ctx->pc = 0x18d46cu;
    // NOP
    // 0x18d470: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18d470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d474: 0x0  nop
    ctx->pc = 0x18d474u;
    // NOP
    // 0x18d478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D478u;
    {
        const bool branch_taken_0x18d478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D478u;
            // 0x18d47c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d478) {
            ctx->pc = 0x18D488u;
            goto label_18d488;
        }
    }
    ctx->pc = 0x18D480u;
    // 0x18d480: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18d480u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18d484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d488:
    // 0x18d488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d48c: 0x0  nop
    ctx->pc = 0x18d48cu;
    // NOP
    // 0x18d490: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18d490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d494: 0x0  nop
    ctx->pc = 0x18d494u;
    // NOP
    // 0x18d498: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D498u;
    {
        const bool branch_taken_0x18d498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d498) {
            ctx->pc = 0x18D4A4u;
            goto label_18d4a4;
        }
    }
    ctx->pc = 0x18D4A0u;
    // 0x18d4a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18d4a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18d4a4:
    // 0x18d4a4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18d4a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d4ac: 0x24427640  addiu       $v0, $v0, 0x7640
    ctx->pc = 0x18d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30272));
    // 0x18d4b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d4b4: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x18d4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d4bc: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x18d4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18d4c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18D4C0u;
    SET_GPR_U32(ctx, 31, 0x18D4C8u);
    ctx->pc = 0x18D4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4C0u;
            // 0x18d4c4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4C8u; }
        if (ctx->pc != 0x18D4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4C8u; }
        if (ctx->pc != 0x18D4C8u) { return; }
    }
    ctx->pc = 0x18D4C8u;
label_18d4c8:
    // 0x18d4c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d4d4: 0x0  nop
    ctx->pc = 0x18d4d4u;
    // NOP
    // 0x18d4d8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d4d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d4dc: 0x0  nop
    ctx->pc = 0x18d4dcu;
    // NOP
    // 0x18d4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D4E0u;
    {
        const bool branch_taken_0x18d4e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d4e0) {
            ctx->pc = 0x18D4ECu;
            goto label_18d4ec;
        }
    }
    ctx->pc = 0x18D4E8u;
    // 0x18d4e8: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_18d4ec:
    // 0x18d4ec: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D4ECu;
    SET_GPR_U32(ctx, 31, 0x18D4F4u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4F4u; }
        if (ctx->pc != 0x18D4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4F4u; }
        if (ctx->pc != 0x18D4F4u) { return; }
    }
    ctx->pc = 0x18D4F4u;
label_18d4f4:
    // 0x18d4f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d4f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18d4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4fc: 0xc0628b0  jal         func_18A2C0
    ctx->pc = 0x18D4FCu;
    SET_GPR_U32(ctx, 31, 0x18D504u);
    ctx->pc = 0x18D500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4FCu;
            // 0x18d500: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2C0u;
    if (runtime->hasFunction(0x18A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D504u; }
        if (ctx->pc != 0x18D504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__6CSoundFii_0x18a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D504u; }
        if (ctx->pc != 0x18D504u) { return; }
    }
    ctx->pc = 0x18D504u;
label_18d504:
    // 0x18d504: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D504u;
    SET_GPR_U32(ctx, 31, 0x18D50Cu);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D50Cu; }
        if (ctx->pc != 0x18D50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D50Cu; }
        if (ctx->pc != 0x18D50Cu) { return; }
    }
    ctx->pc = 0x18D50Cu;
label_18d50c:
    // 0x18d50c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18d50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18d510:
    // 0x18d510: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d514: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D51Cu;
            // 0x18d520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D524u;
}
