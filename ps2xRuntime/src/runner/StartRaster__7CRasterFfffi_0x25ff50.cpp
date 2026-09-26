#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartRaster__7CRasterFfffi
// Address: 0x25ff50 - 0x26009c
void StartRaster__7CRasterFfffi_0x25ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartRaster__7CRasterFfffi_0x25ff50");
#endif

    ctx->pc = 0x25ff50u;

    // 0x25ff50: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x25ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x25ff54: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x25ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x25ff58: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x25ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25ff5c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x25ff5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25ff60: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x25FF60u;
    {
        const bool branch_taken_0x25ff60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF60u;
            // 0x25ff64: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff60) {
            ctx->pc = 0x26003Cu;
            goto label_26003c;
        }
    }
    ctx->pc = 0x25FF68u;
    // 0x25ff68: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25ff6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ff70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ff70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ff74: 0x0  nop
    ctx->pc = 0x25ff74u;
    // NOP
    // 0x25ff78: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x25ff78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ff7c: 0x0  nop
    ctx->pc = 0x25ff7cu;
    // NOP
    // 0x25ff80: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x25FF80u;
    {
        const bool branch_taken_0x25ff80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF80u;
            // 0x25ff84: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff80) {
            ctx->pc = 0x25FFACu;
            goto label_25ffac;
        }
    }
    ctx->pc = 0x25FF88u;
    // 0x25ff88: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x25ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ff8c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x25ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ff90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ff90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ff94: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x25ff94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x25ff98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25ff98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25ff9c: 0x0  nop
    ctx->pc = 0x25ff9cu;
    // NOP
    // 0x25ffa0: 0x0  nop
    ctx->pc = 0x25ffa0u;
    // NOP
    // 0x25ffa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FFA4u;
    {
        const bool branch_taken_0x25ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFA4u;
            // 0x25ffa8: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffa4) {
            ctx->pc = 0x25FFB0u;
            goto label_25ffb0;
        }
    }
    ctx->pc = 0x25FFACu;
label_25ffac:
    // 0x25ffac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x25ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_25ffb0:
    // 0x25ffb0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25ffb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ffb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ffb8: 0x0  nop
    ctx->pc = 0x25ffb8u;
    // NOP
    // 0x25ffbc: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x25ffbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ffc0: 0x0  nop
    ctx->pc = 0x25ffc0u;
    // NOP
    // 0x25ffc4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x25FFC4u;
    {
        const bool branch_taken_0x25ffc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ffc4) {
            ctx->pc = 0x25FFF0u;
            goto label_25fff0;
        }
    }
    ctx->pc = 0x25FFCCu;
    // 0x25ffcc: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x25ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ffd0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x25ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ffd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ffd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ffd8: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x25ffd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x25ffdc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25ffdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25ffe0: 0x0  nop
    ctx->pc = 0x25ffe0u;
    // NOP
    // 0x25ffe4: 0x0  nop
    ctx->pc = 0x25ffe4u;
    // NOP
    // 0x25ffe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FFE8u;
    {
        const bool branch_taken_0x25ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFE8u;
            // 0x25ffec: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffe8) {
            ctx->pc = 0x25FFF4u;
            goto label_25fff4;
        }
    }
    ctx->pc = 0x25FFF0u;
label_25fff0:
    // 0x25fff0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x25fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_25fff4:
    // 0x25fff4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25fff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25fff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fffc: 0x0  nop
    ctx->pc = 0x25fffcu;
    // NOP
    // 0x260000: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x260000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260004: 0x0  nop
    ctx->pc = 0x260004u;
    // NOP
    // 0x260008: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x260008u;
    {
        const bool branch_taken_0x260008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260008) {
            ctx->pc = 0x260034u;
            goto label_260034;
        }
    }
    ctx->pc = 0x260010u;
    // 0x260010: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x260010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260014: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x260014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26001c: 0x46017041  sub.s       $f1, $f14, $f1
    ctx->pc = 0x26001cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x260020: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x260020u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x260024: 0x0  nop
    ctx->pc = 0x260024u;
    // NOP
    // 0x260028: 0x0  nop
    ctx->pc = 0x260028u;
    // NOP
    // 0x26002c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26002Cu;
    {
        const bool branch_taken_0x26002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26002Cu;
            // 0x260030: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26002c) {
            ctx->pc = 0x260094u;
            goto label_260094;
        }
    }
    ctx->pc = 0x260034u;
label_260034:
    // 0x260034: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x260034u;
    {
        const bool branch_taken_0x260034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260034u;
            // 0x260038: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260034) {
            ctx->pc = 0x260094u;
            goto label_260094;
        }
    }
    ctx->pc = 0x26003Cu;
label_26003c:
    // 0x26003c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26003cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260040: 0x0  nop
    ctx->pc = 0x260040u;
    // NOP
    // 0x260044: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x260044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260048: 0x0  nop
    ctx->pc = 0x260048u;
    // NOP
    // 0x26004c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x26004Cu;
    {
        const bool branch_taken_0x26004c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26004Cu;
            // 0x260050: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26004c) {
            ctx->pc = 0x260058u;
            goto label_260058;
        }
    }
    ctx->pc = 0x260054u;
    // 0x260054: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x260054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_260058:
    // 0x260058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26005c: 0x0  nop
    ctx->pc = 0x26005cu;
    // NOP
    // 0x260060: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x260060u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260064: 0x0  nop
    ctx->pc = 0x260064u;
    // NOP
    // 0x260068: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x260068u;
    {
        const bool branch_taken_0x260068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260068u;
            // 0x26006c: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260068) {
            ctx->pc = 0x260074u;
            goto label_260074;
        }
    }
    ctx->pc = 0x260070u;
    // 0x260070: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x260070u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_260074:
    // 0x260074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260078: 0x0  nop
    ctx->pc = 0x260078u;
    // NOP
    // 0x26007c: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x26007cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260080: 0x0  nop
    ctx->pc = 0x260080u;
    // NOP
    // 0x260084: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x260084u;
    {
        const bool branch_taken_0x260084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260084u;
            // 0x260088: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260084) {
            ctx->pc = 0x260090u;
            goto label_260090;
        }
    }
    ctx->pc = 0x26008Cu;
    // 0x26008c: 0xe48e0014  swc1        $f14, 0x14($a0)
    ctx->pc = 0x26008cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_260090:
    // 0x260090: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x260090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_260094:
    // 0x260094: 0x3e00008  jr          $ra
    ctx->pc = 0x260094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26009Cu;
}
