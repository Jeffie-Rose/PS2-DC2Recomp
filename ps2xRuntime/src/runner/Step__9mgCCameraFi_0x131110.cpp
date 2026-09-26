#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9mgCCameraFi
// Address: 0x131110 - 0x1313a0
void Step__9mgCCameraFi_0x131110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9mgCCameraFi_0x131110");
#endif

    switch (ctx->pc) {
        case 0x1311d0u: goto label_1311d0;
        case 0x1311d4u: goto label_1311d4;
        case 0x13131cu: goto label_13131c;
        case 0x131348u: goto label_131348;
        case 0x13135cu: goto label_13135c;
        case 0x131374u: goto label_131374;
        case 0x131380u: goto label_131380;
        default: break;
    }

    ctx->pc = 0x131110u;

    // 0x131110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13111c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131124: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x131124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x131128: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x131128u;
    {
        const bool branch_taken_0x131128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131128u;
            // 0x13112c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131128) {
            ctx->pc = 0x131388u;
            goto label_131388;
        }
    }
    ctx->pc = 0x131130u;
    // 0x131130: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x131130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x131134: 0x14600094  bnez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x131134u;
    {
        const bool branch_taken_0x131134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131134) {
            ctx->pc = 0x131388u;
            goto label_131388;
        }
    }
    ctx->pc = 0x13113Cu;
    // 0x13113c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x13113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131140: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x131140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131144: 0x0  nop
    ctx->pc = 0x131144u;
    // NOP
    // 0x131148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x131148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13114c: 0x0  nop
    ctx->pc = 0x13114cu;
    // NOP
    // 0x131150: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x131150u;
    {
        const bool branch_taken_0x131150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131150u;
            // 0x131154: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131150) {
            ctx->pc = 0x13115Cu;
            goto label_13115c;
        }
    }
    ctx->pc = 0x131158u;
    // 0x131158: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x131158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_13115c:
    // 0x13115c: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x13115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131164: 0x0  nop
    ctx->pc = 0x131164u;
    // NOP
    // 0x131168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x131168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13116c: 0x0  nop
    ctx->pc = 0x13116cu;
    // NOP
    // 0x131170: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x131170u;
    {
        const bool branch_taken_0x131170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131170u;
            // 0x131174: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131170) {
            ctx->pc = 0x13117Cu;
            goto label_13117c;
        }
    }
    ctx->pc = 0x131178u;
    // 0x131178: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x131178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_13117c:
    // 0x13117c: 0x4a1000e  bgez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x13117Cu;
    {
        const bool branch_taken_0x13117c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x131180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13117Cu;
            // 0x131180: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13117c) {
            ctx->pc = 0x1311B8u;
            goto label_1311b8;
        }
    }
    ctx->pc = 0x131184u;
    // 0x131184: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x131184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131188: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x131188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x13118c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x13118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131190: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x131190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x131194: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x131194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131198: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x131198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x13119c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x13119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1311a0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1311a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1311a4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1311a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1311a8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1311a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1311ac: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1311acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1311b0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1311B0u;
    {
        const bool branch_taken_0x1311b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311B0u;
            // 0x1311b4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311b0) {
            ctx->pc = 0x131310u;
            goto label_131310;
        }
    }
    ctx->pc = 0x1311B8u;
label_1311b8:
    // 0x1311b8: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x1311B8u;
    {
        const bool branch_taken_0x1311b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311B8u;
            // 0x1311bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311b8) {
            ctx->pc = 0x131310u;
            goto label_131310;
        }
    }
    ctx->pc = 0x1311C0u;
    // 0x1311c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1311c4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1311c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1311c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1311c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1311cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1311ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1311d0:
    // 0x1311d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1311d4:
    // 0x1311d4: 0x0  nop
    ctx->pc = 0x1311d4u;
    // NOP
    // 0x1311d8: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x1311d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1311dc: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x1311dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311e0: 0x0  nop
    ctx->pc = 0x1311e0u;
    // NOP
    // 0x1311e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1311E4u;
    {
        const bool branch_taken_0x1311e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1311e4) {
            ctx->pc = 0x131214u;
            goto label_131214;
        }
    }
    ctx->pc = 0x1311ECu;
    // 0x1311ec: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x1311ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1311f0: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1311f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311f4: 0x0  nop
    ctx->pc = 0x1311f4u;
    // NOP
    // 0x1311f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1311F8u;
    {
        const bool branch_taken_0x1311f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1311FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311F8u;
            // 0x1311fc: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311f8) {
            ctx->pc = 0x131214u;
            goto label_131214;
        }
    }
    ctx->pc = 0x131200u;
    // 0x131200: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x131200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131204: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x131204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x131208: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x131208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13120c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13120Cu;
    {
        const bool branch_taken_0x13120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13120Cu;
            // 0x131210: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13120c) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x131214u;
label_131214:
    // 0x131214: 0x0  nop
    ctx->pc = 0x131214u;
    // NOP
    // 0x131218: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x131218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x13121c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x13121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131220: 0x24480020  addiu       $t0, $v0, 0x20
    ctx->pc = 0x131220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x131224: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x131224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131228: 0xc605004c  lwc1        $f5, 0x4C($s0)
    ctx->pc = 0x131228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13122c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x13122cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x131230: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x131230u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x131234: 0x0  nop
    ctx->pc = 0x131234u;
    // NOP
    // 0x131238: 0x0  nop
    ctx->pc = 0x131238u;
    // NOP
    // 0x13123c: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x13123cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131240: 0x0  nop
    ctx->pc = 0x131240u;
    // NOP
    // 0x131244: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x131244u;
    {
        const bool branch_taken_0x131244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131244) {
            ctx->pc = 0x131250u;
            goto label_131250;
        }
    }
    ctx->pc = 0x13124Cu;
    // 0x13124c: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x13124cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
label_131250:
    // 0x131250: 0x24490030  addiu       $t1, $v0, 0x30
    ctx->pc = 0x131250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131254: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x131254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131258: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13125c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x13125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131260: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x131260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131264: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x131264u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x131268: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x131268u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x13126c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x13126cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x131270: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x131270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x131274: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x131274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131278: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x131278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13127c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x13127cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x131280: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x131280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131284: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x131284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131288: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x131288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13128c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x13128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131290: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x131290u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x131294: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x131294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131298: 0x0  nop
    ctx->pc = 0x131298u;
    // NOP
    // 0x13129c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13129Cu;
    {
        const bool branch_taken_0x13129c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1312A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13129Cu;
            // 0x1312a0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13129c) {
            ctx->pc = 0x1312A8u;
            goto label_1312a8;
        }
    }
    ctx->pc = 0x1312A4u;
    // 0x1312a4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1312a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_1312a8:
    // 0x1312a8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1312a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312ac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1312acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1312b0: 0x0  nop
    ctx->pc = 0x1312b0u;
    // NOP
    // 0x1312b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1312B4u;
    {
        const bool branch_taken_0x1312b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1312b4) {
            ctx->pc = 0x1312C0u;
            goto label_1312c0;
        }
    }
    ctx->pc = 0x1312BCu;
    // 0x1312bc: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x1312bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1312c0:
    // 0x1312c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1312c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1312c4: 0x0  nop
    ctx->pc = 0x1312c4u;
    // NOP
    // 0x1312c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1312C8u;
    {
        const bool branch_taken_0x1312c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1312c8) {
            ctx->pc = 0x1312D4u;
            goto label_1312d4;
        }
    }
    ctx->pc = 0x1312D0u;
    // 0x1312d0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1312d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1312d4:
    // 0x1312d4: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1312d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1312d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1312dc: 0x0  nop
    ctx->pc = 0x1312dcu;
    // NOP
    // 0x1312e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E0u;
    {
        const bool branch_taken_0x1312e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1312e0) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312E8u;
    // 0x1312e8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1312e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1312ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1312f0:
    // 0x1312f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1312f4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1312f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1312f8: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1312F8u;
    {
        const bool branch_taken_0x1312f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1312FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312F8u;
            // 0x1312fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312f8) {
            ctx->pc = 0x1311D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1311d4;
        }
    }
    ctx->pc = 0x131300u;
    // 0x131300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131304: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x131304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x131308: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x131308u;
    {
        const bool branch_taken_0x131308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131308u;
            // 0x13130c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131308) {
            ctx->pc = 0x1311D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1311d0;
        }
    }
    ctx->pc = 0x131310u;
label_131310:
    // 0x131310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131314: 0xc04c524  jal         func_131490
    ctx->pc = 0x131314u;
    SET_GPR_U32(ctx, 31, 0x13131Cu);
    ctx->pc = 0x131318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131314u;
            // 0x131318: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13131Cu; }
        if (ctx->pc != 0x13131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13131Cu; }
        if (ctx->pc != 0x13131Cu) { return; }
    }
    ctx->pc = 0x13131Cu;
label_13131c:
    // 0x13131c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x13131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131320: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131324: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x131324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x131328: 0x27b20048  addiu       $s2, $sp, 0x48
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x13132c: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x13132cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x131330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x131330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131334: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x131334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131338: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x131338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13133c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x13133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x131340: 0xc041be0  jal         func_106F80
    ctx->pc = 0x131340u;
    SET_GPR_U32(ctx, 31, 0x131348u);
    ctx->pc = 0x131344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131340u;
            // 0x131344: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131348u; }
        if (ctx->pc != 0x131348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131348u; }
        if (ctx->pc != 0x131348u) { return; }
    }
    ctx->pc = 0x131348u;
label_131348:
    // 0x131348: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x131348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13134c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x13134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131350: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x131350u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x131354: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x131354u;
    SET_GPR_U32(ctx, 31, 0x13135Cu);
    ctx->pc = 0x131358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131354u;
            // 0x131358: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13135Cu; }
        if (ctx->pc != 0x13135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13135Cu; }
        if (ctx->pc != 0x13135Cu) { return; }
    }
    ctx->pc = 0x13135Cu;
label_13135c:
    // 0x13135c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x13135cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x131360: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x131360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131364: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x131364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131368: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x131368u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13136c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x13136Cu;
    SET_GPR_U32(ctx, 31, 0x131374u);
    ctx->pc = 0x131370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13136Cu;
            // 0x131370: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131374u; }
        if (ctx->pc != 0x131374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131374u; }
        if (ctx->pc != 0x131374u) { return; }
    }
    ctx->pc = 0x131374u;
label_131374:
    // 0x131374: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x131374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131378: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x131378u;
    SET_GPR_U32(ctx, 31, 0x131380u);
    ctx->pc = 0x13137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131378u;
            // 0x13137c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131380u; }
        if (ctx->pc != 0x131380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131380u; }
        if (ctx->pc != 0x131380u) { return; }
    }
    ctx->pc = 0x131380u;
label_131380:
    // 0x131380: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x131380u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x131384: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x131384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_131388:
    // 0x131388: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13138c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13138cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131398: 0x3e00008  jr          $ra
    ctx->pc = 0x131398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131398u;
            // 0x13139c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1313A0u;
}
