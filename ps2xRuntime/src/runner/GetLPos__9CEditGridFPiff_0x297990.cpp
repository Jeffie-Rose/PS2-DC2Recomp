#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLPos__9CEditGridFPiff
// Address: 0x297990 - 0x297a50
void GetLPos__9CEditGridFPiff_0x297990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLPos__9CEditGridFPiff_0x297990");
#endif

    switch (ctx->pc) {
        case 0x2979e4u: goto label_2979e4;
        case 0x2979f0u: goto label_2979f0;
        case 0x297a30u: goto label_297a30;
        default: break;
    }

    ctx->pc = 0x297990u;

    // 0x297990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x297998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29799c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2979a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2979a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2979a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2979a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2979a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2979acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2979b0: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2979b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2979b4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2979b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2979b8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2979b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2979bc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2979bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979c0: 0x460360c1  sub.s       $f3, $f12, $f3
    ctx->pc = 0x2979c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x2979c4: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x2979c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x2979c8: 0x46021d03  div.s       $f20, $f3, $f2
    ctx->pc = 0x2979c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2979cc: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2979ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2979d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2979d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2979d4: 0x0  nop
    ctx->pc = 0x2979d4u;
    // NOP
    // 0x2979d8: 0x0  nop
    ctx->pc = 0x2979d8u;
    // NOP
    // 0x2979dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2979DCu;
    SET_GPR_U32(ctx, 31, 0x2979E4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979E4u; }
        if (ctx->pc != 0x2979E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979E4u; }
        if (ctx->pc != 0x2979E4u) { return; }
    }
    ctx->pc = 0x2979E4u;
label_2979e4:
    // 0x2979e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2979e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2979e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2979E8u;
    SET_GPR_U32(ctx, 31, 0x2979F0u);
    ctx->pc = 0x2979ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2979E8u;
            // 0x2979ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979F0u; }
        if (ctx->pc != 0x2979F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979F0u; }
        if (ctx->pc != 0x2979F0u) { return; }
    }
    ctx->pc = 0x2979F0u;
label_2979f0:
    // 0x2979f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2979f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2979f4: 0x0  nop
    ctx->pc = 0x2979f4u;
    // NOP
    // 0x2979f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2979f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2979fc: 0x0  nop
    ctx->pc = 0x2979fcu;
    // NOP
    // 0x297a00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x297A00u;
    {
        const bool branch_taken_0x297a00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x297A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A00u;
            // 0x297a04: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a00) {
            ctx->pc = 0x297A18u;
            goto label_297a18;
        }
    }
    ctx->pc = 0x297A08u;
    // 0x297a08: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x297a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297a0c: 0x0  nop
    ctx->pc = 0x297a0cu;
    // NOP
    // 0x297a10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x297A10u;
    {
        const bool branch_taken_0x297a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297a10) {
            ctx->pc = 0x297A20u;
            goto label_297a20;
        }
    }
    ctx->pc = 0x297A18u;
label_297a18:
    // 0x297a18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x297A18u;
    {
        const bool branch_taken_0x297a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A18u;
            // 0x297a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a18) {
            ctx->pc = 0x297A34u;
            goto label_297a34;
        }
    }
    ctx->pc = 0x297A20u;
label_297a20:
    // 0x297a20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a24: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x297a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297a28: 0xc0a5e2c  jal         func_2978B0
    ctx->pc = 0x297A28u;
    SET_GPR_U32(ctx, 31, 0x297A30u);
    ctx->pc = 0x297A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A28u;
            // 0x297a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2978B0u;
    if (runtime->hasFunction(0x2978B0u)) {
        auto targetFn = runtime->lookupFunction(0x2978B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A30u; }
        if (ctx->pc != 0x297A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__9CEditGridFii_0x2978b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A30u; }
        if (ctx->pc != 0x297A30u) { return; }
    }
    ctx->pc = 0x297A30u;
label_297a30:
    // 0x297a30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x297a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_297a34:
    // 0x297a34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x297a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297a3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x297a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x297a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297a44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x297a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a48: 0x3e00008  jr          $ra
    ctx->pc = 0x297A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A48u;
            // 0x297a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297A50u;
}
