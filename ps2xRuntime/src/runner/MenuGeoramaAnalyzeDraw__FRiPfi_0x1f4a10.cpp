#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaAnalyzeDraw__FRiPfi
// Address: 0x1f4a10 - 0x1f5460
void MenuGeoramaAnalyzeDraw__FRiPfi_0x1f4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaAnalyzeDraw__FRiPfi_0x1f4a10");
#endif

    switch (ctx->pc) {
        case 0x1f4a80u: goto label_1f4a80;
        case 0x1f4a88u: goto label_1f4a88;
        case 0x1f4a98u: goto label_1f4a98;
        case 0x1f4ab0u: goto label_1f4ab0;
        case 0x1f4ac8u: goto label_1f4ac8;
        case 0x1f4ae0u: goto label_1f4ae0;
        case 0x1f4af8u: goto label_1f4af8;
        case 0x1f4b04u: goto label_1f4b04;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b58u: goto label_1f4b58;
        case 0x1f4b70u: goto label_1f4b70;
        case 0x1f4b98u: goto label_1f4b98;
        case 0x1f4bb4u: goto label_1f4bb4;
        case 0x1f4bc4u: goto label_1f4bc4;
        case 0x1f4be0u: goto label_1f4be0;
        case 0x1f4c00u: goto label_1f4c00;
        case 0x1f4c10u: goto label_1f4c10;
        case 0x1f4c28u: goto label_1f4c28;
        case 0x1f4c3cu: goto label_1f4c3c;
        case 0x1f4c54u: goto label_1f4c54;
        case 0x1f4c5cu: goto label_1f4c5c;
        case 0x1f4c74u: goto label_1f4c74;
        case 0x1f4c84u: goto label_1f4c84;
        case 0x1f4c8cu: goto label_1f4c8c;
        case 0x1f4cacu: goto label_1f4cac;
        case 0x1f4cc4u: goto label_1f4cc4;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4cf8u: goto label_1f4cf8;
        case 0x1f4d0cu: goto label_1f4d0c;
        case 0x1f4d24u: goto label_1f4d24;
        case 0x1f4d3cu: goto label_1f4d3c;
        case 0x1f4d54u: goto label_1f4d54;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e30u: goto label_1f4e30;
        case 0x1f4e74u: goto label_1f4e74;
        case 0x1f4e7cu: goto label_1f4e7c;
        case 0x1f4e8cu: goto label_1f4e8c;
        case 0x1f4ea0u: goto label_1f4ea0;
        case 0x1f4eb4u: goto label_1f4eb4;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f14u: goto label_1f4f14;
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f2cu: goto label_1f4f2c;
        case 0x1f4f44u: goto label_1f4f44;
        case 0x1f4facu: goto label_1f4fac;
        case 0x1f4fe4u: goto label_1f4fe4;
        case 0x1f4ff0u: goto label_1f4ff0;
        case 0x1f5010u: goto label_1f5010;
        case 0x1f5058u: goto label_1f5058;
        case 0x1f5084u: goto label_1f5084;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f5174u: goto label_1f5174;
        case 0x1f5188u: goto label_1f5188;
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51b8u: goto label_1f51b8;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51e4u: goto label_1f51e4;
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5228u: goto label_1f5228;
        case 0x1f523cu: goto label_1f523c;
        case 0x1f5260u: goto label_1f5260;
        case 0x1f529cu: goto label_1f529c;
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52d8u: goto label_1f52d8;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f53acu: goto label_1f53ac;
        case 0x1f53b8u: goto label_1f53b8;
        case 0x1f53f4u: goto label_1f53f4;
        case 0x1f5428u: goto label_1f5428;
        default: break;
    }

    ctx->pc = 0x1f4a10u;

    // 0x1f4a10: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x1f4a14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f4a18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1f4a1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1f4a20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1f4a24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1f4a28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f4a2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f4a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f4a30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f4a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f4a38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4a3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f4a40: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1f4a40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f4a44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f4a44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f4a48: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4a4c: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x1f4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x1f4a50: 0x10a00275  beqz        $a1, . + 4 + (0x275 << 2)
    ctx->pc = 0x1F4A50u;
    {
        const bool branch_taken_0x1f4a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A50u;
            // 0x1f4a54: 0xafa4011c  sw          $a0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a50) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F4A58u;
    // 0x1f4a58: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1f4a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4a5c: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1f4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1f4a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4a64: 0x0  nop
    ctx->pc = 0x1f4a64u;
    // NOP
    // 0x1f4a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4a6c: 0x0  nop
    ctx->pc = 0x1f4a6cu;
    // NOP
    // 0x1f4a70: 0x4501026d  bc1t        . + 4 + (0x26D << 2)
    ctx->pc = 0x1F4A70u;
    {
        const bool branch_taken_0x1f4a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4a70) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F4A78u;
    // 0x1f4a78: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F4A78u;
    SET_GPR_U32(ctx, 31, 0x1F4A80u);
    ctx->pc = 0x1F4A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A78u;
            // 0x1f4a7c: 0x84a50000  lh          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A80u; }
        if (ctx->pc != 0x1F4A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A80u; }
        if (ctx->pc != 0x1F4A80u) { return; }
    }
    ctx->pc = 0x1F4A80u;
label_1f4a80:
    // 0x1f4a80: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x1F4A80u;
    SET_GPR_U32(ctx, 31, 0x1F4A88u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A88u; }
        if (ctx->pc != 0x1F4A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A88u; }
        if (ctx->pc != 0x1F4A88u) { return; }
    }
    ctx->pc = 0x1F4A88u;
label_1f4a88:
    // 0x1f4a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a90: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1F4A90u;
    SET_GPR_U32(ctx, 31, 0x1F4A98u);
    ctx->pc = 0x1F4A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A90u;
            // 0x1f4a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A98u; }
        if (ctx->pc != 0x1F4A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A98u; }
        if (ctx->pc != 0x1F4A98u) { return; }
    }
    ctx->pc = 0x1F4A98u;
label_1f4a98:
    // 0x1f4a98: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f4a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4aa0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1f4aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1f4aa4: 0x24070164  addiu       $a3, $zero, 0x164
    ctx->pc = 0x1f4aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1f4aa8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4AA8u;
    SET_GPR_U32(ctx, 31, 0x1F4AB0u);
    ctx->pc = 0x1F4AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AA8u;
            // 0x1f4aac: 0x2408005e  addiu       $t0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AB0u; }
        if (ctx->pc != 0x1F4AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AB0u; }
        if (ctx->pc != 0x1F4AB0u) { return; }
    }
    ctx->pc = 0x1F4AB0u;
label_1f4ab0:
    // 0x1f4ab0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f4ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ab8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1f4abc: 0x24070164  addiu       $a3, $zero, 0x164
    ctx->pc = 0x1f4abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1f4ac0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4AC0u;
    SET_GPR_U32(ctx, 31, 0x1F4AC8u);
    ctx->pc = 0x1F4AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AC0u;
            // 0x1f4ac4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AC8u; }
        if (ctx->pc != 0x1F4AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AC8u; }
        if (ctx->pc != 0x1F4AC8u) { return; }
    }
    ctx->pc = 0x1F4AC8u;
label_1f4ac8:
    // 0x1f4ac8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f4acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ad0: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1f4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1f4ad4: 0x24070164  addiu       $a3, $zero, 0x164
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1f4ad8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4AD8u;
    SET_GPR_U32(ctx, 31, 0x1F4AE0u);
    ctx->pc = 0x1F4ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AD8u;
            // 0x1f4adc: 0x24080022  addiu       $t0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AE0u; }
        if (ctx->pc != 0x1F4AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AE0u; }
        if (ctx->pc != 0x1F4AE0u) { return; }
    }
    ctx->pc = 0x1F4AE0u;
label_1f4ae0:
    // 0x1f4ae0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1f4ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f4ae4: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x1f4ae8: 0x240600eb  addiu       $a2, $zero, 0xEB
    ctx->pc = 0x1f4ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x1f4aec: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f4af0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4AF0u;
    SET_GPR_U32(ctx, 31, 0x1F4AF8u);
    ctx->pc = 0x1F4AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AF0u;
            // 0x1f4af4: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF8u; }
        if (ctx->pc != 0x1F4AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF8u; }
        if (ctx->pc != 0x1F4AF8u) { return; }
    }
    ctx->pc = 0x1F4AF8u;
label_1f4af8:
    // 0x1f4af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4afc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4AFCu;
    SET_GPR_U32(ctx, 31, 0x1F4B04u);
    ctx->pc = 0x1F4B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AFCu;
            // 0x1f4b00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B04u; }
        if (ctx->pc != 0x1F4B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B04u; }
        if (ctx->pc != 0x1F4B04u) { return; }
    }
    ctx->pc = 0x1F4B04u;
label_1f4b04:
    // 0x1f4b04: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4b08: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F4B08u;
    SET_GPR_U32(ctx, 31, 0x1F4B10u);
    ctx->pc = 0x1F4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B08u;
            // 0x1f4b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B10u; }
        if (ctx->pc != 0x1F4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B10u; }
        if (ctx->pc != 0x1F4B10u) { return; }
    }
    ctx->pc = 0x1F4B10u;
label_1f4b10:
    // 0x1f4b10: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1f4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f4b14: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x1f4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x1f4b18: 0x34855556  ori         $a1, $a0, 0x5556
    ctx->pc = 0x1f4b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x1f4b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b28: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1f4b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f4b2c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1f4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1f4b30: 0x0  nop
    ctx->pc = 0x1f4b30u;
    // NOP
    // 0x1f4b34: 0x1010  mfhi        $v0
    ctx->pc = 0x1f4b34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f4b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b3c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F4B44u);
    ctx->pc = 0x1F4B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B3Cu;
            // 0x1f4b40: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B44u; }
        if (ctx->pc != 0x1F4B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B44u; }
        if (ctx->pc != 0x1F4B44u) { return; }
    }
    ctx->pc = 0x1F4B44u;
label_1f4b44:
    // 0x1f4b44: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4b48: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f4b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4b50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4B50u;
    SET_GPR_U32(ctx, 31, 0x1F4B58u);
    ctx->pc = 0x1F4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B50u;
            // 0x1f4b54: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B58u; }
        if (ctx->pc != 0x1F4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B58u; }
        if (ctx->pc != 0x1F4B58u) { return; }
    }
    ctx->pc = 0x1F4B58u;
label_1f4b58:
    // 0x1f4b58: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1f4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b60: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f4b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4b68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4B68u;
    SET_GPR_U32(ctx, 31, 0x1F4B70u);
    ctx->pc = 0x1F4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B68u;
            // 0x1f4b6c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    }
    ctx->pc = 0x1F4B70u;
label_1f4b70:
    // 0x1f4b70: 0x27b5012c  addiu       $s5, $sp, 0x12C
    ctx->pc = 0x1f4b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1f4b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b78: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1f4b78u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4b7c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1f4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f4b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4b84: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f4b88: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1f4b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f4b8c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4b90: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4B90u;
    SET_GPR_U32(ctx, 31, 0x1F4B98u);
    ctx->pc = 0x1F4B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B90u;
            // 0x1f4b94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B98u; }
        if (ctx->pc != 0x1F4B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B98u; }
        if (ctx->pc != 0x1F4B98u) { return; }
    }
    ctx->pc = 0x1F4B98u;
label_1f4b98:
    // 0x1f4b98: 0x27b60138  addiu       $s6, $sp, 0x138
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1f4b9c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f4ba0: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1f4ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f4ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4BACu;
    SET_GPR_U32(ctx, 31, 0x1F4BB4u);
    ctx->pc = 0x1F4BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BACu;
            // 0x1f4bb0: 0x240800b0  addiu       $t0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BB4u; }
        if (ctx->pc != 0x1F4BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BB4u; }
        if (ctx->pc != 0x1F4BB4u) { return; }
    }
    ctx->pc = 0x1F4BB4u;
label_1f4bb4:
    // 0x1f4bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bb8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1f4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f4bbc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F4BBCu;
    SET_GPR_U32(ctx, 31, 0x1F4BC4u);
    ctx->pc = 0x1F4BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BBCu;
            // 0x1f4bc0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BC4u; }
        if (ctx->pc != 0x1F4BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BC4u; }
        if (ctx->pc != 0x1F4BC4u) { return; }
    }
    ctx->pc = 0x1F4BC4u;
label_1f4bc4:
    // 0x1f4bc4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f4bc4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4bc8: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x1f4bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4bd0: 0x0  nop
    ctx->pc = 0x1f4bd0u;
    // NOP
    // 0x1f4bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4bd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4BD8u;
    SET_GPR_U32(ctx, 31, 0x1F4BE0u);
    ctx->pc = 0x1F4BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BD8u;
            // 0x1f4bdc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BE0u; }
        if (ctx->pc != 0x1F4BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BE0u; }
        if (ctx->pc != 0x1F4BE0u) { return; }
    }
    ctx->pc = 0x1F4BE0u;
label_1f4be0:
    // 0x1f4be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4be4: 0x27b3014c  addiu       $s3, $sp, 0x14C
    ctx->pc = 0x1f4be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1f4be8: 0x27b10148  addiu       $s1, $sp, 0x148
    ctx->pc = 0x1f4be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1f4bec: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f4bf0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4bf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bf8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4BF8u;
    SET_GPR_U32(ctx, 31, 0x1F4C00u);
    ctx->pc = 0x1F4BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BF8u;
            // 0x1f4bfc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C00u; }
        if (ctx->pc != 0x1F4C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C00u; }
        if (ctx->pc != 0x1F4C00u) { return; }
    }
    ctx->pc = 0x1F4C00u;
label_1f4c00:
    // 0x1f4c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c04: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f4c08: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F4C08u;
    SET_GPR_U32(ctx, 31, 0x1F4C10u);
    ctx->pc = 0x1F4C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C08u;
            // 0x1f4c0c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C10u; }
        if (ctx->pc != 0x1F4C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C10u; }
        if (ctx->pc != 0x1F4C10u) { return; }
    }
    ctx->pc = 0x1F4C10u;
label_1f4c10:
    // 0x1f4c10: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f4c14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c20: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4C20u;
    SET_GPR_U32(ctx, 31, 0x1F4C28u);
    ctx->pc = 0x1F4C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C20u;
            // 0x1f4c24: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C28u; }
        if (ctx->pc != 0x1F4C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C28u; }
        if (ctx->pc != 0x1F4C28u) { return; }
    }
    ctx->pc = 0x1F4C28u;
label_1f4c28:
    // 0x1f4c28: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1f4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4c2c: 0xc6940004  lwc1        $f20, 0x4($s4)
    ctx->pc = 0x1f4c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4c30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4c34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4C34u;
    SET_GPR_U32(ctx, 31, 0x1F4C3Cu);
    ctx->pc = 0x1F4C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C34u;
            // 0x1f4c38: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C3Cu; }
        if (ctx->pc != 0x1F4C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C3Cu; }
        if (ctx->pc != 0x1F4C3Cu) { return; }
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1f4c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c44: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f4c44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c4c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C54u);
    ctx->pc = 0x1F4C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C4Cu;
            // 0x1f4c50: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C54u; }
        if (ctx->pc != 0x1F4C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C54u; }
        if (ctx->pc != 0x1F4C54u) { return; }
    }
    ctx->pc = 0x1F4C54u;
label_1f4c54:
    // 0x1f4c54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4C54u;
    SET_GPR_U32(ctx, 31, 0x1F4C5Cu);
    ctx->pc = 0x1F4C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C54u;
            // 0x1f4c58: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C5Cu; }
        if (ctx->pc != 0x1F4C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C5Cu; }
        if (ctx->pc != 0x1F4C5Cu) { return; }
    }
    ctx->pc = 0x1F4C5Cu;
label_1f4c5c:
    // 0x1f4c5c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1f4c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f4c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c64: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1f4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f4c68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c6c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C74u);
    ctx->pc = 0x1F4C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C6Cu;
            // 0x1f4c70: 0x240800b0  addiu       $t0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C74u; }
        if (ctx->pc != 0x1F4C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C74u; }
        if (ctx->pc != 0x1F4C74u) { return; }
    }
    ctx->pc = 0x1F4C74u;
label_1f4c74:
    // 0x1f4c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c78: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1f4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f4c7c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C84u);
    ctx->pc = 0x1F4C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C7Cu;
            // 0x1f4c80: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C84u; }
        if (ctx->pc != 0x1F4C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C84u; }
        if (ctx->pc != 0x1F4C84u) { return; }
    }
    ctx->pc = 0x1F4C84u;
label_1f4c84:
    // 0x1f4c84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4C84u;
    SET_GPR_U32(ctx, 31, 0x1F4C8Cu);
    ctx->pc = 0x1F4C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C84u;
            // 0x1f4c88: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C8Cu; }
        if (ctx->pc != 0x1F4C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C8Cu; }
        if (ctx->pc != 0x1F4C8Cu) { return; }
    }
    ctx->pc = 0x1F4C8Cu;
label_1f4c8c:
    // 0x1f4c8c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f4c8cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4c90: 0x0  nop
    ctx->pc = 0x1f4c90u;
    // NOP
    // 0x1f4c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4c98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c9c: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x1f4ca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4ca4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4CA4u;
    SET_GPR_U32(ctx, 31, 0x1F4CACu);
    ctx->pc = 0x1F4CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CA4u;
            // 0x1f4ca8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CACu; }
        if (ctx->pc != 0x1F4CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CACu; }
        if (ctx->pc != 0x1F4CACu) { return; }
    }
    ctx->pc = 0x1F4CACu;
label_1f4cac:
    // 0x1f4cac: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4cb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cb4: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f4cb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4CBCu;
    SET_GPR_U32(ctx, 31, 0x1F4CC4u);
    ctx->pc = 0x1F4CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CBCu;
            // 0x1f4cc0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CC4u; }
        if (ctx->pc != 0x1F4CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CC4u; }
        if (ctx->pc != 0x1F4CC4u) { return; }
    }
    ctx->pc = 0x1F4CC4u;
label_1f4cc4:
    // 0x1f4cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cc8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1f4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1f4ccc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F4CCCu;
    SET_GPR_U32(ctx, 31, 0x1F4CD4u);
    ctx->pc = 0x1F4CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CCCu;
            // 0x1f4cd0: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CD4u; }
        if (ctx->pc != 0x1F4CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CD4u; }
        if (ctx->pc != 0x1F4CD4u) { return; }
    }
    ctx->pc = 0x1F4CD4u;
label_1f4cd4:
    // 0x1f4cd4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4cd8: 0x3c0243a4  lui         $v0, 0x43A4
    ctx->pc = 0x1f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17316 << 16));
    // 0x1f4cdc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f4cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f4ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4ce8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f4cec: 0xc78d9048  lwc1        $f13, -0x6FB8($gp)
    ctx->pc = 0x1f4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f4cf0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4CF0u;
    SET_GPR_U32(ctx, 31, 0x1F4CF8u);
    ctx->pc = 0x1F4CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CF0u;
            // 0x1f4cf4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CF8u; }
        if (ctx->pc != 0x1F4CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CF8u; }
        if (ctx->pc != 0x1F4CF8u) { return; }
    }
    ctx->pc = 0x1F4CF8u;
label_1f4cf8:
    // 0x1f4cf8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4cfc: 0x3c024264  lui         $v0, 0x4264
    ctx->pc = 0x1f4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16996 << 16));
    // 0x1f4d00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4d04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4D04u;
    SET_GPR_U32(ctx, 31, 0x1F4D0Cu);
    ctx->pc = 0x1F4D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D04u;
            // 0x1f4d08: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D0Cu; }
        if (ctx->pc != 0x1F4D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D0Cu; }
        if (ctx->pc != 0x1F4D0Cu) { return; }
    }
    ctx->pc = 0x1F4D0Cu;
label_1f4d0c:
    // 0x1f4d0c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1f4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d14: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1f4d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4d1c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D24u);
    ctx->pc = 0x1F4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D1Cu;
            // 0x1f4d20: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D24u; }
        if (ctx->pc != 0x1F4D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D24u; }
        if (ctx->pc != 0x1F4D24u) { return; }
    }
    ctx->pc = 0x1F4D24u;
label_1f4d24:
    // 0x1f4d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d2c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1f4d30: 0x24070073  addiu       $a3, $zero, 0x73
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1f4d34: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4D34u;
    SET_GPR_U32(ctx, 31, 0x1F4D3Cu);
    ctx->pc = 0x1F4D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D34u;
            // 0x1f4d38: 0x24080015  addiu       $t0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D3Cu; }
        if (ctx->pc != 0x1F4D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D3Cu; }
        if (ctx->pc != 0x1F4D3Cu) { return; }
    }
    ctx->pc = 0x1F4D3Cu;
label_1f4d3c:
    // 0x1f4d3c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f4d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d44: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1f4d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1f4d48: 0x24c6e780  addiu       $a2, $a2, -0x1880
    ctx->pc = 0x1f4d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961024));
    // 0x1f4d4c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D54u);
    ctx->pc = 0x1F4D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D4Cu;
            // 0x1f4d50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D54u; }
        if (ctx->pc != 0x1F4D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D54u; }
        if (ctx->pc != 0x1F4D54u) { return; }
    }
    ctx->pc = 0x1F4D54u;
label_1f4d54:
    // 0x1f4d54: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f4d58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f4d5c: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x1f4d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f4d60: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F4D60u;
    {
        const bool branch_taken_0x1f4d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4d60) {
            ctx->pc = 0x1F4DDCu;
            goto label_1f4ddc;
        }
    }
    ctx->pc = 0x1F4D68u;
    // 0x1f4d68: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1f4d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f4d6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d78: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4D78u;
    SET_GPR_U32(ctx, 31, 0x1F4D80u);
    ctx->pc = 0x1F4D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D78u;
            // 0x1f4d7c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D80u; }
        if (ctx->pc != 0x1F4D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D80u; }
        if (ctx->pc != 0x1F4D80u) { return; }
    }
    ctx->pc = 0x1F4D80u;
label_1f4d80:
    // 0x1f4d80: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f4d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d84: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x1f4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x1f4d88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4d8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D94u);
    ctx->pc = 0x1F4D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D8Cu;
            // 0x1f4d90: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D94u; }
        if (ctx->pc != 0x1F4D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D94u; }
        if (ctx->pc != 0x1F4D94u) { return; }
    }
    ctx->pc = 0x1F4D94u;
label_1f4d94:
    // 0x1f4d94: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1f4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4d98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d9c: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1f4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1f4da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4da4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4DA4u;
    SET_GPR_U32(ctx, 31, 0x1F4DACu);
    ctx->pc = 0x1F4DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DA4u;
            // 0x1f4da8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DACu; }
        if (ctx->pc != 0x1F4DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DACu; }
        if (ctx->pc != 0x1F4DACu) { return; }
    }
    ctx->pc = 0x1F4DACu;
label_1f4dac:
    // 0x1f4dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4db0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4db4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f4db8: 0x24070073  addiu       $a3, $zero, 0x73
    ctx->pc = 0x1f4db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1f4dbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4DBCu;
    SET_GPR_U32(ctx, 31, 0x1F4DC4u);
    ctx->pc = 0x1F4DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DBCu;
            // 0x1f4dc0: 0x24080015  addiu       $t0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DC4u; }
        if (ctx->pc != 0x1F4DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DC4u; }
        if (ctx->pc != 0x1F4DC4u) { return; }
    }
    ctx->pc = 0x1F4DC4u;
label_1f4dc4:
    // 0x1f4dc4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f4dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f4dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4dcc: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1f4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f4dd0: 0x24c6e7a0  addiu       $a2, $a2, -0x1860
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961056));
    // 0x1f4dd4: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F4DD4u;
    SET_GPR_U32(ctx, 31, 0x1F4DDCu);
    ctx->pc = 0x1F4DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DD4u;
            // 0x1f4dd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DDCu; }
        if (ctx->pc != 0x1F4DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DDCu; }
        if (ctx->pc != 0x1F4DDCu) { return; }
    }
    ctx->pc = 0x1F4DDCu;
label_1f4ddc:
    // 0x1f4ddc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f4ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f4de0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4DE0u;
    SET_GPR_U32(ctx, 31, 0x1F4DE8u);
    ctx->pc = 0x1F4DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DE0u;
            // 0x1f4de4: 0xc42c9450  lwc1        $f12, -0x6BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DE8u; }
        if (ctx->pc != 0x1F4DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DE8u; }
        if (ctx->pc != 0x1F4DE8u) { return; }
    }
    ctx->pc = 0x1F4DE8u;
label_1f4de8:
    // 0x1f4de8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f4de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f4dec: 0xc42c9454  lwc1        $f12, -0x6BAC($at)
    ctx->pc = 0x1f4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4df0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4DF0u;
    SET_GPR_U32(ctx, 31, 0x1F4DF8u);
    ctx->pc = 0x1F4DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DF0u;
            // 0x1f4df4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DF8u; }
        if (ctx->pc != 0x1F4DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DF8u; }
        if (ctx->pc != 0x1F4DF8u) { return; }
    }
    ctx->pc = 0x1F4DF8u;
label_1f4df8:
    // 0x1f4df8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f4df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f4dfc: 0xc42c9458  lwc1        $f12, -0x6BA8($at)
    ctx->pc = 0x1f4dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4e00: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4E00u;
    SET_GPR_U32(ctx, 31, 0x1F4E08u);
    ctx->pc = 0x1F4E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E00u;
            // 0x1f4e04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E08u; }
        if (ctx->pc != 0x1F4E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E08u; }
        if (ctx->pc != 0x1F4E08u) { return; }
    }
    ctx->pc = 0x1F4E08u;
label_1f4e08:
    // 0x1f4e08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f4e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f4e0c: 0xc42c945c  lwc1        $f12, -0x6BA4($at)
    ctx->pc = 0x1f4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4e10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4E10u;
    SET_GPR_U32(ctx, 31, 0x1F4E18u);
    ctx->pc = 0x1F4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E10u;
            // 0x1f4e14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E18u; }
        if (ctx->pc != 0x1F4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E18u; }
        if (ctx->pc != 0x1F4E18u) { return; }
    }
    ctx->pc = 0x1F4E18u;
label_1f4e18:
    // 0x1f4e18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f4e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e24: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f4e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4E28u;
    SET_GPR_U32(ctx, 31, 0x1F4E30u);
    ctx->pc = 0x1F4E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E28u;
            // 0x1f4e2c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E30u; }
        if (ctx->pc != 0x1F4E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E30u; }
        if (ctx->pc != 0x1F4E30u) { return; }
    }
    ctx->pc = 0x1F4E30u;
label_1f4e30:
    // 0x1f4e30: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f4e34: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f4e38: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1f4e3c: 0x2463e7c0  addiu       $v1, $v1, -0x1840
    ctx->pc = 0x1f4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961088));
    // 0x1f4e40: 0x2442e7c4  addiu       $v0, $v0, -0x183C
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961092));
    // 0x1f4e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e48: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x1f4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4e4c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1f4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f4e50: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1f4e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e54: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1f4e54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f4e58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f4e5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f4e60: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4e64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e68: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1f4e68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1f4e6c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E74u);
    ctx->pc = 0x1F4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E6Cu;
            // 0x1f4e70: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E74u; }
        if (ctx->pc != 0x1F4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E74u; }
        if (ctx->pc != 0x1F4E74u) { return; }
    }
    ctx->pc = 0x1F4E74u;
label_1f4e74:
    // 0x1f4e74: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F4E74u;
    SET_GPR_U32(ctx, 31, 0x1F4E7Cu);
    ctx->pc = 0x1F4E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E74u;
            // 0x1f4e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E7Cu; }
        if (ctx->pc != 0x1F4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E7Cu; }
        if (ctx->pc != 0x1F4E7Cu) { return; }
    }
    ctx->pc = 0x1F4E7Cu;
label_1f4e7c:
    // 0x1f4e7c: 0xc6950000  lwc1        $f21, 0x0($s4)
    ctx->pc = 0x1f4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f4e80: 0xc6940004  lwc1        $f20, 0x4($s4)
    ctx->pc = 0x1f4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4e84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4E84u;
    SET_GPR_U32(ctx, 31, 0x1F4E8Cu);
    ctx->pc = 0x1F4E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E84u;
            // 0x1f4e88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E8Cu; }
        if (ctx->pc != 0x1F4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E8Cu; }
        if (ctx->pc != 0x1F4E8Cu) { return; }
    }
    ctx->pc = 0x1F4E8Cu;
label_1f4e8c:
    // 0x1f4e8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f4e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e90: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x1f4e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4E98u;
    SET_GPR_U32(ctx, 31, 0x1F4EA0u);
    ctx->pc = 0x1F4E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E98u;
            // 0x1f4e9c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EA0u; }
        if (ctx->pc != 0x1F4EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EA0u; }
        if (ctx->pc != 0x1F4EA0u) { return; }
    }
    ctx->pc = 0x1F4EA0u;
label_1f4ea0:
    // 0x1f4ea0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1f4ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4ea4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4eac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4EACu;
    SET_GPR_U32(ctx, 31, 0x1F4EB4u);
    ctx->pc = 0x1F4EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EACu;
            // 0x1f4eb0: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EB4u; }
        if (ctx->pc != 0x1F4EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EB4u; }
        if (ctx->pc != 0x1F4EB4u) { return; }
    }
    ctx->pc = 0x1F4EB4u;
label_1f4eb4:
    // 0x1f4eb4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1f4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4eb8: 0x3c034330  lui         $v1, 0x4330
    ctx->pc = 0x1f4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17200 << 16));
    // 0x1f4ebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ec0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f4ec4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f4ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4ecc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f4eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f4ed0: 0x4602a080  add.s       $f2, $f20, $f2
    ctx->pc = 0x1f4ed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1f4ed4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f4ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f4ed8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4ED8u;
    SET_GPR_U32(ctx, 31, 0x1F4EE0u);
    ctx->pc = 0x1F4EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4ED8u;
            // 0x1f4edc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EE0u; }
        if (ctx->pc != 0x1F4EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EE0u; }
        if (ctx->pc != 0x1F4EE0u) { return; }
    }
    ctx->pc = 0x1F4EE0u;
label_1f4ee0:
    // 0x1f4ee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ee4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ee8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f4ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4eec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f4eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ef0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4EF0u;
    SET_GPR_U32(ctx, 31, 0x1F4EF8u);
    ctx->pc = 0x1F4EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EF0u;
            // 0x1f4ef4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EF8u; }
        if (ctx->pc != 0x1F4EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EF8u; }
        if (ctx->pc != 0x1F4EF8u) { return; }
    }
    ctx->pc = 0x1F4EF8u;
label_1f4ef8:
    // 0x1f4ef8: 0xc088038  jal         func_2200E0
    ctx->pc = 0x1F4EF8u;
    SET_GPR_U32(ctx, 31, 0x1F4F00u);
    ctx->pc = 0x1F4EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EF8u;
            // 0x1f4efc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F00u; }
        if (ctx->pc != 0x1F4F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F00u; }
        if (ctx->pc != 0x1F4F00u) { return; }
    }
    ctx->pc = 0x1F4F00u;
label_1f4f00:
    // 0x1f4f00: 0xc088050  jal         func_220140
    ctx->pc = 0x1F4F00u;
    SET_GPR_U32(ctx, 31, 0x1F4F08u);
    ctx->pc = 0x1F4F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F00u;
            // 0x1f4f04: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F08u; }
        if (ctx->pc != 0x1F4F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F08u; }
        if (ctx->pc != 0x1F4F08u) { return; }
    }
    ctx->pc = 0x1F4F08u;
label_1f4f08:
    // 0x1f4f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f0c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1F4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F14u);
    ctx->pc = 0x1F4F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F0Cu;
            // 0x1f4f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F14u; }
        if (ctx->pc != 0x1F4F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F14u; }
        if (ctx->pc != 0x1F4F14u) { return; }
    }
    ctx->pc = 0x1F4F14u;
label_1f4f14:
    // 0x1f4f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f18: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4F18u;
    SET_GPR_U32(ctx, 31, 0x1F4F20u);
    ctx->pc = 0x1F4F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F18u;
            // 0x1f4f1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F20u; }
        if (ctx->pc != 0x1F4F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F20u; }
        if (ctx->pc != 0x1F4F20u) { return; }
    }
    ctx->pc = 0x1F4F20u;
label_1f4f20:
    // 0x1f4f20: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4f24: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F4F24u;
    SET_GPR_U32(ctx, 31, 0x1F4F2Cu);
    ctx->pc = 0x1F4F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F24u;
            // 0x1f4f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F2Cu; }
        if (ctx->pc != 0x1F4F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F2Cu; }
        if (ctx->pc != 0x1F4F2Cu) { return; }
    }
    ctx->pc = 0x1F4F2Cu;
label_1f4f2c:
    // 0x1f4f2c: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f4f30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f3c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F44u);
    ctx->pc = 0x1F4F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F3Cu;
            // 0x1f4f40: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F44u; }
        if (ctx->pc != 0x1F4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F44u; }
        if (ctx->pc != 0x1F4F44u) { return; }
    }
    ctx->pc = 0x1F4F44u;
label_1f4f44:
    // 0x1f4f44: 0xdf879060  ld          $a3, -0x6FA0($gp)
    ctx->pc = 0x1f4f44u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294938720)));
    // 0x1f4f48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4f4c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1f4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1f4f50: 0x27a80228  addiu       $t0, $sp, 0x228
    ctx->pc = 0x1f4f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1f4f54: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1f4f58: 0x34c6b8bc  ori         $a2, $a2, 0xB8BC
    ctx->pc = 0x1f4f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47292);
    // 0x1f4f5c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f4f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f4f60: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1f4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x1f4f64: 0x8f878ffc  lw          $a3, -0x7004($gp)
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f4f68: 0x8f838ff0  lw          $v1, -0x7010($gp)
    ctx->pc = 0x1f4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f4f6c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1f4f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1f4f70: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x1f4f70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x1f4f74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1f4f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f78: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x1f4f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x1f4f7c: 0xc420b8c0  lwc1        $f0, -0x4740($at)
    ctx->pc = 0x1f4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4f80: 0x10600129  beqz        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1F4F80u;
    {
        const bool branch_taken_0x1f4f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F80u;
            // 0x1f4f84: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f80) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F4F88u;
    // 0x1f4f88: 0x8f829008  lw          $v0, -0x6FF8($gp)
    ctx->pc = 0x1f4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938632)));
    // 0x1f4f8c: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1F4F8Cu;
    {
        const bool branch_taken_0x1f4f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f8c) {
            ctx->pc = 0x1F536Cu;
            goto label_1f536c;
        }
    }
    ctx->pc = 0x1F4F94u;
    // 0x1f4f94: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f4f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f4f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f9c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1f4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1f4fa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f4fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fa4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1F4FA4u;
    {
        const bool branch_taken_0x1f4fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4FA4u;
            // 0x1f4fa8: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fa4) {
            ctx->pc = 0x1F5348u;
            goto label_1f5348;
        }
    }
    ctx->pc = 0x1F4FACu;
label_1f4fac:
    // 0x1f4fac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1f4facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f4fb0: 0xc7a2022c  lwc1        $f2, 0x22C($sp)
    ctx->pc = 0x1f4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4fb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f4fbc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1f4fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1f4fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4fc4: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1f4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4fc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f4fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f4fcc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f4fd0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f4fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f4fd4: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x1f4fd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1f4fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4fdc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4FDCu;
    SET_GPR_U32(ctx, 31, 0x1F4FE4u);
    ctx->pc = 0x1F4FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4FDCu;
            // 0x1f4fe0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FE4u; }
        if (ctx->pc != 0x1F4FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FE4u; }
        if (ctx->pc != 0x1F4FE4u) { return; }
    }
    ctx->pc = 0x1F4FE4u;
label_1f4fe4:
    // 0x1f4fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fe8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4FE8u;
    SET_GPR_U32(ctx, 31, 0x1F4FF0u);
    ctx->pc = 0x1F4FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4FE8u;
            // 0x1f4fec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FF0u; }
        if (ctx->pc != 0x1F4FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FF0u; }
        if (ctx->pc != 0x1F4FF0u) { return; }
    }
    ctx->pc = 0x1F4FF0u;
label_1f4ff0:
    // 0x1f4ff0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ff4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f4ff8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f4ffc: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x1f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x1f5000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5004: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f5004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5008: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F5008u;
    SET_GPR_U32(ctx, 31, 0x1F5010u);
    ctx->pc = 0x1F500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5008u;
            // 0x1f500c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5010u; }
        if (ctx->pc != 0x1F5010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5010u; }
        if (ctx->pc != 0x1F5010u) { return; }
    }
    ctx->pc = 0x1F5010u;
label_1f5010:
    // 0x1f5010: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1f5014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5018: 0x0  nop
    ctx->pc = 0x1f5018u;
    // NOP
    // 0x1f501c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f501cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5020: 0x0  nop
    ctx->pc = 0x1f5020u;
    // NOP
    // 0x1f5024: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5024u;
    {
        const bool branch_taken_0x1f5024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5024) {
            ctx->pc = 0x1F503Cu;
            goto label_1f503c;
        }
    }
    ctx->pc = 0x1F502Cu;
    // 0x1f502c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f5030: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5030u;
    {
        const bool branch_taken_0x1f5030 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5030) {
            ctx->pc = 0x1F503Cu;
            goto label_1f503c;
        }
    }
    ctx->pc = 0x1F5038u;
    // 0x1f5038: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x1f5038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
label_1f503c:
    // 0x1f503c: 0x0  nop
    ctx->pc = 0x1f503cu;
    // NOP
    // 0x1f5040: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1f5040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1f5044: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x1f5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1f5048: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f5048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f504c: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x1f504cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1f5050: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F5050u;
    SET_GPR_U32(ctx, 31, 0x1F5058u);
    ctx->pc = 0x1F5054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5050u;
            // 0x1f5054: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5058u; }
        if (ctx->pc != 0x1F5058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5058u; }
        if (ctx->pc != 0x1F5058u) { return; }
    }
    ctx->pc = 0x1F5058u;
label_1f5058:
    // 0x1f5058: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1f5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1f505c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f5060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5064: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1f5064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1f5068: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x1f5068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f506c: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x1f5070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5074: 0x0  nop
    ctx->pc = 0x1f5074u;
    // NOP
    // 0x1f5078: 0x46140340  add.s       $f13, $f0, $f20
    ctx->pc = 0x1f5078u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1f507c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F507Cu;
    SET_GPR_U32(ctx, 31, 0x1F5084u);
    ctx->pc = 0x1F5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F507Cu;
            // 0x1f5080: 0x46011301  sub.s       $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5084u; }
        if (ctx->pc != 0x1F5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5084u; }
        if (ctx->pc != 0x1F5084u) { return; }
    }
    ctx->pc = 0x1F5084u;
label_1f5084:
    // 0x1f5084: 0x8f858ff0  lw          $a1, -0x7010($gp)
    ctx->pc = 0x1f5084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f5088: 0x27838198  addiu       $v1, $gp, -0x7E68
    ctx->pc = 0x1f5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
    // 0x1f508c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f5090: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1f5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f5094: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1f5094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5098: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f509c: 0x8c420400  lw          $v0, 0x400($v0)
    ctx->pc = 0x1f509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x1f50a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f50a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f50a8: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f50a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f50ac: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x1f50acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f50b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F50B0u;
    SET_GPR_U32(ctx, 31, 0x1F50B8u);
    ctx->pc = 0x1F50B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F50B0u;
            // 0x1f50b4: 0x24080026  addiu       $t0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50B8u; }
        if (ctx->pc != 0x1F50B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50B8u; }
        if (ctx->pc != 0x1F50B8u) { return; }
    }
    ctx->pc = 0x1F50B8u;
label_1f50b8:
    // 0x1f50b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1f50bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f50c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f50c4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1f50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f50c8: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1f50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f50cc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1f50d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f50d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f50d4: 0x0  nop
    ctx->pc = 0x1f50d4u;
    // NOP
    // 0x1f50d8: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x1f50d8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1f50dc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F50DCu;
    SET_GPR_U32(ctx, 31, 0x1F50E4u);
    ctx->pc = 0x1F50E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F50DCu;
            // 0x1f50e0: 0x46020b01  sub.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50E4u; }
        if (ctx->pc != 0x1F50E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50E4u; }
        if (ctx->pc != 0x1F50E4u) { return; }
    }
    ctx->pc = 0x1F50E4u;
label_1f50e4:
    // 0x1f50e4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1f50e8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1f50ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f50ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f50f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f50f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f50f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f50f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f50f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50fc: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f5100: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x1f5100u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f5104: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x1f5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x1f5108: 0x11a040  sll         $s4, $s1, 1
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1f510c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5110: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1f5110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5114: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f5114u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f5118: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f511c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5120: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1F5120u;
    {
        const bool branch_taken_0x1f5120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5120u;
            // 0x1f5124: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5120) {
            ctx->pc = 0x1F5314u;
            goto label_1f5314;
        }
    }
    ctx->pc = 0x1F5128u;
label_1f5128:
    // 0x1f5128: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x1f5128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f512c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f512cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5130: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f5130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5134: 0x0  nop
    ctx->pc = 0x1f5134u;
    // NOP
    // 0x1f5138: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x1F5138u;
    {
        const bool branch_taken_0x1f5138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5138u;
            // 0x1f513c: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5138) {
            ctx->pc = 0x1F5334u;
            goto label_1f5334;
        }
    }
    ctx->pc = 0x1F5140u;
    // 0x1f5140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f5140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5144: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1f5144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5148: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f514c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x1f514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x1f5150: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f5154: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f515c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F515Cu;
    {
        const bool branch_taken_0x1f515c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F515Cu;
            // 0x1f5160: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f515c) {
            ctx->pc = 0x1F51C0u;
            goto label_1f51c0;
        }
    }
    ctx->pc = 0x1F5164u;
    // 0x1f5164: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f5164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f5168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f516c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F516Cu;
    SET_GPR_U32(ctx, 31, 0x1F5174u);
    ctx->pc = 0x1F5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F516Cu;
            // 0x1f5170: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5174u; }
        if (ctx->pc != 0x1F5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5174u; }
        if (ctx->pc != 0x1F5174u) { return; }
    }
    ctx->pc = 0x1F5174u;
label_1f5174:
    // 0x1f5174: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f5174u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5178: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f517c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f517cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5180: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F5180u;
    SET_GPR_U32(ctx, 31, 0x1F5188u);
    ctx->pc = 0x1F5184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5180u;
            // 0x1f5184: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5188u; }
        if (ctx->pc != 0x1F5188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5188u; }
        if (ctx->pc != 0x1F5188u) { return; }
    }
    ctx->pc = 0x1F5188u;
label_1f5188:
    // 0x1f5188: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f518c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f518cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5190: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1f5190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1f5194: 0x24070116  addiu       $a3, $zero, 0x116
    ctx->pc = 0x1f5194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1f5198: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F5198u;
    SET_GPR_U32(ctx, 31, 0x1F51A0u);
    ctx->pc = 0x1F519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5198u;
            // 0x1f519c: 0x24080038  addiu       $t0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51A0u; }
        if (ctx->pc != 0x1F51A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51A0u; }
        if (ctx->pc != 0x1F51A0u) { return; }
    }
    ctx->pc = 0x1F51A0u;
label_1f51a0:
    // 0x1f51a0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f51a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f51a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a8: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1f51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1f51ac: 0x24c6e7f0  addiu       $a2, $a2, -0x1810
    ctx->pc = 0x1f51acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961136));
    // 0x1f51b0: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F51B0u;
    SET_GPR_U32(ctx, 31, 0x1F51B8u);
    ctx->pc = 0x1F51B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51B0u;
            // 0x1f51b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51B8u; }
        if (ctx->pc != 0x1F51B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51B8u; }
        if (ctx->pc != 0x1F51B8u) { return; }
    }
    ctx->pc = 0x1F51B8u;
label_1f51b8:
    // 0x1f51b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F51B8u;
    {
        const bool branch_taken_0x1f51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51B8u;
            // 0x1f51bc: 0x241e0036  addiu       $fp, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51b8) {
            ctx->pc = 0x1F5218u;
            goto label_1f5218;
        }
    }
    ctx->pc = 0x1F51C0u;
label_1f51c0:
    // 0x1f51c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f51c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f51c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f51c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F51C8u;
    SET_GPR_U32(ctx, 31, 0x1F51D0u);
    ctx->pc = 0x1F51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51C8u;
            // 0x1f51cc: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51D0u; }
        if (ctx->pc != 0x1F51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51D0u; }
        if (ctx->pc != 0x1F51D0u) { return; }
    }
    ctx->pc = 0x1F51D0u;
label_1f51d0:
    // 0x1f51d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f51d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f51d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f51d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f51dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F51DCu;
    SET_GPR_U32(ctx, 31, 0x1F51E4u);
    ctx->pc = 0x1F51E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51DCu;
            // 0x1f51e0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51E4u; }
        if (ctx->pc != 0x1F51E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51E4u; }
        if (ctx->pc != 0x1F51E4u) { return; }
    }
    ctx->pc = 0x1F51E4u;
label_1f51e4:
    // 0x1f51e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f51e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f51e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51ec: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1f51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1f51f0: 0x24070116  addiu       $a3, $zero, 0x116
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1f51f4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F51F4u;
    SET_GPR_U32(ctx, 31, 0x1F51FCu);
    ctx->pc = 0x1F51F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51F4u;
            // 0x1f51f8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51FCu; }
        if (ctx->pc != 0x1F51FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51FCu; }
        if (ctx->pc != 0x1F51FCu) { return; }
    }
    ctx->pc = 0x1F51FCu;
label_1f51fc:
    // 0x1f51fc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f51fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f5200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5204: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1f5204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1f5208: 0x24c6e7f0  addiu       $a2, $a2, -0x1810
    ctx->pc = 0x1f5208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961136));
    // 0x1f520c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F520Cu;
    SET_GPR_U32(ctx, 31, 0x1F5214u);
    ctx->pc = 0x1F5210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F520Cu;
            // 0x1f5210: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5214u; }
        if (ctx->pc != 0x1F5214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5214u; }
        if (ctx->pc != 0x1F5214u) { return; }
    }
    ctx->pc = 0x1F5214u;
label_1f5214:
    // 0x1f5214: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1f5218:
    // 0x1f5218: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1f5218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1f521c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5220: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F5220u;
    SET_GPR_U32(ctx, 31, 0x1F5228u);
    ctx->pc = 0x1F5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5220u;
            // 0x1f5224: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5228u; }
        if (ctx->pc != 0x1F5228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5228u; }
        if (ctx->pc != 0x1F5228u) { return; }
    }
    ctx->pc = 0x1F5228u;
label_1f5228:
    // 0x1f5228: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f5228u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f522c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f5230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5234: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F5234u;
    SET_GPR_U32(ctx, 31, 0x1F523Cu);
    ctx->pc = 0x1F5238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5234u;
            // 0x1f5238: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F523Cu; }
        if (ctx->pc != 0x1F523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F523Cu; }
        if (ctx->pc != 0x1F523Cu) { return; }
    }
    ctx->pc = 0x1F523Cu;
label_1f523c:
    // 0x1f523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5240: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f5240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f5244: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x1f5244u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5248: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1f5248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1f524c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1f524cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1f5250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5254: 0x24a595f0  addiu       $a1, $a1, -0x6A10
    ctx->pc = 0x1f5254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
    // 0x1f5258: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F5258u;
    SET_GPR_U32(ctx, 31, 0x1F5260u);
    ctx->pc = 0x1F525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5258u;
            // 0x1f525c: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5260u; }
        if (ctx->pc != 0x1F5260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5260u; }
        if (ctx->pc != 0x1F5260u) { return; }
    }
    ctx->pc = 0x1F5260u;
label_1f5260:
    // 0x1f5260: 0x8f828ff0  lw          $v0, -0x7010($gp)
    ctx->pc = 0x1f5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f5264: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f5268: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f526c: 0x8c420200  lw          $v0, 0x200($v0)
    ctx->pc = 0x1f526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x1f5270: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5270u;
    {
        const bool branch_taken_0x1f5270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5270) {
            ctx->pc = 0x1F529Cu;
            goto label_1f529c;
        }
    }
    ctx->pc = 0x1F5278u;
    // 0x1f5278: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1f527c: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x1f527cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5280: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f5280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f5284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5288: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1f5288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f528c: 0x24a595e0  addiu       $a1, $a1, -0x6A20
    ctx->pc = 0x1f528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940128));
    // 0x1f5290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5294: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F5294u;
    SET_GPR_U32(ctx, 31, 0x1F529Cu);
    ctx->pc = 0x1F5298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5294u;
            // 0x1f5298: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F529Cu; }
        if (ctx->pc != 0x1F529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F529Cu; }
        if (ctx->pc != 0x1F529Cu) { return; }
    }
    ctx->pc = 0x1F529Cu;
label_1f529c:
    // 0x1f529c: 0x0  nop
    ctx->pc = 0x1f529cu;
    // NOP
    // 0x1f52a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F52A0u;
    SET_GPR_U32(ctx, 31, 0x1F52A8u);
    ctx->pc = 0x1F52A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52A0u;
            // 0x1f52a4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52A8u; }
        if (ctx->pc != 0x1F52A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52A8u; }
        if (ctx->pc != 0x1F52A8u) { return; }
    }
    ctx->pc = 0x1F52A8u;
label_1f52a8:
    // 0x1f52a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f52a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f52acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f52b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f52b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f52b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F52B4u;
    SET_GPR_U32(ctx, 31, 0x1F52BCu);
    ctx->pc = 0x1F52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52B4u;
            // 0x1f52b8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52BCu; }
        if (ctx->pc != 0x1F52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52BCu; }
        if (ctx->pc != 0x1F52BCu) { return; }
    }
    ctx->pc = 0x1F52BCu;
label_1f52bc:
    // 0x1f52bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f52bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52c0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f52c4: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x1f52c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f52cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f52ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f52d0: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F52D0u;
    SET_GPR_U32(ctx, 31, 0x1F52D8u);
    ctx->pc = 0x1F52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52D0u;
            // 0x1f52d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52D8u; }
        if (ctx->pc != 0x1F52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52D8u; }
        if (ctx->pc != 0x1F52D8u) { return; }
    }
    ctx->pc = 0x1F52D8u;
label_1f52d8:
    // 0x1f52d8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f52dc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f52dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f52e0: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x1f52e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f52e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f52e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f52ec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f52ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f52f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1f52f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f52f4: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1f52f4u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f52f8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1f52f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1f52fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f52fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f5300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f5300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5304: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f5308: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f5308u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f530c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5310: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1f5310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1f5314:
    // 0x1f5314: 0x0  nop
    ctx->pc = 0x1f5314u;
    // NOP
    // 0x1f5318: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f531c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5320: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f5324: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x1f5324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f5328: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1f5328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1f532c: 0x1020ff7e  beqz        $at, . + 4 + (-0x82 << 2)
    ctx->pc = 0x1F532Cu;
    {
        const bool branch_taken_0x1f532c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f532c) {
            ctx->pc = 0x1F5128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5128;
        }
    }
    ctx->pc = 0x1F5334u;
label_1f5334:
    // 0x1f5334: 0x0  nop
    ctx->pc = 0x1f5334u;
    // NOP
    // 0x1f5338: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f533c: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1f533cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1f5340: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f5340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f5344: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1f5348:
    // 0x1f5348: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f534c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f534cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f5350: 0x24639350  addiu       $v1, $v1, -0x6CB0
    ctx->pc = 0x1f5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939472));
    // 0x1f5354: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f5354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5358: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1f5358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1f535c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f5360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5364: 0x1440ff11  bnez        $v0, . + 4 + (-0xEF << 2)
    ctx->pc = 0x1F5364u;
    {
        const bool branch_taken_0x1f5364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5364) {
            ctx->pc = 0x1F4FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4fac;
        }
    }
    ctx->pc = 0x1F536Cu;
label_1f536c:
    // 0x1f536c: 0x0  nop
    ctx->pc = 0x1f536cu;
    // NOP
    // 0x1f5370: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F5370u;
    SET_GPR_U32(ctx, 31, 0x1F5378u);
    ctx->pc = 0x1F5374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5370u;
            // 0x1f5374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5378u; }
        if (ctx->pc != 0x1F5378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5378u; }
        if (ctx->pc != 0x1F5378u) { return; }
    }
    ctx->pc = 0x1F5378u;
label_1f5378:
    // 0x1f5378: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f537c: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x1f537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5380: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f5380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f5384: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f5388: 0xc421b8bc  lwc1        $f1, -0x4744($at)
    ctx->pc = 0x1f5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f538c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f538cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5394: 0x0  nop
    ctx->pc = 0x1f5394u;
    // NOP
    // 0x1f5398: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1F5398u;
    {
        const bool branch_taken_0x1f5398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5398u;
            // 0x1f539c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5398) {
            ctx->pc = 0x1F5420u;
            goto label_1f5420;
        }
    }
    ctx->pc = 0x1F53A0u;
    // 0x1f53a0: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f53a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f53a4: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F53A4u;
    SET_GPR_U32(ctx, 31, 0x1F53ACu);
    ctx->pc = 0x1F53A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F53A4u;
            // 0x1f53a8: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F53ACu; }
        if (ctx->pc != 0x1F53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F53ACu; }
        if (ctx->pc != 0x1F53ACu) { return; }
    }
    ctx->pc = 0x1F53ACu;
label_1f53ac:
    // 0x1f53ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f53acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F53B0u;
    {
        const bool branch_taken_0x1f53b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F53B0u;
            // 0x1f53b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53b0) {
            ctx->pc = 0x1F53FCu;
            goto label_1f53fc;
        }
    }
    ctx->pc = 0x1F53B8u;
label_1f53b8:
    // 0x1f53b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f53bc: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1f53bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1f53c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F53C0u;
    {
        const bool branch_taken_0x1f53c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f53c0) {
            ctx->pc = 0x1F53D4u;
            goto label_1f53d4;
        }
    }
    ctx->pc = 0x1F53C8u;
    // 0x1f53c8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f53cc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F53CCu;
    {
        const bool branch_taken_0x1f53cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f53cc) {
            ctx->pc = 0x1F5420u;
            goto label_1f5420;
        }
    }
    ctx->pc = 0x1F53D4u;
label_1f53d4:
    // 0x1f53d4: 0x0  nop
    ctx->pc = 0x1f53d4u;
    // NOP
    // 0x1f53d8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1f53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f53dc: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x1f53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x1f53e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f53e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f53e4: 0x8c860094  lw          $a2, 0x94($a0)
    ctx->pc = 0x1f53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1f53e8: 0x8c870098  lw          $a3, 0x98($a0)
    ctx->pc = 0x1f53e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1f53ec: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F53ECu;
    SET_GPR_U32(ctx, 31, 0x1F53F4u);
    ctx->pc = 0x1F53F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F53ECu;
            // 0x1f53f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F53F4u; }
        if (ctx->pc != 0x1F53F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F53F4u; }
        if (ctx->pc != 0x1F53F4u) { return; }
    }
    ctx->pc = 0x1F53F4u;
label_1f53f4:
    // 0x1f53f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f53f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1f53f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f53f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f53fc:
    // 0x1f53fc: 0x0  nop
    ctx->pc = 0x1f53fcu;
    // NOP
    // 0x1f5400: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f5404: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x1f5404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x1f5408: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1f5408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f540c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5410u;
    {
        const bool branch_taken_0x1f5410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5410u;
            // 0x1f5414: 0x2a020030  slti        $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5410) {
            ctx->pc = 0x1F5420u;
            goto label_1f5420;
        }
    }
    ctx->pc = 0x1F5418u;
    // 0x1f5418: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F5418u;
    {
        const bool branch_taken_0x1f5418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5418) {
            ctx->pc = 0x1F53B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f53b8;
        }
    }
    ctx->pc = 0x1F5420u;
label_1f5420:
    // 0x1f5420: 0xc088070  jal         func_2201C0
    ctx->pc = 0x1F5420u;
    SET_GPR_U32(ctx, 31, 0x1F5428u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5428u; }
        if (ctx->pc != 0x1F5428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5428u; }
        if (ctx->pc != 0x1F5428u) { return; }
    }
    ctx->pc = 0x1F5428u;
label_1f5428:
    // 0x1f5428: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f5428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f542c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1f542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f5430: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f5430u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f5434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f5434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5438: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f5438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f543c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f543cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5440: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f5440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5444: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f5444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5448: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f5448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f544c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f544cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5458: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5458u;
            // 0x1f545c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5460u;
}
