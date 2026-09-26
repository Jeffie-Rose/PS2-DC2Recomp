#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamSetVol__Fff
// Address: 0x190410 - 0x1904f8
void sndStreamSetVol__Fff_0x190410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamSetVol__Fff_0x190410");
#endif

    switch (ctx->pc) {
        case 0x190498u: goto label_190498;
        case 0x1904acu: goto label_1904ac;
        case 0x1904c4u: goto label_1904c4;
        case 0x1904d8u: goto label_1904d8;
        case 0x1904e0u: goto label_1904e0;
        default: break;
    }

    ctx->pc = 0x190410u;

    // 0x190410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19041c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x190420: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x190420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x190424: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x190424u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x190428: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x190428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19042c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19042cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x190430: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x190430u;
    {
        const bool branch_taken_0x190430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190430u;
            // 0x190434: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190430) {
            ctx->pc = 0x19043Cu;
            goto label_19043c;
        }
    }
    ctx->pc = 0x190438u;
    // 0x190438: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x190438u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_19043c:
    // 0x19043c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19043cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190440: 0x0  nop
    ctx->pc = 0x190440u;
    // NOP
    // 0x190444: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190448: 0x0  nop
    ctx->pc = 0x190448u;
    // NOP
    // 0x19044c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19044Cu;
    {
        const bool branch_taken_0x19044c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19044Cu;
            // 0x190450: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19044c) {
            ctx->pc = 0x190458u;
            goto label_190458;
        }
    }
    ctx->pc = 0x190454u;
    // 0x190454: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x190454u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190458:
    // 0x190458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19045c: 0x0  nop
    ctx->pc = 0x19045cu;
    // NOP
    // 0x190460: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x190460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190464: 0x0  nop
    ctx->pc = 0x190464u;
    // NOP
    // 0x190468: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x190468u;
    {
        const bool branch_taken_0x190468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190468u;
            // 0x19046c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190468) {
            ctx->pc = 0x190474u;
            goto label_190474;
        }
    }
    ctx->pc = 0x190470u;
    // 0x190470: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x190470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_190474:
    // 0x190474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190478: 0x0  nop
    ctx->pc = 0x190478u;
    // NOP
    // 0x19047c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x19047cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190480: 0x0  nop
    ctx->pc = 0x190480u;
    // NOP
    // 0x190484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x190484u;
    {
        const bool branch_taken_0x190484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190484) {
            ctx->pc = 0x190490u;
            goto label_190490;
        }
    }
    ctx->pc = 0x19048Cu;
    // 0x19048c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19048cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190490:
    // 0x190490: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x190490u;
    SET_GPR_U32(ctx, 31, 0x190498u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190498u; }
        if (ctx->pc != 0x190498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190498u; }
        if (ctx->pc != 0x190498u) { return; }
    }
    ctx->pc = 0x190498u;
label_190498:
    // 0x190498: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x190498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
    // 0x19049c: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x19049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
    // 0x1904a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1904A4u;
    SET_GPR_U32(ctx, 31, 0x1904ACu);
    ctx->pc = 0x1904A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1904A4u;
            // 0x1904a8: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904ACu; }
        if (ctx->pc != 0x1904ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904ACu; }
        if (ctx->pc != 0x1904ACu) { return; }
    }
    ctx->pc = 0x1904ACu;
label_1904ac:
    // 0x1904ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1904acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904b0: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
    // 0x1904b4: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x1904b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
    // 0x1904b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1904BCu;
    SET_GPR_U32(ctx, 31, 0x1904C4u);
    ctx->pc = 0x1904C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1904BCu;
            // 0x1904c0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904C4u; }
        if (ctx->pc != 0x1904C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904C4u; }
        if (ctx->pc != 0x1904C4u) { return; }
    }
    ctx->pc = 0x1904C4u;
label_1904c4:
    // 0x1904c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1904c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1904c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904cc: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1904ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1904d0: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x1904D0u;
    SET_GPR_U32(ctx, 31, 0x1904D8u);
    ctx->pc = 0x1904D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1904D0u;
            // 0x1904d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904D8u; }
        if (ctx->pc != 0x1904D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904D8u; }
        if (ctx->pc != 0x1904D8u) { return; }
    }
    ctx->pc = 0x1904D8u;
label_1904d8:
    // 0x1904d8: 0xc063340  jal         func_18CD00
    ctx->pc = 0x1904D8u;
    SET_GPR_U32(ctx, 31, 0x1904E0u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904E0u; }
        if (ctx->pc != 0x1904E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904E0u; }
        if (ctx->pc != 0x1904E0u) { return; }
    }
    ctx->pc = 0x1904E0u;
label_1904e0:
    // 0x1904e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1904e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1904e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1904e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1904e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1904e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1904ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1904ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1904f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1904F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1904F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1904F0u;
            // 0x1904f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1904F8u;
}
