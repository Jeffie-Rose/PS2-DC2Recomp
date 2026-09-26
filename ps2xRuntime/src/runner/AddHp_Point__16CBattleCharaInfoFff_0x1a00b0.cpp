#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHp_Point__16CBattleCharaInfoFff
// Address: 0x1a00b0 - 0x1a01a4
void AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHp_Point__16CBattleCharaInfoFff_0x1a00b0");
#endif

    ctx->pc = 0x1a00b0u;

    // 0x1a00b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a00b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A00B4u;
    {
        const bool branch_taken_0x1a00b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A00B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00B4u;
            // 0x1a00b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00b4) {
            ctx->pc = 0x1A00C8u;
            goto label_1a00c8;
        }
    }
    ctx->pc = 0x1A00BCu;
    // 0x1a00bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a00bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A00C0u;
    {
        const bool branch_taken_0x1a00c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00c0) {
            ctx->pc = 0x1A019Cu;
            goto label_1a019c;
        }
    }
    ctx->pc = 0x1A00C8u;
label_1a00c8:
    // 0x1a00c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a00c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00cc: 0x0  nop
    ctx->pc = 0x1a00ccu;
    // NOP
    // 0x1a00d0: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x1a00d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a00d4: 0x0  nop
    ctx->pc = 0x1a00d4u;
    // NOP
    // 0x1a00d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00D8u;
    {
        const bool branch_taken_0x1a00d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A00DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00D8u;
            // 0x1a00dc: 0xe48d0078  swc1        $f13, 0x78($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00d8) {
            ctx->pc = 0x1A00E8u;
            goto label_1a00e8;
        }
    }
    ctx->pc = 0x1A00E0u;
    // 0x1a00e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A00E0u;
    {
        const bool branch_taken_0x1a00e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00E0u;
            // 0x1a00e4: 0xe48c007c  swc1        $f12, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00e0) {
            ctx->pc = 0x1A00F8u;
            goto label_1a00f8;
        }
    }
    ctx->pc = 0x1A00E8u;
label_1a00e8:
    // 0x1a00e8: 0x0  nop
    ctx->pc = 0x1a00e8u;
    // NOP
    // 0x1a00ec: 0x0  nop
    ctx->pc = 0x1a00ecu;
    // NOP
    // 0x1a00f0: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x1a00f0u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x1a00f4: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x1a00f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_1a00f8:
    // 0x1a00f8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a00fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a00fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0100: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0104: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1a0104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1a0108: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a010c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0110: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x1a0110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1a0114: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0118: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x1a0118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x1a011c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a0120: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0124: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0128: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1a0128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a012c: 0x0  nop
    ctx->pc = 0x1a012cu;
    // NOP
    // 0x1a0130: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0130u;
    {
        const bool branch_taken_0x1a0130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0130u;
            // 0x1a0134: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0130) {
            ctx->pc = 0x1A013Cu;
            goto label_1a013c;
        }
    }
    ctx->pc = 0x1A0138u;
    // 0x1a0138: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1a0138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a013c:
    // 0x1a013c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1a013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0144: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a0144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0148: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a014c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a014cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0150: 0x0  nop
    ctx->pc = 0x1a0150u;
    // NOP
    // 0x1a0154: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0154u;
    {
        const bool branch_taken_0x1a0154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0154u;
            // 0x1a0158: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0154) {
            ctx->pc = 0x1A0160u;
            goto label_1a0160;
        }
    }
    ctx->pc = 0x1A015Cu;
    // 0x1a015c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a015cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0160:
    // 0x1a0160: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0160u;
    {
        const bool branch_taken_0x1a0160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0160) {
            ctx->pc = 0x1A016Cu;
            goto label_1a016c;
        }
    }
    ctx->pc = 0x1A0168u;
    // 0x1a0168: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1a0168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1a016c:
    // 0x1a016c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0174: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0178: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a0178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a017c: 0x0  nop
    ctx->pc = 0x1a017cu;
    // NOP
    // 0x1a0180: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0180u;
    {
        const bool branch_taken_0x1a0180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0180) {
            ctx->pc = 0x1A0190u;
            goto label_1a0190;
        }
    }
    ctx->pc = 0x1A0188u;
    // 0x1a0188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0188u;
    {
        const bool branch_taken_0x1a0188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0188) {
            ctx->pc = 0x1A019Cu;
            goto label_1a019c;
        }
    }
    ctx->pc = 0x1A0190u;
label_1a0190:
    // 0x1a0190: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0194: 0x0  nop
    ctx->pc = 0x1a0194u;
    // NOP
    // 0x1a0198: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a0198u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a019c:
    // 0x1a019c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A019Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A01A4u;
}
