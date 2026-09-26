#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepRaster__7CRasterFv
// Address: 0x2601f0 - 0x260338
void StepRaster__7CRasterFv_0x2601f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepRaster__7CRasterFv_0x2601f0");
#endif

    ctx->pc = 0x2601f0u;

    // 0x2601f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2601f4: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2601F4u;
    {
        const bool branch_taken_0x2601f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2601F4u;
            // 0x2601f8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601f4) {
            ctx->pc = 0x260330u;
            goto label_260330;
        }
    }
    ctx->pc = 0x2601FCu;
    // 0x2601fc: 0x10a3004c  beq         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2601FCu;
    {
        const bool branch_taken_0x2601fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2601FCu;
            // 0x260200: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601fc) {
            ctx->pc = 0x260330u;
            goto label_260330;
        }
    }
    ctx->pc = 0x260204u;
    // 0x260204: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260204u;
    {
        const bool branch_taken_0x260204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260204u;
            // 0x260208: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260204) {
            ctx->pc = 0x26021Cu;
            goto label_26021c;
        }
    }
    ctx->pc = 0x26020Cu;
    // 0x26020c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26020Cu;
    {
        const bool branch_taken_0x26020c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x26020c) {
            ctx->pc = 0x26021Cu;
            goto label_26021c;
        }
    }
    ctx->pc = 0x260214u;
    // 0x260214: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x260214u;
    {
        const bool branch_taken_0x260214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260214) {
            ctx->pc = 0x260330u;
            goto label_260330;
        }
    }
    ctx->pc = 0x26021Cu;
label_26021c:
    // 0x26021c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x26021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260220: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x260220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260224: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x260224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26022c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26022cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260230: 0x0  nop
    ctx->pc = 0x260230u;
    // NOP
    // 0x260234: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x260234u;
    {
        const bool branch_taken_0x260234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260234u;
            // 0x260238: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260234) {
            ctx->pc = 0x260240u;
            goto label_260240;
        }
    }
    ctx->pc = 0x26023Cu;
    // 0x26023c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x26023cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_260240:
    // 0x260240: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x260240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260244: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x260244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x260248: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x260248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26024c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x26024cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x260250: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x260258: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x260258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26025c: 0x0  nop
    ctx->pc = 0x26025cu;
    // NOP
    // 0x260260: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x260260u;
    {
        const bool branch_taken_0x260260 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260260u;
            // 0x260264: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260260) {
            ctx->pc = 0x26026Cu;
            goto label_26026c;
        }
    }
    ctx->pc = 0x260268u;
    // 0x260268: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x260268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_26026c:
    // 0x26026c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x26026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260274: 0x0  nop
    ctx->pc = 0x260274u;
    // NOP
    // 0x260278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26027c: 0x0  nop
    ctx->pc = 0x26027cu;
    // NOP
    // 0x260280: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x260280u;
    {
        const bool branch_taken_0x260280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260280) {
            ctx->pc = 0x26028Cu;
            goto label_26028c;
        }
    }
    ctx->pc = 0x260288u;
    // 0x260288: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x260288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_26028c:
    // 0x26028c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x26028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260290: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x260290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x260294: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x260294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260298: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x260298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x26029c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26029cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2602a0: 0x0  nop
    ctx->pc = 0x2602a0u;
    // NOP
    // 0x2602a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2602a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2602a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2602a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2602ac: 0x0  nop
    ctx->pc = 0x2602acu;
    // NOP
    // 0x2602b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2602B0u;
    {
        const bool branch_taken_0x2602b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2602B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2602B0u;
            // 0x2602b4: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602b0) {
            ctx->pc = 0x2602BCu;
            goto label_2602bc;
        }
    }
    ctx->pc = 0x2602B8u;
    // 0x2602b8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2602b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2602bc:
    // 0x2602bc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2602bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2602c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2602c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2602c4: 0x0  nop
    ctx->pc = 0x2602c4u;
    // NOP
    // 0x2602c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2602c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2602cc: 0x0  nop
    ctx->pc = 0x2602ccu;
    // NOP
    // 0x2602d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2602D0u;
    {
        const bool branch_taken_0x2602d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2602d0) {
            ctx->pc = 0x2602DCu;
            goto label_2602dc;
        }
    }
    ctx->pc = 0x2602D8u;
    // 0x2602d8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2602d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2602dc:
    // 0x2602dc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2602dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2602e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2602e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2602e4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2602e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2602e8: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x2602e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2602ec: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2602ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2602f0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2602f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2602f4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2602F4u;
    {
        const bool branch_taken_0x2602f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2602f4) {
            ctx->pc = 0x260330u;
            goto label_260330;
        }
    }
    ctx->pc = 0x2602FCu;
    // 0x2602fc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2602fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x260300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x260300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260304: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x260304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x260308: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26030c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260310: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x260310u;
    {
        const bool branch_taken_0x260310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x260314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260310u;
            // 0x260314: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260310) {
            ctx->pc = 0x26031Cu;
            goto label_26031c;
        }
    }
    ctx->pc = 0x260318u;
    // 0x260318: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x260318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_26031c:
    // 0x26031c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x26031cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260324: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x260324u;
    {
        const bool branch_taken_0x260324 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x260324) {
            ctx->pc = 0x260330u;
            goto label_260330;
        }
    }
    ctx->pc = 0x26032Cu;
    // 0x26032c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x26032cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_260330:
    // 0x260330: 0x3e00008  jr          $ra
    ctx->pc = 0x260330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260338u;
}
