#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBalanceHeight__FP6CScenePf
// Address: 0x2dd290 - 0x2dd3f0
void GetBalanceHeight__FP6CScenePf_0x2dd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBalanceHeight__FP6CScenePf_0x2dd290");
#endif

    switch (ctx->pc) {
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd398u: goto label_2dd398;
        default: break;
    }

    ctx->pc = 0x2dd290u;

    // 0x2dd290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd29c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dd29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2a0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DD2A0u;
    SET_GPR_U32(ctx, 31, 0x2DD2A8u);
    ctx->pc = 0x2DD2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD2A0u;
            // 0x2dd2a4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD2A8u; }
        if (ctx->pc != 0x2DD2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD2A8u; }
        if (ctx->pc != 0x2DD2A8u) { return; }
    }
    ctx->pc = 0x2DD2A8u;
label_2dd2a8:
    // 0x2dd2a8: 0x8c460f88  lw          $a2, 0xF88($v0)
    ctx->pc = 0x2dd2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3976)));
    // 0x2dd2ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2dd2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd2b0: 0x8c450f84  lw          $a1, 0xF84($v0)
    ctx->pc = 0x2dd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3972)));
    // 0x2dd2b4: 0x8c440f90  lw          $a0, 0xF90($v0)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3984)));
    // 0x2dd2b8: 0x8c430f8c  lw          $v1, 0xF8C($v0)
    ctx->pc = 0x2dd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3980)));
    // 0x2dd2bc: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2dd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dd2c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dd2c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd2c4: 0x0  nop
    ctx->pc = 0x2dd2c4u;
    // NOP
    // 0x2dd2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd2cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dd2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd2d0: 0x0  nop
    ctx->pc = 0x2dd2d0u;
    // NOP
    // 0x2dd2d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD2D4u;
    {
        const bool branch_taken_0x2dd2d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD2D4u;
            // 0x2dd2d8: 0x833023  subu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2d4) {
            ctx->pc = 0x2DD2E0u;
            goto label_2dd2e0;
        }
    }
    ctx->pc = 0x2DD2DCu;
    // 0x2dd2dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dd2dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dd2e0:
    // 0x2dd2e0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2dd2e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd2e8: 0x0  nop
    ctx->pc = 0x2dd2e8u;
    // NOP
    // 0x2dd2ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dd2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd2f0: 0x0  nop
    ctx->pc = 0x2dd2f0u;
    // NOP
    // 0x2dd2f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD2F4u;
    {
        const bool branch_taken_0x2dd2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd2f4) {
            ctx->pc = 0x2DD300u;
            goto label_2dd300;
        }
    }
    ctx->pc = 0x2DD2FCu;
    // 0x2dd2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd300:
    // 0x2dd300: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2dd300u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd308: 0x0  nop
    ctx->pc = 0x2dd308u;
    // NOP
    // 0x2dd30c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dd310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd314: 0x0  nop
    ctx->pc = 0x2dd314u;
    // NOP
    // 0x2dd318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD318u;
    {
        const bool branch_taken_0x2dd318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd318) {
            ctx->pc = 0x2DD324u;
            goto label_2dd324;
        }
    }
    ctx->pc = 0x2DD320u;
    // 0x2dd320: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dd320u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2dd324:
    // 0x2dd324: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2dd328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd32c: 0x0  nop
    ctx->pc = 0x2dd32cu;
    // NOP
    // 0x2dd330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd334: 0x0  nop
    ctx->pc = 0x2dd334u;
    // NOP
    // 0x2dd338: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD338u;
    {
        const bool branch_taken_0x2dd338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD338u;
            // 0x2dd33c: 0x52023  negu        $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd338) {
            ctx->pc = 0x2DD344u;
            goto label_2dd344;
        }
    }
    ctx->pc = 0x2DD340u;
    // 0x2dd340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd344:
    // 0x2dd344: 0x61823  negu        $v1, $a2
    ctx->pc = 0x2dd344u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2dd348: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd34c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd350: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dd350u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd354: 0x0  nop
    ctx->pc = 0x2dd354u;
    // NOP
    // 0x2dd358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dd35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd360: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2dd360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2dd364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd368: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2dd368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dd36c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd370: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2dd370u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd374: 0x0  nop
    ctx->pc = 0x2dd374u;
    // NOP
    // 0x2dd378: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dd37c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd380: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2dd380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dd384: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2dd384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2dd388: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x2dd388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x2dd38c: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2dd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2dd390: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dd390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dd394: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd394u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd398:
    // 0x2dd398: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2dd398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2dd39c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2dd39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd3a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dd3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd3a4: 0x0  nop
    ctx->pc = 0x2dd3a4u;
    // NOP
    // 0x2dd3a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD3A8u;
    {
        const bool branch_taken_0x2dd3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd3a8) {
            ctx->pc = 0x2DD3B4u;
            goto label_2dd3b4;
        }
    }
    ctx->pc = 0x2DD3B0u;
    // 0x2dd3b0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2dd3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2dd3b4:
    // 0x2dd3b4: 0x0  nop
    ctx->pc = 0x2dd3b4u;
    // NOP
    // 0x2dd3b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2dd3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd3bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dd3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd3c0: 0x0  nop
    ctx->pc = 0x2dd3c0u;
    // NOP
    // 0x2dd3c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD3C4u;
    {
        const bool branch_taken_0x2dd3c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd3c4) {
            ctx->pc = 0x2DD3D0u;
            goto label_2dd3d0;
        }
    }
    ctx->pc = 0x2DD3CCu;
    // 0x2dd3cc: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2dd3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2dd3d0:
    // 0x2dd3d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dd3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dd3d4: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x2dd3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dd3d8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DD3D8u;
    {
        const bool branch_taken_0x2dd3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3D8u;
            // 0x2dd3dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3d8) {
            ctx->pc = 0x2DD398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd398;
        }
    }
    ctx->pc = 0x2DD3E0u;
    // 0x2dd3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3E8u;
            // 0x2dd3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD3F0u;
}
