#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventCreateCardDraw__FRiPf
// Address: 0x2089d0 - 0x208c30
void MenuInventCreateCardDraw__FRiPf_0x2089d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventCreateCardDraw__FRiPf_0x2089d0");
#endif

    switch (ctx->pc) {
        case 0x208a08u: goto label_208a08;
        case 0x208a20u: goto label_208a20;
        case 0x208a38u: goto label_208a38;
        case 0x208a40u: goto label_208a40;
        case 0x208a58u: goto label_208a58;
        case 0x208a64u: goto label_208a64;
        case 0x208a84u: goto label_208a84;
        case 0x208a9cu: goto label_208a9c;
        case 0x208aa8u: goto label_208aa8;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208af8u: goto label_208af8;
        case 0x208b08u: goto label_208b08;
        case 0x208b38u: goto label_208b38;
        case 0x208b54u: goto label_208b54;
        case 0x208b6cu: goto label_208b6c;
        case 0x208bacu: goto label_208bac;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bd8u: goto label_208bd8;
        case 0x208c0cu: goto label_208c0c;
        default: break;
    }

    ctx->pc = 0x2089d0u;

    // 0x2089d0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2089d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2089d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2089d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2089d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2089dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2089dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2089e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2089e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2089e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2089e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2089e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2089ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2089ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2089f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2089f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2089f4: 0x8f909110  lw          $s0, -0x6EF0($gp)
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x2089f8: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2089F8u;
    {
        const bool branch_taken_0x2089f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089F8u;
            // 0x2089fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089f8) {
            ctx->pc = 0x208C0Cu;
            goto label_208c0c;
        }
    }
    ctx->pc = 0x208A00u;
    // 0x208a00: 0xc08878c  jal         func_221E30
    ctx->pc = 0x208A00u;
    SET_GPR_U32(ctx, 31, 0x208A08u);
    ctx->pc = 0x208A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A00u;
            // 0x208a04: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A08u; }
        if (ctx->pc != 0x208A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A08u; }
        if (ctx->pc != 0x208A08u) { return; }
    }
    ctx->pc = 0x208A08u;
label_208a08:
    // 0x208a08: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x208a0c: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x208a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x208a10: 0x240601d2  addiu       $a2, $zero, 0x1D2
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    // 0x208a14: 0x240700e7  addiu       $a3, $zero, 0xE7
    ctx->pc = 0x208a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x208a18: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x208A18u;
    SET_GPR_U32(ctx, 31, 0x208A20u);
    ctx->pc = 0x208A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A18u;
            // 0x208a1c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A20u; }
        if (ctx->pc != 0x208A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A20u; }
        if (ctx->pc != 0x208A20u) { return; }
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x208a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a30: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x208A30u;
    SET_GPR_U32(ctx, 31, 0x208A38u);
    ctx->pc = 0x208A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A30u;
            // 0x208a34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A38u; }
        if (ctx->pc != 0x208A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A38u; }
        if (ctx->pc != 0x208A38u) { return; }
    }
    ctx->pc = 0x208A38u;
label_208a38:
    // 0x208a38: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x208A38u;
    SET_GPR_U32(ctx, 31, 0x208A40u);
    ctx->pc = 0x208A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A38u;
            // 0x208a3c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A40u; }
        if (ctx->pc != 0x208A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A40u; }
        if (ctx->pc != 0x208A40u) { return; }
    }
    ctx->pc = 0x208A40u;
label_208a40:
    // 0x208a40: 0xdf829180  ld          $v0, -0x6E80($gp)
    ctx->pc = 0x208a40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939008)));
    // 0x208a44: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x208a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x208a48: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x208a48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x208a4c: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x208a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208a50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208A50u;
    SET_GPR_U32(ctx, 31, 0x208A58u);
    ctx->pc = 0x208A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A50u;
            // 0x208a54: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A58u; }
        if (ctx->pc != 0x208A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A58u; }
        if (ctx->pc != 0x208A58u) { return; }
    }
    ctx->pc = 0x208A58u;
label_208a58:
    // 0x208a58: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x208a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x208a5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208A5Cu;
    SET_GPR_U32(ctx, 31, 0x208A64u);
    ctx->pc = 0x208A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A5Cu;
            // 0x208a60: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A64u; }
        if (ctx->pc != 0x208A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A64u; }
        if (ctx->pc != 0x208A64u) { return; }
    }
    ctx->pc = 0x208A64u;
label_208a64:
    // 0x208a64: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x208a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x208a68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x208a6c: 0x8fb501b4  lw          $s5, 0x1B4($sp)
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x208a70: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x208a74: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x208a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208a78: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x208a7c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x208A7Cu;
    SET_GPR_U32(ctx, 31, 0x208A84u);
    ctx->pc = 0x208A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A7Cu;
            // 0x208a80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A84u; }
        if (ctx->pc != 0x208A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A84u; }
        if (ctx->pc != 0x208A84u) { return; }
    }
    ctx->pc = 0x208A84u;
label_208a84:
    // 0x208a84: 0xc780820c  lwc1        $f0, -0x7DF4($gp)
    ctx->pc = 0x208a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208a88: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x208a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a94: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x208A94u;
    SET_GPR_U32(ctx, 31, 0x208A9Cu);
    ctx->pc = 0x208A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A94u;
            // 0x208a98: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A9Cu; }
        if (ctx->pc != 0x208A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A9Cu; }
        if (ctx->pc != 0x208A9Cu) { return; }
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208aa0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x208AA0u;
    SET_GPR_U32(ctx, 31, 0x208AA8u);
    ctx->pc = 0x208AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208AA0u;
            // 0x208aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AA8u; }
        if (ctx->pc != 0x208AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AA8u; }
        if (ctx->pc != 0x208AA8u) { return; }
    }
    ctx->pc = 0x208AA8u;
label_208aa8:
    // 0x208aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208aac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x208AACu;
    SET_GPR_U32(ctx, 31, 0x208AB4u);
    ctx->pc = 0x208AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208AACu;
            // 0x208ab0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AB4u; }
        if (ctx->pc != 0x208AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AB4u; }
        if (ctx->pc != 0x208AB4u) { return; }
    }
    ctx->pc = 0x208AB4u;
label_208ab4:
    // 0x208ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ab8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x208AB8u;
    SET_GPR_U32(ctx, 31, 0x208AC0u);
    ctx->pc = 0x208ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208AB8u;
            // 0x208abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AC0u; }
        if (ctx->pc != 0x208AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AC0u; }
        if (ctx->pc != 0x208AC0u) { return; }
    }
    ctx->pc = 0x208AC0u;
label_208ac0:
    // 0x208ac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208ac4:
    // 0x208ac4: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x208ac8: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x208acc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208ad0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208ad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208ad8: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x208ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x208adc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x208ADCu;
    {
        const bool branch_taken_0x208adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208ADCu;
            // 0x208ae0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208adc) {
            ctx->pc = 0x208B18u;
            goto label_208b18;
        }
    }
    ctx->pc = 0x208AE4u;
    // 0x208ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ae8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x208ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208aec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208af0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208AF0u;
    SET_GPR_U32(ctx, 31, 0x208AF8u);
    ctx->pc = 0x208AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208AF0u;
            // 0x208af4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AF8u; }
        if (ctx->pc != 0x208AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AF8u; }
        if (ctx->pc != 0x208AF8u) { return; }
    }
    ctx->pc = 0x208AF8u;
label_208af8:
    // 0x208af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208afc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x208afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x208b00: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x208B00u;
    SET_GPR_U32(ctx, 31, 0x208B08u);
    ctx->pc = 0x208B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208B00u;
            // 0x208b04: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B08u; }
        if (ctx->pc != 0x208B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B08u; }
        if (ctx->pc != 0x208B08u) { return; }
    }
    ctx->pc = 0x208B08u;
label_208b08:
    // 0x208b08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208b0c: 0x2841019a  slti        $at, $v0, 0x19A
    ctx->pc = 0x208b0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)410) ? 1 : 0);
    // 0x208b10: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x208B10u;
    {
        const bool branch_taken_0x208b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b10) {
            ctx->pc = 0x208B30u;
            goto label_208b30;
        }
    }
    ctx->pc = 0x208B18u;
label_208b18:
    // 0x208b18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208b20: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x208b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x208b24: 0x2463002e  addiu       $v1, $v1, 0x2E
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
    // 0x208b28: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x208B28u;
    {
        const bool branch_taken_0x208b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208B28u;
            // 0x208b2c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b28) {
            ctx->pc = 0x208AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208ac4;
        }
    }
    ctx->pc = 0x208B30u;
label_208b30:
    // 0x208b30: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x208B30u;
    SET_GPR_U32(ctx, 31, 0x208B38u);
    ctx->pc = 0x208B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208B30u;
            // 0x208b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B38u; }
        if (ctx->pc != 0x208B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B38u; }
        if (ctx->pc != 0x208B38u) { return; }
    }
    ctx->pc = 0x208B38u;
label_208b38:
    // 0x208b38: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x208b3c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x208b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x208b40: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x208B40u;
    {
        const bool branch_taken_0x208b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b40) {
            ctx->pc = 0x208C00u;
            goto label_208c00;
        }
    }
    ctx->pc = 0x208B48u;
    // 0x208b48: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x208b48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208b4c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x208B4Cu;
    SET_GPR_U32(ctx, 31, 0x208B54u);
    ctx->pc = 0x208B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208B4Cu;
            // 0x208b50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B54u; }
        if (ctx->pc != 0x208B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B54u; }
        if (ctx->pc != 0x208B54u) { return; }
    }
    ctx->pc = 0x208B54u;
label_208b54:
    // 0x208b54: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x208b58: 0x26a20006  addiu       $v0, $s5, 0x6
    ctx->pc = 0x208b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x208b5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b60: 0x24630023  addiu       $v1, $v1, 0x23
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x208b64: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x208b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x208b68: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x208b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_208b6c:
    // 0x208b6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208b70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208b74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208b78: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x208b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x208b7c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x208B7Cu;
    {
        const bool branch_taken_0x208b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b7c) {
            ctx->pc = 0x208BE8u;
            goto label_208be8;
        }
    }
    ctx->pc = 0x208B84u;
    // 0x208b84: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x208b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208b88: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x208b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x208b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b90: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x208b94: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x208b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x208b98: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x208b9c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x208b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x208ba0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x208ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208ba4: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x208BA4u;
    SET_GPR_U32(ctx, 31, 0x208BACu);
    ctx->pc = 0x208BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BA4u;
            // 0x208ba8: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BACu; }
        if (ctx->pc != 0x208BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BACu; }
        if (ctx->pc != 0x208BACu) { return; }
    }
    ctx->pc = 0x208BACu;
label_208bac:
    // 0x208bac: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x208bb0: 0xc07fc38  jal         func_1FF0E0
    ctx->pc = 0x208BB0u;
    SET_GPR_U32(ctx, 31, 0x208BB8u);
    ctx->pc = 0x208BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BB0u;
            // 0x208bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E0u;
    if (runtime->hasFunction(0x1FF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BB8u; }
        if (ctx->pc != 0x208BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCreateItemID__15CInventUserDataFi_0x1ff0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BB8u; }
        if (ctx->pc != 0x208BB8u) { return; }
    }
    ctx->pc = 0x208BB8u;
label_208bb8:
    // 0x208bb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x208bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bc0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x208bc4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x208bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x208bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bcc: 0x27a901bc  addiu       $t1, $sp, 0x1BC
    ctx->pc = 0x208bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x208bd0: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x208BD0u;
    SET_GPR_U32(ctx, 31, 0x208BD8u);
    ctx->pc = 0x208BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BD0u;
            // 0x208bd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BD8u; }
        if (ctx->pc != 0x208BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BD8u; }
        if (ctx->pc != 0x208BD8u) { return; }
    }
    ctx->pc = 0x208BD8u;
label_208bd8:
    // 0x208bd8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208bdc: 0x2841019a  slti        $at, $v0, 0x19A
    ctx->pc = 0x208bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)410) ? 1 : 0);
    // 0x208be0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x208BE0u;
    {
        const bool branch_taken_0x208be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208be0) {
            ctx->pc = 0x208C00u;
            goto label_208c00;
        }
    }
    ctx->pc = 0x208BE8u;
label_208be8:
    // 0x208be8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208bec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208bf0: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x208bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x208bf4: 0x2463002e  addiu       $v1, $v1, 0x2E
    ctx->pc = 0x208bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
    // 0x208bf8: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x208BF8u;
    {
        const bool branch_taken_0x208bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BF8u;
            // 0x208bfc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bf8) {
            ctx->pc = 0x208B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208b6c;
        }
    }
    ctx->pc = 0x208C00u;
label_208c00:
    // 0x208c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c04: 0xc08878c  jal         func_221E30
    ctx->pc = 0x208C04u;
    SET_GPR_U32(ctx, 31, 0x208C0Cu);
    ctx->pc = 0x208C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208C04u;
            // 0x208c08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C0Cu; }
        if (ctx->pc != 0x208C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C0Cu; }
        if (ctx->pc != 0x208C0Cu) { return; }
    }
    ctx->pc = 0x208C0Cu;
label_208c0c:
    // 0x208c0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x208c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208c10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x208c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208c14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x208c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208c18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x208c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208c1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208c28: 0x3e00008  jr          $ra
    ctx->pc = 0x208C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C28u;
            // 0x208c2c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208C30u;
}
