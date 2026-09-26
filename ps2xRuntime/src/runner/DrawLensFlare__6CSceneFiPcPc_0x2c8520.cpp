#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawLensFlare__6CSceneFiPcPc
// Address: 0x2c8520 - 0x2c878c
void DrawLensFlare__6CSceneFiPcPc_0x2c8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawLensFlare__6CSceneFiPcPc_0x2c8520");
#endif

    switch (ctx->pc) {
        case 0x2c8550u: goto label_2c8550;
        case 0x2c8588u: goto label_2c8588;
        case 0x2c8724u: goto label_2c8724;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8770u: goto label_2c8770;
        default: break;
    }

    ctx->pc = 0x2c8520u;

    // 0x2c8520: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c8524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c8528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c8528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c852c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c8530: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c8530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8538: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c8538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c853c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8540: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c8540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8544: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2c8548: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2C8548u;
    SET_GPR_U32(ctx, 31, 0x2C8550u);
    ctx->pc = 0x2C854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8548u;
            // 0x2c854c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8550u; }
        if (ctx->pc != 0x2C8550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8550u; }
        if (ctx->pc != 0x2C8550u) { return; }
    }
    ctx->pc = 0x2C8550u;
label_2c8550:
    // 0x2c8550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8554: 0x10800086  beqz        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2C8554u;
    {
        const bool branch_taken_0x2c8554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8554) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C855Cu;
    // 0x2c855c: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x2c855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2c8560: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2C8560u;
    {
        const bool branch_taken_0x2c8560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8560) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C8568u;
    // 0x2c8568: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2c856c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C856Cu;
    {
        const bool branch_taken_0x2c856c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C856Cu;
            // 0x2c8570: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c856c) {
            ctx->pc = 0x2C8580u;
            goto label_2c8580;
        }
    }
    ctx->pc = 0x2C8574u;
    // 0x2c8574: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2C8574u;
    {
        const bool branch_taken_0x2c8574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8574u;
            // 0x2c8578: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8574) {
            ctx->pc = 0x2C8774u;
            goto label_2c8774;
        }
    }
    ctx->pc = 0x2C857Cu;
    // 0x2c857c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c857cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c8580:
    // 0x2c8580: 0xc0583f8  jal         func_160FE0
    ctx->pc = 0x2C8580u;
    SET_GPR_U32(ctx, 31, 0x2C8588u);
    ctx->pc = 0x160FE0u;
    if (runtime->hasFunction(0x160FE0u)) {
        auto targetFn = runtime->lookupFunction(0x160FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8588u; }
        if (ctx->pc != 0x2C8588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingFlareRatio__4CMapFPf_0x160fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8588u; }
        if (ctx->pc != 0x2C8588u) { return; }
    }
    ctx->pc = 0x2C8588u;
label_2c8588:
    // 0x2c8588: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2c8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c858c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c858cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8590: 0x0  nop
    ctx->pc = 0x2c8590u;
    // NOP
    // 0x2c8594: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c8594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8598: 0x0  nop
    ctx->pc = 0x2c8598u;
    // NOP
    // 0x2c859c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C859Cu;
    {
        const bool branch_taken_0x2c859c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c859c) {
            ctx->pc = 0x2C85CCu;
            goto label_2c85cc;
        }
    }
    ctx->pc = 0x2C85A4u;
    // 0x2c85a4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2c85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c85a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c85a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c85ac: 0x0  nop
    ctx->pc = 0x2c85acu;
    // NOP
    // 0x2c85b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C85B0u;
    {
        const bool branch_taken_0x2c85b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c85b0) {
            ctx->pc = 0x2C85CCu;
            goto label_2c85cc;
        }
    }
    ctx->pc = 0x2C85B8u;
    // 0x2c85b8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c85bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c85bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c85c0: 0x0  nop
    ctx->pc = 0x2c85c0u;
    // NOP
    // 0x2c85c4: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x2C85C4u;
    {
        const bool branch_taken_0x2c85c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c85c4) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C85CCu;
label_2c85cc:
    // 0x2c85cc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c85d0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2c85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c85d4: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x2c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x2c85d8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c85d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c85dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2c85dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c85e0: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x2c85e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2c85e4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2c85e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c85e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c85ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c85f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2c85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2c85f4: 0xc42252e0  lwc1        $f2, 0x52E0($at)
    ctx->pc = 0x2c85f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c85f8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2c85f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c85fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8600: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c8604: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c8604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c8608: 0xc42052e4  lwc1        $f0, 0x52E4($at)
    ctx->pc = 0x2c8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c860c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c860cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c8610: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2c8610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c8614: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c8614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8618: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c861c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c861cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c8620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8624: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2c8624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2c8628: 0xc42052e8  lwc1        $f0, 0x52E8($at)
    ctx->pc = 0x2c8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c862c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8630: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c8630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c8634: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c8638: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c863c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2c863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c8640: 0xc42252f0  lwc1        $f2, 0x52F0($at)
    ctx->pc = 0x2c8640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8644: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x2c8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8648: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c864c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c864cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c8650: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c8650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c8654: 0xc42052f4  lwc1        $f0, 0x52F4($at)
    ctx->pc = 0x2c8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8658: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c8658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c865c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2c865cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c8660: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8664: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c8668: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c8668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c866c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c866cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8670: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2c8670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2c8674: 0xc42052f8  lwc1        $f0, 0x52F8($at)
    ctx->pc = 0x2c8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8678: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c8678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c867c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c867cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c8680: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c8684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8688: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2c8688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c868c: 0xc4225300  lwc1        $f2, 0x5300($at)
    ctx->pc = 0x2c868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8690: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2c8690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8694: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8698: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c869c: 0xc4205304  lwc1        $f0, 0x5304($at)
    ctx->pc = 0x2c869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c86a0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c86a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c86a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c86a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c86a8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c86a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c86ac: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2c86acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c86b0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c86b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c86b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c86b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c86b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c86b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c86bc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2c86bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2c86c0: 0xc4205308  lwc1        $f0, 0x5308($at)
    ctx->pc = 0x2c86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c86c4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c86c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c86c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c86cc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c86ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c86d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c86d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c86d4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2c86d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c86d8: 0xc4225310  lwc1        $f2, 0x5310($at)
    ctx->pc = 0x2c86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c86dc: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2c86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c86e0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c86e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c86e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c86e8: 0xc4205314  lwc1        $f0, 0x5314($at)
    ctx->pc = 0x2c86e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c86ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c86ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c86f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c86f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c86f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2c86f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2c86f8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2c86f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c86fc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8700: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c8700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c8704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8708: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2c8708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2c870c: 0xc4205318  lwc1        $f0, 0x5318($at)
    ctx->pc = 0x2c870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 21272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8710: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8714: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c8714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c8718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c871c: 0xc0b2098  jal         func_2C8260
    ctx->pc = 0x2C871Cu;
    SET_GPR_U32(ctx, 31, 0x2C8724u);
    ctx->pc = 0x2C8720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C871Cu;
            // 0x2c8720: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8260u;
    if (runtime->hasFunction(0x2C8260u)) {
        auto targetFn = runtime->lookupFunction(0x2C8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8724u; }
        if (ctx->pc != 0x2C8724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPosition__6CSceneFPf_0x2c8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8724u; }
        if (ctx->pc != 0x2C8724u) { return; }
    }
    ctx->pc = 0x2C8724u;
label_2c8724:
    // 0x2c8724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8728: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c872c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2c872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2c8730: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x2C8730u;
    SET_GPR_U32(ctx, 31, 0x2C8738u);
    ctx->pc = 0x2C8734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8730u;
            // 0x2c8734: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8738u; }
        if (ctx->pc != 0x2C8738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8738u; }
        if (ctx->pc != 0x2C8738u) { return; }
    }
    ctx->pc = 0x2C8738u;
label_2c8738:
    // 0x2c8738: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8738u;
    {
        const bool branch_taken_0x2c8738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8738) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C8740u;
    // 0x2c8740: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2c8740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x2c8744: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2c8744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2c8748: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c8748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c874c: 0xc0516b8  jal         func_145AE0
    ctx->pc = 0x2C874Cu;
    SET_GPR_U32(ctx, 31, 0x2C8754u);
    ctx->pc = 0x145AE0u;
    if (runtime->hasFunction(0x145AE0u)) {
        auto targetFn = runtime->lookupFunction(0x145AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8754u; }
        if (ctx->pc != 0x2C8754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransZPrim__Ff_0x145ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8754u; }
        if (ctx->pc != 0x2C8754u) { return; }
    }
    ctx->pc = 0x2C8754u;
label_2c8754:
    // 0x2c8754: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c8754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8758: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c8758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c875c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c875cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8760: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2c8760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2c8764: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c8768: 0xc05fa98  jal         func_17EA60
    ctx->pc = 0x2C8768u;
    SET_GPR_U32(ctx, 31, 0x2C8770u);
    ctx->pc = 0x2C876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8768u;
            // 0x2c876c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (runtime->hasFunction(0x17EA60u)) {
        auto targetFn = runtime->lookupFunction(0x17EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8770u; }
        if (ctx->pc != 0x2C8770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LensFlare__FPiPfiPcPc_0x17ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8770u; }
        if (ctx->pc != 0x2C8770u) { return; }
    }
    ctx->pc = 0x2C8770u;
label_2c8770:
    // 0x2c8770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8774:
    // 0x2c8774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c877c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c877cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8784: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8784u;
            // 0x2c8788: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C878Cu;
}
