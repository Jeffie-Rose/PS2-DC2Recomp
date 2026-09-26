#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: prim_clip_check__FPf
// Address: 0x145830 - 0x1458e0
void prim_clip_check__FPf_0x145830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prim_clip_check__FPf_0x145830");
#endif

    ctx->pc = 0x145830u;

    // 0x145830: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x145830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145834: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x145838: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x145838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14583c: 0x0  nop
    ctx->pc = 0x14583cu;
    // NOP
    // 0x145840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x145840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145844: 0x0  nop
    ctx->pc = 0x145844u;
    // NOP
    // 0x145848: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x145848u;
    {
        const bool branch_taken_0x145848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145848u;
            // 0x14584c: 0x24630ec0  addiu       $v1, $v1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145848) {
            ctx->pc = 0x145870u;
            goto label_145870;
        }
    }
    ctx->pc = 0x145850u;
    // 0x145850: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x145850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x145854: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x145854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x145858: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x145858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14585c: 0x0  nop
    ctx->pc = 0x14585cu;
    // NOP
    // 0x145860: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x145860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145864: 0x0  nop
    ctx->pc = 0x145864u;
    // NOP
    // 0x145868: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145868u;
    {
        const bool branch_taken_0x145868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145868) {
            ctx->pc = 0x145878u;
            goto label_145878;
        }
    }
    ctx->pc = 0x145870u;
label_145870:
    // 0x145870: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x145870u;
    {
        const bool branch_taken_0x145870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145870u;
            // 0x145874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145870) {
            ctx->pc = 0x1458D8u;
            goto label_1458d8;
        }
    }
    ctx->pc = 0x145878u;
label_145878:
    // 0x145878: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x145878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14587c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14587cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145880: 0x0  nop
    ctx->pc = 0x145880u;
    // NOP
    // 0x145884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x145884u;
    {
        const bool branch_taken_0x145884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145884u;
            // 0x145888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145884) {
            ctx->pc = 0x1458A0u;
            goto label_1458a0;
        }
    }
    ctx->pc = 0x14588Cu;
    // 0x14588c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14588cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145890: 0x0  nop
    ctx->pc = 0x145890u;
    // NOP
    // 0x145894: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x145894u;
    {
        const bool branch_taken_0x145894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145894) {
            ctx->pc = 0x1458A8u;
            goto label_1458a8;
        }
    }
    ctx->pc = 0x14589Cu;
    // 0x14589c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14589cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1458a0:
    // 0x1458a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1458A0u;
    {
        const bool branch_taken_0x1458a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1458a0) {
            ctx->pc = 0x1458D8u;
            goto label_1458d8;
        }
    }
    ctx->pc = 0x1458A8u;
label_1458a8:
    // 0x1458a8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1458a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1458ac: 0xc4600e88  lwc1        $f0, 0xE88($v1)
    ctx->pc = 0x1458acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1458b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1458b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1458b4: 0x0  nop
    ctx->pc = 0x1458b4u;
    // NOP
    // 0x1458b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1458B8u;
    {
        const bool branch_taken_0x1458b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1458BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458B8u;
            // 0x1458bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458b8) {
            ctx->pc = 0x1458D8u;
            goto label_1458d8;
        }
    }
    ctx->pc = 0x1458C0u;
    // 0x1458c0: 0xc4600e98  lwc1        $f0, 0xE98($v1)
    ctx->pc = 0x1458c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1458c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1458c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1458c8: 0x0  nop
    ctx->pc = 0x1458c8u;
    // NOP
    // 0x1458cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1458CCu;
    {
        const bool branch_taken_0x1458cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1458D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458CCu;
            // 0x1458d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458cc) {
            ctx->pc = 0x1458D8u;
            goto label_1458d8;
        }
    }
    ctx->pc = 0x1458D4u;
    // 0x1458d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1458d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1458d8:
    // 0x1458d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1458D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1458E0u;
}
