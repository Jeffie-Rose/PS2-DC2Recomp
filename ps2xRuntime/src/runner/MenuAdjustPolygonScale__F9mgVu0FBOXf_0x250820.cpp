#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAdjustPolygonScale__F9mgVu0FBOXf
// Address: 0x250820 - 0x2508cc
void MenuAdjustPolygonScale__F9mgVu0FBOXf_0x250820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAdjustPolygonScale__F9mgVu0FBOXf_0x250820");
#endif

    switch (ctx->pc) {
        case 0x250848u: goto label_250848;
        case 0x250864u: goto label_250864;
        case 0x250870u: goto label_250870;
        default: break;
    }

    ctx->pc = 0x250820u;

    // 0x250820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x250820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x250824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250828: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x250828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25082c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25082cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250830: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x250830u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250834: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x250834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x250838: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x250838u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x25083c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250840: 0xc0941cc  jal         func_250730
    ctx->pc = 0x250840u;
    SET_GPR_U32(ctx, 31, 0x250848u);
    ctx->pc = 0x250844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250840u;
            // 0x250844: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250730u;
    if (runtime->hasFunction(0x250730u)) {
        auto targetFn = runtime->lookupFunction(0x250730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250848u; }
        if (ctx->pc != 0x250848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReCalcBox__FP9mgVu0FBOX9mgVu0FBOX_0x250730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250848u; }
        if (ctx->pc != 0x250848u) { return; }
    }
    ctx->pc = 0x250848u;
label_250848:
    // 0x250848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x250848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25084c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x250850: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x250850u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x250854: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x250854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x250858: 0xe7ac0064  swc1        $f12, 0x64($sp)
    ctx->pc = 0x250858u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25085c: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x25085Cu;
    SET_GPR_U32(ctx, 31, 0x250864u);
    ctx->pc = 0x250860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25085Cu;
            // 0x250860: 0xe7ac0068  swc1        $f12, 0x68($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250864u; }
        if (ctx->pc != 0x250864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250864u; }
        if (ctx->pc != 0x250864u) { return; }
    }
    ctx->pc = 0x250864u;
label_250864:
    // 0x250864: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x250864u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x250868: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x250868u;
    SET_GPR_U32(ctx, 31, 0x250870u);
    ctx->pc = 0x25086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250868u;
            // 0x25086c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250870u; }
        if (ctx->pc != 0x250870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250870u; }
        if (ctx->pc != 0x250870u) { return; }
    }
    ctx->pc = 0x250870u;
label_250870:
    // 0x250870: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x250870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250874: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x250878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x250878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25087c: 0x0  nop
    ctx->pc = 0x25087cu;
    // NOP
    // 0x250880: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x250880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250884: 0x0  nop
    ctx->pc = 0x250884u;
    // NOP
    // 0x250888: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x250888u;
    {
        const bool branch_taken_0x250888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250888) {
            ctx->pc = 0x2508B8u;
            goto label_2508b8;
        }
    }
    ctx->pc = 0x250890u;
    // 0x250890: 0x0  nop
    ctx->pc = 0x250890u;
    // NOP
    // 0x250894: 0x0  nop
    ctx->pc = 0x250894u;
    // NOP
    // 0x250898: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x250898u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x25089c: 0x0  nop
    ctx->pc = 0x25089cu;
    // NOP
    // 0x2508a0: 0x0  nop
    ctx->pc = 0x2508a0u;
    // NOP
    // 0x2508a4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2508a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2508a8: 0x0  nop
    ctx->pc = 0x2508a8u;
    // NOP
    // 0x2508ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2508ACu;
    {
        const bool branch_taken_0x2508ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2508ac) {
            ctx->pc = 0x2508B8u;
            goto label_2508b8;
        }
    }
    ctx->pc = 0x2508B4u;
    // 0x2508b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2508b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2508b8:
    // 0x2508b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2508b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2508bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2508c0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2508c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2508c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2508C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2508C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2508C4u;
            // 0x2508c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2508CCu;
}
