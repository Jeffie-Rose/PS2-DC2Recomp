#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcIntersectionPointLineAndLine__FffffffffPfPf
// Address: 0x151270 - 0x15135c
void CalcIntersectionPointLineAndLine__FffffffffPfPf_0x151270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcIntersectionPointLineAndLine__FffffffffPfPf_0x151270");
#endif

    ctx->pc = 0x151270u;

    // 0x151270: 0x460e6032  c.eq.s      $f12, $f14
    ctx->pc = 0x151270u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151274: 0x0  nop
    ctx->pc = 0x151274u;
    // NOP
    // 0x151278: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x151278u;
    {
        const bool branch_taken_0x151278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151278) {
            ctx->pc = 0x151298u;
            goto label_151298;
        }
    }
    ctx->pc = 0x151280u;
    // 0x151280: 0x46128032  c.eq.s      $f16, $f18
    ctx->pc = 0x151280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151284: 0x0  nop
    ctx->pc = 0x151284u;
    // NOP
    // 0x151288: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151288u;
    {
        const bool branch_taken_0x151288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151288u;
            // 0x15128c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151288) {
            ctx->pc = 0x151298u;
            goto label_151298;
        }
    }
    ctx->pc = 0x151290u;
    // 0x151290: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x151290u;
    {
        const bool branch_taken_0x151290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151290) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x151298u;
label_151298:
    // 0x151298: 0x460e6032  c.eq.s      $f12, $f14
    ctx->pc = 0x151298u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15129c: 0x0  nop
    ctx->pc = 0x15129cu;
    // NOP
    // 0x1512a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1512A0u;
    {
        const bool branch_taken_0x1512a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1512A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512A0u;
            // 0x1512a4: 0x460d7841  sub.s       $f1, $f15, $f13 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512a0) {
            ctx->pc = 0x1512B0u;
            goto label_1512b0;
        }
    }
    ctx->pc = 0x1512A8u;
    // 0x1512a8: 0x460c7001  sub.s       $f0, $f14, $f12
    ctx->pc = 0x1512a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1512ac: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1512acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1512b0:
    // 0x1512b0: 0x46128032  c.eq.s      $f16, $f18
    ctx->pc = 0x1512b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1512b4: 0x0  nop
    ctx->pc = 0x1512b4u;
    // NOP
    // 0x1512b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1512B8u;
    {
        const bool branch_taken_0x1512b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1512BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512B8u;
            // 0x1512bc: 0x46119841  sub.s       $f1, $f19, $f17 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[19], ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512b8) {
            ctx->pc = 0x1512C8u;
            goto label_1512c8;
        }
    }
    ctx->pc = 0x1512C0u;
    // 0x1512c0: 0x46109001  sub.s       $f0, $f18, $f16
    ctx->pc = 0x1512c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[18], ctx->f[16]);
    // 0x1512c4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1512c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1512c8:
    // 0x1512c8: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1512c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1512cc: 0x0  nop
    ctx->pc = 0x1512ccu;
    // NOP
    // 0x1512d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1512D0u;
    {
        const bool branch_taken_0x1512d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1512D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512D0u;
            // 0x1512d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512d0) {
            ctx->pc = 0x1512E0u;
            goto label_1512e0;
        }
    }
    ctx->pc = 0x1512D8u;
    // 0x1512d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1512D8u;
    {
        const bool branch_taken_0x1512d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512d8) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x1512E0u;
label_1512e0:
    // 0x1512e0: 0x460e6032  c.eq.s      $f12, $f14
    ctx->pc = 0x1512e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1512e4: 0x0  nop
    ctx->pc = 0x1512e4u;
    // NOP
    // 0x1512e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1512E8u;
    {
        const bool branch_taken_0x1512e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1512ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512E8u;
            // 0x1512ec: 0x46106001  sub.s       $f0, $f12, $f16 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e8) {
            ctx->pc = 0x151304u;
            goto label_151304;
        }
    }
    ctx->pc = 0x1512F0u;
    // 0x1512f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512f4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1512f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1512f8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1512f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1512fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1512FCu;
    {
        const bool branch_taken_0x1512fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512FCu;
            // 0x151300: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512fc) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x151304u;
label_151304:
    // 0x151304: 0x46128032  c.eq.s      $f16, $f18
    ctx->pc = 0x151304u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151308: 0x0  nop
    ctx->pc = 0x151308u;
    // NOP
    // 0x15130c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15130Cu;
    {
        const bool branch_taken_0x15130c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15130Cu;
            // 0x151310: 0x460c8001  sub.s       $f0, $f16, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15130c) {
            ctx->pc = 0x15132Cu;
            goto label_15132c;
        }
    }
    ctx->pc = 0x151314u;
    // 0x151314: 0x460c8001  sub.s       $f0, $f16, $f12
    ctx->pc = 0x151314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[12]);
    // 0x151318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15131c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x15131cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x151320: 0xe4900000  swc1        $f16, 0x0($a0)
    ctx->pc = 0x151320u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x151324: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151324u;
    {
        const bool branch_taken_0x151324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151324u;
            // 0x151328: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151324) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x15132Cu;
label_15132c:
    // 0x15132c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151330: 0x460d8819  suba.s      $f17, $f13
    ctx->pc = 0x151330u;
    ctx->f[31] = FPU_SUB_S(ctx->f[17], ctx->f[13]);
    // 0x151334: 0x4600185d  msub.s      $f1, $f3, $f0
    ctx->pc = 0x151334u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x151338: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x151338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15133c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15133cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x151340: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x151340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x151344: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x151344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x151348: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x151348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15134c: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x15134cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x151350: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x151350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_151354:
    // 0x151354: 0x3e00008  jr          $ra
    ctx->pc = 0x151354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15135Cu;
}
