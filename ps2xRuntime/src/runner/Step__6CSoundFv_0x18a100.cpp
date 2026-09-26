#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__6CSoundFv
// Address: 0x18a100 - 0x18a280
void Step__6CSoundFv_0x18a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__6CSoundFv_0x18a100");
#endif

    switch (ctx->pc) {
        case 0x18a120u: goto label_18a120;
        case 0x18a1d0u: goto label_18a1d0;
        case 0x18a1e0u: goto label_18a1e0;
        case 0x18a1f8u: goto label_18a1f8;
        case 0x18a22cu: goto label_18a22c;
        case 0x18a244u: goto label_18a244;
        default: break;
    }

    ctx->pc = 0x18a100u;

    // 0x18a100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18a108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a10c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a110: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18a110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a118: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a120:
    // 0x18a120: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a124: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x18a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x18a128: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18a12c: 0x8cc300f8  lw          $v1, 0xF8($a2)
    ctx->pc = 0x18a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x18a130: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x18A130u;
    {
        const bool branch_taken_0x18a130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A130u;
            // 0x18a134: 0x24c700f8  addiu       $a3, $a2, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a130) {
            ctx->pc = 0x18A1E0u;
            goto label_18a1e0;
        }
    }
    ctx->pc = 0x18A138u;
    // 0x18a138: 0xc4c10104  lwc1        $f1, 0x104($a2)
    ctx->pc = 0x18a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a13c: 0x24c20104  addiu       $v0, $a2, 0x104
    ctx->pc = 0x18a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 260));
    // 0x18a140: 0xc4c00100  lwc1        $f0, 0x100($a2)
    ctx->pc = 0x18a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a144: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18a144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18a148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18a14c: 0xe4c00100  swc1        $f0, 0x100($a2)
    ctx->pc = 0x18a14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 256), bits); }
    // 0x18a150: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x18a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a154: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x18a154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a158: 0x0  nop
    ctx->pc = 0x18a158u;
    // NOP
    // 0x18a15c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18A15Cu;
    {
        const bool branch_taken_0x18a15c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A15Cu;
            // 0x18a160: 0x24c30100  addiu       $v1, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a15c) {
            ctx->pc = 0x18A188u;
            goto label_18a188;
        }
    }
    ctx->pc = 0x18A164u;
    // 0x18a164: 0xc4c100fc  lwc1        $f1, 0xFC($a2)
    ctx->pc = 0x18a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a168: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a16c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18a170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a174: 0x0  nop
    ctx->pc = 0x18a174u;
    // NOP
    // 0x18a178: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18A178u;
    {
        const bool branch_taken_0x18a178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a178) {
            ctx->pc = 0x18A188u;
            goto label_18a188;
        }
    }
    ctx->pc = 0x18A180u;
    // 0x18a180: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x18a180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18a184: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x18a184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18a188:
    // 0x18a188: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a18c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a190: 0x0  nop
    ctx->pc = 0x18a190u;
    // NOP
    // 0x18a194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a198: 0x0  nop
    ctx->pc = 0x18a198u;
    // NOP
    // 0x18a19c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18A19Cu;
    {
        const bool branch_taken_0x18a19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a19c) {
            ctx->pc = 0x18A1C8u;
            goto label_18a1c8;
        }
    }
    ctx->pc = 0x18A1A4u;
    // 0x18a1a4: 0xc4c100fc  lwc1        $f1, 0xFC($a2)
    ctx->pc = 0x18a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a1a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a1ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a1b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18a1b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a1b4: 0x0  nop
    ctx->pc = 0x18a1b4u;
    // NOP
    // 0x18a1b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18A1B8u;
    {
        const bool branch_taken_0x18a1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a1b8) {
            ctx->pc = 0x18A1C8u;
            goto label_18a1c8;
        }
    }
    ctx->pc = 0x18A1C0u;
    // 0x18a1c0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x18a1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18a1c4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x18a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18a1c8:
    // 0x18a1c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18A1C8u;
    SET_GPR_U32(ctx, 31, 0x18A1D0u);
    ctx->pc = 0x18A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1C8u;
            // 0x18a1cc: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1D0u; }
        if (ctx->pc != 0x18A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1D0u; }
        if (ctx->pc != 0x18A1D0u) { return; }
    }
    ctx->pc = 0x18A1D0u;
label_18a1d0:
    // 0x18a1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1d8: 0xc0628b0  jal         func_18A2C0
    ctx->pc = 0x18A1D8u;
    SET_GPR_U32(ctx, 31, 0x18A1E0u);
    ctx->pc = 0x18A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1D8u;
            // 0x18a1dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2C0u;
    if (runtime->hasFunction(0x18A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1E0u; }
        if (ctx->pc != 0x18A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__6CSoundFii_0x18a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1E0u; }
        if (ctx->pc != 0x18A1E0u) { return; }
    }
    ctx->pc = 0x18A1E0u;
label_18a1e0:
    // 0x18a1e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18a1e4: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x18a1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a1e8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x18A1E8u;
    {
        const bool branch_taken_0x18a1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1E8u;
            // 0x18a1ec: 0x26520124  addiu       $s2, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1e8) {
            ctx->pc = 0x18A120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a120;
        }
    }
    ctx->pc = 0x18A1F0u;
    // 0x18a1f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a1f8:
    // 0x18a1f8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a1fc: 0x24631140  addiu       $v1, $v1, 0x1140
    ctx->pc = 0x18a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4416));
    // 0x18a200: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18a204: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18a208: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18A208u;
    {
        const bool branch_taken_0x18a208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A208u;
            // 0x18a20c: 0x24b20004  addiu       $s2, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a208) {
            ctx->pc = 0x18A254u;
            goto label_18a254;
        }
    }
    ctx->pc = 0x18A210u;
    // 0x18a210: 0x2c610201  sltiu       $at, $v1, 0x201
    ctx->pc = 0x18a210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x18a214: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x18A214u;
    {
        const bool branch_taken_0x18a214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a214) {
            ctx->pc = 0x18A250u;
            goto label_18a250;
        }
    }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0x8f828a70  lw          $v0, -0x7590($gp)
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937200)));
    // 0x18a220: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x18a224: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x18A224u;
    SET_GPR_U32(ctx, 31, 0x18A22Cu);
    ctx->pc = 0x18A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A224u;
            // 0x18a228: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A22Cu; }
        if (ctx->pc != 0x18A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A22Cu; }
        if (ctx->pc != 0x18A22Cu) { return; }
    }
    ctx->pc = 0x18A22Cu;
label_18a22c:
    // 0x18a22c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A22Cu;
    {
        const bool branch_taken_0x18a22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a22c) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A234u;
    // 0x18a234: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18a238: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18a23c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18A23Cu;
    SET_GPR_U32(ctx, 31, 0x18A244u);
    ctx->pc = 0x18A240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A23Cu;
            // 0x18a240: 0x248447f0  addiu       $a0, $a0, 0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A244u; }
        if (ctx->pc != 0x18A244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A244u; }
        if (ctx->pc != 0x18A244u) { return; }
    }
    ctx->pc = 0x18A244u;
label_18a244:
    // 0x18a244: 0x0  nop
    ctx->pc = 0x18a244u;
    // NOP
    // 0x18a248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A248u;
    {
        const bool branch_taken_0x18a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A248u;
            // 0x18a24c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a248) {
            ctx->pc = 0x18A254u;
            goto label_18a254;
        }
    }
    ctx->pc = 0x18A250u;
label_18a250:
    // 0x18a250: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18a250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_18a254:
    // 0x18a254: 0x0  nop
    ctx->pc = 0x18a254u;
    // NOP
    // 0x18a258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a25c: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x18a25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18a260: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x18A260u;
    {
        const bool branch_taken_0x18a260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A260u;
            // 0x18a264: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a260) {
            ctx->pc = 0x18A1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a1f8;
        }
    }
    ctx->pc = 0x18A268u;
    // 0x18a268: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a26c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a278: 0x3e00008  jr          $ra
    ctx->pc = 0x18A278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A278u;
            // 0x18a27c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A280u;
}
