#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CastingLoop__FP6CSceneP11CPadControl
// Address: 0x2ffe90 - 0x300024
void CastingLoop__FP6CSceneP11CPadControl_0x2ffe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CastingLoop__FP6CSceneP11CPadControl_0x2ffe90");
#endif

    switch (ctx->pc) {
        case 0x2ffe90u: goto label_2ffe90;
        case 0x2ffe94u: goto label_2ffe94;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffe9cu: goto label_2ffe9c;
        case 0x2ffea0u: goto label_2ffea0;
        case 0x2ffea4u: goto label_2ffea4;
        case 0x2ffea8u: goto label_2ffea8;
        case 0x2ffeacu: goto label_2ffeac;
        case 0x2ffeb0u: goto label_2ffeb0;
        case 0x2ffeb4u: goto label_2ffeb4;
        case 0x2ffeb8u: goto label_2ffeb8;
        case 0x2ffebcu: goto label_2ffebc;
        case 0x2ffec0u: goto label_2ffec0;
        case 0x2ffec4u: goto label_2ffec4;
        case 0x2ffec8u: goto label_2ffec8;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffed0u: goto label_2ffed0;
        case 0x2ffed4u: goto label_2ffed4;
        case 0x2ffed8u: goto label_2ffed8;
        case 0x2ffedcu: goto label_2ffedc;
        case 0x2ffee0u: goto label_2ffee0;
        case 0x2ffee4u: goto label_2ffee4;
        case 0x2ffee8u: goto label_2ffee8;
        case 0x2ffeecu: goto label_2ffeec;
        case 0x2ffef0u: goto label_2ffef0;
        case 0x2ffef4u: goto label_2ffef4;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2ffefcu: goto label_2ffefc;
        case 0x2fff00u: goto label_2fff00;
        case 0x2fff04u: goto label_2fff04;
        case 0x2fff08u: goto label_2fff08;
        case 0x2fff0cu: goto label_2fff0c;
        case 0x2fff10u: goto label_2fff10;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff18u: goto label_2fff18;
        case 0x2fff1cu: goto label_2fff1c;
        case 0x2fff20u: goto label_2fff20;
        case 0x2fff24u: goto label_2fff24;
        case 0x2fff28u: goto label_2fff28;
        case 0x2fff2cu: goto label_2fff2c;
        case 0x2fff30u: goto label_2fff30;
        case 0x2fff34u: goto label_2fff34;
        case 0x2fff38u: goto label_2fff38;
        case 0x2fff3cu: goto label_2fff3c;
        case 0x2fff40u: goto label_2fff40;
        case 0x2fff44u: goto label_2fff44;
        case 0x2fff48u: goto label_2fff48;
        case 0x2fff4cu: goto label_2fff4c;
        case 0x2fff50u: goto label_2fff50;
        case 0x2fff54u: goto label_2fff54;
        case 0x2fff58u: goto label_2fff58;
        case 0x2fff5cu: goto label_2fff5c;
        case 0x2fff60u: goto label_2fff60;
        case 0x2fff64u: goto label_2fff64;
        case 0x2fff68u: goto label_2fff68;
        case 0x2fff6cu: goto label_2fff6c;
        case 0x2fff70u: goto label_2fff70;
        case 0x2fff74u: goto label_2fff74;
        case 0x2fff78u: goto label_2fff78;
        case 0x2fff7cu: goto label_2fff7c;
        case 0x2fff80u: goto label_2fff80;
        case 0x2fff84u: goto label_2fff84;
        case 0x2fff88u: goto label_2fff88;
        case 0x2fff8cu: goto label_2fff8c;
        case 0x2fff90u: goto label_2fff90;
        case 0x2fff94u: goto label_2fff94;
        case 0x2fff98u: goto label_2fff98;
        case 0x2fff9cu: goto label_2fff9c;
        case 0x2fffa0u: goto label_2fffa0;
        case 0x2fffa4u: goto label_2fffa4;
        case 0x2fffa8u: goto label_2fffa8;
        case 0x2fffacu: goto label_2fffac;
        case 0x2fffb0u: goto label_2fffb0;
        case 0x2fffb4u: goto label_2fffb4;
        case 0x2fffb8u: goto label_2fffb8;
        case 0x2fffbcu: goto label_2fffbc;
        case 0x2fffc0u: goto label_2fffc0;
        case 0x2fffc4u: goto label_2fffc4;
        case 0x2fffc8u: goto label_2fffc8;
        case 0x2fffccu: goto label_2fffcc;
        case 0x2fffd0u: goto label_2fffd0;
        case 0x2fffd4u: goto label_2fffd4;
        case 0x2fffd8u: goto label_2fffd8;
        case 0x2fffdcu: goto label_2fffdc;
        case 0x2fffe0u: goto label_2fffe0;
        case 0x2fffe4u: goto label_2fffe4;
        case 0x2fffe8u: goto label_2fffe8;
        case 0x2fffecu: goto label_2fffec;
        case 0x2ffff0u: goto label_2ffff0;
        case 0x2ffff4u: goto label_2ffff4;
        case 0x2ffff8u: goto label_2ffff8;
        case 0x2ffffcu: goto label_2ffffc;
        case 0x300000u: goto label_300000;
        case 0x300004u: goto label_300004;
        case 0x300008u: goto label_300008;
        case 0x30000cu: goto label_30000c;
        case 0x300010u: goto label_300010;
        case 0x300014u: goto label_300014;
        case 0x300018u: goto label_300018;
        case 0x30001cu: goto label_30001c;
        case 0x300020u: goto label_300020;
        default: break;
    }

    ctx->pc = 0x2ffe90u;

label_2ffe90:
    // 0x2ffe90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ffe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ffe94:
    // 0x2ffe94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ffe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ffe98:
    // 0x2ffe98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ffe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ffe9c:
    // 0x2ffe9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ffe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ffea0:
    // 0x2ffea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ffea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ffea4:
    // 0x2ffea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ffea8:
    // 0x2ffea8: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x2ffea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_2ffeac:
    // 0x2ffeac: 0xc0a0ed8  jal         func_283B60
label_2ffeb0:
    if (ctx->pc == 0x2FFEB0u) {
        ctx->pc = 0x2FFEB0u;
            // 0x2ffeb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEB4u;
        goto label_2ffeb4;
    }
    ctx->pc = 0x2FFEACu;
    SET_GPR_U32(ctx, 31, 0x2FFEB4u);
    ctx->pc = 0x2FFEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEACu;
            // 0x2ffeb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEB4u; }
        if (ctx->pc != 0x2FFEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEB4u; }
        if (ctx->pc != 0x2FFEB4u) { return; }
    }
    ctx->pc = 0x2FFEB4u;
label_2ffeb4:
    // 0x2ffeb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffeb8:
    // 0x2ffeb8: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_2ffebc:
    if (ctx->pc == 0x2FFEBCu) {
        ctx->pc = 0x2FFEBCu;
            // 0x2ffebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEC0u;
        goto label_2ffec0;
    }
    ctx->pc = 0x2FFEB8u;
    {
        const bool branch_taken_0x2ffeb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEB8u;
            // 0x2ffebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffeb8) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x2FFEC0u;
label_2ffec0:
    // 0x2ffec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffec4:
    // 0x2ffec4: 0xc0693a0  jal         func_1A4E80
label_2ffec8:
    if (ctx->pc == 0x2FFEC8u) {
        ctx->pc = 0x2FFEC8u;
            // 0x2ffec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFECCu;
        goto label_2ffecc;
    }
    ctx->pc = 0x2FFEC4u;
    SET_GPR_U32(ctx, 31, 0x2FFECCu);
    ctx->pc = 0x2FFEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEC4u;
            // 0x2ffec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFECCu; }
        if (ctx->pc != 0x2FFECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFECCu; }
        if (ctx->pc != 0x2FFECCu) { return; }
    }
    ctx->pc = 0x2FFECCu;
label_2ffecc:
    // 0x2ffecc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ffed0:
    // 0x2ffed0: 0xc0c407c  jal         func_3101F0
label_2ffed4:
    if (ctx->pc == 0x2FFED4u) {
        ctx->pc = 0x2FFED4u;
            // 0x2ffed4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FFED8u;
        goto label_2ffed8;
    }
    ctx->pc = 0x2FFED0u;
    SET_GPR_U32(ctx, 31, 0x2FFED8u);
    ctx->pc = 0x2FFED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFED0u;
            // 0x2ffed4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3101F0u;
    if (runtime->hasFunction(0x3101F0u)) {
        auto targetFn = runtime->lookupFunction(0x3101F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFED8u; }
        if (ctx->pc != 0x2FFED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHariPos__FPfPf_0x3101f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFED8u; }
        if (ctx->pc != 0x2FFED8u) { return; }
    }
    ctx->pc = 0x2FFED8u;
label_2ffed8:
    // 0x2ffed8: 0xc0c3e78  jal         func_30F9E0
label_2ffedc:
    if (ctx->pc == 0x2FFEDCu) {
        ctx->pc = 0x2FFEE0u;
        goto label_2ffee0;
    }
    ctx->pc = 0x2FFED8u;
    SET_GPR_U32(ctx, 31, 0x2FFEE0u);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEE0u; }
        if (ctx->pc != 0x2FFEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEE0u; }
        if (ctx->pc != 0x2FFEE0u) { return; }
    }
    ctx->pc = 0x2FFEE0u;
label_2ffee0:
    // 0x2ffee0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ffee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ffee4:
    // 0x2ffee4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ffee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffee8:
    // 0x2ffee8: 0x0  nop
    ctx->pc = 0x2ffee8u;
    // NOP
label_2ffeec:
    // 0x2ffeec: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2ffef0:
    if (ctx->pc == 0x2FFEF0u) {
        ctx->pc = 0x2FFEF4u;
        goto label_2ffef4;
    }
    ctx->pc = 0x2FFEECu;
    {
        const bool branch_taken_0x2ffeec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ffeec) {
            ctx->pc = 0x2FFF34u;
            goto label_2fff34;
        }
    }
    ctx->pc = 0x2FFEF4u;
label_2ffef4:
    // 0x2ffef4: 0xc0c3e78  jal         func_30F9E0
label_2ffef8:
    if (ctx->pc == 0x2FFEF8u) {
        ctx->pc = 0x2FFEFCu;
        goto label_2ffefc;
    }
    ctx->pc = 0x2FFEF4u;
    SET_GPR_U32(ctx, 31, 0x2FFEFCu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEFCu; }
        if (ctx->pc != 0x2FFEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEFCu; }
        if (ctx->pc != 0x2FFEFCu) { return; }
    }
    ctx->pc = 0x2FFEFCu;
label_2ffefc:
    // 0x2ffefc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2ffefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fff00:
    // 0x2fff00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2fff00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fff04:
    // 0x2fff04: 0x0  nop
    ctx->pc = 0x2fff04u;
    // NOP
label_2fff08:
    // 0x2fff08: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2fff0c:
    if (ctx->pc == 0x2FFF0Cu) {
        ctx->pc = 0x2FFF10u;
        goto label_2fff10;
    }
    ctx->pc = 0x2FFF08u;
    {
        const bool branch_taken_0x2fff08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fff08) {
            ctx->pc = 0x2FFF34u;
            goto label_2fff34;
        }
    }
    ctx->pc = 0x2FFF10u;
label_2fff10:
    // 0x2fff10: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2fff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2fff14:
    // 0x2fff14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2fff18:
    // 0x2fff18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fff1c:
    // 0x2fff1c: 0xc0bfee8  jal         func_2FFBA0
label_2fff20:
    if (ctx->pc == 0x2FFF20u) {
        ctx->pc = 0x2FFF20u;
            // 0x2fff20: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FFF24u;
        goto label_2fff24;
    }
    ctx->pc = 0x2FFF1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF24u);
    ctx->pc = 0x2FFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF1Cu;
            // 0x2fff20: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBA0u;
    if (runtime->hasFunction(0x2FFBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF24u; }
        if (ctx->pc != 0x2FFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHamon__FPff_0x2ffba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF24u; }
        if (ctx->pc != 0x2FFF24u) { return; }
    }
    ctx->pc = 0x2FFF24u;
label_2fff24:
    // 0x2fff24: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2fff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2fff28:
    // 0x2fff28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2fff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fff2c:
    // 0x2fff2c: 0xc063818  jal         func_18E060
label_2fff30:
    if (ctx->pc == 0x2FFF30u) {
        ctx->pc = 0x2FFF30u;
            // 0x2fff30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF34u;
        goto label_2fff34;
    }
    ctx->pc = 0x2FFF2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF34u);
    ctx->pc = 0x2FFF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF2Cu;
            // 0x2fff30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF34u; }
        if (ctx->pc != 0x2FFF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF34u; }
        if (ctx->pc != 0x2FFF34u) { return; }
    }
    ctx->pc = 0x2FFF34u;
label_2fff34:
    // 0x2fff34: 0x8f84a088  lw          $a0, -0x5F78($gp)
    ctx->pc = 0x2fff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942856)));
label_2fff38:
    // 0x2fff38: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_2fff3c:
    if (ctx->pc == 0x2FFF3Cu) {
        ctx->pc = 0x2FFF3Cu;
            // 0x2fff3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FFF40u;
        goto label_2fff40;
    }
    ctx->pc = 0x2FFF38u;
    {
        const bool branch_taken_0x2fff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF38u;
            // 0x2fff3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff38) {
            ctx->pc = 0x2FFFC4u;
            goto label_2fffc4;
        }
    }
    ctx->pc = 0x2FFF40u;
label_2fff40:
    // 0x2fff40: 0x8f84a08c  lw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942860)));
label_2fff44:
    // 0x2fff44: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2fff48:
    // 0x2fff48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2fff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2fff4c:
    // 0x2fff4c: 0xaf84a08c  sw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942860), GPR_U32(ctx, 4));
label_2fff50:
    // 0x2fff50: 0x8f84a08c  lw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942860)));
label_2fff54:
    // 0x2fff54: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_2fff58:
    if (ctx->pc == 0x2FFF58u) {
        ctx->pc = 0x2FFF5Cu;
        goto label_2fff5c;
    }
    ctx->pc = 0x2FFF54u;
    {
        const bool branch_taken_0x2fff54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fff54) {
            ctx->pc = 0x2FFF7Cu;
            goto label_2fff7c;
        }
    }
    ctx->pc = 0x2FFF5Cu;
label_2fff5c:
    // 0x2fff5c: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2fff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2fff60:
    // 0x2fff60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fff60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fff64:
    // 0x2fff64: 0xc063818  jal         func_18E060
label_2fff68:
    if (ctx->pc == 0x2FFF68u) {
        ctx->pc = 0x2FFF68u;
            // 0x2fff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF6Cu;
        goto label_2fff6c;
    }
    ctx->pc = 0x2FFF64u;
    SET_GPR_U32(ctx, 31, 0x2FFF6Cu);
    ctx->pc = 0x2FFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF64u;
            // 0x2fff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF6Cu; }
        if (ctx->pc != 0x2FFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF6Cu; }
        if (ctx->pc != 0x2FFF6Cu) { return; }
    }
    ctx->pc = 0x2FFF6Cu;
label_2fff6c:
    // 0x2fff6c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fff70:
    // 0x2fff70: 0xc0c4170  jal         func_3105C0
label_2fff74:
    if (ctx->pc == 0x2FFF74u) {
        ctx->pc = 0x2FFF74u;
            // 0x2fff74: 0x24849cc0  addiu       $a0, $a0, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941888));
        ctx->pc = 0x2FFF78u;
        goto label_2fff78;
    }
    ctx->pc = 0x2FFF70u;
    SET_GPR_U32(ctx, 31, 0x2FFF78u);
    ctx->pc = 0x2FFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF70u;
            // 0x2fff74: 0x24849cc0  addiu       $a0, $a0, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3105C0u;
    if (runtime->hasFunction(0x3105C0u)) {
        auto targetFn = runtime->lookupFunction(0x3105C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF78u; }
        if (ctx->pc != 0x2FFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CastingLure__FPf_0x3105c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF78u; }
        if (ctx->pc != 0x2FFF78u) { return; }
    }
    ctx->pc = 0x2FFF78u;
label_2fff78:
    // 0x2fff78: 0xaf82a090  sw          $v0, -0x5F70($gp)
    ctx->pc = 0x2fff78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942864), GPR_U32(ctx, 2));
label_2fff7c:
    // 0x2fff7c: 0x8f83a094  lw          $v1, -0x5F6C($gp)
    ctx->pc = 0x2fff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942868)));
label_2fff80:
    // 0x2fff80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2fff84:
    // 0x2fff84: 0xaf83a094  sw          $v1, -0x5F6C($gp)
    ctx->pc = 0x2fff84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942868), GPR_U32(ctx, 3));
label_2fff88:
    // 0x2fff88: 0x8f83a094  lw          $v1, -0x5F6C($gp)
    ctx->pc = 0x2fff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942868)));
label_2fff8c:
    // 0x2fff8c: 0x1c60001f  bgtz        $v1, . + 4 + (0x1F << 2)
label_2fff90:
    if (ctx->pc == 0x2FFF90u) {
        ctx->pc = 0x2FFF94u;
        goto label_2fff94;
    }
    ctx->pc = 0x2FFF8Cu;
    {
        const bool branch_taken_0x2fff8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2fff8c) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x2FFF94u;
label_2fff94:
    // 0x2fff94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fff98:
    // 0x2fff98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fff98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fff9c:
    // 0x2fff9c: 0xaf80a08c  sw          $zero, -0x5F74($gp)
    ctx->pc = 0x2fff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942860), GPR_U32(ctx, 0));
label_2fffa0:
    // 0x2fffa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fffa4:
    // 0x2fffa4: 0xaf82a088  sw          $v0, -0x5F78($gp)
    ctx->pc = 0x2fffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942856), GPR_U32(ctx, 2));
label_2fffa8:
    // 0x2fffa8: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
label_2fffac:
    // 0x2fffac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fffacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fffb0:
    // 0x2fffb0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fffb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fffb4:
    // 0x2fffb4: 0x320f809  jalr        $t9
label_2fffb8:
    if (ctx->pc == 0x2FFFB8u) {
        ctx->pc = 0x2FFFB8u;
            // 0x2fffb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFBCu;
        goto label_2fffbc;
    }
    ctx->pc = 0x2FFFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFFBCu);
        ctx->pc = 0x2FFFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFB4u;
            // 0x2fffb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFBCu; }
            if (ctx->pc != 0x2FFFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FFFBCu;
label_2fffbc:
    // 0x2fffbc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2fffc0:
    if (ctx->pc == 0x2FFFC0u) {
        ctx->pc = 0x2FFFC0u;
            // 0x2fffc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2FFFC4u;
        goto label_2fffc4;
    }
    ctx->pc = 0x2FFFBCu;
    {
        const bool branch_taken_0x2fffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFBCu;
            // 0x2fffc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffbc) {
            ctx->pc = 0x300010u;
            goto label_300010;
        }
    }
    ctx->pc = 0x2FFFC4u;
label_2fffc4:
    // 0x2fffc4: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_2fffc8:
    if (ctx->pc == 0x2FFFC8u) {
        ctx->pc = 0x2FFFCCu;
        goto label_2fffcc;
    }
    ctx->pc = 0x2FFFC4u;
    {
        const bool branch_taken_0x2fffc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fffc4) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x2FFFCCu;
label_2fffcc:
    // 0x2fffcc: 0x8f84a08c  lw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942860)));
label_2fffd0:
    // 0x2fffd0: 0x8f83a090  lw          $v1, -0x5F70($gp)
    ctx->pc = 0x2fffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942864)));
label_2fffd4:
    // 0x2fffd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2fffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2fffd8:
    // 0x2fffd8: 0xaf84a08c  sw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942860), GPR_U32(ctx, 4));
label_2fffdc:
    // 0x2fffdc: 0x8f84a08c  lw          $a0, -0x5F74($gp)
    ctx->pc = 0x2fffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942860)));
label_2fffe0:
    // 0x2fffe0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2fffe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fffe4:
    // 0x2fffe4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2fffe8:
    if (ctx->pc == 0x2FFFE8u) {
        ctx->pc = 0x2FFFECu;
        goto label_2fffec;
    }
    ctx->pc = 0x2FFFE4u;
    {
        const bool branch_taken_0x2fffe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fffe4) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x2FFFECu;
label_2fffec:
    // 0x2fffec: 0xc0c41cc  jal         func_310730
label_2ffff0:
    if (ctx->pc == 0x2FFFF0u) {
        ctx->pc = 0x2FFFF4u;
        goto label_2ffff4;
    }
    ctx->pc = 0x2FFFECu;
    SET_GPR_U32(ctx, 31, 0x2FFFF4u);
    ctx->pc = 0x310730u;
    if (runtime->hasFunction(0x310730u)) {
        auto targetFn = runtime->lookupFunction(0x310730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFF4u; }
        if (ctx->pc != 0x2FFFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCastingLure__Fv_0x310730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFF4u; }
        if (ctx->pc != 0x2FFFF4u) { return; }
    }
    ctx->pc = 0x2FFFF4u;
label_2ffff4:
    // 0x2ffff4: 0xc0c000c  jal         func_300030
label_2ffff8:
    if (ctx->pc == 0x2FFFF8u) {
        ctx->pc = 0x2FFFF8u;
            // 0x2ffff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFFCu;
        goto label_2ffffc;
    }
    ctx->pc = 0x2FFFF4u;
    SET_GPR_U32(ctx, 31, 0x2FFFFCu);
    ctx->pc = 0x2FFFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFF4u;
            // 0x2ffff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300030u;
    if (runtime->hasFunction(0x300030u)) {
        auto targetFn = runtime->lookupFunction(0x300030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFFCu; }
        if (ctx->pc != 0x2FFFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitUkiWait__FP6CScene_0x300030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFFCu; }
        if (ctx->pc != 0x2FFFFCu) { return; }
    }
    ctx->pc = 0x2FFFFCu;
label_2ffffc:
    // 0x2ffffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_300000:
    if (ctx->pc == 0x300000u) {
        ctx->pc = 0x300000u;
            // 0x300000: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x300004u;
        goto label_300004;
    }
    ctx->pc = 0x2FFFFCu;
    {
        const bool branch_taken_0x2ffffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFFCu;
            // 0x300000: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffffc) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x300004u;
label_300004:
    // 0x300004: 0xc0bf1d0  jal         func_2FC740
label_300008:
    if (ctx->pc == 0x300008u) {
        ctx->pc = 0x30000Cu;
        goto label_30000c;
    }
    ctx->pc = 0x300004u;
    SET_GPR_U32(ctx, 31, 0x30000Cu);
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30000Cu; }
        if (ctx->pc != 0x30000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30000Cu; }
        if (ctx->pc != 0x30000Cu) { return; }
    }
    ctx->pc = 0x30000Cu;
label_30000c:
    // 0x30000c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_300010:
    // 0x300010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_300014:
    // 0x300014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300018:
    // 0x300018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30001c:
    // 0x30001c: 0x3e00008  jr          $ra
label_300020:
    if (ctx->pc == 0x300020u) {
        ctx->pc = 0x300020u;
            // 0x300020: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x300024u;
        goto label_fallthrough_0x30001c;
    }
    ctx->pc = 0x30001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30001Cu;
            // 0x300020: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x30001c:
    ctx->pc = 0x300024u;
}
