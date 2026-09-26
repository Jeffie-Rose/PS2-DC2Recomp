#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSubGameScrlList__FP10mgCTexturePiPi
// Address: 0x21caa0 - 0x21cd30
void DrawSubGameScrlList__FP10mgCTexturePiPi_0x21caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSubGameScrlList__FP10mgCTexturePiPi_0x21caa0");
#endif

    switch (ctx->pc) {
        case 0x21caf0u: goto label_21caf0;
        case 0x21cafcu: goto label_21cafc;
        case 0x21cb08u: goto label_21cb08;
        case 0x21cb14u: goto label_21cb14;
        case 0x21cb2cu: goto label_21cb2c;
        case 0x21cb50u: goto label_21cb50;
        case 0x21cb68u: goto label_21cb68;
        case 0x21cb88u: goto label_21cb88;
        case 0x21cba0u: goto label_21cba0;
        case 0x21cbc8u: goto label_21cbc8;
        case 0x21cbe0u: goto label_21cbe0;
        case 0x21cbf8u: goto label_21cbf8;
        case 0x21cc14u: goto label_21cc14;
        case 0x21cc2cu: goto label_21cc2c;
        case 0x21cc4cu: goto label_21cc4c;
        case 0x21cc64u: goto label_21cc64;
        case 0x21cc8cu: goto label_21cc8c;
        case 0x21cca4u: goto label_21cca4;
        case 0x21ccbcu: goto label_21ccbc;
        case 0x21cce4u: goto label_21cce4;
        case 0x21ccfcu: goto label_21ccfc;
        case 0x21cd04u: goto label_21cd04;
        default: break;
    }

    ctx->pc = 0x21caa0u;

    // 0x21caa0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x21caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x21caa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21caa8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21caac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21caacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21cab0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x21cab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21cab8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x21cab8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cabc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21cac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21cac4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21cac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21cacc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21cad8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21cadc: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21cadcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21cae0: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21cae4: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21cae8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x21CAE8u;
    SET_GPR_U32(ctx, 31, 0x21CAF0u);
    ctx->pc = 0x21CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAE8u;
            // 0x21caec: 0x2450ffc8  addiu       $s0, $v0, -0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAF0u; }
        if (ctx->pc != 0x21CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAF0u; }
        if (ctx->pc != 0x21CAF0u) { return; }
    }
    ctx->pc = 0x21CAF0u;
label_21caf0:
    // 0x21caf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21caf4: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x21CAF4u;
    SET_GPR_U32(ctx, 31, 0x21CAFCu);
    ctx->pc = 0x21CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAF4u;
            // 0x21caf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAFCu; }
        if (ctx->pc != 0x21CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAFCu; }
        if (ctx->pc != 0x21CAFCu) { return; }
    }
    ctx->pc = 0x21CAFCu;
label_21cafc:
    // 0x21cafc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cb00: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x21CB00u;
    SET_GPR_U32(ctx, 31, 0x21CB08u);
    ctx->pc = 0x21CB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB00u;
            // 0x21cb04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB08u; }
        if (ctx->pc != 0x21CB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB08u; }
        if (ctx->pc != 0x21CB08u) { return; }
    }
    ctx->pc = 0x21CB08u;
label_21cb08:
    // 0x21cb08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb0c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x21CB0Cu;
    SET_GPR_U32(ctx, 31, 0x21CB14u);
    ctx->pc = 0x21CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB0Cu;
            // 0x21cb10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB14u; }
        if (ctx->pc != 0x21CB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB14u; }
        if (ctx->pc != 0x21CB14u) { return; }
    }
    ctx->pc = 0x21CB14u;
label_21cb14:
    // 0x21cb14: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cb18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21cb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21cb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb24: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21CB24u;
    SET_GPR_U32(ctx, 31, 0x21CB2Cu);
    ctx->pc = 0x21CB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB24u;
            // 0x21cb28: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB2Cu; }
        if (ctx->pc != 0x21CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB2Cu; }
        if (ctx->pc != 0x21CB2Cu) { return; }
    }
    ctx->pc = 0x21CB2Cu;
label_21cb2c:
    // 0x21cb2c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cb30: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x21cb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21cb34: 0x8428ffc6  lh          $t0, -0x3A($at)
    ctx->pc = 0x21cb34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cb38: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21cb3c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x21cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x21cb40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21cb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb48: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CB48u;
    SET_GPR_U32(ctx, 31, 0x21CB50u);
    ctx->pc = 0x21CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB48u;
            // 0x21cb4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB50u; }
        if (ctx->pc != 0x21CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB50u; }
        if (ctx->pc != 0x21CB50u) { return; }
    }
    ctx->pc = 0x21CB50u;
label_21cb50:
    // 0x21cb50: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cb54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cb58: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x21cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x21cb5c: 0x24c6ffc0  addiu       $a2, $a2, -0x40
    ctx->pc = 0x21cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x21cb60: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CB60u;
    SET_GPR_U32(ctx, 31, 0x21CB68u);
    ctx->pc = 0x21CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB60u;
            // 0x21cb64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB68u; }
        if (ctx->pc != 0x21CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB68u; }
        if (ctx->pc != 0x21CB68u) { return; }
    }
    ctx->pc = 0x21CB68u;
label_21cb68:
    // 0x21cb68: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cb6c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x21cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x21cb70: 0x8422ffc6  lh          $v0, -0x3A($at)
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cb74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21cb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb78: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21cb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb7c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21cb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb80: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CB80u;
    SET_GPR_U32(ctx, 31, 0x21CB88u);
    ctx->pc = 0x21CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB80u;
            // 0x21cb84: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB88u; }
        if (ctx->pc != 0x21CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB88u; }
        if (ctx->pc != 0x21CB88u) { return; }
    }
    ctx->pc = 0x21CB88u;
label_21cb88:
    // 0x21cb88: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cb8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cb90: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x21cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x21cb94: 0x24c6ffd8  addiu       $a2, $a2, -0x28
    ctx->pc = 0x21cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967256));
    // 0x21cb98: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CB98u;
    SET_GPR_U32(ctx, 31, 0x21CBA0u);
    ctx->pc = 0x21CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB98u;
            // 0x21cb9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBA0u; }
        if (ctx->pc != 0x21CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBA0u; }
        if (ctx->pc != 0x21CBA0u) { return; }
    }
    ctx->pc = 0x21CBA0u;
label_21cba0:
    // 0x21cba0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cba4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cba8: 0x8422ffc6  lh          $v0, -0x3A($at)
    ctx->pc = 0x21cba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cbac: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x21cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x21cbb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21cbb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbb4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cbb8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x21cbbc: 0x8428fff6  lh          $t0, -0xA($at)
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967286)));
    // 0x21cbc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CBC0u;
    SET_GPR_U32(ctx, 31, 0x21CBC8u);
    ctx->pc = 0x21CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBC0u;
            // 0x21cbc4: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBC8u; }
        if (ctx->pc != 0x21CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBC8u; }
        if (ctx->pc != 0x21CBC8u) { return; }
    }
    ctx->pc = 0x21CBC8u;
label_21cbc8:
    // 0x21cbc8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cbcc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cbd0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x21cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x21cbd4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x21cbd8: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CBD8u;
    SET_GPR_U32(ctx, 31, 0x21CBE0u);
    ctx->pc = 0x21CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBD8u;
            // 0x21cbdc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBE0u; }
        if (ctx->pc != 0x21CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBE0u; }
        if (ctx->pc != 0x21CBE0u) { return; }
    }
    ctx->pc = 0x21CBE0u;
label_21cbe0:
    // 0x21cbe0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21cbe4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cbe8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21cbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21cbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbf0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21CBF0u;
    SET_GPR_U32(ctx, 31, 0x21CBF8u);
    ctx->pc = 0x21CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBF0u;
            // 0x21cbf4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBF8u; }
        if (ctx->pc != 0x21CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBF8u; }
        if (ctx->pc != 0x21CBF8u) { return; }
    }
    ctx->pc = 0x21CBF8u;
label_21cbf8:
    // 0x21cbf8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cbfc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x21cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x21cc00: 0x8428ffc6  lh          $t0, -0x3A($at)
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cc04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21cc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CC0Cu;
    SET_GPR_U32(ctx, 31, 0x21CC14u);
    ctx->pc = 0x21CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC0Cu;
            // 0x21cc10: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC14u; }
        if (ctx->pc != 0x21CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC14u; }
        if (ctx->pc != 0x21CC14u) { return; }
    }
    ctx->pc = 0x21CC14u;
label_21cc14:
    // 0x21cc14: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cc18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cc1c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x21cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x21cc20: 0x24c6ffc0  addiu       $a2, $a2, -0x40
    ctx->pc = 0x21cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x21cc24: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CC24u;
    SET_GPR_U32(ctx, 31, 0x21CC2Cu);
    ctx->pc = 0x21CC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC24u;
            // 0x21cc28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC2Cu; }
        if (ctx->pc != 0x21CC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC2Cu; }
        if (ctx->pc != 0x21CC2Cu) { return; }
    }
    ctx->pc = 0x21CC2Cu;
label_21cc2c:
    // 0x21cc2c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cc30: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x21cc34: 0x8422ffc6  lh          $v0, -0x3A($at)
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cc38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21cc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21cc40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc44: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CC44u;
    SET_GPR_U32(ctx, 31, 0x21CC4Cu);
    ctx->pc = 0x21CC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC44u;
            // 0x21cc48: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC4Cu; }
        if (ctx->pc != 0x21CC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC4Cu; }
        if (ctx->pc != 0x21CC4Cu) { return; }
    }
    ctx->pc = 0x21CC4Cu;
label_21cc4c:
    // 0x21cc4c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cc50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cc54: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x21cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x21cc58: 0x24c6ffd8  addiu       $a2, $a2, -0x28
    ctx->pc = 0x21cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967256));
    // 0x21cc5c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CC5Cu;
    SET_GPR_U32(ctx, 31, 0x21CC64u);
    ctx->pc = 0x21CC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC5Cu;
            // 0x21cc60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC64u; }
        if (ctx->pc != 0x21CC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC64u; }
        if (ctx->pc != 0x21CC64u) { return; }
    }
    ctx->pc = 0x21CC64u;
label_21cc64:
    // 0x21cc64: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cc68: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x21cc6c: 0x8422ffc6  lh          $v0, -0x3A($at)
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967238)));
    // 0x21cc70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21cc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc74: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21cc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc78: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cc7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21cc80: 0x8428fff6  lh          $t0, -0xA($at)
    ctx->pc = 0x21cc80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967286)));
    // 0x21cc84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CC84u;
    SET_GPR_U32(ctx, 31, 0x21CC8Cu);
    ctx->pc = 0x21CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC84u;
            // 0x21cc88: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC8Cu; }
        if (ctx->pc != 0x21CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC8Cu; }
        if (ctx->pc != 0x21CC8Cu) { return; }
    }
    ctx->pc = 0x21CC8Cu;
label_21cc8c:
    // 0x21cc8c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cc90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21cc94: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x21cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x21cc98: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x21cc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x21cc9c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CC9Cu;
    SET_GPR_U32(ctx, 31, 0x21CCA4u);
    ctx->pc = 0x21CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC9Cu;
            // 0x21cca0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCA4u; }
        if (ctx->pc != 0x21CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCA4u; }
        if (ctx->pc != 0x21CCA4u) { return; }
    }
    ctx->pc = 0x21CCA4u;
label_21cca4:
    // 0x21cca4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x21cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x21cca8: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x21cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x21ccac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ccacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccb0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x21ccb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21ccb4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CCB4u;
    SET_GPR_U32(ctx, 31, 0x21CCBCu);
    ctx->pc = 0x21CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCB4u;
            // 0x21ccb8: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCBCu; }
        if (ctx->pc != 0x21CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCBCu; }
        if (ctx->pc != 0x21CCBCu) { return; }
    }
    ctx->pc = 0x21CCBCu;
label_21ccbc:
    // 0x21ccbc: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x21ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x21ccc0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x21ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x21ccc4: 0x2445fff1  addiu       $a1, $v0, -0xF
    ctx->pc = 0x21ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x21ccc8: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x21cccc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21ccd0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x21ccd4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x21ccd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21ccd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ccdc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CCDCu;
    SET_GPR_U32(ctx, 31, 0x21CCE4u);
    ctx->pc = 0x21CCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCDCu;
            // 0x21cce0: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCE4u; }
        if (ctx->pc != 0x21CCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCE4u; }
        if (ctx->pc != 0x21CCE4u) { return; }
    }
    ctx->pc = 0x21CCE4u;
label_21cce4:
    // 0x21cce4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cce8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21ccec: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x21ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x21ccf0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x21ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x21ccf4: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CCF4u;
    SET_GPR_U32(ctx, 31, 0x21CCFCu);
    ctx->pc = 0x21CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCF4u;
            // 0x21ccf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCFCu; }
        if (ctx->pc != 0x21CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCFCu; }
        if (ctx->pc != 0x21CCFCu) { return; }
    }
    ctx->pc = 0x21CCFCu;
label_21ccfc:
    // 0x21ccfc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x21CCFCu;
    SET_GPR_U32(ctx, 31, 0x21CD04u);
    ctx->pc = 0x21CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCFCu;
            // 0x21cd00: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD04u; }
        if (ctx->pc != 0x21CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD04u; }
        if (ctx->pc != 0x21CD04u) { return; }
    }
    ctx->pc = 0x21CD04u;
label_21cd04:
    // 0x21cd04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21cd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21cd08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21cd08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21cd0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21cd0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21cd10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21cd10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cd14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21cd14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cd18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cd18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cd1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cd1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD28u;
            // 0x21cd2c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CD30u;
}
