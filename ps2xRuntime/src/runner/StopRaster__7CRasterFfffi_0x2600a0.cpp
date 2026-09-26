#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopRaster__7CRasterFfffi
// Address: 0x2600a0 - 0x2601ec
void StopRaster__7CRasterFfffi_0x2600a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopRaster__7CRasterFfffi_0x2600a0");
#endif

    ctx->pc = 0x2600a0u;

    // 0x2600a0: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2600a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2600a4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2600a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2600a8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2600a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2600ac: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2600acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2600b0: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2600B0u;
    {
        const bool branch_taken_0x2600b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2600B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600B0u;
            // 0x2600b4: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600b0) {
            ctx->pc = 0x26018Cu;
            goto label_26018c;
        }
    }
    ctx->pc = 0x2600B8u;
    // 0x2600b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2600b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2600bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2600bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2600c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2600c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2600c4: 0x0  nop
    ctx->pc = 0x2600c4u;
    // NOP
    // 0x2600c8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2600c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2600cc: 0x0  nop
    ctx->pc = 0x2600ccu;
    // NOP
    // 0x2600d0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2600D0u;
    {
        const bool branch_taken_0x2600d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2600D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600D0u;
            // 0x2600d4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600d0) {
            ctx->pc = 0x2600FCu;
            goto label_2600fc;
        }
    }
    ctx->pc = 0x2600D8u;
    // 0x2600d8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2600d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2600dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2600dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2600e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2600e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2600e4: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x2600e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2600e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2600e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2600ec: 0x0  nop
    ctx->pc = 0x2600ecu;
    // NOP
    // 0x2600f0: 0x0  nop
    ctx->pc = 0x2600f0u;
    // NOP
    // 0x2600f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2600F4u;
    {
        const bool branch_taken_0x2600f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600F4u;
            // 0x2600f8: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600f4) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x2600FCu;
label_2600fc:
    // 0x2600fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2600fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_260100:
    // 0x260100: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x260100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x260104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260108: 0x0  nop
    ctx->pc = 0x260108u;
    // NOP
    // 0x26010c: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x26010cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260110: 0x0  nop
    ctx->pc = 0x260110u;
    // NOP
    // 0x260114: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x260114u;
    {
        const bool branch_taken_0x260114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260114) {
            ctx->pc = 0x260140u;
            goto label_260140;
        }
    }
    ctx->pc = 0x26011Cu;
    // 0x26011c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x26011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260120: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x260120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260128: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x260128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x26012c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x26012cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x260130: 0x0  nop
    ctx->pc = 0x260130u;
    // NOP
    // 0x260134: 0x0  nop
    ctx->pc = 0x260134u;
    // NOP
    // 0x260138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260138u;
    {
        const bool branch_taken_0x260138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260138u;
            // 0x26013c: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260138) {
            ctx->pc = 0x260144u;
            goto label_260144;
        }
    }
    ctx->pc = 0x260140u;
label_260140:
    // 0x260140: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x260140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_260144:
    // 0x260144: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x260148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26014c: 0x0  nop
    ctx->pc = 0x26014cu;
    // NOP
    // 0x260150: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x260150u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260154: 0x0  nop
    ctx->pc = 0x260154u;
    // NOP
    // 0x260158: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x260158u;
    {
        const bool branch_taken_0x260158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260158) {
            ctx->pc = 0x260184u;
            goto label_260184;
        }
    }
    ctx->pc = 0x260160u;
    // 0x260160: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x260160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260164: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x260164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26016c: 0x46017041  sub.s       $f1, $f14, $f1
    ctx->pc = 0x26016cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x260170: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x260170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x260174: 0x0  nop
    ctx->pc = 0x260174u;
    // NOP
    // 0x260178: 0x0  nop
    ctx->pc = 0x260178u;
    // NOP
    // 0x26017c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26017Cu;
    {
        const bool branch_taken_0x26017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26017Cu;
            // 0x260180: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26017c) {
            ctx->pc = 0x2601E4u;
            goto label_2601e4;
        }
    }
    ctx->pc = 0x260184u;
label_260184:
    // 0x260184: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x260184u;
    {
        const bool branch_taken_0x260184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260184u;
            // 0x260188: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260184) {
            ctx->pc = 0x2601E4u;
            goto label_2601e4;
        }
    }
    ctx->pc = 0x26018Cu;
label_26018c:
    // 0x26018c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26018cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260190: 0x0  nop
    ctx->pc = 0x260190u;
    // NOP
    // 0x260194: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x260194u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260198: 0x0  nop
    ctx->pc = 0x260198u;
    // NOP
    // 0x26019c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x26019Cu;
    {
        const bool branch_taken_0x26019c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2601A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26019Cu;
            // 0x2601a0: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26019c) {
            ctx->pc = 0x2601A8u;
            goto label_2601a8;
        }
    }
    ctx->pc = 0x2601A4u;
    // 0x2601a4: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x2601a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2601a8:
    // 0x2601a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2601a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2601ac: 0x0  nop
    ctx->pc = 0x2601acu;
    // NOP
    // 0x2601b0: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x2601b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2601b4: 0x0  nop
    ctx->pc = 0x2601b4u;
    // NOP
    // 0x2601b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2601B8u;
    {
        const bool branch_taken_0x2601b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2601BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2601B8u;
            // 0x2601bc: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601b8) {
            ctx->pc = 0x2601C4u;
            goto label_2601c4;
        }
    }
    ctx->pc = 0x2601C0u;
    // 0x2601c0: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x2601c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2601c4:
    // 0x2601c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2601c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2601c8: 0x0  nop
    ctx->pc = 0x2601c8u;
    // NOP
    // 0x2601cc: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x2601ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2601d0: 0x0  nop
    ctx->pc = 0x2601d0u;
    // NOP
    // 0x2601d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2601D4u;
    {
        const bool branch_taken_0x2601d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2601d4) {
            ctx->pc = 0x2601E0u;
            goto label_2601e0;
        }
    }
    ctx->pc = 0x2601DCu;
    // 0x2601dc: 0xe48e0014  swc1        $f14, 0x14($a0)
    ctx->pc = 0x2601dcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2601e0:
    // 0x2601e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2601e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2601e4:
    // 0x2601e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2601E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2601ECu;
}
