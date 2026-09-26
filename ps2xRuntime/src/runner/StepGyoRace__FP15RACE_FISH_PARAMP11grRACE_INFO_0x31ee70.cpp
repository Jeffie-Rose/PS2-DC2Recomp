#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepGyoRace__FP15RACE_FISH_PARAMP11grRACE_INFO
// Address: 0x31ee70 - 0x31f19c
void StepGyoRace__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepGyoRace__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31ee70");
#endif

    switch (ctx->pc) {
        case 0x31eed4u: goto label_31eed4;
        case 0x31eefcu: goto label_31eefc;
        case 0x31ef10u: goto label_31ef10;
        case 0x31ef98u: goto label_31ef98;
        case 0x31efacu: goto label_31efac;
        case 0x31f018u: goto label_31f018;
        case 0x31f020u: goto label_31f020;
        case 0x31f034u: goto label_31f034;
        case 0x31f08cu: goto label_31f08c;
        case 0x31f09cu: goto label_31f09c;
        case 0x31f10cu: goto label_31f10c;
        case 0x31f124u: goto label_31f124;
        case 0x31f134u: goto label_31f134;
        default: break;
    }

    ctx->pc = 0x31ee70u;

    // 0x31ee70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31ee74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31ee78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31ee7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31ee80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31ee84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31ee84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ee8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31ee8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ee94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ee98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ee9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31ee9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eea0: 0xaca001ac  sw          $zero, 0x1AC($a1)
    ctx->pc = 0x31eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 428), GPR_U32(ctx, 0));
    // 0x31eea4: 0xaca001c4  sw          $zero, 0x1C4($a1)
    ctx->pc = 0x31eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 0));
    // 0x31eea8: 0xaca001b0  sw          $zero, 0x1B0($a1)
    ctx->pc = 0x31eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 432), GPR_U32(ctx, 0));
    // 0x31eeac: 0xaca001c8  sw          $zero, 0x1C8($a1)
    ctx->pc = 0x31eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 456), GPR_U32(ctx, 0));
    // 0x31eeb0: 0xaca001b4  sw          $zero, 0x1B4($a1)
    ctx->pc = 0x31eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 436), GPR_U32(ctx, 0));
    // 0x31eeb4: 0xaca001cc  sw          $zero, 0x1CC($a1)
    ctx->pc = 0x31eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 460), GPR_U32(ctx, 0));
    // 0x31eeb8: 0xaca001b8  sw          $zero, 0x1B8($a1)
    ctx->pc = 0x31eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 440), GPR_U32(ctx, 0));
    // 0x31eebc: 0xaca001d0  sw          $zero, 0x1D0($a1)
    ctx->pc = 0x31eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 464), GPR_U32(ctx, 0));
    // 0x31eec0: 0xaca001bc  sw          $zero, 0x1BC($a1)
    ctx->pc = 0x31eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 444), GPR_U32(ctx, 0));
    // 0x31eec4: 0xaca001d4  sw          $zero, 0x1D4($a1)
    ctx->pc = 0x31eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 468), GPR_U32(ctx, 0));
    // 0x31eec8: 0xaca001c0  sw          $zero, 0x1C0($a1)
    ctx->pc = 0x31eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 0));
    // 0x31eecc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x31EECCu;
    {
        const bool branch_taken_0x31eecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EECCu;
            // 0x31eed0: 0xaca001d8  sw          $zero, 0x1D8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eecc) {
            ctx->pc = 0x31F070u;
            goto label_31f070;
        }
    }
    ctx->pc = 0x31EED4u;
label_31eed4:
    // 0x31eed4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x31eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x31eed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31eed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eedc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x31eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x31eee0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31eee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eee4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x31eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x31eee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31eee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eeec: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x31eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x31eef0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x31eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x31eef4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31EEF4u;
    {
        const bool branch_taken_0x31eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEF4u;
            // 0x31eef8: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eef4) {
            ctx->pc = 0x31EF7Cu;
            goto label_31ef7c;
        }
    }
    ctx->pc = 0x31EEFCu;
label_31eefc:
    // 0x31eefc: 0x0  nop
    ctx->pc = 0x31eefcu;
    // NOP
    // 0x31ef00: 0x2b69821  addu        $s3, $s5, $s6
    ctx->pc = 0x31ef00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x31ef04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef08: 0xc0c76e4  jal         func_31DB90
    ctx->pc = 0x31EF08u;
    SET_GPR_U32(ctx, 31, 0x31EF10u);
    ctx->pc = 0x31EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF08u;
            // 0x31ef0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DB90u;
    if (runtime->hasFunction(0x31DB90u)) {
        auto targetFn = runtime->lookupFunction(0x31DB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF10u; }
        if (ctx->pc != 0x31EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFish__FiP15RACE_FISH_PARAM_0x31db90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF10u; }
        if (ctx->pc != 0x31EF10u) { return; }
    }
    ctx->pc = 0x31EF10u;
label_31ef10:
    // 0x31ef10: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x31ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x31ef14: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x31ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x31ef18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x31ef1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ef20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31EF20u;
    {
        const bool branch_taken_0x31ef20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF20u;
            // 0x31ef24: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef20) {
            ctx->pc = 0x31EF6Cu;
            goto label_31ef6c;
        }
    }
    ctx->pc = 0x31EF28u;
    // 0x31ef28: 0xc44101c4  lwc1        $f1, 0x1C4($v0)
    ctx->pc = 0x31ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ef2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ef2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ef30: 0x0  nop
    ctx->pc = 0x31ef30u;
    // NOP
    // 0x31ef34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31ef34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ef38: 0x0  nop
    ctx->pc = 0x31ef38u;
    // NOP
    // 0x31ef3c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x31EF3Cu;
    {
        const bool branch_taken_0x31ef3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF3Cu;
            // 0x31ef40: 0x244301c4  addiu       $v1, $v0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef3c) {
            ctx->pc = 0x31EF6Cu;
            goto label_31ef6c;
        }
    }
    ctx->pc = 0x31EF44u;
    // 0x31ef44: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x31ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ef48: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x31ef4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31ef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31ef50: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31ef50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ef54: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x31ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ef58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31ef58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31ef5c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x31ef5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x31ef60: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31ef60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31ef64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ef64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ef68: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31ef6c:
    // 0x31ef6c: 0x0  nop
    ctx->pc = 0x31ef6cu;
    // NOP
    // 0x31ef70: 0x26d600a0  addiu       $s6, $s6, 0xA0
    ctx->pc = 0x31ef70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x31ef74: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x31ef74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x31ef78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31ef78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31ef7c:
    // 0x31ef7c: 0x0  nop
    ctx->pc = 0x31ef7cu;
    // NOP
    // 0x31ef80: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x31ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31ef84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31ef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31ef88: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x31EF88u;
    {
        const bool branch_taken_0x31ef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF88u;
            // 0x31ef8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef88) {
            ctx->pc = 0x31EEFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eefc;
        }
    }
    ctx->pc = 0x31EF90u;
    // 0x31ef90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31EF90u;
    {
        const bool branch_taken_0x31ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF90u;
            // 0x31ef94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef90) {
            ctx->pc = 0x31EFFCu;
            goto label_31effc;
        }
    }
    ctx->pc = 0x31EF98u;
label_31ef98:
    // 0x31ef98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ef98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31efa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31EFA4u;
    {
        const bool branch_taken_0x31efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFA4u;
            // 0x31efa8: 0x2a81821  addu        $v1, $s5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efa4) {
            ctx->pc = 0x31EFE0u;
            goto label_31efe0;
        }
    }
    ctx->pc = 0x31EFACu;
label_31efac:
    // 0x31efac: 0x0  nop
    ctx->pc = 0x31efacu;
    // NOP
    // 0x31efb0: 0x11240008  beq         $t1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EFB0u;
    {
        const bool branch_taken_0x31efb0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        ctx->pc = 0x31EFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFB0u;
            // 0x31efb4: 0x2a71021  addu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efb0) {
            ctx->pc = 0x31EFD4u;
            goto label_31efd4;
        }
    }
    ctx->pc = 0x31EFB8u;
    // 0x31efb8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x31efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31efbc: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x31efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31efc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31efc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31efc4: 0x0  nop
    ctx->pc = 0x31efc4u;
    // NOP
    // 0x31efc8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31EFC8u;
    {
        const bool branch_taken_0x31efc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31efc8) {
            ctx->pc = 0x31EFD4u;
            goto label_31efd4;
        }
    }
    ctx->pc = 0x31EFD0u;
    // 0x31efd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31efd4:
    // 0x31efd4: 0x0  nop
    ctx->pc = 0x31efd4u;
    // NOP
    // 0x31efd8: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x31efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x31efdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31efe0:
    // 0x31efe0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x31efe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31efe4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31EFE4u;
    {
        const bool branch_taken_0x31efe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFE4u;
            // 0x31efe8: 0x2a81021  addu        $v0, $s5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efe4) {
            ctx->pc = 0x31EFACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31efac;
        }
    }
    ctx->pc = 0x31EFECu;
    // 0x31efec: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x31efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31eff0: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x31eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x31eff4: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x31eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x31eff8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31eff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_31effc:
    // 0x31effc: 0x0  nop
    ctx->pc = 0x31effcu;
    // NOP
    // 0x31f000: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31f004: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x31f004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31f008: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31F008u;
    {
        const bool branch_taken_0x31f008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F008u;
            // 0x31f00c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f008) {
            ctx->pc = 0x31EF98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ef98;
        }
    }
    ctx->pc = 0x31F010u;
    // 0x31f010: 0xc0c7a34  jal         func_31E8D0
    ctx->pc = 0x31F010u;
    SET_GPR_U32(ctx, 31, 0x31F018u);
    ctx->pc = 0x31E8D0u;
    if (runtime->hasFunction(0x31E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x31E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F018u; }
        if (ctx->pc != 0x31F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionFish__FP15RACE_FISH_PARAMi_0x31e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F018u; }
        if (ctx->pc != 0x31F018u) { return; }
    }
    ctx->pc = 0x31F018u;
label_31f018:
    // 0x31f018: 0xc0c7794  jal         func_31DE50
    ctx->pc = 0x31F018u;
    SET_GPR_U32(ctx, 31, 0x31F020u);
    ctx->pc = 0x31F01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F018u;
            // 0x31f01c: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DE50u;
    if (runtime->hasFunction(0x31DE50u)) {
        auto targetFn = runtime->lookupFunction(0x31DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F020u; }
        if (ctx->pc != 0x31F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LaneBattleStep__FP15RACE_FISH_PARAMi_0x31de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F020u; }
        if (ctx->pc != 0x31F020u) { return; }
    }
    ctx->pc = 0x31F020u;
label_31f020:
    // 0x31f020: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x31f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31f024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f02c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31F02Cu;
    {
        const bool branch_taken_0x31f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F02Cu;
            // 0x31f030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f02c) {
            ctx->pc = 0x31F058u;
            goto label_31f058;
        }
    }
    ctx->pc = 0x31F034u;
label_31f034:
    // 0x31f034: 0x0  nop
    ctx->pc = 0x31f034u;
    // NOP
    // 0x31f038: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x31f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31f03c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x31f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x31f040: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31F040u;
    {
        const bool branch_taken_0x31f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f040) {
            ctx->pc = 0x31F04Cu;
            goto label_31f04c;
        }
    }
    ctx->pc = 0x31F048u;
    // 0x31f048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f04c:
    // 0x31f04c: 0x0  nop
    ctx->pc = 0x31f04cu;
    // NOP
    // 0x31f050: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31f050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31f054: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31f054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31f058:
    // 0x31f058: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x31f058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f05c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x31F05Cu;
    {
        const bool branch_taken_0x31f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f05c) {
            ctx->pc = 0x31F034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f034;
        }
    }
    ctx->pc = 0x31F064u;
    // 0x31f064: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F064u;
    {
        const bool branch_taken_0x31f064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f064) {
            ctx->pc = 0x31F080u;
            goto label_31f080;
        }
    }
    ctx->pc = 0x31F06Cu;
    // 0x31f06c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f06cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31f070:
    // 0x31f070: 0x8e82018c  lw          $v0, 0x18C($s4)
    ctx->pc = 0x31f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x31f074: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x31f074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f078: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x31F078u;
    {
        const bool branch_taken_0x31f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f078) {
            ctx->pc = 0x31EED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eed4;
        }
    }
    ctx->pc = 0x31F080u;
label_31f080:
    // 0x31f080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f084: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31F084u;
    {
        const bool branch_taken_0x31f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F084u;
            // 0x31f088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f084) {
            ctx->pc = 0x31F0ECu;
            goto label_31f0ec;
        }
    }
    ctx->pc = 0x31F08Cu;
label_31f08c:
    // 0x31f08c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31f090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f094: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31F094u;
    {
        const bool branch_taken_0x31f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F094u;
            // 0x31f098: 0x2861821  addu        $v1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f094) {
            ctx->pc = 0x31F0D0u;
            goto label_31f0d0;
        }
    }
    ctx->pc = 0x31F09Cu;
label_31f09c:
    // 0x31f09c: 0x0  nop
    ctx->pc = 0x31f09cu;
    // NOP
    // 0x31f0a0: 0x11280008  beq         $t1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31F0A0u;
    {
        const bool branch_taken_0x31f0a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x31F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0A0u;
            // 0x31f0a4: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0a0) {
            ctx->pc = 0x31F0C4u;
            goto label_31f0c4;
        }
    }
    ctx->pc = 0x31F0A8u;
    // 0x31f0a8: 0xc46101c4  lwc1        $f1, 0x1C4($v1)
    ctx->pc = 0x31f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f0ac: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x31f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f0b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31f0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f0b4: 0x0  nop
    ctx->pc = 0x31f0b4u;
    // NOP
    // 0x31f0b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F0B8u;
    {
        const bool branch_taken_0x31f0b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f0b8) {
            ctx->pc = 0x31F0C4u;
            goto label_31f0c4;
        }
    }
    ctx->pc = 0x31F0C0u;
    // 0x31f0c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31f0c4:
    // 0x31f0c4: 0x0  nop
    ctx->pc = 0x31f0c4u;
    // NOP
    // 0x31f0c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31f0cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31f0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31f0d0:
    // 0x31f0d0: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31f0d4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31F0D4u;
    {
        const bool branch_taken_0x31f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0D4u;
            // 0x31f0d8: 0x2861021  addu        $v0, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0d4) {
            ctx->pc = 0x31F09Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f09c;
        }
    }
    ctx->pc = 0x31F0DCu;
    // 0x31f0dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31f0e0: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x31f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x31f0e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x31f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x31f0e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31f0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_31f0ec:
    // 0x31f0ec: 0x0  nop
    ctx->pc = 0x31f0ecu;
    // NOP
    // 0x31f0f0: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x31f0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31f0f4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x31f0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31f0f8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x31F0F8u;
    {
        const bool branch_taken_0x31f0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0F8u;
            // 0x31f0fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0f8) {
            ctx->pc = 0x31F08Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f08c;
        }
    }
    ctx->pc = 0x31F100u;
    // 0x31f100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31f104: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31F104u;
    {
        const bool branch_taken_0x31f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F104u;
            // 0x31f108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f104) {
            ctx->pc = 0x31F158u;
            goto label_31f158;
        }
    }
    ctx->pc = 0x31F10Cu;
label_31f10c:
    // 0x31f10c: 0x8e82018c  lw          $v0, 0x18C($s4)
    ctx->pc = 0x31f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x31f110: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x31f110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f114: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x31F114u;
    {
        const bool branch_taken_0x31f114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F114u;
            // 0x31f118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f114) {
            ctx->pc = 0x31F16Cu;
            goto label_31f16c;
        }
    }
    ctx->pc = 0x31F11Cu;
    // 0x31f11c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F11Cu;
    {
        const bool branch_taken_0x31f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F11Cu;
            // 0x31f120: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f11c) {
            ctx->pc = 0x31F13Cu;
            goto label_31f13c;
        }
    }
    ctx->pc = 0x31F124u;
label_31f124:
    // 0x31f124: 0x0  nop
    ctx->pc = 0x31f124u;
    // NOP
    // 0x31f128: 0x2b22821  addu        $a1, $s5, $s2
    ctx->pc = 0x31f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x31f12c: 0xc0c76e4  jal         func_31DB90
    ctx->pc = 0x31F12Cu;
    SET_GPR_U32(ctx, 31, 0x31F134u);
    ctx->pc = 0x31F130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F12Cu;
            // 0x31f130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DB90u;
    if (runtime->hasFunction(0x31DB90u)) {
        auto targetFn = runtime->lookupFunction(0x31DB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F134u; }
        if (ctx->pc != 0x31F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFish__FiP15RACE_FISH_PARAM_0x31db90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F134u; }
        if (ctx->pc != 0x31F134u) { return; }
    }
    ctx->pc = 0x31F134u;
label_31f134:
    // 0x31f134: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x31f134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x31f138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31f13c:
    // 0x31f13c: 0x0  nop
    ctx->pc = 0x31f13cu;
    // NOP
    // 0x31f140: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31f144: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31f144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f148: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31F148u;
    {
        const bool branch_taken_0x31f148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f148) {
            ctx->pc = 0x31F124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f124;
        }
    }
    ctx->pc = 0x31F150u;
    // 0x31f150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31f154: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31f158:
    // 0x31f158: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
    // 0x31f15c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31f160: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31f160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f164: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x31F164u;
    {
        const bool branch_taken_0x31f164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f164) {
            ctx->pc = 0x31F10Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f10c;
        }
    }
    ctx->pc = 0x31F16Cu;
label_31f16c:
    // 0x31f16c: 0x0  nop
    ctx->pc = 0x31f16cu;
    // NOP
    // 0x31f170: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31f170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f174: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31f174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f178: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31f178u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f17c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31f17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31f180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31f184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31f188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f194: 0x3e00008  jr          $ra
    ctx->pc = 0x31F194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F194u;
            // 0x31f198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F19Cu;
}
