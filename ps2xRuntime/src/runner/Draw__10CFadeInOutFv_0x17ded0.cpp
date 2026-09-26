#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__10CFadeInOutFv
// Address: 0x17ded0 - 0x17e31c
void Draw__10CFadeInOutFv_0x17ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__10CFadeInOutFv_0x17ded0");
#endif

    switch (ctx->pc) {
        case 0x17df08u: goto label_17df08;
        case 0x17df18u: goto label_17df18;
        case 0x17df24u: goto label_17df24;
        case 0x17df30u: goto label_17df30;
        case 0x17df3cu: goto label_17df3c;
        case 0x17df48u: goto label_17df48;
        case 0x17df54u: goto label_17df54;
        case 0x17dfa0u: goto label_17dfa0;
        case 0x17dfacu: goto label_17dfac;
        case 0x17dfc4u: goto label_17dfc4;
        case 0x17dfd0u: goto label_17dfd0;
        case 0x17dfdcu: goto label_17dfdc;
        case 0x17dff8u: goto label_17dff8;
        case 0x17e010u: goto label_17e010;
        case 0x17e018u: goto label_17e018;
        case 0x17e048u: goto label_17e048;
        case 0x17e05cu: goto label_17e05c;
        case 0x17e08cu: goto label_17e08c;
        case 0x17e0a0u: goto label_17e0a0;
        case 0x17e0acu: goto label_17e0ac;
        case 0x17e0bcu: goto label_17e0bc;
        case 0x17e0c8u: goto label_17e0c8;
        case 0x17e0d4u: goto label_17e0d4;
        case 0x17e0f0u: goto label_17e0f0;
        case 0x17e0f8u: goto label_17e0f8;
        case 0x17e104u: goto label_17e104;
        case 0x17e110u: goto label_17e110;
        case 0x17e124u: goto label_17e124;
        case 0x17e13cu: goto label_17e13c;
        case 0x17e144u: goto label_17e144;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e154u: goto label_17e154;
        case 0x17e164u: goto label_17e164;
        case 0x17e16cu: goto label_17e16c;
        case 0x17e178u: goto label_17e178;
        case 0x17e180u: goto label_17e180;
        case 0x17e18cu: goto label_17e18c;
        case 0x17e198u: goto label_17e198;
        case 0x17e1a4u: goto label_17e1a4;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e1c4u: goto label_17e1c4;
        case 0x17e1ccu: goto label_17e1cc;
        case 0x17e1d4u: goto label_17e1d4;
        case 0x17e1e8u: goto label_17e1e8;
        case 0x17e1f8u: goto label_17e1f8;
        case 0x17e200u: goto label_17e200;
        case 0x17e208u: goto label_17e208;
        case 0x17e230u: goto label_17e230;
        case 0x17e23cu: goto label_17e23c;
        case 0x17e248u: goto label_17e248;
        case 0x17e254u: goto label_17e254;
        case 0x17e260u: goto label_17e260;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e284u: goto label_17e284;
        case 0x17e290u: goto label_17e290;
        case 0x17e2a8u: goto label_17e2a8;
        case 0x17e2b8u: goto label_17e2b8;
        case 0x17e2ccu: goto label_17e2cc;
        case 0x17e2e4u: goto label_17e2e4;
        case 0x17e2f8u: goto label_17e2f8;
        case 0x17e300u: goto label_17e300;
        default: break;
    }

    ctx->pc = 0x17ded0u;

    // 0x17ded0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x17ded4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ded8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ded8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dedc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17dee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17dee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17deec: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x17deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17def0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17def0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17def4: 0x0  nop
    ctx->pc = 0x17def4u;
    // NOP
    // 0x17def8: 0x450100b6  bc1t        . + 4 + (0xB6 << 2)
    ctx->pc = 0x17DEF8u;
    {
        const bool branch_taken_0x17def8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEF8u;
            // 0x17defc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17def8) {
            ctx->pc = 0x17E1D4u;
            goto label_17e1d4;
        }
    }
    ctx->pc = 0x17DF00u;
    // 0x17df00: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17DF00u;
    SET_GPR_U32(ctx, 31, 0x17DF08u);
    ctx->pc = 0x17DF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF00u;
            // 0x17df04: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF08u; }
        if (ctx->pc != 0x17DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF08u; }
        if (ctx->pc != 0x17DF08u) { return; }
    }
    ctx->pc = 0x17DF08u;
label_17df08:
    // 0x17df08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17df0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df10: 0xc04d104  jal         func_134410
    ctx->pc = 0x17DF10u;
    SET_GPR_U32(ctx, 31, 0x17DF18u);
    ctx->pc = 0x17DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF10u;
            // 0x17df14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF18u; }
        if (ctx->pc != 0x17DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF18u; }
        if (ctx->pc != 0x17DF18u) { return; }
    }
    ctx->pc = 0x17DF18u;
label_17df18:
    // 0x17df18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df1c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17DF1Cu;
    SET_GPR_U32(ctx, 31, 0x17DF24u);
    ctx->pc = 0x17DF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF1Cu;
            // 0x17df20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF24u; }
        if (ctx->pc != 0x17DF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF24u; }
        if (ctx->pc != 0x17DF24u) { return; }
    }
    ctx->pc = 0x17DF24u;
label_17df24:
    // 0x17df24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df28: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x17DF28u;
    SET_GPR_U32(ctx, 31, 0x17DF30u);
    ctx->pc = 0x17DF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF28u;
            // 0x17df2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF30u; }
        if (ctx->pc != 0x17DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF30u; }
        if (ctx->pc != 0x17DF30u) { return; }
    }
    ctx->pc = 0x17DF30u;
label_17df30:
    // 0x17df30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df34: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17DF34u;
    SET_GPR_U32(ctx, 31, 0x17DF3Cu);
    ctx->pc = 0x17DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF34u;
            // 0x17df38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF3Cu; }
        if (ctx->pc != 0x17DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF3Cu; }
        if (ctx->pc != 0x17DF3Cu) { return; }
    }
    ctx->pc = 0x17DF3Cu;
label_17df3c:
    // 0x17df3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df40: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17DF40u;
    SET_GPR_U32(ctx, 31, 0x17DF48u);
    ctx->pc = 0x17DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF40u;
            // 0x17df44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF48u; }
        if (ctx->pc != 0x17DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF48u; }
        if (ctx->pc != 0x17DF48u) { return; }
    }
    ctx->pc = 0x17DF48u;
label_17df48:
    // 0x17df48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17df4c: 0xc04d424  jal         func_135090
    ctx->pc = 0x17DF4Cu;
    SET_GPR_U32(ctx, 31, 0x17DF54u);
    ctx->pc = 0x17DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF4Cu;
            // 0x17df50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF54u; }
        if (ctx->pc != 0x17DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF54u; }
        if (ctx->pc != 0x17DF54u) { return; }
    }
    ctx->pc = 0x17DF54u;
label_17df54:
    // 0x17df54: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17df58: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x17DF58u;
    {
        const bool branch_taken_0x17df58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF58u;
            // 0x17df5c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df58) {
            ctx->pc = 0x17E15Cu;
            goto label_17e15c;
        }
    }
    ctx->pc = 0x17DF60u;
    // 0x17df60: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x17df60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17df64: 0x10e0009b  beqz        $a3, . + 4 + (0x9B << 2)
    ctx->pc = 0x17DF64u;
    {
        const bool branch_taken_0x17df64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df64) {
            ctx->pc = 0x17E1D4u;
            goto label_17e1d4;
        }
    }
    ctx->pc = 0x17DF6Cu;
    // 0x17df6c: 0x90e5003c  lbu         $a1, 0x3C($a3)
    ctx->pc = 0x17df6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x17df70: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17df74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17df78: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x17df78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x17df7c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17df80: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x17df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x17df84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x17df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17df88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17df8c: 0xa0e2003c  sb          $v0, 0x3C($a3)
    ctx->pc = 0x17df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x17df90: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17df94: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x17df94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17df98: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x17DF98u;
    SET_GPR_U32(ctx, 31, 0x17DFA0u);
    ctx->pc = 0x17DF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF98u;
            // 0x17df9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA0u; }
        if (ctx->pc != 0x17DFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA0u; }
        if (ctx->pc != 0x17DFA0u) { return; }
    }
    ctx->pc = 0x17DFA0u;
label_17dfa0:
    // 0x17dfa0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17dfa4: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17DFA4u;
    SET_GPR_U32(ctx, 31, 0x17DFACu);
    ctx->pc = 0x17DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFA4u;
            // 0x17dfa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFACu; }
        if (ctx->pc != 0x17DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFACu; }
        if (ctx->pc != 0x17DFACu) { return; }
    }
    ctx->pc = 0x17DFACu;
label_17dfac:
    // 0x17dfac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x17dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17dfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dfb4: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17DFB4u;
    {
        const bool branch_taken_0x17dfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFB4u;
            // 0x17dfb8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfb4) {
            ctx->pc = 0x17E0B4u;
            goto label_17e0b4;
        }
    }
    ctx->pc = 0x17DFBCu;
    // 0x17dfbc: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x17DFBCu;
    SET_GPR_U32(ctx, 31, 0x17DFC4u);
    ctx->pc = 0x17DFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFBCu;
            // 0x17dfc0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFC4u; }
        if (ctx->pc != 0x17DFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFC4u; }
        if (ctx->pc != 0x17DFC4u) { return; }
    }
    ctx->pc = 0x17DFC4u;
label_17dfc4:
    // 0x17dfc4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17dfc8: 0xc04d218  jal         func_134860
    ctx->pc = 0x17DFC8u;
    SET_GPR_U32(ctx, 31, 0x17DFD0u);
    ctx->pc = 0x17DFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFC8u;
            // 0x17dfcc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFD0u; }
        if (ctx->pc != 0x17DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFD0u; }
        if (ctx->pc != 0x17DFD0u) { return; }
    }
    ctx->pc = 0x17DFD0u;
label_17dfd0:
    // 0x17dfd0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17dfd4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17DFD4u;
    SET_GPR_U32(ctx, 31, 0x17DFDCu);
    ctx->pc = 0x17DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFD4u;
            // 0x17dfd8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFDCu; }
        if (ctx->pc != 0x17DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFDCu; }
        if (ctx->pc != 0x17DFDCu) { return; }
    }
    ctx->pc = 0x17DFDCu;
label_17dfdc:
    // 0x17dfdc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17dfe0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x17dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x17dfe4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17dfe8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17dfec: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17dff0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x17DFF0u;
    SET_GPR_U32(ctx, 31, 0x17DFF8u);
    ctx->pc = 0x17DFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFF0u;
            // 0x17dff4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFF8u; }
        if (ctx->pc != 0x17DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFF8u; }
        if (ctx->pc != 0x17DFF8u) { return; }
    }
    ctx->pc = 0x17DFF8u;
label_17dff8:
    // 0x17dff8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17dffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e000: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e004: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17e004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e008: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17E008u;
    SET_GPR_U32(ctx, 31, 0x17E010u);
    ctx->pc = 0x17E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E008u;
            // 0x17e00c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    }
    ctx->pc = 0x17E010u;
label_17e010:
    // 0x17e010: 0xc04d250  jal         func_134940
    ctx->pc = 0x17E010u;
    SET_GPR_U32(ctx, 31, 0x17E018u);
    ctx->pc = 0x17E014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E010u;
            // 0x17e014: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E018u; }
        if (ctx->pc != 0x17E018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E018u; }
        if (ctx->pc != 0x17E018u) { return; }
    }
    ctx->pc = 0x17E018u;
label_17e018:
    // 0x17e018: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17e01c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E01Cu;
    {
        const bool branch_taken_0x17e01c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17e01c) {
            ctx->pc = 0x17E064u;
            goto label_17e064;
        }
    }
    ctx->pc = 0x17E024u;
    // 0x17e024: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x17e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e028: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17e02c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17e02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17e030: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x17e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e034: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17e034u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17e038: 0x0  nop
    ctx->pc = 0x17e038u;
    // NOP
    // 0x17e03c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17e040: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E040u;
    SET_GPR_U32(ctx, 31, 0x17E048u);
    ctx->pc = 0x17E044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E040u;
            // 0x17e044: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E048u; }
        if (ctx->pc != 0x17E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E048u; }
        if (ctx->pc != 0x17E048u) { return; }
    }
    ctx->pc = 0x17E048u;
label_17e048:
    // 0x17e048: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17e048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e04c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e054: 0xc05f724  jal         func_17DC90
    ctx->pc = 0x17E054u;
    SET_GPR_U32(ctx, 31, 0x17E05Cu);
    ctx->pc = 0x17E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E054u;
            // 0x17e058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC90u;
    if (runtime->hasFunction(0x17DC90u)) {
        auto targetFn = runtime->lookupFunction(0x17DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E05Cu; }
        if (ctx->pc != 0x17E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivSpriteScreen__FR11mgCDrawPrimiii_0x17dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E05Cu; }
        if (ctx->pc != 0x17E05Cu) { return; }
    }
    ctx->pc = 0x17E05Cu;
label_17e05c:
    // 0x17e05c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17E05Cu;
    {
        const bool branch_taken_0x17e05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E05Cu;
            // 0x17e060: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e05c) {
            ctx->pc = 0x17E0A4u;
            goto label_17e0a4;
        }
    }
    ctx->pc = 0x17E064u;
label_17e064:
    // 0x17e064: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x17e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e068: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17e06c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17e06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17e070: 0x8f918780  lw          $s1, -0x7880($gp)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17e074: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17e074u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17e078: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17e078u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e07c: 0x0  nop
    ctx->pc = 0x17e07cu;
    // NOP
    // 0x17e080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17e084: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E084u;
    SET_GPR_U32(ctx, 31, 0x17E08Cu);
    ctx->pc = 0x17E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E084u;
            // 0x17e088: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E08Cu; }
        if (ctx->pc != 0x17E08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E08Cu; }
        if (ctx->pc != 0x17E08Cu) { return; }
    }
    ctx->pc = 0x17E08Cu;
label_17e08c:
    // 0x17e08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e090: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e094: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e098: 0xc05f724  jal         func_17DC90
    ctx->pc = 0x17E098u;
    SET_GPR_U32(ctx, 31, 0x17E0A0u);
    ctx->pc = 0x17E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E098u;
            // 0x17e09c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC90u;
    if (runtime->hasFunction(0x17DC90u)) {
        auto targetFn = runtime->lookupFunction(0x17DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A0u; }
        if (ctx->pc != 0x17E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivSpriteScreen__FR11mgCDrawPrimiii_0x17dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A0u; }
        if (ctx->pc != 0x17E0A0u) { return; }
    }
    ctx->pc = 0x17E0A0u;
label_17e0a0:
    // 0x17e0a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17e0a4:
    // 0x17e0a4: 0xc04d288  jal         func_134A20
    ctx->pc = 0x17E0A4u;
    SET_GPR_U32(ctx, 31, 0x17E0ACu);
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0ACu; }
        if (ctx->pc != 0x17E0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0ACu; }
        if (ctx->pc != 0x17E0ACu) { return; }
    }
    ctx->pc = 0x17E0ACu;
label_17e0ac:
    // 0x17e0ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x17E0ACu;
    {
        const bool branch_taken_0x17e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0ACu;
            // 0x17e0b0: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ac) {
            ctx->pc = 0x17E1D8u;
            goto label_17e1d8;
        }
    }
    ctx->pc = 0x17E0B4u;
label_17e0b4:
    // 0x17e0b4: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x17E0B4u;
    SET_GPR_U32(ctx, 31, 0x17E0BCu);
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0BCu; }
        if (ctx->pc != 0x17E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0BCu; }
        if (ctx->pc != 0x17E0BCu) { return; }
    }
    ctx->pc = 0x17E0BCu;
label_17e0bc:
    // 0x17e0bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e0c0: 0xc04d218  jal         func_134860
    ctx->pc = 0x17E0C0u;
    SET_GPR_U32(ctx, 31, 0x17E0C8u);
    ctx->pc = 0x17E0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0C0u;
            // 0x17e0c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0C8u; }
        if (ctx->pc != 0x17E0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0C8u; }
        if (ctx->pc != 0x17E0C8u) { return; }
    }
    ctx->pc = 0x17E0C8u;
label_17e0c8:
    // 0x17e0c8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x17e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17e0cc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17E0CCu;
    SET_GPR_U32(ctx, 31, 0x17E0D4u);
    ctx->pc = 0x17E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0CCu;
            // 0x17e0d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0D4u; }
        if (ctx->pc != 0x17E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0D4u; }
        if (ctx->pc != 0x17E0D4u) { return; }
    }
    ctx->pc = 0x17E0D4u;
label_17e0d4:
    // 0x17e0d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17e0d8: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x17e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x17e0dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17e0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17e0e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e0e4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17e0e8: 0xc04d360  jal         func_134D80
    ctx->pc = 0x17E0E8u;
    SET_GPR_U32(ctx, 31, 0x17E0F0u);
    ctx->pc = 0x17E0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0E8u;
            // 0x17e0ec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F0u; }
        if (ctx->pc != 0x17E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F0u; }
        if (ctx->pc != 0x17E0F0u) { return; }
    }
    ctx->pc = 0x17E0F0u;
label_17e0f0:
    // 0x17e0f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E0F0u;
    SET_GPR_U32(ctx, 31, 0x17E0F8u);
    ctx->pc = 0x17E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0F0u;
            // 0x17e0f4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
        if (ctx->pc != 0x17E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
        if (ctx->pc != 0x17E0F8u) { return; }
    }
    ctx->pc = 0x17E0F8u;
label_17e0f8:
    // 0x17e0f8: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x17e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e0fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E0FCu;
    SET_GPR_U32(ctx, 31, 0x17E104u);
    ctx->pc = 0x17E100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0FCu;
            // 0x17e100: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E104u; }
        if (ctx->pc != 0x17E104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E104u; }
        if (ctx->pc != 0x17E104u) { return; }
    }
    ctx->pc = 0x17E104u;
label_17e104:
    // 0x17e104: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x17e104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e108: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E108u;
    SET_GPR_U32(ctx, 31, 0x17E110u);
    ctx->pc = 0x17E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E108u;
            // 0x17e10c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E110u; }
        if (ctx->pc != 0x17E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E110u; }
        if (ctx->pc != 0x17E110u) { return; }
    }
    ctx->pc = 0x17E110u;
label_17e110:
    // 0x17e110: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x17e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e118: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x17e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e11c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E11Cu;
    SET_GPR_U32(ctx, 31, 0x17E124u);
    ctx->pc = 0x17E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E11Cu;
            // 0x17e120: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E124u; }
        if (ctx->pc != 0x17E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E124u; }
        if (ctx->pc != 0x17E124u) { return; }
    }
    ctx->pc = 0x17E124u;
label_17e124:
    // 0x17e124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e128: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e12c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e130: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17e130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e134: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17E134u;
    SET_GPR_U32(ctx, 31, 0x17E13Cu);
    ctx->pc = 0x17E138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E134u;
            // 0x17e138: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E13Cu; }
        if (ctx->pc != 0x17E13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E13Cu; }
        if (ctx->pc != 0x17E13Cu) { return; }
    }
    ctx->pc = 0x17E13Cu;
label_17e13c:
    // 0x17e13c: 0xc04d250  jal         func_134940
    ctx->pc = 0x17E13Cu;
    SET_GPR_U32(ctx, 31, 0x17E144u);
    ctx->pc = 0x17E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E13Cu;
            // 0x17e140: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E144u; }
        if (ctx->pc != 0x17E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E144u; }
        if (ctx->pc != 0x17E144u) { return; }
    }
    ctx->pc = 0x17E144u;
label_17e144:
    // 0x17e144: 0xc05f6b4  jal         func_17DAD0
    ctx->pc = 0x17E144u;
    SET_GPR_U32(ctx, 31, 0x17E14Cu);
    ctx->pc = 0x17E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E144u;
            // 0x17e148: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DAD0u;
    if (runtime->hasFunction(0x17DAD0u)) {
        auto targetFn = runtime->lookupFunction(0x17DAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivSpriteScreen__FR11mgCDrawPrim_0x17dad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    }
    ctx->pc = 0x17E14Cu;
label_17e14c:
    // 0x17e14c: 0xc04d288  jal         func_134A20
    ctx->pc = 0x17E14Cu;
    SET_GPR_U32(ctx, 31, 0x17E154u);
    ctx->pc = 0x17E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E14Cu;
            // 0x17e150: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E154u; }
        if (ctx->pc != 0x17E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E154u; }
        if (ctx->pc != 0x17E154u) { return; }
    }
    ctx->pc = 0x17E154u;
label_17e154:
    // 0x17e154: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17E154u;
    {
        const bool branch_taken_0x17e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e154) {
            ctx->pc = 0x17E1D4u;
            goto label_17e1d4;
        }
    }
    ctx->pc = 0x17E15Cu;
label_17e15c:
    // 0x17e15c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17E15Cu;
    SET_GPR_U32(ctx, 31, 0x17E164u);
    ctx->pc = 0x17E160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E15Cu;
            // 0x17e160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E164u; }
        if (ctx->pc != 0x17E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E164u; }
        if (ctx->pc != 0x17E164u) { return; }
    }
    ctx->pc = 0x17E164u;
label_17e164:
    // 0x17e164: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x17E164u;
    SET_GPR_U32(ctx, 31, 0x17E16Cu);
    ctx->pc = 0x17E168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E164u;
            // 0x17e168: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E16Cu; }
        if (ctx->pc != 0x17E16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E16Cu; }
        if (ctx->pc != 0x17E16Cu) { return; }
    }
    ctx->pc = 0x17E16Cu;
label_17e16c:
    // 0x17e16c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17e170: 0xc04d218  jal         func_134860
    ctx->pc = 0x17E170u;
    SET_GPR_U32(ctx, 31, 0x17E178u);
    ctx->pc = 0x17E174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E170u;
            // 0x17e174: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E178u; }
        if (ctx->pc != 0x17E178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E178u; }
        if (ctx->pc != 0x17E178u) { return; }
    }
    ctx->pc = 0x17E178u;
label_17e178:
    // 0x17e178: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E178u;
    SET_GPR_U32(ctx, 31, 0x17E180u);
    ctx->pc = 0x17E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E178u;
            // 0x17e17c: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E180u; }
        if (ctx->pc != 0x17E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E180u; }
        if (ctx->pc != 0x17E180u) { return; }
    }
    ctx->pc = 0x17E180u;
label_17e180:
    // 0x17e180: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x17e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e184: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E184u;
    SET_GPR_U32(ctx, 31, 0x17E18Cu);
    ctx->pc = 0x17E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E184u;
            // 0x17e188: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E18Cu; }
        if (ctx->pc != 0x17E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E18Cu; }
        if (ctx->pc != 0x17E18Cu) { return; }
    }
    ctx->pc = 0x17E18Cu;
label_17e18c:
    // 0x17e18c: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x17e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e190: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E190u;
    SET_GPR_U32(ctx, 31, 0x17E198u);
    ctx->pc = 0x17E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E190u;
            // 0x17e194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E198u; }
        if (ctx->pc != 0x17E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E198u; }
        if (ctx->pc != 0x17E198u) { return; }
    }
    ctx->pc = 0x17E198u;
label_17e198:
    // 0x17e198: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x17e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e19c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17E19Cu;
    SET_GPR_U32(ctx, 31, 0x17E1A4u);
    ctx->pc = 0x17E1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E19Cu;
            // 0x17e1a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A4u; }
        if (ctx->pc != 0x17E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A4u; }
        if (ctx->pc != 0x17E1A4u) { return; }
    }
    ctx->pc = 0x17E1A4u;
label_17e1a4:
    // 0x17e1a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17E1B4u;
    SET_GPR_U32(ctx, 31, 0x17E1BCu);
    ctx->pc = 0x17E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1B4u;
            // 0x17e1b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1BCu; }
        if (ctx->pc != 0x17E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1BCu; }
        if (ctx->pc != 0x17E1BCu) { return; }
    }
    ctx->pc = 0x17E1BCu;
label_17e1bc:
    // 0x17e1bc: 0xc04d250  jal         func_134940
    ctx->pc = 0x17E1BCu;
    SET_GPR_U32(ctx, 31, 0x17E1C4u);
    ctx->pc = 0x17E1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1BCu;
            // 0x17e1c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1C4u; }
        if (ctx->pc != 0x17E1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1C4u; }
        if (ctx->pc != 0x17E1C4u) { return; }
    }
    ctx->pc = 0x17E1C4u;
label_17e1c4:
    // 0x17e1c4: 0xc05f6b4  jal         func_17DAD0
    ctx->pc = 0x17E1C4u;
    SET_GPR_U32(ctx, 31, 0x17E1CCu);
    ctx->pc = 0x17E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1C4u;
            // 0x17e1c8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DAD0u;
    if (runtime->hasFunction(0x17DAD0u)) {
        auto targetFn = runtime->lookupFunction(0x17DAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1CCu; }
        if (ctx->pc != 0x17E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivSpriteScreen__FR11mgCDrawPrim_0x17dad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1CCu; }
        if (ctx->pc != 0x17E1CCu) { return; }
    }
    ctx->pc = 0x17E1CCu;
label_17e1cc:
    // 0x17e1cc: 0xc04d288  jal         func_134A20
    ctx->pc = 0x17E1CCu;
    SET_GPR_U32(ctx, 31, 0x17E1D4u);
    ctx->pc = 0x17E1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1CCu;
            // 0x17e1d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1D4u; }
        if (ctx->pc != 0x17E1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1D4u; }
        if (ctx->pc != 0x17E1D4u) { return; }
    }
    ctx->pc = 0x17E1D4u;
label_17e1d4:
    // 0x17e1d4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x17e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17e1d8:
    // 0x17e1d8: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x17E1D8u;
    {
        const bool branch_taken_0x17e1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1D8u;
            // 0x17e1dc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1d8) {
            ctx->pc = 0x17E300u;
            goto label_17e300;
        }
    }
    ctx->pc = 0x17E1E0u;
    // 0x17e1e0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17E1E0u;
    SET_GPR_U32(ctx, 31, 0x17E1E8u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1E8u; }
        if (ctx->pc != 0x17E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1E8u; }
        if (ctx->pc != 0x17E1E8u) { return; }
    }
    ctx->pc = 0x17E1E8u;
label_17e1e8:
    // 0x17e1e8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1f0: 0xc04d104  jal         func_134410
    ctx->pc = 0x17E1F0u;
    SET_GPR_U32(ctx, 31, 0x17E1F8u);
    ctx->pc = 0x17E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1F0u;
            // 0x17e1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1F8u; }
        if (ctx->pc != 0x17E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1F8u; }
        if (ctx->pc != 0x17E1F8u) { return; }
    }
    ctx->pc = 0x17E1F8u;
label_17e1f8:
    // 0x17e1f8: 0xc04b120  jal         func_12C480
    ctx->pc = 0x17E1F8u;
    SET_GPR_U32(ctx, 31, 0x17E200u);
    ctx->pc = 0x17E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1F8u;
            // 0x17e1fc: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E200u; }
        if (ctx->pc != 0x17E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E200u; }
        if (ctx->pc != 0x17E200u) { return; }
    }
    ctx->pc = 0x17E200u;
label_17e200:
    // 0x17e200: 0xc051100  jal         func_144400
    ctx->pc = 0x17E200u;
    SET_GPR_U32(ctx, 31, 0x17E208u);
    ctx->pc = 0x17E204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E200u;
            // 0x17e204: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E208u; }
        if (ctx->pc != 0x17E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E208u; }
        if (ctx->pc != 0x17E208u) { return; }
    }
    ctx->pc = 0x17E208u;
label_17e208:
    // 0x17e208: 0x93a602ac  lbu         $a2, 0x2AC($sp)
    ctx->pc = 0x17e208u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x17e20c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17e20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17e210: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e214: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e218: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17e21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e220: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x17e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x17e224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17e228: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17E228u;
    SET_GPR_U32(ctx, 31, 0x17E230u);
    ctx->pc = 0x17E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E228u;
            // 0x17e22c: 0xa3a202ac  sb          $v0, 0x2AC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 684), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E230u; }
        if (ctx->pc != 0x17E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E230u; }
        if (ctx->pc != 0x17E230u) { return; }
    }
    ctx->pc = 0x17E230u;
label_17e230:
    // 0x17e230: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e234: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17E234u;
    SET_GPR_U32(ctx, 31, 0x17E23Cu);
    ctx->pc = 0x17E238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E234u;
            // 0x17e238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E23Cu; }
        if (ctx->pc != 0x17E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E23Cu; }
        if (ctx->pc != 0x17E23Cu) { return; }
    }
    ctx->pc = 0x17E23Cu;
label_17e23c:
    // 0x17e23c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e240: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17E240u;
    SET_GPR_U32(ctx, 31, 0x17E248u);
    ctx->pc = 0x17E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E240u;
            // 0x17e244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E248u; }
        if (ctx->pc != 0x17E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E248u; }
        if (ctx->pc != 0x17E248u) { return; }
    }
    ctx->pc = 0x17E248u;
label_17e248:
    // 0x17e248: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e24c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17E24Cu;
    SET_GPR_U32(ctx, 31, 0x17E254u);
    ctx->pc = 0x17E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E24Cu;
            // 0x17e250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E254u; }
        if (ctx->pc != 0x17E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E254u; }
        if (ctx->pc != 0x17E254u) { return; }
    }
    ctx->pc = 0x17E254u;
label_17e254:
    // 0x17e254: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e258: 0xc04d424  jal         func_135090
    ctx->pc = 0x17E258u;
    SET_GPR_U32(ctx, 31, 0x17E260u);
    ctx->pc = 0x17E25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E258u;
            // 0x17e25c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E260u; }
        if (ctx->pc != 0x17E260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E260u; }
        if (ctx->pc != 0x17E260u) { return; }
    }
    ctx->pc = 0x17E260u;
label_17e260:
    // 0x17e260: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e264: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17E264u;
    SET_GPR_U32(ctx, 31, 0x17E26Cu);
    ctx->pc = 0x17E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E264u;
            // 0x17e268: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E26Cu; }
        if (ctx->pc != 0x17E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E26Cu; }
        if (ctx->pc != 0x17E26Cu) { return; }
    }
    ctx->pc = 0x17E26Cu;
label_17e26c:
    // 0x17e26c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17e270: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e274: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17e278: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17e278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17e27c: 0xc04d360  jal         func_134D80
    ctx->pc = 0x17E27Cu;
    SET_GPR_U32(ctx, 31, 0x17E284u);
    ctx->pc = 0x17E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E27Cu;
            // 0x17e280: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E284u; }
        if (ctx->pc != 0x17E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E284u; }
        if (ctx->pc != 0x17E284u) { return; }
    }
    ctx->pc = 0x17E284u;
label_17e284:
    // 0x17e284: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e288: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17E288u;
    SET_GPR_U32(ctx, 31, 0x17E290u);
    ctx->pc = 0x17E28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E288u;
            // 0x17e28c: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E290u; }
        if (ctx->pc != 0x17E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E290u; }
        if (ctx->pc != 0x17E290u) { return; }
    }
    ctx->pc = 0x17E290u;
label_17e290:
    // 0x17e290: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e294: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17e294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17e298: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e29c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2a0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17E2A0u;
    SET_GPR_U32(ctx, 31, 0x17E2A8u);
    ctx->pc = 0x17E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2A0u;
            // 0x17e2a4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2A8u; }
        if (ctx->pc != 0x17E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2A8u; }
        if (ctx->pc != 0x17E2A8u) { return; }
    }
    ctx->pc = 0x17E2A8u;
label_17e2a8:
    // 0x17e2a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2b0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17E2B0u;
    SET_GPR_U32(ctx, 31, 0x17E2B8u);
    ctx->pc = 0x17E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2B0u;
            // 0x17e2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2B8u; }
        if (ctx->pc != 0x17E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2B8u; }
        if (ctx->pc != 0x17E2B8u) { return; }
    }
    ctx->pc = 0x17E2B8u;
label_17e2b8:
    // 0x17e2b8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17E2C4u;
    SET_GPR_U32(ctx, 31, 0x17E2CCu);
    ctx->pc = 0x17E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2C4u;
            // 0x17e2c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2CCu; }
        if (ctx->pc != 0x17E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2CCu; }
        if (ctx->pc != 0x17E2CCu) { return; }
    }
    ctx->pc = 0x17E2CCu;
label_17e2cc:
    // 0x17e2cc: 0x27b10272  addiu       $s1, $sp, 0x272
    ctx->pc = 0x17e2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 626));
    // 0x17e2d0: 0x27b00274  addiu       $s0, $sp, 0x274
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
    // 0x17e2d4: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x17e2d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e2d8: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e2dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x17E2DCu;
    SET_GPR_U32(ctx, 31, 0x17E2E4u);
    ctx->pc = 0x17E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2DCu;
            // 0x17e2e0: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2E4u; }
        if (ctx->pc != 0x17E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2E4u; }
        if (ctx->pc != 0x17E2E4u) { return; }
    }
    ctx->pc = 0x17E2E4u;
label_17e2e4:
    // 0x17e2e4: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e2e8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17e2ec: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x17e2ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e2f0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x17E2F0u;
    SET_GPR_U32(ctx, 31, 0x17E2F8u);
    ctx->pc = 0x17E2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2F0u;
            // 0x17e2f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2F8u; }
        if (ctx->pc != 0x17E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2F8u; }
        if (ctx->pc != 0x17E2F8u) { return; }
    }
    ctx->pc = 0x17E2F8u;
label_17e2f8:
    // 0x17e2f8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17E2F8u;
    SET_GPR_U32(ctx, 31, 0x17E300u);
    ctx->pc = 0x17E2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2F8u;
            // 0x17e2fc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E300u; }
        if (ctx->pc != 0x17E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E300u; }
        if (ctx->pc != 0x17E300u) { return; }
    }
    ctx->pc = 0x17E300u;
label_17e300:
    // 0x17e300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17e300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e314: 0x3e00008  jr          $ra
    ctx->pc = 0x17E314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E314u;
            // 0x17e318: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E31Cu;
}
