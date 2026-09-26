#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHp_Rate__16CBattleCharaInfoFfif
// Address: 0x1a01b0 - 0x1a0368
void AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0");
#endif

    switch (ctx->pc) {
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a0358u: goto label_1a0358;
        default: break;
    }

    ctx->pc = 0x1a01b0u;

    // 0x1a01b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a01b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a01b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a01b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a01bc: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a01c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A01C0u;
    {
        const bool branch_taken_0x1a01c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A01C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01C0u;
            // 0x1a01c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01c0) {
            ctx->pc = 0x1A01D4u;
            goto label_1a01d4;
        }
    }
    ctx->pc = 0x1A01C8u;
    // 0x1a01c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a01c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a01cc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1A01CCu;
    {
        const bool branch_taken_0x1a01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01CCu;
            // 0x1a01d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01cc) {
            ctx->pc = 0x1A035Cu;
            goto label_1a035c;
        }
    }
    ctx->pc = 0x1A01D4u;
label_1a01d4:
    // 0x1a01d4: 0xe60d0078  swc1        $f13, 0x78($s0)
    ctx->pc = 0x1a01d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1a01d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a01dc: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a01e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01e4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1a01e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1a01e8: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a01ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a01ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01f0: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A01F0u;
    {
        const bool branch_taken_0x1a01f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A01F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01F0u;
            // 0x1a01f4: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01f0) {
            ctx->pc = 0x1A0264u;
            goto label_1a0264;
        }
    }
    ctx->pc = 0x1A01F8u;
    // 0x1a01f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a01fc: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A01FCu;
    {
        const bool branch_taken_0x1a01fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01FCu;
            // 0x1a0200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01fc) {
            ctx->pc = 0x1A0264u;
            goto label_1a0264;
        }
    }
    ctx->pc = 0x1A0204u;
    // 0x1a0204: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0204u;
    {
        const bool branch_taken_0x1a0204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0204) {
            ctx->pc = 0x1A021Cu;
            goto label_1a021c;
        }
    }
    ctx->pc = 0x1A020Cu;
    // 0x1a020c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A020Cu;
    {
        const bool branch_taken_0x1a020c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a020c) {
            ctx->pc = 0x1A021Cu;
            goto label_1a021c;
        }
    }
    ctx->pc = 0x1A0214u;
    // 0x1a0214: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A0214u;
    {
        const bool branch_taken_0x1a0214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0214u;
            // 0x1a0218: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0214) {
            ctx->pc = 0x1A02A8u;
            goto label_1a02a8;
        }
    }
    ctx->pc = 0x1A021Cu;
label_1a021c:
    // 0x1a021c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0224: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0228: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a022c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1a022cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a0230: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a0230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a0234: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A0234u;
    {
        const bool branch_taken_0x1a0234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0234u;
            // 0x1a0238: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0234) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A023Cu;
    // 0x1a023c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0240: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0248: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a024c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a024cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0250: 0x0  nop
    ctx->pc = 0x1a0250u;
    // NOP
    // 0x1a0254: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0254u;
    {
        const bool branch_taken_0x1a0254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0254u;
            // 0x1a0258: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0254) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A025Cu;
    // 0x1a025c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A025Cu;
    {
        const bool branch_taken_0x1a025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A025Cu;
            // 0x1a0260: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a025c) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A0264u;
label_1a0264:
    // 0x1a0264: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a026c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0270: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x1a0270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a0274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a0274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a0278: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0278u;
    {
        const bool branch_taken_0x1a0278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0278u;
            // 0x1a027c: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0278) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A0280u;
    // 0x1a0280: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a028c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a0290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0294: 0x0  nop
    ctx->pc = 0x1a0294u;
    // NOP
    // 0x1a0298: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0298u;
    {
        const bool branch_taken_0x1a0298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0298u;
            // 0x1a029c: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0298) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A02A0u;
    // 0x1a02a0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1a02a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a02a4:
    // 0x1a02a4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1a02a8:
    // 0x1a02a8: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1A02A8u;
    SET_GPR_U32(ctx, 31, 0x1A02B0u);
    ctx->pc = 0x1A02ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02A8u;
            // 0x1a02ac: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B0u; }
        if (ctx->pc != 0x1A02B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B0u; }
        if (ctx->pc != 0x1A02B0u) { return; }
    }
    ctx->pc = 0x1A02B0u;
label_1a02b0:
    // 0x1a02b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a02b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a02b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a02b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a02b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1a02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a02bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a02bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a02c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a02c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a02c4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a02c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a02cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a02ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a02d0: 0x0  nop
    ctx->pc = 0x1a02d0u;
    // NOP
    // 0x1a02d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A02D4u;
    {
        const bool branch_taken_0x1a02d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A02D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02D4u;
            // 0x1a02d8: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d4) {
            ctx->pc = 0x1A02E0u;
            goto label_1a02e0;
        }
    }
    ctx->pc = 0x1A02DCu;
    // 0x1a02dc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1a02dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a02e0:
    // 0x1a02e0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a02e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02e8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a02ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a02ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a02f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a02f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a02f4: 0x0  nop
    ctx->pc = 0x1a02f4u;
    // NOP
    // 0x1a02f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A02F8u;
    {
        const bool branch_taken_0x1a02f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A02FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02F8u;
            // 0x1a02fc: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02f8) {
            ctx->pc = 0x1A0304u;
            goto label_1a0304;
        }
    }
    ctx->pc = 0x1A0300u;
    // 0x1a0300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0304:
    // 0x1a0304: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0304u;
    {
        const bool branch_taken_0x1a0304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0304) {
            ctx->pc = 0x1A0310u;
            goto label_1a0310;
        }
    }
    ctx->pc = 0x1A030Cu;
    // 0x1a030c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1a030cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a0310:
    // 0x1a0310: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0318: 0xc6030078  lwc1        $f3, 0x78($s0)
    ctx->pc = 0x1a0318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a031c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a031cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0320: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x1a0320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0324: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1a0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0328: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a0328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a032c: 0x0  nop
    ctx->pc = 0x1a032cu;
    // NOP
    // 0x1a0330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0330u;
    {
        const bool branch_taken_0x1a0330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0330u;
            // 0x1a0334: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0330) {
            ctx->pc = 0x1A0340u;
            goto label_1a0340;
        }
    }
    ctx->pc = 0x1A0338u;
    // 0x1a0338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0338u;
    {
        const bool branch_taken_0x1a0338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0338u;
            // 0x1a033c: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0338) {
            ctx->pc = 0x1A0350u;
            goto label_1a0350;
        }
    }
    ctx->pc = 0x1A0340u;
label_1a0340:
    // 0x1a0340: 0x0  nop
    ctx->pc = 0x1a0340u;
    // NOP
    // 0x1a0344: 0x0  nop
    ctx->pc = 0x1a0344u;
    // NOP
    // 0x1a0348: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a0348u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1a034c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1a034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_1a0350:
    // 0x1a0350: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x1A0350u;
    SET_GPR_U32(ctx, 31, 0x1A0358u);
    ctx->pc = 0x1A0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0350u;
            // 0x1a0354: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0358u; }
        if (ctx->pc != 0x1A0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0358u; }
        if (ctx->pc != 0x1A0358u) { return; }
    }
    ctx->pc = 0x1A0358u;
label_1a0358:
    // 0x1a0358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a035c:
    // 0x1a035c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0360: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0360u;
            // 0x1a0364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0368u;
}
