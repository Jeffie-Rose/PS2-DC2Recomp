#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LensFlare__FPiPfiPcPc
// Address: 0x17ea60 - 0x17f430
void LensFlare__FPiPfiPcPc_0x17ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LensFlare__FPiPfiPcPc_0x17ea60");
#endif

    switch (ctx->pc) {
        case 0x17eb40u: goto label_17eb40;
        case 0x17eb74u: goto label_17eb74;
        case 0x17eb88u: goto label_17eb88;
        case 0x17eba0u: goto label_17eba0;
        case 0x17ebc4u: goto label_17ebc4;
        case 0x17ebccu: goto label_17ebcc;
        case 0x17ebdcu: goto label_17ebdc;
        case 0x17ebe8u: goto label_17ebe8;
        case 0x17ebf4u: goto label_17ebf4;
        case 0x17ec00u: goto label_17ec00;
        case 0x17ec0cu: goto label_17ec0c;
        case 0x17ec18u: goto label_17ec18;
        case 0x17ec24u: goto label_17ec24;
        case 0x17ec30u: goto label_17ec30;
        case 0x17ec3cu: goto label_17ec3c;
        case 0x17ec48u: goto label_17ec48;
        case 0x17ec54u: goto label_17ec54;
        case 0x17ec6cu: goto label_17ec6c;
        case 0x17ec80u: goto label_17ec80;
        case 0x17ec94u: goto label_17ec94;
        case 0x17ec9cu: goto label_17ec9c;
        case 0x17eca8u: goto label_17eca8;
        case 0x17ecb4u: goto label_17ecb4;
        case 0x17ecccu: goto label_17eccc;
        case 0x17ece4u: goto label_17ece4;
        case 0x17ecf8u: goto label_17ecf8;
        case 0x17ed00u: goto label_17ed00;
        case 0x17ed2cu: goto label_17ed2c;
        case 0x17ed38u: goto label_17ed38;
        case 0x17ed40u: goto label_17ed40;
        case 0x17ed50u: goto label_17ed50;
        case 0x17ed5cu: goto label_17ed5c;
        case 0x17ed74u: goto label_17ed74;
        case 0x17ed94u: goto label_17ed94;
        case 0x17edacu: goto label_17edac;
        case 0x17edbcu: goto label_17edbc;
        case 0x17edd0u: goto label_17edd0;
        case 0x17ede8u: goto label_17ede8;
        case 0x17edfcu: goto label_17edfc;
        case 0x17ee04u: goto label_17ee04;
        case 0x17ee58u: goto label_17ee58;
        case 0x17ee7cu: goto label_17ee7c;
        case 0x17ee88u: goto label_17ee88;
        case 0x17ee9cu: goto label_17ee9c;
        case 0x17eeb4u: goto label_17eeb4;
        case 0x17eec4u: goto label_17eec4;
        case 0x17eed8u: goto label_17eed8;
        case 0x17eee8u: goto label_17eee8;
        case 0x17eefcu: goto label_17eefc;
        case 0x17ef04u: goto label_17ef04;
        case 0x17ef10u: goto label_17ef10;
        case 0x17ef1cu: goto label_17ef1c;
        case 0x17ef28u: goto label_17ef28;
        case 0x17ef78u: goto label_17ef78;
        case 0x17ef80u: goto label_17ef80;
        case 0x17efb4u: goto label_17efb4;
        case 0x17efccu: goto label_17efcc;
        case 0x17efdcu: goto label_17efdc;
        case 0x17eff8u: goto label_17eff8;
        case 0x17f010u: goto label_17f010;
        case 0x17f01cu: goto label_17f01c;
        case 0x17f028u: goto label_17f028;
        case 0x17f034u: goto label_17f034;
        case 0x17f090u: goto label_17f090;
        case 0x17f0a8u: goto label_17f0a8;
        case 0x17f0bcu: goto label_17f0bc;
        case 0x17f0d0u: goto label_17f0d0;
        case 0x17f0d8u: goto label_17f0d8;
        case 0x17f0e4u: goto label_17f0e4;
        case 0x17f0fcu: goto label_17f0fc;
        case 0x17f110u: goto label_17f110;
        case 0x17f128u: goto label_17f128;
        case 0x17f134u: goto label_17f134;
        case 0x17f13cu: goto label_17f13c;
        case 0x17f15cu: goto label_17f15c;
        case 0x17f168u: goto label_17f168;
        case 0x17f17cu: goto label_17f17c;
        case 0x17f190u: goto label_17f190;
        case 0x17f1f0u: goto label_17f1f0;
        case 0x17f1f8u: goto label_17f1f8;
        case 0x17f208u: goto label_17f208;
        case 0x17f214u: goto label_17f214;
        case 0x17f22cu: goto label_17f22c;
        case 0x17f240u: goto label_17f240;
        case 0x17f254u: goto label_17f254;
        case 0x17f25cu: goto label_17f25c;
        case 0x17f2b8u: goto label_17f2b8;
        case 0x17f2c8u: goto label_17f2c8;
        case 0x17f2d4u: goto label_17f2d4;
        case 0x17f2e0u: goto label_17f2e0;
        case 0x17f2ecu: goto label_17f2ec;
        case 0x17f2f8u: goto label_17f2f8;
        case 0x17f304u: goto label_17f304;
        case 0x17f310u: goto label_17f310;
        case 0x17f320u: goto label_17f320;
        case 0x17f330u: goto label_17f330;
        case 0x17f344u: goto label_17f344;
        case 0x17f35cu: goto label_17f35c;
        case 0x17f36cu: goto label_17f36c;
        case 0x17f380u: goto label_17f380;
        case 0x17f390u: goto label_17f390;
        case 0x17f3a8u: goto label_17f3a8;
        case 0x17f3b8u: goto label_17f3b8;
        case 0x17f3ccu: goto label_17f3cc;
        case 0x17f3dcu: goto label_17f3dc;
        case 0x17f3f0u: goto label_17f3f0;
        case 0x17f3f8u: goto label_17f3f8;
        default: break;
    }

    ctx->pc = 0x17ea60u;

    // 0x17ea60: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x17ea64: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x17ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x17ea68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17ea6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ea6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ea70: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17ea74: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17ea78: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17ea7c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17ea7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17ea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17ea84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17ea88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17ea8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17ea90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ea94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17ea94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ea9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17ea9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17eaa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17eaa4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x17eaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17eaa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17eaac: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x17eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x17eab0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eab4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17eab8: 0x8f9e8780  lw          $fp, -0x7880($gp)
    ctx->pc = 0x17eab8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17eabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17eabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eac0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x17eac4: 0x1e1043  sra         $v0, $fp, 1
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
    // 0x17eac8: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x17eac8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eacc: 0x0  nop
    ctx->pc = 0x17eaccu;
    // NOP
    // 0x17ead0: 0x0  nop
    ctx->pc = 0x17ead0u;
    // NOP
    // 0x17ead4: 0x7c10003  bgez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAD4u;
    {
        const bool branch_taken_0x17ead4 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x17ead4) {
            ctx->pc = 0x17EAE4u;
            goto label_17eae4;
        }
    }
    ctx->pc = 0x17EADCu;
    // 0x17eadc: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x17eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x17eae0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_17eae4:
    // 0x17eae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eae8: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x17eaec: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x17eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eaf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17eaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eaf4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17eaf8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x17eaf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17eafc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x17eafcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17eb00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17eb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eb04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17eb04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb08: 0x0  nop
    ctx->pc = 0x17eb08u;
    // NOP
    // 0x17eb0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17eb0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17eb10: 0x0  nop
    ctx->pc = 0x17eb10u;
    // NOP
    // 0x17eb14: 0x0  nop
    ctx->pc = 0x17eb14u;
    // NOP
    // 0x17eb18: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB18u;
    {
        const bool branch_taken_0x17eb18 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17eb18) {
            ctx->pc = 0x17EB28u;
            goto label_17eb28;
        }
    }
    ctx->pc = 0x17EB20u;
    // 0x17eb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eb24: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x17eb24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_17eb28:
    // 0x17eb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17eb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17eb2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x17eb30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17eb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eb34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17eb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17eb38: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x17EB38u;
    SET_GPR_U32(ctx, 31, 0x17EB40u);
    ctx->pc = 0x17EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB38u;
            // 0x17eb3c: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB40u; }
        if (ctx->pc != 0x17EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB40u; }
        if (ctx->pc != 0x17EB40u) { return; }
    }
    ctx->pc = 0x17EB40u;
label_17eb40:
    // 0x17eb40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17eb40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17eb44: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x17eb44u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb48: 0x0  nop
    ctx->pc = 0x17eb48u;
    // NOP
    // 0x17eb4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17eb4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eb50: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x17eb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17eb54: 0x0  nop
    ctx->pc = 0x17eb54u;
    // NOP
    // 0x17eb58: 0x45000227  bc1f        . + 4 + (0x227 << 2)
    ctx->pc = 0x17EB58u;
    {
        const bool branch_taken_0x17eb58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17eb58) {
            ctx->pc = 0x17F3F8u;
            goto label_17f3f8;
        }
    }
    ctx->pc = 0x17EB60u;
    // 0x17eb60: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x17eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x17eb64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17eb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb68: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x17eb6c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x17EB6Cu;
    SET_GPR_U32(ctx, 31, 0x17EB74u);
    ctx->pc = 0x17EB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB6Cu;
            // 0x17eb70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB74u; }
        if (ctx->pc != 0x17EB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB74u; }
        if (ctx->pc != 0x17EB74u) { return; }
    }
    ctx->pc = 0x17EB74u;
label_17eb74:
    // 0x17eb74: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x17eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x17eb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17eb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb7c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x17eb80: 0xc04b414  jal         func_12D050
    ctx->pc = 0x17EB80u;
    SET_GPR_U32(ctx, 31, 0x17EB88u);
    ctx->pc = 0x17EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB80u;
            // 0x17eb84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB88u; }
        if (ctx->pc != 0x17EB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB88u; }
        if (ctx->pc != 0x17EB88u) { return; }
    }
    ctx->pc = 0x17EB88u;
label_17eb88:
    // 0x17eb88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17eb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb8c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x17eb90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17eb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb98: 0xc04b414  jal         func_12D050
    ctx->pc = 0x17EB98u;
    SET_GPR_U32(ctx, 31, 0x17EBA0u);
    ctx->pc = 0x17EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB98u;
            // 0x17eb9c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBA0u; }
        if (ctx->pc != 0x17EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBA0u; }
        if (ctx->pc != 0x17EBA0u) { return; }
    }
    ctx->pc = 0x17EBA0u;
label_17eba0:
    // 0x17eba0: 0x12400215  beqz        $s2, . + 4 + (0x215 << 2)
    ctx->pc = 0x17EBA0u;
    {
        const bool branch_taken_0x17eba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBA0u;
            // 0x17eba4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba0) {
            ctx->pc = 0x17F3F8u;
            goto label_17f3f8;
        }
    }
    ctx->pc = 0x17EBA8u;
    // 0x17eba8: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EBA8u;
    {
        const bool branch_taken_0x17eba8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBA8u;
            // 0x17ebac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba8) {
            ctx->pc = 0x17EBBCu;
            goto label_17ebbc;
        }
    }
    ctx->pc = 0x17EBB0u;
    // 0x17ebb0: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x17EBB0u;
    {
        const bool branch_taken_0x17ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBB0u;
            // 0x17ebb4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebb0) {
            ctx->pc = 0x17F3FCu;
            goto label_17f3fc;
        }
    }
    ctx->pc = 0x17EBB8u;
    // 0x17ebb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17ebbc:
    // 0x17ebbc: 0xc050ef8  jal         func_143BE0
    ctx->pc = 0x17EBBCu;
    SET_GPR_U32(ctx, 31, 0x17EBC4u);
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBC4u; }
        if (ctx->pc != 0x17EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBC4u; }
        if (ctx->pc != 0x17EBC4u) { return; }
    }
    ctx->pc = 0x17EBC4u;
label_17ebc4:
    // 0x17ebc4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17EBC4u;
    SET_GPR_U32(ctx, 31, 0x17EBCCu);
    ctx->pc = 0x17EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBC4u;
            // 0x17ebc8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBCCu; }
        if (ctx->pc != 0x17EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBCCu; }
        if (ctx->pc != 0x17EBCCu) { return; }
    }
    ctx->pc = 0x17EBCCu;
label_17ebcc:
    // 0x17ebcc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ebd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebd4: 0xc04d104  jal         func_134410
    ctx->pc = 0x17EBD4u;
    SET_GPR_U32(ctx, 31, 0x17EBDCu);
    ctx->pc = 0x17EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBD4u;
            // 0x17ebd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBDCu; }
        if (ctx->pc != 0x17EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBDCu; }
        if (ctx->pc != 0x17EBDCu) { return; }
    }
    ctx->pc = 0x17EBDCu;
label_17ebdc:
    // 0x17ebdc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ebe0: 0xc04d424  jal         func_135090
    ctx->pc = 0x17EBE0u;
    SET_GPR_U32(ctx, 31, 0x17EBE8u);
    ctx->pc = 0x17EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBE0u;
            // 0x17ebe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBE8u; }
        if (ctx->pc != 0x17EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBE8u; }
        if (ctx->pc != 0x17EBE8u) { return; }
    }
    ctx->pc = 0x17EBE8u;
label_17ebe8:
    // 0x17ebe8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ebec: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBECu;
            // 0x17ebf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBF4u; }
        if (ctx->pc != 0x17EBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBF4u; }
        if (ctx->pc != 0x17EBF4u) { return; }
    }
    ctx->pc = 0x17EBF4u;
label_17ebf4:
    // 0x17ebf4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ebf8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17EBF8u;
    SET_GPR_U32(ctx, 31, 0x17EC00u);
    ctx->pc = 0x17EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBF8u;
            // 0x17ebfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC00u; }
        if (ctx->pc != 0x17EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC00u; }
        if (ctx->pc != 0x17EC00u) { return; }
    }
    ctx->pc = 0x17EC00u;
label_17ec00:
    // 0x17ec00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec04: 0xc04d444  jal         func_135110
    ctx->pc = 0x17EC04u;
    SET_GPR_U32(ctx, 31, 0x17EC0Cu);
    ctx->pc = 0x17EC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC04u;
            // 0x17ec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135110u;
    if (runtime->hasFunction(0x135110u)) {
        auto targetFn = runtime->lookupFunction(0x135110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC0Cu; }
        if (ctx->pc != 0x17EC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FogEnable__11mgCDrawPrimFi_0x135110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC0Cu; }
        if (ctx->pc != 0x17EC0Cu) { return; }
    }
    ctx->pc = 0x17EC0Cu;
label_17ec0c:
    // 0x17ec0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec10: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x17EC10u;
    SET_GPR_U32(ctx, 31, 0x17EC18u);
    ctx->pc = 0x17EC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC10u;
            // 0x17ec14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC18u; }
        if (ctx->pc != 0x17EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC18u; }
        if (ctx->pc != 0x17EC18u) { return; }
    }
    ctx->pc = 0x17EC18u;
label_17ec18:
    // 0x17ec18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec1c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17EC1Cu;
    SET_GPR_U32(ctx, 31, 0x17EC24u);
    ctx->pc = 0x17EC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC1Cu;
            // 0x17ec20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC24u; }
        if (ctx->pc != 0x17EC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC24u; }
        if (ctx->pc != 0x17EC24u) { return; }
    }
    ctx->pc = 0x17EC24u;
label_17ec24:
    // 0x17ec24: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec28: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x17EC28u;
    SET_GPR_U32(ctx, 31, 0x17EC30u);
    ctx->pc = 0x17EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC28u;
            // 0x17ec2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC30u; }
        if (ctx->pc != 0x17EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC30u; }
        if (ctx->pc != 0x17EC30u) { return; }
    }
    ctx->pc = 0x17EC30u;
label_17ec30:
    // 0x17ec30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec34: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x17EC34u;
    SET_GPR_U32(ctx, 31, 0x17EC3Cu);
    ctx->pc = 0x17EC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC34u;
            // 0x17ec38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC3Cu; }
        if (ctx->pc != 0x17EC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC3Cu; }
        if (ctx->pc != 0x17EC3Cu) { return; }
    }
    ctx->pc = 0x17EC3Cu;
label_17ec3c:
    // 0x17ec3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec40: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17EC40u;
    SET_GPR_U32(ctx, 31, 0x17EC48u);
    ctx->pc = 0x17EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC40u;
            // 0x17ec44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC48u; }
        if (ctx->pc != 0x17EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC48u; }
        if (ctx->pc != 0x17EC48u) { return; }
    }
    ctx->pc = 0x17EC48u;
label_17ec48:
    // 0x17ec48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec4c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17EC4Cu;
    SET_GPR_U32(ctx, 31, 0x17EC54u);
    ctx->pc = 0x17EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC4Cu;
            // 0x17ec50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC54u; }
        if (ctx->pc != 0x17EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC54u; }
        if (ctx->pc != 0x17EC54u) { return; }
    }
    ctx->pc = 0x17EC54u;
label_17ec54:
    // 0x17ec54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ec5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17ec60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec64: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17EC64u;
    SET_GPR_U32(ctx, 31, 0x17EC6Cu);
    ctx->pc = 0x17EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC64u;
            // 0x17ec68: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC6Cu; }
        if (ctx->pc != 0x17EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC6Cu; }
        if (ctx->pc != 0x17EC6Cu) { return; }
    }
    ctx->pc = 0x17EC6Cu;
label_17ec6c:
    // 0x17ec6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec78: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17EC78u;
    SET_GPR_U32(ctx, 31, 0x17EC80u);
    ctx->pc = 0x17EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC78u;
            // 0x17ec7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC80u; }
        if (ctx->pc != 0x17EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC80u; }
        if (ctx->pc != 0x17EC80u) { return; }
    }
    ctx->pc = 0x17EC80u;
label_17ec80:
    // 0x17ec80: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ec84: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17ec88: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x17ec88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x17ec8c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17EC8Cu;
    SET_GPR_U32(ctx, 31, 0x17EC94u);
    ctx->pc = 0x17EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC8Cu;
            // 0x17ec90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC94u; }
        if (ctx->pc != 0x17EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC94u; }
        if (ctx->pc != 0x17EC94u) { return; }
    }
    ctx->pc = 0x17EC94u;
label_17ec94:
    // 0x17ec94: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17EC94u;
    SET_GPR_U32(ctx, 31, 0x17EC9Cu);
    ctx->pc = 0x17EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC94u;
            // 0x17ec98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC9Cu; }
        if (ctx->pc != 0x17EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC9Cu; }
        if (ctx->pc != 0x17EC9Cu) { return; }
    }
    ctx->pc = 0x17EC9Cu;
label_17ec9c:
    // 0x17ec9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eca0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17ECA0u;
    SET_GPR_U32(ctx, 31, 0x17ECA8u);
    ctx->pc = 0x17ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECA0u;
            // 0x17eca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECA8u; }
        if (ctx->pc != 0x17ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECA8u; }
        if (ctx->pc != 0x17ECA8u) { return; }
    }
    ctx->pc = 0x17ECA8u;
label_17eca8:
    // 0x17eca8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ecac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17ECACu;
    SET_GPR_U32(ctx, 31, 0x17ECB4u);
    ctx->pc = 0x17ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECACu;
            // 0x17ecb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECB4u; }
        if (ctx->pc != 0x17ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECB4u; }
        if (ctx->pc != 0x17ECB4u) { return; }
    }
    ctx->pc = 0x17ECB4u;
label_17ecb4:
    // 0x17ecb4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17ecb8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ecbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecc0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17ecc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecc4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17ECC4u;
    SET_GPR_U32(ctx, 31, 0x17ECCCu);
    ctx->pc = 0x17ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECC4u;
            // 0x17ecc8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECCCu; }
        if (ctx->pc != 0x17ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECCCu; }
        if (ctx->pc != 0x17ECCCu) { return; }
    }
    ctx->pc = 0x17ECCCu;
label_17eccc:
    // 0x17eccc: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x17ecccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x17ecd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ecd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ecd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecdc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17ECDCu;
    SET_GPR_U32(ctx, 31, 0x17ECE4u);
    ctx->pc = 0x17ECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECDCu;
            // 0x17ece0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE4u; }
        if (ctx->pc != 0x17ECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE4u; }
        if (ctx->pc != 0x17ECE4u) { return; }
    }
    ctx->pc = 0x17ECE4u;
label_17ece4:
    // 0x17ece4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ece8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17ece8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ecf0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17ECF0u;
    SET_GPR_U32(ctx, 31, 0x17ECF8u);
    ctx->pc = 0x17ECF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECF0u;
            // 0x17ecf4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF8u; }
        if (ctx->pc != 0x17ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF8u; }
        if (ctx->pc != 0x17ECF8u) { return; }
    }
    ctx->pc = 0x17ECF8u;
label_17ecf8:
    // 0x17ecf8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17ECF8u;
    SET_GPR_U32(ctx, 31, 0x17ED00u);
    ctx->pc = 0x17ECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECF8u;
            // 0x17ecfc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED00u; }
        if (ctx->pc != 0x17ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED00u; }
        if (ctx->pc != 0x17ED00u) { return; }
    }
    ctx->pc = 0x17ED00u;
label_17ed00:
    // 0x17ed00: 0xdf828a48  ld          $v0, -0x75B8($gp)
    ctx->pc = 0x17ed00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x17ed04: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x17ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x17ed08: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x17ed08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ed0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ed10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed14: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ed18: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x17ed18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x17ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x17ed20: 0xafb20230  sw          $s2, 0x230($sp)
    ctx->pc = 0x17ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 18));
    // 0x17ed24: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17ED24u;
    SET_GPR_U32(ctx, 31, 0x17ED2Cu);
    ctx->pc = 0x17ED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED24u;
            // 0x17ed28: 0xafb40234  sw          $s4, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED2Cu; }
        if (ctx->pc != 0x17ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED2Cu; }
        if (ctx->pc != 0x17ED2Cu) { return; }
    }
    ctx->pc = 0x17ED2Cu;
label_17ed2c:
    // 0x17ed2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ed30: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17ED30u;
    SET_GPR_U32(ctx, 31, 0x17ED38u);
    ctx->pc = 0x17ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED30u;
            // 0x17ed34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED38u; }
        if (ctx->pc != 0x17ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED38u; }
        if (ctx->pc != 0x17ED38u) { return; }
    }
    ctx->pc = 0x17ED38u;
label_17ed38:
    // 0x17ed38: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x17ed38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ed40:
    // 0x17ed40: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17ed44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17ed48: 0xc050ef8  jal         func_143BE0
    ctx->pc = 0x17ED48u;
    SET_GPR_U32(ctx, 31, 0x17ED50u);
    ctx->pc = 0x17ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED48u;
            // 0x17ed4c: 0x8c440230  lw          $a0, 0x230($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED50u; }
        if (ctx->pc != 0x17ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED50u; }
        if (ctx->pc != 0x17ED50u) { return; }
    }
    ctx->pc = 0x17ED50u;
label_17ed50:
    // 0x17ed50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ed54: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17ED54u;
    SET_GPR_U32(ctx, 31, 0x17ED5Cu);
    ctx->pc = 0x17ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED54u;
            // 0x17ed58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED5Cu; }
        if (ctx->pc != 0x17ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED5Cu; }
        if (ctx->pc != 0x17ED5Cu) { return; }
    }
    ctx->pc = 0x17ED5Cu;
label_17ed5c:
    // 0x17ed5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17ed60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ed64: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17ed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ed68: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17ed6c: 0xc04d360  jal         func_134D80
    ctx->pc = 0x17ED6Cu;
    SET_GPR_U32(ctx, 31, 0x17ED74u);
    ctx->pc = 0x17ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED6Cu;
            // 0x17ed70: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED74u; }
        if (ctx->pc != 0x17ED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED74u; }
        if (ctx->pc != 0x17ED74u) { return; }
    }
    ctx->pc = 0x17ED74u;
label_17ed74:
    // 0x17ed74: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x17ed74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17ed78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17ed7c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x17ed7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ed80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17ed84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17ed88: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x17ed8c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17ED8Cu;
    SET_GPR_U32(ctx, 31, 0x17ED94u);
    ctx->pc = 0x17ED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED8Cu;
            // 0x17ed90: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED94u; }
        if (ctx->pc != 0x17ED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED94u; }
        if (ctx->pc != 0x17ED94u) { return; }
    }
    ctx->pc = 0x17ED94u;
label_17ed94:
    // 0x17ed94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17ed98: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ed9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17ed9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eda0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17eda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eda4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17EDA4u;
    SET_GPR_U32(ctx, 31, 0x17EDACu);
    ctx->pc = 0x17EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDA4u;
            // 0x17eda8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDACu; }
        if (ctx->pc != 0x17EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDACu; }
        if (ctx->pc != 0x17EDACu) { return; }
    }
    ctx->pc = 0x17EDACu;
label_17edac:
    // 0x17edac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17edb0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17edb4: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x17EDB4u;
    SET_GPR_U32(ctx, 31, 0x17EDBCu);
    ctx->pc = 0x17EDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDB4u;
            // 0x17edb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDBCu; }
        if (ctx->pc != 0x17EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDBCu; }
        if (ctx->pc != 0x17EDBCu) { return; }
    }
    ctx->pc = 0x17EDBCu;
label_17edbc:
    // 0x17edbc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17edc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17edc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edc8: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17EDC8u;
    SET_GPR_U32(ctx, 31, 0x17EDD0u);
    ctx->pc = 0x17EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDC8u;
            // 0x17edcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDD0u; }
        if (ctx->pc != 0x17EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDD0u; }
        if (ctx->pc != 0x17EDD0u) { return; }
    }
    ctx->pc = 0x17EDD0u;
label_17edd0:
    // 0x17edd0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x17edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17edd4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x17edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17edd8: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x17edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17eddc: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x17eddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17ede0: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x17EDE0u;
    SET_GPR_U32(ctx, 31, 0x17EDE8u);
    ctx->pc = 0x17EDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDE0u;
            // 0x17ede4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDE8u; }
        if (ctx->pc != 0x17EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDE8u; }
        if (ctx->pc != 0x17EDE8u) { return; }
    }
    ctx->pc = 0x17EDE8u;
label_17ede8:
    // 0x17ede8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17edec: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x17edecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x17edf0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17edf4: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17EDF4u;
    SET_GPR_U32(ctx, 31, 0x17EDFCu);
    ctx->pc = 0x17EDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDF4u;
            // 0x17edf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDFCu; }
        if (ctx->pc != 0x17EDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDFCu; }
        if (ctx->pc != 0x17EDFCu) { return; }
    }
    ctx->pc = 0x17EDFCu;
label_17edfc:
    // 0x17edfc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17EDFCu;
    SET_GPR_U32(ctx, 31, 0x17EE04u);
    ctx->pc = 0x17EE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDFCu;
            // 0x17ee00: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE04u; }
        if (ctx->pc != 0x17EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE04u; }
        if (ctx->pc != 0x17EE04u) { return; }
    }
    ctx->pc = 0x17EE04u;
label_17ee04:
    // 0x17ee04: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EE04u;
    {
        const bool branch_taken_0x17ee04 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE04u;
            // 0x17ee08: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee04) {
            ctx->pc = 0x17EE14u;
            goto label_17ee14;
        }
    }
    ctx->pc = 0x17EE0Cu;
    // 0x17ee0c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ee10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_17ee14:
    // 0x17ee14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee18: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EE18u;
    {
        const bool branch_taken_0x17ee18 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE18u;
            // 0x17ee1c: 0x119043  sra         $s2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee18) {
            ctx->pc = 0x17EE28u;
            goto label_17ee28;
        }
    }
    ctx->pc = 0x17EE20u;
    // 0x17ee20: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17ee24: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x17ee24u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_17ee28:
    // 0x17ee28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17ee28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17ee2c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x17ee30: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x17ee30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17ee34: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17ee34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee38: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x17EE38u;
    {
        const bool branch_taken_0x17ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE38u;
            // 0x17ee3c: 0x16b040  sll         $s6, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee38) {
            ctx->pc = 0x17ED40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ed40;
        }
    }
    ctx->pc = 0x17EE40u;
    // 0x17ee40: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x17ee40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17ee44: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ee48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17ee4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee50: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17EE50u;
    SET_GPR_U32(ctx, 31, 0x17EE58u);
    ctx->pc = 0x17EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE50u;
            // 0x17ee54: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE58u; }
        if (ctx->pc != 0x17EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE58u; }
        if (ctx->pc != 0x17EE58u) { return; }
    }
    ctx->pc = 0x17EE58u;
label_17ee58:
    // 0x17ee58: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x17ee58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17ee5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17ee60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ee64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee68: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17ee6c: 0x8c420230  lw          $v0, 0x230($v0)
    ctx->pc = 0x17ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x17ee70: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x17ee74: 0xc050ef8  jal         func_143BE0
    ctx->pc = 0x17EE74u;
    SET_GPR_U32(ctx, 31, 0x17EE7Cu);
    ctx->pc = 0x17EE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE74u;
            // 0x17ee78: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE7Cu; }
        if (ctx->pc != 0x17EE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE7Cu; }
        if (ctx->pc != 0x17EE7Cu) { return; }
    }
    ctx->pc = 0x17EE7Cu;
label_17ee7c:
    // 0x17ee7c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ee80: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17EE80u;
    SET_GPR_U32(ctx, 31, 0x17EE88u);
    ctx->pc = 0x17EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE80u;
            // 0x17ee84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE88u; }
        if (ctx->pc != 0x17EE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE88u; }
        if (ctx->pc != 0x17EE88u) { return; }
    }
    ctx->pc = 0x17EE88u;
label_17ee88:
    // 0x17ee88: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17ee8c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17ee90: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x17ee94: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17EE94u;
    SET_GPR_U32(ctx, 31, 0x17EE9Cu);
    ctx->pc = 0x17EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE94u;
            // 0x17ee98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE9Cu; }
        if (ctx->pc != 0x17EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE9Cu; }
        if (ctx->pc != 0x17EE9Cu) { return; }
    }
    ctx->pc = 0x17EE9Cu;
label_17ee9c:
    // 0x17ee9c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17eea0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eea4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17eea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eea8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17eea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eeac: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17EEACu;
    SET_GPR_U32(ctx, 31, 0x17EEB4u);
    ctx->pc = 0x17EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEACu;
            // 0x17eeb0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEB4u; }
        if (ctx->pc != 0x17EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEB4u; }
        if (ctx->pc != 0x17EEB4u) { return; }
    }
    ctx->pc = 0x17EEB4u;
label_17eeb4:
    // 0x17eeb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eeb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17eeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eebc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17EEBCu;
    SET_GPR_U32(ctx, 31, 0x17EEC4u);
    ctx->pc = 0x17EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEBCu;
            // 0x17eec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEC4u; }
        if (ctx->pc != 0x17EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEC4u; }
        if (ctx->pc != 0x17EEC4u) { return; }
    }
    ctx->pc = 0x17EEC4u;
label_17eec4:
    // 0x17eec4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17eec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17eeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eed0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17EED0u;
    SET_GPR_U32(ctx, 31, 0x17EED8u);
    ctx->pc = 0x17EED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EED0u;
            // 0x17eed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EED8u; }
        if (ctx->pc != 0x17EED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EED8u; }
        if (ctx->pc != 0x17EED8u) { return; }
    }
    ctx->pc = 0x17EED8u;
label_17eed8:
    // 0x17eed8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eedc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eee0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17EEE0u;
    SET_GPR_U32(ctx, 31, 0x17EEE8u);
    ctx->pc = 0x17EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEE0u;
            // 0x17eee4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEE8u; }
        if (ctx->pc != 0x17EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEE8u; }
        if (ctx->pc != 0x17EEE8u) { return; }
    }
    ctx->pc = 0x17EEE8u;
label_17eee8:
    // 0x17eee8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17eee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eeec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eef4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17EEF4u;
    SET_GPR_U32(ctx, 31, 0x17EEFCu);
    ctx->pc = 0x17EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEF4u;
            // 0x17eef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEFCu; }
        if (ctx->pc != 0x17EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEFCu; }
        if (ctx->pc != 0x17EEFCu) { return; }
    }
    ctx->pc = 0x17EEFCu;
label_17eefc:
    // 0x17eefc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17EEFCu;
    SET_GPR_U32(ctx, 31, 0x17EF04u);
    ctx->pc = 0x17EF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEFCu;
            // 0x17ef00: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF04u; }
        if (ctx->pc != 0x17EF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF04u; }
        if (ctx->pc != 0x17EF04u) { return; }
    }
    ctx->pc = 0x17EF04u;
label_17ef04:
    // 0x17ef04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ef08: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17EF08u;
    SET_GPR_U32(ctx, 31, 0x17EF10u);
    ctx->pc = 0x17EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF08u;
            // 0x17ef0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    }
    ctx->pc = 0x17EF10u;
label_17ef10:
    // 0x17ef10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ef14: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17EF14u;
    SET_GPR_U32(ctx, 31, 0x17EF1Cu);
    ctx->pc = 0x17EF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF14u;
            // 0x17ef18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF1Cu; }
        if (ctx->pc != 0x17EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF1Cu; }
        if (ctx->pc != 0x17EF1Cu) { return; }
    }
    ctx->pc = 0x17EF1Cu;
label_17ef1c:
    // 0x17ef1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ef20: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17EF20u;
    SET_GPR_U32(ctx, 31, 0x17EF28u);
    ctx->pc = 0x17EF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF20u;
            // 0x17ef24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF28u; }
        if (ctx->pc != 0x17EF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF28u; }
        if (ctx->pc != 0x17EF28u) { return; }
    }
    ctx->pc = 0x17EF28u;
label_17ef28:
    // 0x17ef28: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x17ef2c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x17ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17ef30: 0x24634ef0  addiu       $v1, $v1, 0x4EF0
    ctx->pc = 0x17ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20208));
    // 0x17ef34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17ef38: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x17ef38u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ef3c: 0x27ab01f0  addiu       $t3, $sp, 0x1F0
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x17ef40: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x17ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
    // 0x17ef44: 0x27a90210  addiu       $t1, $sp, 0x210
    ctx->pc = 0x17ef44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x17ef48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ef4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17ef4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef50: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17ef50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef54: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x17ef54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef58: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x17ef58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17ef5c: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x17ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x17ef60: 0x7d630010  sq          $v1, 0x10($t3)
    ctx->pc = 0x17ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 3));
    // 0x17ef64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17ef64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ef68: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x17ef68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17ef6c: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x17ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x17ef70: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17EF70u;
    SET_GPR_U32(ctx, 31, 0x17EF78u);
    ctx->pc = 0x17EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF70u;
            // 0x17ef74: 0x7d220010  sq          $v0, 0x10($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF78u; }
        if (ctx->pc != 0x17EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF78u; }
        if (ctx->pc != 0x17EF78u) { return; }
    }
    ctx->pc = 0x17EF78u;
label_17ef78:
    // 0x17ef78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17ef78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17ef7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ef80:
    // 0x17ef80: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x17ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x17ef84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ef88: 0x245401f0  addiu       $s4, $v0, 0x1F0
    ctx->pc = 0x17ef88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x17ef8c: 0x24530210  addiu       $s3, $v0, 0x210
    ctx->pc = 0x17ef8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17ef90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ef94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ef94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ef98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef9c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x17ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x17efa0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x17efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x17efa4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17efa8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x17efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x17efac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17EFACu;
    SET_GPR_U32(ctx, 31, 0x17EFB4u);
    ctx->pc = 0x17EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFACu;
            // 0x17efb0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFB4u; }
        if (ctx->pc != 0x17EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFB4u; }
        if (ctx->pc != 0x17EFB4u) { return; }
    }
    ctx->pc = 0x17EFB4u;
label_17efb4:
    // 0x17efb4: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x17efb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17efb8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17efbc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17efbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17efc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17efc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efc4: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17EFC4u;
    SET_GPR_U32(ctx, 31, 0x17EFCCu);
    ctx->pc = 0x17EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFC4u;
            // 0x17efc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFCCu; }
        if (ctx->pc != 0x17EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFCCu; }
        if (ctx->pc != 0x17EFCCu) { return; }
    }
    ctx->pc = 0x17EFCCu;
label_17efcc:
    // 0x17efcc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17efd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17efd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efd4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17EFD4u;
    SET_GPR_U32(ctx, 31, 0x17EFDCu);
    ctx->pc = 0x17EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFD4u;
            // 0x17efd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFDCu; }
        if (ctx->pc != 0x17EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFDCu; }
        if (ctx->pc != 0x17EFDCu) { return; }
    }
    ctx->pc = 0x17EFDCu;
label_17efdc:
    // 0x17efdc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x17efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17efe0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17efe4: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x17efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x17efe8: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x17efe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17efec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17eff0: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17EFF0u;
    SET_GPR_U32(ctx, 31, 0x17EFF8u);
    ctx->pc = 0x17EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFF0u;
            // 0x17eff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFF8u; }
        if (ctx->pc != 0x17EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFF8u; }
        if (ctx->pc != 0x17EFF8u) { return; }
    }
    ctx->pc = 0x17EFF8u;
label_17eff8:
    // 0x17eff8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17eff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17effc: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x17effcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17f000: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17F000u;
    {
        const bool branch_taken_0x17f000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F000u;
            // 0x17f004: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f000) {
            ctx->pc = 0x17EF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ef80;
        }
    }
    ctx->pc = 0x17F008u;
    // 0x17f008: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17F008u;
    SET_GPR_U32(ctx, 31, 0x17F010u);
    ctx->pc = 0x17F00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F008u;
            // 0x17f00c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F010u; }
        if (ctx->pc != 0x17F010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F010u; }
        if (ctx->pc != 0x17F010u) { return; }
    }
    ctx->pc = 0x17F010u;
label_17f010:
    // 0x17f010: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f014: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17F014u;
    SET_GPR_U32(ctx, 31, 0x17F01Cu);
    ctx->pc = 0x17F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F014u;
            // 0x17f018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F01Cu; }
        if (ctx->pc != 0x17F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F01Cu; }
        if (ctx->pc != 0x17F01Cu) { return; }
    }
    ctx->pc = 0x17F01Cu;
label_17f01c:
    // 0x17f01c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f020: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17F020u;
    SET_GPR_U32(ctx, 31, 0x17F028u);
    ctx->pc = 0x17F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F020u;
            // 0x17f024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F028u; }
        if (ctx->pc != 0x17F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F028u; }
        if (ctx->pc != 0x17F028u) { return; }
    }
    ctx->pc = 0x17F028u;
label_17f028:
    // 0x17f028: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f02c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17F02Cu;
    SET_GPR_U32(ctx, 31, 0x17F034u);
    ctx->pc = 0x17F030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F02Cu;
            // 0x17f030: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F034u; }
        if (ctx->pc != 0x17F034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F034u; }
        if (ctx->pc != 0x17F034u) { return; }
    }
    ctx->pc = 0x17F034u;
label_17f034:
    // 0x17f034: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x17f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17f038: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F038u;
    {
        const bool branch_taken_0x17f038 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F038u;
            // 0x17f03c: 0x56001a  div         $zero, $v0, $s6 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f038) {
            ctx->pc = 0x17F044u;
            goto label_17f044;
        }
    }
    ctx->pc = 0x17F040u;
    // 0x17f040: 0x1cd  break       0, 7
    ctx->pc = 0x17f040u;
    runtime->handleBreak(rdram, ctx);
label_17f044:
    // 0x17f044: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x17f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x17f048: 0xb812  mflo        $s7
    ctx->pc = 0x17f048u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x17f04c: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F04Cu;
    {
        const bool branch_taken_0x17f04c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F04Cu;
            // 0x17f050: 0x56001a  div         $zero, $v0, $s6 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f04c) {
            ctx->pc = 0x17F058u;
            goto label_17f058;
        }
    }
    ctx->pc = 0x17F054u;
    // 0x17f054: 0x1cd  break       0, 7
    ctx->pc = 0x17f054u;
    runtime->handleBreak(rdram, ctx);
label_17f058:
    // 0x17f058: 0xdf868a50  ld          $a2, -0x75B0($gp)
    ctx->pc = 0x17f058u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x17f05c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x17f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x17f060: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17f064: 0x27a70238  addiu       $a3, $sp, 0x238
    ctx->pc = 0x17f064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x17f068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f06c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f070: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x17f070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17f074: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17f078: 0x9012  mflo        $s2
    ctx->pc = 0x17f078u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x17f07c: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17f080: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x17f080u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x17f084: 0xafa30238  sw          $v1, 0x238($sp)
    ctx->pc = 0x17f084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 3));
    // 0x17f088: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17F088u;
    SET_GPR_U32(ctx, 31, 0x17F090u);
    ctx->pc = 0x17F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F088u;
            // 0x17f08c: 0xafa2023c  sw          $v0, 0x23C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F090u; }
        if (ctx->pc != 0x17F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F090u; }
        if (ctx->pc != 0x17F090u) { return; }
    }
    ctx->pc = 0x17F090u;
label_17f090:
    // 0x17f090: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f09c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0a0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17F0A0u;
    SET_GPR_U32(ctx, 31, 0x17F0A8u);
    ctx->pc = 0x17F0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0A0u;
            // 0x17f0a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0A8u; }
        if (ctx->pc != 0x17F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0A8u; }
        if (ctx->pc != 0x17F0A8u) { return; }
    }
    ctx->pc = 0x17F0A8u;
label_17f0a8:
    // 0x17f0a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0b4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F0B4u;
    SET_GPR_U32(ctx, 31, 0x17F0BCu);
    ctx->pc = 0x17F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0B4u;
            // 0x17f0b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0BCu; }
        if (ctx->pc != 0x17F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0BCu; }
        if (ctx->pc != 0x17F0BCu) { return; }
    }
    ctx->pc = 0x17F0BCu;
label_17f0bc:
    // 0x17f0bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f0c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0c8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F0C8u;
    SET_GPR_U32(ctx, 31, 0x17F0D0u);
    ctx->pc = 0x17F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0C8u;
            // 0x17f0cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0D0u; }
        if (ctx->pc != 0x17F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0D0u; }
        if (ctx->pc != 0x17F0D0u) { return; }
    }
    ctx->pc = 0x17F0D0u;
label_17f0d0:
    // 0x17f0d0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17F0D0u;
    SET_GPR_U32(ctx, 31, 0x17F0D8u);
    ctx->pc = 0x17F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0D0u;
            // 0x17f0d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0D8u; }
        if (ctx->pc != 0x17F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0D8u; }
        if (ctx->pc != 0x17F0D8u) { return; }
    }
    ctx->pc = 0x17F0D8u;
label_17f0d8:
    // 0x17f0d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f0dc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17F0DCu;
    SET_GPR_U32(ctx, 31, 0x17F0E4u);
    ctx->pc = 0x17F0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0DCu;
            // 0x17f0e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0E4u; }
        if (ctx->pc != 0x17F0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0E4u; }
        if (ctx->pc != 0x17F0E4u) { return; }
    }
    ctx->pc = 0x17F0E4u;
label_17f0e4:
    // 0x17f0e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f0e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0f4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17F0F4u;
    SET_GPR_U32(ctx, 31, 0x17F0FCu);
    ctx->pc = 0x17F0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0F4u;
            // 0x17f0f8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0FCu; }
        if (ctx->pc != 0x17F0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F0FCu; }
        if (ctx->pc != 0x17F0FCu) { return; }
    }
    ctx->pc = 0x17F0FCu;
label_17f0fc:
    // 0x17f0fc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f100: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x17f100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f104: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17f104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f108: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17F108u;
    SET_GPR_U32(ctx, 31, 0x17F110u);
    ctx->pc = 0x17F10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F108u;
            // 0x17f10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F110u; }
        if (ctx->pc != 0x17F110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F110u; }
        if (ctx->pc != 0x17F110u) { return; }
    }
    ctx->pc = 0x17F110u;
label_17f110:
    // 0x17f110: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17f110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17f114: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f118: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17f118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f11c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17f11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f120: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17F120u;
    SET_GPR_U32(ctx, 31, 0x17F128u);
    ctx->pc = 0x17F124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F120u;
            // 0x17f124: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F128u; }
        if (ctx->pc != 0x17F128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F128u; }
        if (ctx->pc != 0x17F128u) { return; }
    }
    ctx->pc = 0x17F128u;
label_17f128:
    // 0x17f128: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x17f128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17f12c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17F12Cu;
    {
        const bool branch_taken_0x17f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F12Cu;
            // 0x17f130: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f12c) {
            ctx->pc = 0x17F1ACu;
            goto label_17f1ac;
        }
    }
    ctx->pc = 0x17F134u;
label_17f134:
    // 0x17f134: 0xc047a42  jal         func_11E908
    ctx->pc = 0x17F134u;
    SET_GPR_U32(ctx, 31, 0x17F13Cu);
    ctx->pc = 0x17F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F134u;
            // 0x17f138: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F13Cu; }
        if (ctx->pc != 0x17F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F13Cu; }
        if (ctx->pc != 0x17F13Cu) { return; }
    }
    ctx->pc = 0x17F13Cu;
label_17f13c:
    // 0x17f13c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17f140: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17f144: 0x8c550238  lw          $s5, 0x238($v0)
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
    // 0x17f148: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x17f148u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f14c: 0x0  nop
    ctx->pc = 0x17f14cu;
    // NOP
    // 0x17f150: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17f150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f154: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F154u;
    SET_GPR_U32(ctx, 31, 0x17F15Cu);
    ctx->pc = 0x17F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F154u;
            // 0x17f158: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F15Cu; }
        if (ctx->pc != 0x17F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F15Cu; }
        if (ctx->pc != 0x17F15Cu) { return; }
    }
    ctx->pc = 0x17F15Cu;
label_17f15c:
    // 0x17f15c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17f15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f160: 0xc047964  jal         func_11E590
    ctx->pc = 0x17F160u;
    SET_GPR_U32(ctx, 31, 0x17F168u);
    ctx->pc = 0x17F164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F160u;
            // 0x17f164: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F168u; }
        if (ctx->pc != 0x17F168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F168u; }
        if (ctx->pc != 0x17F168u) { return; }
    }
    ctx->pc = 0x17F168u;
label_17f168:
    // 0x17f168: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x17f168u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f16c: 0x0  nop
    ctx->pc = 0x17f16cu;
    // NOP
    // 0x17f170: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17f170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f174: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F174u;
    SET_GPR_U32(ctx, 31, 0x17F17Cu);
    ctx->pc = 0x17F178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F174u;
            // 0x17f178: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F17Cu; }
        if (ctx->pc != 0x17F17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F17Cu; }
        if (ctx->pc != 0x17F17Cu) { return; }
    }
    ctx->pc = 0x17F17Cu;
label_17f17c:
    // 0x17f17c: 0x2972821  addu        $a1, $s4, $s7
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x17f180: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x17f180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17f184: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f188: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17F188u;
    SET_GPR_U32(ctx, 31, 0x17F190u);
    ctx->pc = 0x17F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F188u;
            // 0x17f18c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F190u; }
        if (ctx->pc != 0x17F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F190u; }
        if (ctx->pc != 0x17F190u) { return; }
    }
    ctx->pc = 0x17F190u;
label_17f190:
    // 0x17f190: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x17f194: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x17f194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17f198: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x17f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x17f19c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17f19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x17f1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f1a4: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x17f1a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f1a8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x17f1a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_17f1ac:
    // 0x17f1ac: 0x0  nop
    ctx->pc = 0x17f1acu;
    // NOP
    // 0x17f1b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x17f1b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17f1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f1bc: 0x0  nop
    ctx->pc = 0x17f1bcu;
    // NOP
    // 0x17f1c0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x17f1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f1c4: 0x0  nop
    ctx->pc = 0x17f1c4u;
    // NOP
    // 0x17f1c8: 0x4501ffda  bc1t        . + 4 + (-0x26 << 2)
    ctx->pc = 0x17F1C8u;
    {
        const bool branch_taken_0x17f1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f1c8) {
            ctx->pc = 0x17F134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f134;
        }
    }
    ctx->pc = 0x17F1D0u;
    // 0x17f1d0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17f1d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x17f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17f1dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f1e0: 0x8c420238  lw          $v0, 0x238($v0)
    ctx->pc = 0x17f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
    // 0x17f1e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1e8: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17F1E8u;
    SET_GPR_U32(ctx, 31, 0x17F1F0u);
    ctx->pc = 0x17F1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1E8u;
            // 0x17f1ec: 0x2423023  subu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F0u; }
        if (ctx->pc != 0x17F1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F0u; }
        if (ctx->pc != 0x17F1F0u) { return; }
    }
    ctx->pc = 0x17F1F0u;
label_17f1f0:
    // 0x17f1f0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17F1F0u;
    SET_GPR_U32(ctx, 31, 0x17F1F8u);
    ctx->pc = 0x17F1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1F0u;
            // 0x17f1f4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F8u; }
        if (ctx->pc != 0x17F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1F8u; }
        if (ctx->pc != 0x17F1F8u) { return; }
    }
    ctx->pc = 0x17F1F8u;
label_17f1f8:
    // 0x17f1f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f200: 0xc04d3d4  jal         func_134F50
    ctx->pc = 0x17F200u;
    SET_GPR_U32(ctx, 31, 0x17F208u);
    ctx->pc = 0x17F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F200u;
            // 0x17f204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F50u;
    if (runtime->hasFunction(0x134F50u)) {
        auto targetFn = runtime->lookupFunction(0x134F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DAlphaTest__11mgCDrawPrimFii_0x134f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    }
    ctx->pc = 0x17F208u;
label_17f208:
    // 0x17f208: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f20c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17F20Cu;
    SET_GPR_U32(ctx, 31, 0x17F214u);
    ctx->pc = 0x17F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F20Cu;
            // 0x17f210: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F214u; }
        if (ctx->pc != 0x17F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F214u; }
        if (ctx->pc != 0x17F214u) { return; }
    }
    ctx->pc = 0x17F214u;
label_17f214:
    // 0x17f214: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17f218: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f21c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17f21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f220: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17f220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f224: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17F224u;
    SET_GPR_U32(ctx, 31, 0x17F22Cu);
    ctx->pc = 0x17F228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F224u;
            // 0x17f228: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F22Cu; }
        if (ctx->pc != 0x17F22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F22Cu; }
        if (ctx->pc != 0x17F22Cu) { return; }
    }
    ctx->pc = 0x17F22Cu;
label_17f22c:
    // 0x17f22c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f238: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F238u;
    SET_GPR_U32(ctx, 31, 0x17F240u);
    ctx->pc = 0x17F23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F238u;
            // 0x17f23c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F240u; }
        if (ctx->pc != 0x17F240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F240u; }
        if (ctx->pc != 0x17F240u) { return; }
    }
    ctx->pc = 0x17F240u;
label_17f240:
    // 0x17f240: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f24c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F24Cu;
    SET_GPR_U32(ctx, 31, 0x17F254u);
    ctx->pc = 0x17F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F24Cu;
            // 0x17f250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F254u; }
        if (ctx->pc != 0x17F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F254u; }
        if (ctx->pc != 0x17F254u) { return; }
    }
    ctx->pc = 0x17F254u;
label_17f254:
    // 0x17f254: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17F254u;
    SET_GPR_U32(ctx, 31, 0x17F25Cu);
    ctx->pc = 0x17F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F254u;
            // 0x17f258: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F25Cu; }
        if (ctx->pc != 0x17F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F25Cu; }
        if (ctx->pc != 0x17F25Cu) { return; }
    }
    ctx->pc = 0x17F25Cu;
label_17f25c:
    // 0x17f25c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x17f25cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f260: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f268: 0x0  nop
    ctx->pc = 0x17f268u;
    // NOP
    // 0x17f26c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17f270: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x17f270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x17f274: 0x0  nop
    ctx->pc = 0x17f274u;
    // NOP
    // 0x17f278: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17f278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17f27c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17f27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f280: 0x0  nop
    ctx->pc = 0x17f280u;
    // NOP
    // 0x17f284: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17F284u;
    {
        const bool branch_taken_0x17f284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f284) {
            ctx->pc = 0x17F290u;
            goto label_17f290;
        }
    }
    ctx->pc = 0x17F28Cu;
    // 0x17f28c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x17f28cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_17f290:
    // 0x17f290: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x17f290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17f294: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f298: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x17f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x17f29c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x17f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x17f2a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17f2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f2b0: 0xc050f18  jal         func_143C60
    ctx->pc = 0x17F2B0u;
    SET_GPR_U32(ctx, 31, 0x17F2B8u);
    ctx->pc = 0x17F2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2B0u;
            // 0x17f2b4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2B8u; }
        if (ctx->pc != 0x17F2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2B8u; }
        if (ctx->pc != 0x17F2B8u) { return; }
    }
    ctx->pc = 0x17F2B8u;
label_17f2b8:
    // 0x17f2b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2c0: 0xc04d3d4  jal         func_134F50
    ctx->pc = 0x17F2C0u;
    SET_GPR_U32(ctx, 31, 0x17F2C8u);
    ctx->pc = 0x17F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2C0u;
            // 0x17f2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F50u;
    if (runtime->hasFunction(0x134F50u)) {
        auto targetFn = runtime->lookupFunction(0x134F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2C8u; }
        if (ctx->pc != 0x17F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DAlphaTest__11mgCDrawPrimFii_0x134f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2C8u; }
        if (ctx->pc != 0x17F2C8u) { return; }
    }
    ctx->pc = 0x17F2C8u;
label_17f2c8:
    // 0x17f2c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f2cc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17F2CCu;
    SET_GPR_U32(ctx, 31, 0x17F2D4u);
    ctx->pc = 0x17F2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2CCu;
            // 0x17f2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2D4u; }
        if (ctx->pc != 0x17F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2D4u; }
        if (ctx->pc != 0x17F2D4u) { return; }
    }
    ctx->pc = 0x17F2D4u;
label_17f2d4:
    // 0x17f2d4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f2d8: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17F2D8u;
    SET_GPR_U32(ctx, 31, 0x17F2E0u);
    ctx->pc = 0x17F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2D8u;
            // 0x17f2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2E0u; }
        if (ctx->pc != 0x17F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2E0u; }
        if (ctx->pc != 0x17F2E0u) { return; }
    }
    ctx->pc = 0x17F2E0u;
label_17f2e0:
    // 0x17f2e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f2e4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17F2E4u;
    SET_GPR_U32(ctx, 31, 0x17F2ECu);
    ctx->pc = 0x17F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2E4u;
            // 0x17f2e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2ECu; }
        if (ctx->pc != 0x17F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2ECu; }
        if (ctx->pc != 0x17F2ECu) { return; }
    }
    ctx->pc = 0x17F2ECu;
label_17f2ec:
    // 0x17f2ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f2f0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17F2F0u;
    SET_GPR_U32(ctx, 31, 0x17F2F8u);
    ctx->pc = 0x17F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2F0u;
            // 0x17f2f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2F8u; }
        if (ctx->pc != 0x17F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2F8u; }
        if (ctx->pc != 0x17F2F8u) { return; }
    }
    ctx->pc = 0x17F2F8u;
label_17f2f8:
    // 0x17f2f8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17f2fc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17F2FCu;
    SET_GPR_U32(ctx, 31, 0x17F304u);
    ctx->pc = 0x17F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2FCu;
            // 0x17f300: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F304u; }
        if (ctx->pc != 0x17F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F304u; }
        if (ctx->pc != 0x17F304u) { return; }
    }
    ctx->pc = 0x17F304u;
label_17f304:
    // 0x17f304: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f308: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F308u;
    SET_GPR_U32(ctx, 31, 0x17F310u);
    ctx->pc = 0x17F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F308u;
            // 0x17f30c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F310u; }
        if (ctx->pc != 0x17F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F310u; }
        if (ctx->pc != 0x17F310u) { return; }
    }
    ctx->pc = 0x17F310u;
label_17f310:
    // 0x17f310: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17f310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f314: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f318: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F318u;
    SET_GPR_U32(ctx, 31, 0x17F320u);
    ctx->pc = 0x17F31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F318u;
            // 0x17f31c: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F320u; }
        if (ctx->pc != 0x17F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F320u; }
        if (ctx->pc != 0x17F320u) { return; }
    }
    ctx->pc = 0x17F320u;
label_17f320:
    // 0x17f320: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17f320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f324: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f328: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F328u;
    SET_GPR_U32(ctx, 31, 0x17F330u);
    ctx->pc = 0x17F32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F328u;
            // 0x17f32c: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F330u; }
        if (ctx->pc != 0x17F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F330u; }
        if (ctx->pc != 0x17F330u) { return; }
    }
    ctx->pc = 0x17F330u;
label_17f330:
    // 0x17f330: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f334: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17f334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f338: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f33c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17F33Cu;
    SET_GPR_U32(ctx, 31, 0x17F344u);
    ctx->pc = 0x17F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F33Cu;
            // 0x17f340: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F344u; }
        if (ctx->pc != 0x17F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F344u; }
        if (ctx->pc != 0x17F344u) { return; }
    }
    ctx->pc = 0x17F344u;
label_17f344:
    // 0x17f344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f348: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17f348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f34c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17f34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f350: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17f350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f354: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17F354u;
    SET_GPR_U32(ctx, 31, 0x17F35Cu);
    ctx->pc = 0x17F358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F354u;
            // 0x17f358: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F35Cu; }
        if (ctx->pc != 0x17F35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F35Cu; }
        if (ctx->pc != 0x17F35Cu) { return; }
    }
    ctx->pc = 0x17F35Cu;
label_17f35c:
    // 0x17f35c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f364: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17F364u;
    SET_GPR_U32(ctx, 31, 0x17F36Cu);
    ctx->pc = 0x17F368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F364u;
            // 0x17f368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F36Cu; }
        if (ctx->pc != 0x17F36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F36Cu; }
        if (ctx->pc != 0x17F36Cu) { return; }
    }
    ctx->pc = 0x17F36Cu;
label_17f36c:
    // 0x17f36c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f378: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F378u;
    SET_GPR_U32(ctx, 31, 0x17F380u);
    ctx->pc = 0x17F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F378u;
            // 0x17f37c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F380u; }
        if (ctx->pc != 0x17F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F380u; }
        if (ctx->pc != 0x17F380u) { return; }
    }
    ctx->pc = 0x17F380u;
label_17f380:
    // 0x17f380: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f388: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17F388u;
    SET_GPR_U32(ctx, 31, 0x17F390u);
    ctx->pc = 0x17F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F388u;
            // 0x17f38c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F390u; }
        if (ctx->pc != 0x17F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F390u; }
        if (ctx->pc != 0x17F390u) { return; }
    }
    ctx->pc = 0x17F390u;
label_17f390:
    // 0x17f390: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f394: 0x27c50008  addiu       $a1, $fp, 0x8
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x17f398: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3a0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F3A0u;
    SET_GPR_U32(ctx, 31, 0x17F3A8u);
    ctx->pc = 0x17F3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3A0u;
            // 0x17f3a4: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3A8u; }
        if (ctx->pc != 0x17F3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3A8u; }
        if (ctx->pc != 0x17F3A8u) { return; }
    }
    ctx->pc = 0x17F3A8u;
label_17f3a8:
    // 0x17f3a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3b0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17F3B0u;
    SET_GPR_U32(ctx, 31, 0x17F3B8u);
    ctx->pc = 0x17F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3B0u;
            // 0x17f3b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3B8u; }
        if (ctx->pc != 0x17F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3B8u; }
        if (ctx->pc != 0x17F3B8u) { return; }
    }
    ctx->pc = 0x17F3B8u;
label_17f3b8:
    // 0x17f3b8: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f3bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f3c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17f3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F3C4u;
    SET_GPR_U32(ctx, 31, 0x17F3CCu);
    ctx->pc = 0x17F3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3C4u;
            // 0x17f3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3CCu; }
        if (ctx->pc != 0x17F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3CCu; }
        if (ctx->pc != 0x17F3CCu) { return; }
    }
    ctx->pc = 0x17F3CCu;
label_17f3cc:
    // 0x17f3cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3d4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17F3D4u;
    SET_GPR_U32(ctx, 31, 0x17F3DCu);
    ctx->pc = 0x17F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3D4u;
            // 0x17f3d8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3DCu; }
        if (ctx->pc != 0x17F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3DCu; }
        if (ctx->pc != 0x17F3DCu) { return; }
    }
    ctx->pc = 0x17F3DCu;
label_17f3dc:
    // 0x17f3dc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f3e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x17f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17f3e8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17F3E8u;
    SET_GPR_U32(ctx, 31, 0x17F3F0u);
    ctx->pc = 0x17F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3E8u;
            // 0x17f3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F0u; }
        if (ctx->pc != 0x17F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F0u; }
        if (ctx->pc != 0x17F3F0u) { return; }
    }
    ctx->pc = 0x17F3F0u;
label_17f3f0:
    // 0x17f3f0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17F3F0u;
    SET_GPR_U32(ctx, 31, 0x17F3F8u);
    ctx->pc = 0x17F3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3F0u;
            // 0x17f3f4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F8u; }
        if (ctx->pc != 0x17F3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3F8u; }
        if (ctx->pc != 0x17F3F8u) { return; }
    }
    ctx->pc = 0x17F3F8u;
label_17f3f8:
    // 0x17f3f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17f3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17f3fc:
    // 0x17f3fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f400: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17f400u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f404: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f408: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17f408u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17f40c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17f40cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f410: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17f410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f414: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17f414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f418: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17f418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f41c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17f41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f420: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f428: 0x3e00008  jr          $ra
    ctx->pc = 0x17F428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F428u;
            // 0x17f42c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F430u;
}
