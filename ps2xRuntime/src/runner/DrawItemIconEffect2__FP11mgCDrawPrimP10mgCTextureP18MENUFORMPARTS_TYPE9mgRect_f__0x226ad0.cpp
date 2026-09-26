#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawItemIconEffect2__FP11mgCDrawPrimP10mgCTextureP18MENUFORMPARTS_TYPE9mgRect<f>
// Address: 0x226ad0 - 0x226df0
void DrawItemIconEffect2__FP11mgCDrawPrimP10mgCTextureP18MENUFORMPARTS_TYPE9mgRect_f__0x226ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawItemIconEffect2__FP11mgCDrawPrimP10mgCTextureP18MENUFORMPARTS_TYPE9mgRect_f__0x226ad0");
#endif

    switch (ctx->pc) {
        case 0x226b4cu: goto label_226b4c;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b88u: goto label_226b88;
        case 0x226b94u: goto label_226b94;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226becu: goto label_226bec;
        case 0x226c00u: goto label_226c00;
        case 0x226c20u: goto label_226c20;
        case 0x226c48u: goto label_226c48;
        case 0x226c54u: goto label_226c54;
        case 0x226c80u: goto label_226c80;
        case 0x226c90u: goto label_226c90;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cd0u: goto label_226cd0;
        case 0x226cdcu: goto label_226cdc;
        case 0x226d4cu: goto label_226d4c;
        case 0x226d5cu: goto label_226d5c;
        case 0x226d68u: goto label_226d68;
        case 0x226d7cu: goto label_226d7c;
        case 0x226d98u: goto label_226d98;
        case 0x226db0u: goto label_226db0;
        default: break;
    }

    ctx->pc = 0x226ad0u;

    // 0x226ad0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x226ad4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x226ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x226ad8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x226ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x226adc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x226adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x226ae0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x226ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x226ae4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x226ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x226ae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x226ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x226aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x226aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x226af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x226af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x226af4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x226af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226afc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b00: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x226b00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x226b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b08: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x226b08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x226b0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x226b10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x226b10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x226b14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x226b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x226b18: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x226b18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x226b1c: 0x10c000a4  beqz        $a2, . + 4 + (0xA4 << 2)
    ctx->pc = 0x226B1Cu;
    {
        const bool branch_taken_0x226b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B1Cu;
            // 0x226b20: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b1c) {
            ctx->pc = 0x226DB0u;
            goto label_226db0;
        }
    }
    ctx->pc = 0x226B24u;
    // 0x226b24: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x226b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x226b28: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x226B28u;
    {
        const bool branch_taken_0x226b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b28) {
            ctx->pc = 0x226DB0u;
            goto label_226db0;
        }
    }
    ctx->pc = 0x226B30u;
    // 0x226b30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x226b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226b34: 0x24720048  addiu       $s2, $v1, 0x48
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x226b38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226b3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x226b3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x226b40: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x226b40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x226b44: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x226B44u;
    SET_GPR_U32(ctx, 31, 0x226B4Cu);
    ctx->pc = 0x226B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B44u;
            // 0x226b48: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B4Cu; }
        if (ctx->pc != 0x226B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B4Cu; }
        if (ctx->pc != 0x226B4Cu) { return; }
    }
    ctx->pc = 0x226B4Cu;
label_226b4c:
    // 0x226b4c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x226b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226b50: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x226b54: 0xc7b700b4  lwc1        $f23, 0xB4($sp)
    ctx->pc = 0x226b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x226b58: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x226b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x226b5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x226b60: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x226b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x226b64: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x226b68: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x226b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x226b6c: 0xe4570000  swc1        $f23, 0x0($v0)
    ctx->pc = 0x226b6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x226b70: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x226b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x226b74: 0xc087de0  jal         func_21F780
    ctx->pc = 0x226B74u;
    SET_GPR_U32(ctx, 31, 0x226B7Cu);
    ctx->pc = 0x226B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B74u;
            // 0x226b78: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F780u;
    if (runtime->hasFunction(0x21F780u)) {
        auto targetFn = runtime->lookupFunction(0x21F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B7Cu; }
        if (ctx->pc != 0x226B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvMGIRECTtoINTtbl__F9mgRect_i_Pi_0x21f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B7Cu; }
        if (ctx->pc != 0x226B7Cu) { return; }
    }
    ctx->pc = 0x226B7Cu;
label_226b7c:
    // 0x226b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b80: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x226B80u;
    SET_GPR_U32(ctx, 31, 0x226B88u);
    ctx->pc = 0x226B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B80u;
            // 0x226b84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B88u; }
        if (ctx->pc != 0x226B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B88u; }
        if (ctx->pc != 0x226B88u) { return; }
    }
    ctx->pc = 0x226B88u;
label_226b88:
    // 0x226b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b8c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x226B8Cu;
    SET_GPR_U32(ctx, 31, 0x226B94u);
    ctx->pc = 0x226B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B8Cu;
            // 0x226b90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B94u; }
        if (ctx->pc != 0x226B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B94u; }
        if (ctx->pc != 0x226B94u) { return; }
    }
    ctx->pc = 0x226B94u;
label_226b94:
    // 0x226b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b98: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x226B98u;
    SET_GPR_U32(ctx, 31, 0x226BA0u);
    ctx->pc = 0x226B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B98u;
            // 0x226b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BA0u; }
        if (ctx->pc != 0x226BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BA0u; }
        if (ctx->pc != 0x226BA0u) { return; }
    }
    ctx->pc = 0x226BA0u;
label_226ba0:
    // 0x226ba0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x226ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226ba4:
    // 0x226ba4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x226ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226bac: 0x0  nop
    ctx->pc = 0x226bacu;
    // NOP
    // 0x226bb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226bb4: 0x0  nop
    ctx->pc = 0x226bb4u;
    // NOP
    // 0x226bb8: 0x45010077  bc1t        . + 4 + (0x77 << 2)
    ctx->pc = 0x226BB8u;
    {
        const bool branch_taken_0x226bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226bb8) {
            ctx->pc = 0x226D98u;
            goto label_226d98;
        }
    }
    ctx->pc = 0x226BC0u;
    // 0x226bc0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x226bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226bc4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x226bc8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x226bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226bcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x226bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226bd0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x226bd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226bd8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x226bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x226bdc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x226bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226be0: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x226be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x226be4: 0xc087df8  jal         func_21F7E0
    ctx->pc = 0x226BE4u;
    SET_GPR_U32(ctx, 31, 0x226BECu);
    ctx->pc = 0x226BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226BE4u;
            // 0x226be8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F7E0u;
    if (runtime->hasFunction(0x21F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x21F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BECu; }
        if (ctx->pc != 0x226BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvMGFRECTtoFLOATtbl__F9mgRect_f_Pf_0x21f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BECu; }
        if (ctx->pc != 0x226BECu) { return; }
    }
    ctx->pc = 0x226BECu;
label_226bec:
    // 0x226bec: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x226becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226bf0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x226bf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226bf8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226BF8u;
    SET_GPR_U32(ctx, 31, 0x226C00u);
    ctx->pc = 0x226BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226BF8u;
            // 0x226bfc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C00u; }
        if (ctx->pc != 0x226C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C00u; }
        if (ctx->pc != 0x226C00u) { return; }
    }
    ctx->pc = 0x226C00u;
label_226c00:
    // 0x226c00: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x226c00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226c04: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x226c08: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x226c08u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x226c0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226c10: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x226c14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x226c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226C18u;
    SET_GPR_U32(ctx, 31, 0x226C20u);
    ctx->pc = 0x226C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C18u;
            // 0x226c1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C20u; }
        if (ctx->pc != 0x226C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C20u; }
        if (ctx->pc != 0x226C20u) { return; }
    }
    ctx->pc = 0x226C20u;
label_226c20:
    // 0x226c20: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x226c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c24: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x226c24u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226c28: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x226c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x226c2c: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x226c2cu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x226c30: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x226c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x226c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226c38: 0xc6560018  lwc1        $f22, 0x18($s2)
    ctx->pc = 0x226c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x226c3c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x226c3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226c40: 0xc047a42  jal         func_11E908
    ctx->pc = 0x226C40u;
    SET_GPR_U32(ctx, 31, 0x226C48u);
    ctx->pc = 0x226C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C40u;
            // 0x226c44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C48u; }
        if (ctx->pc != 0x226C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C48u; }
        if (ctx->pc != 0x226C48u) { return; }
    }
    ctx->pc = 0x226C48u;
label_226c48:
    // 0x226c48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226c4c: 0xc047964  jal         func_11E590
    ctx->pc = 0x226C4Cu;
    SET_GPR_U32(ctx, 31, 0x226C54u);
    ctx->pc = 0x226C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C4Cu;
            // 0x226c50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C54u; }
        if (ctx->pc != 0x226C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C54u; }
        if (ctx->pc != 0x226C54u) { return; }
    }
    ctx->pc = 0x226C54u;
label_226c54:
    // 0x226c54: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x226c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226c58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x226c5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x226c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226c64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x226c64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x226c68: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x226c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c6c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x226c6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x226c70: 0x0  nop
    ctx->pc = 0x226c70u;
    // NOP
    // 0x226c74: 0x0  nop
    ctx->pc = 0x226c74u;
    // NOP
    // 0x226c78: 0xc047a42  jal         func_11E908
    ctx->pc = 0x226C78u;
    SET_GPR_U32(ctx, 31, 0x226C80u);
    ctx->pc = 0x226C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C78u;
            // 0x226c7c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C80u; }
        if (ctx->pc != 0x226C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C80u; }
        if (ctx->pc != 0x226C80u) { return; }
    }
    ctx->pc = 0x226C80u;
label_226c80:
    // 0x226c80: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x226c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226c88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226C88u;
    SET_GPR_U32(ctx, 31, 0x226C90u);
    ctx->pc = 0x226C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C88u;
            // 0x226c8c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C90u; }
        if (ctx->pc != 0x226C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C90u; }
        if (ctx->pc != 0x226C90u) { return; }
    }
    ctx->pc = 0x226C90u;
label_226c90:
    // 0x226c90: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x226c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x226c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x226c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x226c9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226ca0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226CA0u;
    SET_GPR_U32(ctx, 31, 0x226CA8u);
    ctx->pc = 0x226CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226CA0u;
            // 0x226ca4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CA8u; }
        if (ctx->pc != 0x226CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CA8u; }
        if (ctx->pc != 0x226CA8u) { return; }
    }
    ctx->pc = 0x226CA8u;
label_226ca8:
    // 0x226ca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226cac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x226cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cb0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x226cb4: 0x244205e0  addiu       $v0, $v0, 0x5E0
    ctx->pc = 0x226cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    // 0x226cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226cbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x226cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226cc0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x226cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226cc4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226cc8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x226CC8u;
    SET_GPR_U32(ctx, 31, 0x226CD0u);
    ctx->pc = 0x226CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226CC8u;
            // 0x226ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CD0u; }
        if (ctx->pc != 0x226CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CD0u; }
        if (ctx->pc != 0x226CD0u) { return; }
    }
    ctx->pc = 0x226CD0u;
label_226cd0:
    // 0x226cd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x226cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x226cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cd8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x226cd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226cdc:
    // 0x226cdc: 0x0  nop
    ctx->pc = 0x226cdcu;
    // NOP
    // 0x226ce0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x226ce4: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x226ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x226ce8: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x226cec: 0x449e1800  mtc1        $fp, $f3
    ctx->pc = 0x226cecu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x226cf0: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x226cf4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x226cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226cf8: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x226cfc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x226cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x226d00: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x226d00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x226d04: 0x4602b102  mul.s       $f4, $f22, $f2
    ctx->pc = 0x226d04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x226d08: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x226d08u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x226d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226d10: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x226d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x226d14: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x226d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x226d18: 0x4600b142  mul.s       $f5, $f22, $f0
    ctx->pc = 0x226d18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x226d1c: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x226d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x226d20: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x226d20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x226d24: 0x4614285d  msub.s      $f1, $f5, $f20
    ctx->pc = 0x226d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
    // 0x226d28: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x226d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x226d2c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x226d2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x226d30: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x226d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x226d34: 0x4615281c  madd.s      $f0, $f5, $f21
    ctx->pc = 0x226d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
    // 0x226d38: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x226d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x226d3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226d40: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x226d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226d44: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x226D44u;
    SET_GPR_U32(ctx, 31, 0x226D4Cu);
    ctx->pc = 0x226D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D44u;
            // 0x226d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D4Cu; }
        if (ctx->pc != 0x226D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D4Cu; }
        if (ctx->pc != 0x226D4Cu) { return; }
    }
    ctx->pc = 0x226D4Cu;
label_226d4c:
    // 0x226d4c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x226d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x226d50: 0x245100d0  addiu       $s1, $v0, 0xD0
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x226d54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226D54u;
    SET_GPR_U32(ctx, 31, 0x226D5Cu);
    ctx->pc = 0x226D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D54u;
            // 0x226d58: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D5Cu; }
        if (ctx->pc != 0x226D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D5Cu; }
        if (ctx->pc != 0x226D5Cu) { return; }
    }
    ctx->pc = 0x226D5Cu;
label_226d5c:
    // 0x226d5c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x226d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226d60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x226D60u;
    SET_GPR_U32(ctx, 31, 0x226D68u);
    ctx->pc = 0x226D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D60u;
            // 0x226d64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D68u; }
        if (ctx->pc != 0x226D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D68u; }
        if (ctx->pc != 0x226D68u) { return; }
    }
    ctx->pc = 0x226D68u;
label_226d68:
    // 0x226d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x226d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d74: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x226D74u;
    SET_GPR_U32(ctx, 31, 0x226D7Cu);
    ctx->pc = 0x226D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D74u;
            // 0x226d78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D7Cu; }
        if (ctx->pc != 0x226D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D7Cu; }
        if (ctx->pc != 0x226D7Cu) { return; }
    }
    ctx->pc = 0x226D7Cu;
label_226d7c:
    // 0x226d7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x226d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x226d80: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x226d84: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x226d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x226d88: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x226D88u;
    {
        const bool branch_taken_0x226d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226D88u;
            // 0x226d8c: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d88) {
            ctx->pc = 0x226CDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226cdc;
        }
    }
    ctx->pc = 0x226D90u;
    // 0x226d90: 0xc04d198  jal         func_134660
    ctx->pc = 0x226D90u;
    SET_GPR_U32(ctx, 31, 0x226D98u);
    ctx->pc = 0x226D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D90u;
            // 0x226d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134660u;
    if (runtime->hasFunction(0x134660u)) {
        auto targetFn = runtime->lookupFunction(0x134660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D98u; }
        if (ctx->pc != 0x226D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Flush__11mgCDrawPrimFv_0x134660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D98u; }
        if (ctx->pc != 0x226D98u) { return; }
    }
    ctx->pc = 0x226D98u;
label_226d98:
    // 0x226d98: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x226d98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x226d9c: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x226d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x226da0: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x226DA0u;
    {
        const bool branch_taken_0x226da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226DA0u;
            // 0x226da4: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226da0) {
            ctx->pc = 0x226BA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ba4;
        }
    }
    ctx->pc = 0x226DA8u;
    // 0x226da8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x226DA8u;
    SET_GPR_U32(ctx, 31, 0x226DB0u);
    ctx->pc = 0x226DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226DA8u;
            // 0x226dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DB0u; }
        if (ctx->pc != 0x226DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DB0u; }
        if (ctx->pc != 0x226DB0u) { return; }
    }
    ctx->pc = 0x226DB0u;
label_226db0:
    // 0x226db0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x226db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226db4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x226db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x226db8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x226db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226dbc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x226dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x226dc0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x226dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226dc4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x226dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x226dc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x226dc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226dcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x226dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226dd0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x226dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226dd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x226dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226dd8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x226dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226ddc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x226ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226de0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226de4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226de8: 0x3e00008  jr          $ra
    ctx->pc = 0x226DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226DE8u;
            // 0x226dec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226DF0u;
}
