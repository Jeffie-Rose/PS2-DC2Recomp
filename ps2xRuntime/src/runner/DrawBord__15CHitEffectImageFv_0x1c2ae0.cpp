#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBord__15CHitEffectImageFv
// Address: 0x1c2ae0 - 0x1c2d54
void DrawBord__15CHitEffectImageFv_0x1c2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBord__15CHitEffectImageFv_0x1c2ae0");
#endif

    switch (ctx->pc) {
        case 0x1c2b14u: goto label_1c2b14;
        case 0x1c2b24u: goto label_1c2b24;
        case 0x1c2b2cu: goto label_1c2b2c;
        case 0x1c2b38u: goto label_1c2b38;
        case 0x1c2b44u: goto label_1c2b44;
        case 0x1c2b50u: goto label_1c2b50;
        case 0x1c2b5cu: goto label_1c2b5c;
        case 0x1c2b68u: goto label_1c2b68;
        case 0x1c2b74u: goto label_1c2b74;
        case 0x1c2b80u: goto label_1c2b80;
        case 0x1c2b8cu: goto label_1c2b8c;
        case 0x1c2b98u: goto label_1c2b98;
        case 0x1c2bb8u: goto label_1c2bb8;
        case 0x1c2bd0u: goto label_1c2bd0;
        case 0x1c2c04u: goto label_1c2c04;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c68u: goto label_1c2c68;
        case 0x1c2c7cu: goto label_1c2c7c;
        case 0x1c2c88u: goto label_1c2c88;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2ca8u: goto label_1c2ca8;
        case 0x1c2cb8u: goto label_1c2cb8;
        case 0x1c2cc4u: goto label_1c2cc4;
        case 0x1c2cd4u: goto label_1c2cd4;
        case 0x1c2ce0u: goto label_1c2ce0;
        case 0x1c2cf0u: goto label_1c2cf0;
        case 0x1c2cfcu: goto label_1c2cfc;
        case 0x1c2d28u: goto label_1c2d28;
        default: break;
    }

    ctx->pc = 0x1c2ae0u;

    // 0x1c2ae0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1c2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1c2ae4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c2ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c2ae8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c2ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c2aec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c2aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c2af0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c2af4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c2af8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b0c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C2B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B14u);
    ctx->pc = 0x1C2B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B0Cu;
            // 0x1c2b10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B14u; }
        if (ctx->pc != 0x1C2B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B14u; }
        if (ctx->pc != 0x1C2B14u) { return; }
    }
    ctx->pc = 0x1C2B14u;
label_1c2b14:
    // 0x1c2b14: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b1c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B24u);
    ctx->pc = 0x1C2B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B1Cu;
            // 0x1c2b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B24u; }
        if (ctx->pc != 0x1C2B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B24u; }
        if (ctx->pc != 0x1C2B24u) { return; }
    }
    ctx->pc = 0x1C2B24u;
label_1c2b24:
    // 0x1c2b24: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C2B24u;
    SET_GPR_U32(ctx, 31, 0x1C2B2Cu);
    ctx->pc = 0x1C2B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B24u;
            // 0x1c2b28: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B2Cu; }
        if (ctx->pc != 0x1C2B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B2Cu; }
        if (ctx->pc != 0x1C2B2Cu) { return; }
    }
    ctx->pc = 0x1C2B2Cu;
label_1c2b2c:
    // 0x1c2b2c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b30: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C2B30u;
    SET_GPR_U32(ctx, 31, 0x1C2B38u);
    ctx->pc = 0x1C2B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B30u;
            // 0x1c2b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B38u; }
        if (ctx->pc != 0x1C2B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B38u; }
        if (ctx->pc != 0x1C2B38u) { return; }
    }
    ctx->pc = 0x1C2B38u;
label_1c2b38:
    // 0x1c2b38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b3c: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C2B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B44u);
    ctx->pc = 0x1C2B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B3Cu;
            // 0x1c2b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B44u; }
        if (ctx->pc != 0x1C2B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B44u; }
        if (ctx->pc != 0x1C2B44u) { return; }
    }
    ctx->pc = 0x1C2B44u;
label_1c2b44:
    // 0x1c2b44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b48: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C2B48u;
    SET_GPR_U32(ctx, 31, 0x1C2B50u);
    ctx->pc = 0x1C2B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B48u;
            // 0x1c2b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B50u; }
        if (ctx->pc != 0x1C2B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B50u; }
        if (ctx->pc != 0x1C2B50u) { return; }
    }
    ctx->pc = 0x1C2B50u;
label_1c2b50:
    // 0x1c2b50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b54: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C2B54u;
    SET_GPR_U32(ctx, 31, 0x1C2B5Cu);
    ctx->pc = 0x1C2B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B54u;
            // 0x1c2b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B5Cu; }
        if (ctx->pc != 0x1C2B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B5Cu; }
        if (ctx->pc != 0x1C2B5Cu) { return; }
    }
    ctx->pc = 0x1C2B5Cu;
label_1c2b5c:
    // 0x1c2b5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b60: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C2B60u;
    SET_GPR_U32(ctx, 31, 0x1C2B68u);
    ctx->pc = 0x1C2B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B60u;
            // 0x1c2b64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B68u; }
        if (ctx->pc != 0x1C2B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B68u; }
        if (ctx->pc != 0x1C2B68u) { return; }
    }
    ctx->pc = 0x1C2B68u;
label_1c2b68:
    // 0x1c2b68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b6c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C2B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B74u);
    ctx->pc = 0x1C2B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B6Cu;
            // 0x1c2b70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B74u; }
        if (ctx->pc != 0x1C2B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B74u; }
        if (ctx->pc != 0x1C2B74u) { return; }
    }
    ctx->pc = 0x1C2B74u;
label_1c2b74:
    // 0x1c2b74: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c2b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c2b78: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C2B78u;
    SET_GPR_U32(ctx, 31, 0x1C2B80u);
    ctx->pc = 0x1C2B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B78u;
            // 0x1c2b7c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B80u; }
        if (ctx->pc != 0x1C2B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B80u; }
        if (ctx->pc != 0x1C2B80u) { return; }
    }
    ctx->pc = 0x1C2B80u;
label_1c2b80:
    // 0x1c2b80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2b84: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1C2B84u;
    SET_GPR_U32(ctx, 31, 0x1C2B8Cu);
    ctx->pc = 0x1C2B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B84u;
            // 0x1c2b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B8Cu; }
        if (ctx->pc != 0x1C2B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B8Cu; }
        if (ctx->pc != 0x1C2B8Cu) { return; }
    }
    ctx->pc = 0x1C2B8Cu;
label_1c2b8c:
    // 0x1c2b8c: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c2b90: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C2B90u;
    {
        const bool branch_taken_0x1c2b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B90u;
            // 0x1c2b94: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b90) {
            ctx->pc = 0x1C2D0Cu;
            goto label_1c2d0c;
        }
    }
    ctx->pc = 0x1C2B98u;
label_1c2b98:
    // 0x1c2b98: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c2b9c: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C2B9Cu;
    {
        const bool branch_taken_0x1c2b9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c2b9c) {
            ctx->pc = 0x1C2D04u;
            goto label_1c2d04;
        }
    }
    ctx->pc = 0x1C2BA4u;
    // 0x1c2ba4: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1c2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ba8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c2bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2bb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C2BB0u;
    SET_GPR_U32(ctx, 31, 0x1C2BB8u);
    ctx->pc = 0x1C2BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BB0u;
            // 0x1c2bb4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BB8u; }
        if (ctx->pc != 0x1C2BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BB8u; }
        if (ctx->pc != 0x1C2BB8u) { return; }
    }
    ctx->pc = 0x1C2BB8u;
label_1c2bb8:
    // 0x1c2bb8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c2bbc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c2bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2bc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c2bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bc8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C2BC8u;
    SET_GPR_U32(ctx, 31, 0x1C2BD0u);
    ctx->pc = 0x1C2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BC8u;
            // 0x1c2bcc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BD0u; }
        if (ctx->pc != 0x1C2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BD0u; }
        if (ctx->pc != 0x1C2BD0u) { return; }
    }
    ctx->pc = 0x1C2BD0u;
label_1c2bd0:
    // 0x1c2bd0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1c2bd4: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1c2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2bd8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1c2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1c2bdc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1c2be0: 0x8e120050  lw          $s2, 0x50($s0)
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c2be4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1c2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c2be8: 0x8e130054  lw          $s3, 0x54($s0)
    ctx->pc = 0x1c2be8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1c2bec: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c2bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bf4: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c2bf8: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x1c2bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2bfc: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C2BFCu;
    SET_GPR_U32(ctx, 31, 0x1C2C04u);
    ctx->pc = 0x1C2C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BFCu;
            // 0x1c2c00: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C04u; }
        if (ctx->pc != 0x1C2C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C04u; }
        if (ctx->pc != 0x1C2C04u) { return; }
    }
    ctx->pc = 0x1C2C04u;
label_1c2c04:
    // 0x1c2c04: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C2C04u;
    {
        const bool branch_taken_0x1c2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c04) {
            ctx->pc = 0x1C2CFCu;
            goto label_1c2cfc;
        }
    }
    ctx->pc = 0x1C2C0Cu;
    // 0x1c2c0c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c2c10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2c14: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1c2c18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c2c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c1c: 0x8faa01e0  lw          $t2, 0x1E0($sp)
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c2c20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c2c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c24: 0x8fa901b4  lw          $t1, 0x1B4($sp)
    ctx->pc = 0x1c2c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1c2c28: 0x8fa801b8  lw          $t0, 0x1B8($sp)
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1c2c2c: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x1c2c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1c2c30: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x1c2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x1c2c34: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x1c2c38: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1c2c3c: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1c2c40: 0xafaa01c0  sw          $t2, 0x1C0($sp)
    ctx->pc = 0x1c2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 10));
    // 0x1c2c44: 0xafa901c4  sw          $t1, 0x1C4($sp)
    ctx->pc = 0x1c2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 9));
    // 0x1c2c48: 0xafa801c8  sw          $t0, 0x1C8($sp)
    ctx->pc = 0x1c2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 8));
    // 0x1c2c4c: 0xafa701cc  sw          $a3, 0x1CC($sp)
    ctx->pc = 0x1c2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 7));
    // 0x1c2c50: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x1c2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
    // 0x1c2c54: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2C54u;
    SET_GPR_U32(ctx, 31, 0x1C2C5Cu);
    ctx->pc = 0x1C2C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C54u;
            // 0x1c2c58: 0xafa201dc  sw          $v0, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C5Cu; }
        if (ctx->pc != 0x1C2C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C5Cu; }
        if (ctx->pc != 0x1C2C5Cu) { return; }
    }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2c60: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2C60u;
    SET_GPR_U32(ctx, 31, 0x1C2C68u);
    ctx->pc = 0x1C2C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C60u;
            // 0x1c2c64: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C68u; }
        if (ctx->pc != 0x1C2C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C68u; }
        if (ctx->pc != 0x1C2C68u) { return; }
    }
    ctx->pc = 0x1C2C68u;
label_1c2c68:
    // 0x1c2c68: 0x254a821  addu        $s5, $s2, $s4
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1c2c6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2c70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c2c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c74: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2C74u;
    SET_GPR_U32(ctx, 31, 0x1C2C7Cu);
    ctx->pc = 0x1C2C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C74u;
            // 0x1c2c78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C7Cu; }
        if (ctx->pc != 0x1C2C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C7Cu; }
        if (ctx->pc != 0x1C2C7Cu) { return; }
    }
    ctx->pc = 0x1C2C7Cu;
label_1c2c7c:
    // 0x1c2c7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2c80: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2C80u;
    SET_GPR_U32(ctx, 31, 0x1C2C88u);
    ctx->pc = 0x1C2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C80u;
            // 0x1c2c84: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C88u; }
        if (ctx->pc != 0x1C2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C88u; }
        if (ctx->pc != 0x1C2C88u) { return; }
    }
    ctx->pc = 0x1C2C88u;
label_1c2c88:
    // 0x1c2c88: 0x277a021  addu        $s4, $s3, $s7
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1c2c8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c2c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c94: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2C94u;
    SET_GPR_U32(ctx, 31, 0x1C2C9Cu);
    ctx->pc = 0x1C2C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C94u;
            // 0x1c2c98: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C9Cu; }
        if (ctx->pc != 0x1C2C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C9Cu; }
        if (ctx->pc != 0x1C2C9Cu) { return; }
    }
    ctx->pc = 0x1C2C9Cu;
label_1c2c9c:
    // 0x1c2c9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2ca0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2CA0u;
    SET_GPR_U32(ctx, 31, 0x1C2CA8u);
    ctx->pc = 0x1C2CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CA0u;
            // 0x1c2ca4: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CA8u; }
        if (ctx->pc != 0x1C2CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CA8u; }
        if (ctx->pc != 0x1C2CA8u) { return; }
    }
    ctx->pc = 0x1C2CA8u;
label_1c2ca8:
    // 0x1c2ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c2ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2cb0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2CB0u;
    SET_GPR_U32(ctx, 31, 0x1C2CB8u);
    ctx->pc = 0x1C2CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CB0u;
            // 0x1c2cb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CB8u; }
        if (ctx->pc != 0x1C2CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CB8u; }
        if (ctx->pc != 0x1C2CB8u) { return; }
    }
    ctx->pc = 0x1C2CB8u;
label_1c2cb8:
    // 0x1c2cb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2cbc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2CBCu;
    SET_GPR_U32(ctx, 31, 0x1C2CC4u);
    ctx->pc = 0x1C2CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CBCu;
            // 0x1c2cc0: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CC4u; }
        if (ctx->pc != 0x1C2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CC4u; }
        if (ctx->pc != 0x1C2CC4u) { return; }
    }
    ctx->pc = 0x1C2CC4u;
label_1c2cc4:
    // 0x1c2cc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c2cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cc8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2ccc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2CCCu;
    SET_GPR_U32(ctx, 31, 0x1C2CD4u);
    ctx->pc = 0x1C2CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CCCu;
            // 0x1c2cd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CD4u; }
        if (ctx->pc != 0x1C2CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CD4u; }
        if (ctx->pc != 0x1C2CD4u) { return; }
    }
    ctx->pc = 0x1C2CD4u;
label_1c2cd4:
    // 0x1c2cd4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2cd8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2CD8u;
    SET_GPR_U32(ctx, 31, 0x1C2CE0u);
    ctx->pc = 0x1C2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CD8u;
            // 0x1c2cdc: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE0u; }
        if (ctx->pc != 0x1C2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE0u; }
        if (ctx->pc != 0x1C2CE0u) { return; }
    }
    ctx->pc = 0x1C2CE0u;
label_1c2ce0:
    // 0x1c2ce0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c2ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ce4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c2ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ce8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C2CE8u;
    SET_GPR_U32(ctx, 31, 0x1C2CF0u);
    ctx->pc = 0x1C2CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CE8u;
            // 0x1c2cec: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CF0u; }
        if (ctx->pc != 0x1C2CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CF0u; }
        if (ctx->pc != 0x1C2CF0u) { return; }
    }
    ctx->pc = 0x1C2CF0u;
label_1c2cf0:
    // 0x1c2cf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2cf4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2CF4u;
    SET_GPR_U32(ctx, 31, 0x1C2CFCu);
    ctx->pc = 0x1C2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CF4u;
            // 0x1c2cf8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CFCu; }
        if (ctx->pc != 0x1C2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CFCu; }
        if (ctx->pc != 0x1C2CFCu) { return; }
    }
    ctx->pc = 0x1C2CFCu;
label_1c2cfc:
    // 0x1c2cfc: 0x0  nop
    ctx->pc = 0x1c2cfcu;
    // NOP
    // 0x1c2d00: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c2d04:
    // 0x1c2d04: 0x0  nop
    ctx->pc = 0x1c2d04u;
    // NOP
    // 0x1c2d08: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c2d08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1c2d0c:
    // 0x1c2d0c: 0x0  nop
    ctx->pc = 0x1c2d0cu;
    // NOP
    // 0x1c2d10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2d14: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1c2d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c2d18: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1C2D18u;
    {
        const bool branch_taken_0x1c2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d18) {
            ctx->pc = 0x1C2B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2b98;
        }
    }
    ctx->pc = 0x1C2D20u;
    // 0x1c2d20: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C2D20u;
    SET_GPR_U32(ctx, 31, 0x1C2D28u);
    ctx->pc = 0x1C2D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D20u;
            // 0x1c2d24: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D28u; }
        if (ctx->pc != 0x1C2D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D28u; }
        if (ctx->pc != 0x1C2D28u) { return; }
    }
    ctx->pc = 0x1C2D28u;
label_1c2d28:
    // 0x1c2d28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c2d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2d2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c2d2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2d30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c2d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2d34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2d38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D4Cu;
            // 0x1c2d50: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2D54u;
}
