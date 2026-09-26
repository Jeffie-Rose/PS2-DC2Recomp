#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShotMonicaMagic__FPfPff
// Address: 0x2cfde0 - 0x2cff80
void ShotMonicaMagic__FPfPff_0x2cfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShotMonicaMagic__FPfPff_0x2cfde0");
#endif

    switch (ctx->pc) {
        case 0x2cfe04u: goto label_2cfe04;
        case 0x2cfe1cu: goto label_2cfe1c;
        case 0x2cfe38u: goto label_2cfe38;
        case 0x2cfe54u: goto label_2cfe54;
        case 0x2cfe70u: goto label_2cfe70;
        case 0x2cfeb4u: goto label_2cfeb4;
        case 0x2cfed0u: goto label_2cfed0;
        case 0x2cfedcu: goto label_2cfedc;
        case 0x2cfefcu: goto label_2cfefc;
        case 0x2cff10u: goto label_2cff10;
        case 0x2cff20u: goto label_2cff20;
        case 0x2cff40u: goto label_2cff40;
        case 0x2cff50u: goto label_2cff50;
        case 0x2cff68u: goto label_2cff68;
        default: break;
    }

    ctx->pc = 0x2cfde0u;

    // 0x2cfde0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cfde4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cfde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfde8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cfde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cfdec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cfdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdf4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cfdf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cfdf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cfdf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdfc: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2CFDFCu;
    SET_GPR_U32(ctx, 31, 0x2CFE04u);
    ctx->pc = 0x2CFE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDFCu;
            // 0x2cfe00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE04u; }
        if (ctx->pc != 0x2CFE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE04u; }
        if (ctx->pc != 0x2CFE04u) { return; }
    }
    ctx->pc = 0x2CFE04u;
label_2cfe04:
    // 0x2cfe04: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2cfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2cfe08: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x2cfe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2cfe0c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x2cfe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2cfe10: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cfe14: 0xc065f9c  jal         func_197E70
    ctx->pc = 0x2CFE14u;
    SET_GPR_U32(ctx, 31, 0x2CFE1Cu);
    ctx->pc = 0x2CFE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE14u;
            // 0x2cfe18: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197E70u;
    if (runtime->hasFunction(0x197E70u)) {
        auto targetFn = runtime->lookupFunction(0x197E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE1Cu; }
        if (ctx->pc != 0x2CFE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffectReadType__13CGameDataUsedFPPcPPcPi_0x197e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE1Cu; }
        if (ctx->pc != 0x2CFE1Cu) { return; }
    }
    ctx->pc = 0x2CFE1Cu;
label_2cfe1c:
    // 0x2cfe1c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfe1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfe20: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2cfe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2cfe24: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfe28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfe28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe2c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfe30: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2CFE30u;
    SET_GPR_U32(ctx, 31, 0x2CFE38u);
    ctx->pc = 0x2CFE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE30u;
            // 0x2cfe34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE38u; }
        if (ctx->pc != 0x2CFE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE38u; }
        if (ctx->pc != 0x2CFE38u) { return; }
    }
    ctx->pc = 0x2CFE38u;
label_2cfe38:
    // 0x2cfe38: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfe3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cfe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe40: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfe44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe48: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfe4c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2CFE4Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE54u);
    ctx->pc = 0x2CFE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE4Cu;
            // 0x2cfe50: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE54u; }
        if (ctx->pc != 0x2CFE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE54u; }
        if (ctx->pc != 0x2CFE54u) { return; }
    }
    ctx->pc = 0x2CFE54u;
label_2cfe54:
    // 0x2cfe54: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfe54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfe58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cfe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe5c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfe60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe64: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfe68: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2CFE68u;
    SET_GPR_U32(ctx, 31, 0x2CFE70u);
    ctx->pc = 0x2CFE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE68u;
            // 0x2cfe6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE70u; }
        if (ctx->pc != 0x2CFE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE70u; }
        if (ctx->pc != 0x2CFE70u) { return; }
    }
    ctx->pc = 0x2CFE70u;
label_2cfe70:
    // 0x2cfe70: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2cfe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfe74: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2cfe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2cfe78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfe78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfe7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cfe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfe80: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfe84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cfe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe88: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2cfe8c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2cfe8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cfe94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cfe98: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfe9c: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x2cfe9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2cfea0: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfea4: 0x0  nop
    ctx->pc = 0x2cfea4u;
    // NOP
    // 0x2cfea8: 0x0  nop
    ctx->pc = 0x2cfea8u;
    // NOP
    // 0x2cfeac: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2CFEACu;
    SET_GPR_U32(ctx, 31, 0x2CFEB4u);
    ctx->pc = 0x2CFEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEACu;
            // 0x2cfeb0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEB4u; }
        if (ctx->pc != 0x2CFEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEB4u; }
        if (ctx->pc != 0x2CFEB4u) { return; }
    }
    ctx->pc = 0x2CFEB4u;
label_2cfeb4:
    // 0x2cfeb4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfeb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cfeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfebc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cfec0: 0x84450770  lh          $a1, 0x770($v0)
    ctx->pc = 0x2cfec0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x2cfec4: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cfec8: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x2CFEC8u;
    SET_GPR_U32(ctx, 31, 0x2CFED0u);
    ctx->pc = 0x2CFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEC8u;
            // 0x2cfecc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFED0u; }
        if (ctx->pc != 0x2CFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFED0u; }
        if (ctx->pc != 0x2CFED0u) { return; }
    }
    ctx->pc = 0x2CFED0u;
label_2cfed0:
    // 0x2cfed0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2cfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2cfed4: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2CFED4u;
    SET_GPR_U32(ctx, 31, 0x2CFEDCu);
    ctx->pc = 0x2CFED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFED4u;
            // 0x2cfed8: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEDCu; }
        if (ctx->pc != 0x2CFEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEDCu; }
        if (ctx->pc != 0x2CFEDCu) { return; }
    }
    ctx->pc = 0x2CFEDCu;
label_2cfedc:
    // 0x2cfedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfee0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CFEE0u;
    {
        const bool branch_taken_0x2cfee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfee0) {
            ctx->pc = 0x2CFF50u;
            goto label_2cff50;
        }
    }
    ctx->pc = 0x2CFEE8u;
    // 0x2cfee8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2cfee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2cfeec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfef0: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    // 0x2cfef4: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2CFEF4u;
    SET_GPR_U32(ctx, 31, 0x2CFEFCu);
    ctx->pc = 0x2CFEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEF4u;
            // 0x2cfef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEFCu; }
        if (ctx->pc != 0x2CFEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEFCu; }
        if (ctx->pc != 0x2CFEFCu) { return; }
    }
    ctx->pc = 0x2CFEFCu;
label_2cfefc:
    // 0x2cfefc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cff00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff04: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x2cff04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x2cff08: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2CFF08u;
    SET_GPR_U32(ctx, 31, 0x2CFF10u);
    ctx->pc = 0x2CFF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF08u;
            // 0x2cff0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF10u; }
        if (ctx->pc != 0x2CFF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF10u; }
        if (ctx->pc != 0x2CFF10u) { return; }
    }
    ctx->pc = 0x2CFF10u;
label_2cff10:
    // 0x2cff10: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x2cff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cff14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cff18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2CFF18u;
    SET_GPR_U32(ctx, 31, 0x2CFF20u);
    ctx->pc = 0x2CFF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF18u;
            // 0x2cff1c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF20u; }
        if (ctx->pc != 0x2CFF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF20u; }
        if (ctx->pc != 0x2CFF20u) { return; }
    }
    ctx->pc = 0x2CFF20u;
label_2cff20:
    // 0x2cff20: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2cff20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2cff24: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cff28: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cff2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cff30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff34: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2cff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2cff38: 0xc0b89a4  jal         func_2E2690
    ctx->pc = 0x2CFF38u;
    SET_GPR_U32(ctx, 31, 0x2CFF40u);
    ctx->pc = 0x2CFF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF38u;
            // 0x2cff3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2690u;
    if (runtime->hasFunction(0x2E2690u)) {
        auto targetFn = runtime->lookupFunction(0x2E2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF40u; }
        if (ctx->pc != 0x2CFF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF40u; }
        if (ctx->pc != 0x2CFF40u) { return; }
    }
    ctx->pc = 0x2CFF40u;
label_2cff40:
    // 0x2cff40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cff44: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2cff44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2cff48: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2CFF48u;
    SET_GPR_U32(ctx, 31, 0x2CFF50u);
    ctx->pc = 0x2CFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF48u;
            // 0x2cff4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF50u; }
        if (ctx->pc != 0x2CFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF50u; }
        if (ctx->pc != 0x2CFF50u) { return; }
    }
    ctx->pc = 0x2CFF50u;
label_2cff50:
    // 0x2cff50: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cff54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cff58: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cff5c: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2cff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2cff60: 0xc063818  jal         func_18E060
    ctx->pc = 0x2CFF60u;
    SET_GPR_U32(ctx, 31, 0x2CFF68u);
    ctx->pc = 0x2CFF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF60u;
            // 0x2cff64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF68u; }
        if (ctx->pc != 0x2CFF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF68u; }
        if (ctx->pc != 0x2CFF68u) { return; }
    }
    ctx->pc = 0x2CFF68u;
label_2cff68:
    // 0x2cff68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cff6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cff70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cff70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cff74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cff74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cff78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF78u;
            // 0x2cff7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFF80u;
}
