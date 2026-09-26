#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMenu1__FfPfffi
// Address: 0x251450 - 0x2514d8
void CalcMenu1__FfPfffi_0x251450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMenu1__FfPfffi_0x251450");
#endif

    switch (ctx->pc) {
        case 0x251498u: goto label_251498;
        case 0x2514a0u: goto label_2514a0;
        default: break;
    }

    ctx->pc = 0x251450u;

    // 0x251450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x251454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x251458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x251458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25145c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25145cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x251460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x251464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x251468: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x251468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25146c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x25146cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x251470: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x251470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x251474: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x251474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x251478: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x251478u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x25147c: 0x0  nop
    ctx->pc = 0x25147cu;
    // NOP
    // 0x251480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251484: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x251484u;
    {
        const bool branch_taken_0x251484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x251488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251484u;
            // 0x251488: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251484) {
            ctx->pc = 0x2514BCu;
            goto label_2514bc;
        }
    }
    ctx->pc = 0x25148Cu;
    // 0x25148c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251490: 0xc0a248c  jal         func_289230
    ctx->pc = 0x251490u;
    SET_GPR_U32(ctx, 31, 0x251498u);
    ctx->pc = 0x251494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251490u;
            // 0x251494: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251498u; }
        if (ctx->pc != 0x251498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251498u; }
        if (ctx->pc != 0x251498u) { return; }
    }
    ctx->pc = 0x251498u;
label_251498:
    // 0x251498: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x251498u;
    SET_GPR_U32(ctx, 31, 0x2514A0u);
    ctx->pc = 0x25149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251498u;
            // 0x25149c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2514A0u; }
        if (ctx->pc != 0x2514A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2514A0u; }
        if (ctx->pc != 0x2514A0u) { return; }
    }
    ctx->pc = 0x2514A0u;
label_2514a0:
    // 0x2514a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2514a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2514a4: 0x0  nop
    ctx->pc = 0x2514a4u;
    // NOP
    // 0x2514a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2514a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2514ac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2514acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2514b0: 0x0  nop
    ctx->pc = 0x2514b0u;
    // NOP
    // 0x2514b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2514B4u;
    {
        const bool branch_taken_0x2514b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2514b4) {
            ctx->pc = 0x2514C0u;
            goto label_2514c0;
        }
    }
    ctx->pc = 0x2514BCu;
label_2514bc:
    // 0x2514bc: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x2514bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2514c0:
    // 0x2514c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2514c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2514c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2514c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2514c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2514c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2514cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2514ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2514d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2514D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2514D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2514D0u;
            // 0x2514d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2514D8u;
}
