#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii
// Address: 0x208c30 - 0x209068
void PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii_0x208c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii_0x208c30");
#endif

    switch (ctx->pc) {
        case 0x208cc0u: goto label_208cc0;
        case 0x208d38u: goto label_208d38;
        case 0x208d48u: goto label_208d48;
        case 0x208d54u: goto label_208d54;
        case 0x208d60u: goto label_208d60;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d9cu: goto label_208d9c;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e14u: goto label_208e14;
        case 0x208e38u: goto label_208e38;
        case 0x208e54u: goto label_208e54;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e88u: goto label_208e88;
        case 0x208ea0u: goto label_208ea0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208ec0u: goto label_208ec0;
        case 0x208eccu: goto label_208ecc;
        case 0x208ee4u: goto label_208ee4;
        case 0x208f04u: goto label_208f04;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f48u: goto label_208f48;
        case 0x208f50u: goto label_208f50;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f68u: goto label_208f68;
        case 0x208f74u: goto label_208f74;
        case 0x208f80u: goto label_208f80;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f98u: goto label_208f98;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe8u: goto label_208fe8;
        case 0x208ff4u: goto label_208ff4;
        case 0x20900cu: goto label_20900c;
        case 0x20901cu: goto label_20901c;
        case 0x209024u: goto label_209024;
        default: break;
    }

    ctx->pc = 0x208c30u;

    // 0x208c30: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x208c34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x208c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x208c38: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x208c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x208c3c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x208c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x208c40: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x208c40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c44: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x208c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x208c48: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x208c48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c4c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x208c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x208c50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x208c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x208c54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x208c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x208c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x208c5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x208c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x208c64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x208c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x208c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x208c6c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x208c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c70: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x208c70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x208c74: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x208c74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x208c78: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x208c78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x208c7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x208c7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x208c80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x208c80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x208c84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x208c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x208c88: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x208c88u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x208c8c: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x208c8cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x208c90: 0x126000e4  beqz        $s3, . + 4 + (0xE4 << 2)
    ctx->pc = 0x208C90u;
    {
        const bool branch_taken_0x208c90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C90u;
            // 0x208c94: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c90) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x208C98u;
    // 0x208c98: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x208c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x208c9c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x208c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x208ca0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x208ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208ca4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x208ca8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x208ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x208cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208cb0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x208cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x208cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208cb8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x208CB8u;
    SET_GPR_U32(ctx, 31, 0x208CC0u);
    ctx->pc = 0x208CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208CB8u;
            // 0x208cbc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CC0u; }
        if (ctx->pc != 0x208CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CC0u; }
        if (ctx->pc != 0x208CC0u) { return; }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x208cc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x208cc4: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
    // 0x208cc8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x208ccc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x208cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x208cd0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x208cd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208cd4: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x208cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208cd8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x208cd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x208cdc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x208cdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208ce4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x208ce4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x208ce8: 0x4601ce40  add.s       $f25, $f25, $f1
    ctx->pc = 0x208ce8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
    // 0x208cec: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x208cecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x208cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x208cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208cf4: 0x0  nop
    ctx->pc = 0x208cf4u;
    // NOP
    // 0x208cf8: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x208cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208cfc: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x208cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x208d00: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x208d00u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x208d04: 0x0  nop
    ctx->pc = 0x208d04u;
    // NOP
    // 0x208d08: 0x0  nop
    ctx->pc = 0x208d08u;
    // NOP
    // 0x208d0c: 0x450100c5  bc1t        . + 4 + (0xC5 << 2)
    ctx->pc = 0x208D0Cu;
    {
        const bool branch_taken_0x208d0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D0Cu;
            // 0x208d10: 0x4600c600  add.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d0c) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x208D14u;
    // 0x208d14: 0x4615c580  add.s       $f22, $f24, $f21
    ctx->pc = 0x208d14u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x208d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208d1c: 0x0  nop
    ctx->pc = 0x208d1cu;
    // NOP
    // 0x208d20: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x208d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208d24: 0x0  nop
    ctx->pc = 0x208d24u;
    // NOP
    // 0x208d28: 0x450100be  bc1t        . + 4 + (0xBE << 2)
    ctx->pc = 0x208D28u;
    {
        const bool branch_taken_0x208d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D28u;
            // 0x208d2c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d28) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x208D30u;
    // 0x208d30: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x208D30u;
    SET_GPR_U32(ctx, 31, 0x208D38u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D38u; }
        if (ctx->pc != 0x208D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D38u; }
        if (ctx->pc != 0x208D38u) { return; }
    }
    ctx->pc = 0x208D38u;
label_208d38:
    // 0x208d38: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x208d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x208d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208d40: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x208D40u;
    SET_GPR_U32(ctx, 31, 0x208D48u);
    ctx->pc = 0x208D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D40u;
            // 0x208d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D48u; }
        if (ctx->pc != 0x208D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D48u; }
        if (ctx->pc != 0x208D48u) { return; }
    }
    ctx->pc = 0x208D48u;
label_208d48:
    // 0x208d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d4c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x208D4Cu;
    SET_GPR_U32(ctx, 31, 0x208D54u);
    ctx->pc = 0x208D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D4Cu;
            // 0x208d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D54u; }
        if (ctx->pc != 0x208D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D54u; }
        if (ctx->pc != 0x208D54u) { return; }
    }
    ctx->pc = 0x208D54u;
label_208d54:
    // 0x208d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d58: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x208D58u;
    SET_GPR_U32(ctx, 31, 0x208D60u);
    ctx->pc = 0x208D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D58u;
            // 0x208d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D60u; }
        if (ctx->pc != 0x208D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D60u; }
        if (ctx->pc != 0x208D60u) { return; }
    }
    ctx->pc = 0x208D60u;
label_208d60:
    // 0x208d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d64: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x208D64u;
    SET_GPR_U32(ctx, 31, 0x208D6Cu);
    ctx->pc = 0x208D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D64u;
            // 0x208d68: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D6Cu; }
        if (ctx->pc != 0x208D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D6Cu; }
        if (ctx->pc != 0x208D6Cu) { return; }
    }
    ctx->pc = 0x208D6Cu;
label_208d6c:
    // 0x208d6c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x208d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x208d70: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x208d74: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x208d78: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x208d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x208d7c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x208d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x208d80: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x208d84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x208d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d88: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d8c: 0x1010  mfhi        $v0
    ctx->pc = 0x208d8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x208d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d94: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208D94u;
    SET_GPR_U32(ctx, 31, 0x208D9Cu);
    ctx->pc = 0x208D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D94u;
            // 0x208d98: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D9Cu; }
        if (ctx->pc != 0x208D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D9Cu; }
        if (ctx->pc != 0x208D9Cu) { return; }
    }
    ctx->pc = 0x208D9Cu;
label_208d9c:
    // 0x208d9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x208da0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x208da4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x208dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208db0: 0x4601c801  sub.s       $f0, $f25, $f1
    ctx->pc = 0x208db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x208db4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x208db4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x208db8: 0x4601c001  sub.s       $f0, $f24, $f1
    ctx->pc = 0x208db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x208dbc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208dc0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208DC0u;
    SET_GPR_U32(ctx, 31, 0x208DC8u);
    ctx->pc = 0x208DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208DC0u;
            // 0x208dc4: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DC8u; }
        if (ctx->pc != 0x208DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DC8u; }
        if (ctx->pc != 0x208DC8u) { return; }
    }
    ctx->pc = 0x208DC8u;
label_208dc8:
    // 0x208dc8: 0x4614c880  add.s       $f2, $f25, $f20
    ctx->pc = 0x208dc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[25], ctx->f[20]);
    // 0x208dcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x208dd0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x208dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x208dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208de0: 0x0  nop
    ctx->pc = 0x208de0u;
    // NOP
    // 0x208de4: 0x46020dc0  add.s       $f23, $f1, $f2
    ctx->pc = 0x208de4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x208de8: 0x46160d80  add.s       $f22, $f1, $f22
    ctx->pc = 0x208de8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x208dec: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x208decu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x208df0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208df4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208DF4u;
    SET_GPR_U32(ctx, 31, 0x208DFCu);
    ctx->pc = 0x208DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208DF4u;
            // 0x208df8: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DFCu; }
        if (ctx->pc != 0x208DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DFCu; }
        if (ctx->pc != 0x208DFCu) { return; }
    }
    ctx->pc = 0x208DFCu;
label_208dfc:
    // 0x208dfc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x208e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x208e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e08: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e0c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208E0Cu;
    SET_GPR_U32(ctx, 31, 0x208E14u);
    ctx->pc = 0x208E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E0Cu;
            // 0x208e10: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E14u; }
        if (ctx->pc != 0x208E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E14u; }
        if (ctx->pc != 0x208E14u) { return; }
    }
    ctx->pc = 0x208E14u;
label_208e14:
    // 0x208e14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x208e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208e20: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208e24: 0x4601c801  sub.s       $f0, $f25, $f1
    ctx->pc = 0x208e24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x208e28: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x208e28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x208e2c: 0x4601c001  sub.s       $f0, $f24, $f1
    ctx->pc = 0x208e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x208e30: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208E30u;
    SET_GPR_U32(ctx, 31, 0x208E38u);
    ctx->pc = 0x208E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E30u;
            // 0x208e34: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E38u; }
        if (ctx->pc != 0x208E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E38u; }
        if (ctx->pc != 0x208E38u) { return; }
    }
    ctx->pc = 0x208E38u;
label_208e38:
    // 0x208e38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x208e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208e44: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208e48: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x208e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x208e4c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208E4Cu;
    SET_GPR_U32(ctx, 31, 0x208E54u);
    ctx->pc = 0x208E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E4Cu;
            // 0x208e50: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E54u; }
        if (ctx->pc != 0x208E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E54u; }
        if (ctx->pc != 0x208E54u) { return; }
    }
    ctx->pc = 0x208E54u;
label_208e54:
    // 0x208e54: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x208e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x208e58: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x208e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x208e5c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x208E5Cu;
    {
        const bool branch_taken_0x208e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e5c) {
            ctx->pc = 0x208EECu;
            goto label_208eec;
        }
    }
    ctx->pc = 0x208E64u;
    // 0x208e64: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x208e68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x208E68u;
    {
        const bool branch_taken_0x208e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e68) {
            ctx->pc = 0x208EA8u;
            goto label_208ea8;
        }
    }
    ctx->pc = 0x208E70u;
    // 0x208e70: 0x8f949178  lw          $s4, -0x6E88($gp)
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x208e74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208E74u;
    SET_GPR_U32(ctx, 31, 0x208E7Cu);
    ctx->pc = 0x208E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E74u;
            // 0x208e78: 0xc68c0380  lwc1        $f12, 0x380($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E7Cu; }
        if (ctx->pc != 0x208E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E7Cu; }
        if (ctx->pc != 0x208E7Cu) { return; }
    }
    ctx->pc = 0x208E7Cu;
label_208e7c:
    // 0x208e7c: 0xc68c0384  lwc1        $f12, 0x384($s4)
    ctx->pc = 0x208e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208e80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208E80u;
    SET_GPR_U32(ctx, 31, 0x208E88u);
    ctx->pc = 0x208E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E80u;
            // 0x208e84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E88u; }
        if (ctx->pc != 0x208E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E88u; }
        if (ctx->pc != 0x208E88u) { return; }
    }
    ctx->pc = 0x208E88u;
label_208e88:
    // 0x208e88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x208e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e94: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x208e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208e98: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208E98u;
    SET_GPR_U32(ctx, 31, 0x208EA0u);
    ctx->pc = 0x208E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E98u;
            // 0x208e9c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EA0u; }
        if (ctx->pc != 0x208EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EA0u; }
        if (ctx->pc != 0x208EA0u) { return; }
    }
    ctx->pc = 0x208EA0u;
label_208ea0:
    // 0x208ea0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x208EA0u;
    {
        const bool branch_taken_0x208ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208EA0u;
            // 0x208ea4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ea0) {
            ctx->pc = 0x208F08u;
            goto label_208f08;
        }
    }
    ctx->pc = 0x208EA8u;
label_208ea8:
    // 0x208ea8: 0x8f949178  lw          $s4, -0x6E88($gp)
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x208eac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208EACu;
    SET_GPR_U32(ctx, 31, 0x208EB4u);
    ctx->pc = 0x208EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EACu;
            // 0x208eb0: 0xc68c0370  lwc1        $f12, 0x370($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB4u; }
        if (ctx->pc != 0x208EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB4u; }
        if (ctx->pc != 0x208EB4u) { return; }
    }
    ctx->pc = 0x208EB4u;
label_208eb4:
    // 0x208eb4: 0xc68c0374  lwc1        $f12, 0x374($s4)
    ctx->pc = 0x208eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208eb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208EB8u;
    SET_GPR_U32(ctx, 31, 0x208EC0u);
    ctx->pc = 0x208EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EB8u;
            // 0x208ebc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EC0u; }
        if (ctx->pc != 0x208EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EC0u; }
        if (ctx->pc != 0x208EC0u) { return; }
    }
    ctx->pc = 0x208EC0u;
label_208ec0:
    // 0x208ec0: 0xc68c0378  lwc1        $f12, 0x378($s4)
    ctx->pc = 0x208ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208ec4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208EC4u;
    SET_GPR_U32(ctx, 31, 0x208ECCu);
    ctx->pc = 0x208EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EC4u;
            // 0x208ec8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208ECCu; }
        if (ctx->pc != 0x208ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208ECCu; }
        if (ctx->pc != 0x208ECCu) { return; }
    }
    ctx->pc = 0x208ECCu;
label_208ecc:
    // 0x208ecc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x208eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x208ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x208ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208edc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208EDCu;
    SET_GPR_U32(ctx, 31, 0x208EE4u);
    ctx->pc = 0x208EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EDCu;
            // 0x208ee0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EE4u; }
        if (ctx->pc != 0x208EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EE4u; }
        if (ctx->pc != 0x208EE4u) { return; }
    }
    ctx->pc = 0x208EE4u;
label_208ee4:
    // 0x208ee4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208EE4u;
    {
        const bool branch_taken_0x208ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ee4) {
            ctx->pc = 0x208F04u;
            goto label_208f04;
        }
    }
    ctx->pc = 0x208EECu;
label_208eec:
    // 0x208eec: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x208eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x208ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x208ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ef8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208efc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208EFCu;
    SET_GPR_U32(ctx, 31, 0x208F04u);
    ctx->pc = 0x208F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EFCu;
            // 0x208f00: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F04u; }
        if (ctx->pc != 0x208F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F04u; }
        if (ctx->pc != 0x208F04u) { return; }
    }
    ctx->pc = 0x208F04u;
label_208f04:
    // 0x208f04: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_208f08:
    // 0x208f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x208f0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x208f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f18: 0x4602c041  sub.s       $f1, $f24, $f2
    ctx->pc = 0x208f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x208f1c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x208f1cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208f20: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208f24: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208F24u;
    SET_GPR_U32(ctx, 31, 0x208F2Cu);
    ctx->pc = 0x208F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F24u;
            // 0x208f28: 0x4602cb01  sub.s       $f12, $f25, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F2Cu; }
        if (ctx->pc != 0x208F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F2Cu; }
        if (ctx->pc != 0x208F2Cu) { return; }
    }
    ctx->pc = 0x208F2Cu;
label_208f2c:
    // 0x208f2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x208f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f38: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x208f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x208f3c: 0x4600bb01  sub.s       $f12, $f23, $f0
    ctx->pc = 0x208f3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x208f40: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x208F40u;
    SET_GPR_U32(ctx, 31, 0x208F48u);
    ctx->pc = 0x208F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F40u;
            // 0x208f44: 0x4600b341  sub.s       $f13, $f22, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F48u; }
        if (ctx->pc != 0x208F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F48u; }
        if (ctx->pc != 0x208F48u) { return; }
    }
    ctx->pc = 0x208F48u;
label_208f48:
    // 0x208f48: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x208F48u;
    SET_GPR_U32(ctx, 31, 0x208F50u);
    ctx->pc = 0x208F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F48u;
            // 0x208f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F50u; }
        if (ctx->pc != 0x208F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F50u; }
        if (ctx->pc != 0x208F50u) { return; }
    }
    ctx->pc = 0x208F50u;
label_208f50:
    // 0x208f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f54: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x208F54u;
    SET_GPR_U32(ctx, 31, 0x208F5Cu);
    ctx->pc = 0x208F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F54u;
            // 0x208f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F5Cu; }
        if (ctx->pc != 0x208F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F5Cu; }
        if (ctx->pc != 0x208F5Cu) { return; }
    }
    ctx->pc = 0x208F5Cu;
label_208f5c:
    // 0x208f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f60: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x208F60u;
    SET_GPR_U32(ctx, 31, 0x208F68u);
    ctx->pc = 0x208F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F60u;
            // 0x208f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F68u; }
        if (ctx->pc != 0x208F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F68u; }
        if (ctx->pc != 0x208F68u) { return; }
    }
    ctx->pc = 0x208F68u;
label_208f68:
    // 0x208f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f6c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x208F6Cu;
    SET_GPR_U32(ctx, 31, 0x208F74u);
    ctx->pc = 0x208F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F6Cu;
            // 0x208f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F74u; }
        if (ctx->pc != 0x208F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F74u; }
        if (ctx->pc != 0x208F74u) { return; }
    }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f78: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x208F78u;
    SET_GPR_U32(ctx, 31, 0x208F80u);
    ctx->pc = 0x208F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F78u;
            // 0x208f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F80u; }
        if (ctx->pc != 0x208F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F80u; }
        if (ctx->pc != 0x208F80u) { return; }
    }
    ctx->pc = 0x208F80u;
label_208f80:
    // 0x208f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x208F84u;
    SET_GPR_U32(ctx, 31, 0x208F8Cu);
    ctx->pc = 0x208F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F84u;
            // 0x208f88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F8Cu; }
        if (ctx->pc != 0x208F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F8Cu; }
        if (ctx->pc != 0x208F8Cu) { return; }
    }
    ctx->pc = 0x208F8Cu;
label_208f8c:
    // 0x208f8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x208f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f90: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x208F90u;
    SET_GPR_U32(ctx, 31, 0x208F98u);
    ctx->pc = 0x208F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F90u;
            // 0x208f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F98u; }
        if (ctx->pc != 0x208F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F98u; }
        if (ctx->pc != 0x208F98u) { return; }
    }
    ctx->pc = 0x208F98u;
label_208f98:
    // 0x208f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f9c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x208f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fa0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x208fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fa4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x208fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fa8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x208FA8u;
    SET_GPR_U32(ctx, 31, 0x208FB0u);
    ctx->pc = 0x208FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FA8u;
            // 0x208fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FB0u; }
        if (ctx->pc != 0x208FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FB0u; }
        if (ctx->pc != 0x208FB0u) { return; }
    }
    ctx->pc = 0x208FB0u;
label_208fb0:
    // 0x208fb0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x208fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x208fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fb8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x208fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x208fbc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x208fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x208fc0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x208FC0u;
    SET_GPR_U32(ctx, 31, 0x208FC8u);
    ctx->pc = 0x208FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FC0u;
            // 0x208fc4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FC8u; }
        if (ctx->pc != 0x208FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FC8u; }
        if (ctx->pc != 0x208FC8u) { return; }
    }
    ctx->pc = 0x208FC8u;
label_208fc8:
    // 0x208fc8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208FC8u;
    SET_GPR_U32(ctx, 31, 0x208FD0u);
    ctx->pc = 0x208FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FC8u;
            // 0x208fcc: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FD0u; }
        if (ctx->pc != 0x208FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FD0u; }
        if (ctx->pc != 0x208FD0u) { return; }
    }
    ctx->pc = 0x208FD0u;
label_208fd0:
    // 0x208fd0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x208fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x208fd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208FD4u;
    SET_GPR_U32(ctx, 31, 0x208FDCu);
    ctx->pc = 0x208FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FD4u;
            // 0x208fd8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FDCu; }
        if (ctx->pc != 0x208FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FDCu; }
        if (ctx->pc != 0x208FDCu) { return; }
    }
    ctx->pc = 0x208FDCu;
label_208fdc:
    // 0x208fdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x208fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x208fe0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208FE0u;
    SET_GPR_U32(ctx, 31, 0x208FE8u);
    ctx->pc = 0x208FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FE0u;
            // 0x208fe4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FE8u; }
        if (ctx->pc != 0x208FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FE8u; }
        if (ctx->pc != 0x208FE8u) { return; }
    }
    ctx->pc = 0x208FE8u;
label_208fe8:
    // 0x208fe8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x208fe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x208fec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208FECu;
    SET_GPR_U32(ctx, 31, 0x208FF4u);
    ctx->pc = 0x208FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208FECu;
            // 0x208ff0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FF4u; }
        if (ctx->pc != 0x208FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208FF4u; }
        if (ctx->pc != 0x208FF4u) { return; }
    }
    ctx->pc = 0x208FF4u;
label_208ff4:
    // 0x208ff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x208ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ff8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x208ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ffc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x208ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209000: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x209000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209004: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x209004u;
    SET_GPR_U32(ctx, 31, 0x20900Cu);
    ctx->pc = 0x209008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209004u;
            // 0x209008: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20900Cu; }
        if (ctx->pc != 0x20900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20900Cu; }
        if (ctx->pc != 0x20900Cu) { return; }
    }
    ctx->pc = 0x20900Cu;
label_20900c:
    // 0x20900c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209010: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x209010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209014: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x209014u;
    SET_GPR_U32(ctx, 31, 0x20901Cu);
    ctx->pc = 0x209018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209014u;
            // 0x209018: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20901Cu; }
        if (ctx->pc != 0x20901Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20901Cu; }
        if (ctx->pc != 0x20901Cu) { return; }
    }
    ctx->pc = 0x20901Cu;
label_20901c:
    // 0x20901c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x20901Cu;
    SET_GPR_U32(ctx, 31, 0x209024u);
    ctx->pc = 0x209020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20901Cu;
            // 0x209020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209024u; }
        if (ctx->pc != 0x209024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209024u; }
        if (ctx->pc != 0x209024u) { return; }
    }
    ctx->pc = 0x209024u;
label_209024:
    // 0x209024: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x209028: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x209028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20902c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x20902cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x209030: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x209030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209034: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x209034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x209038: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x209038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20903c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20903cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x209040: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x209040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x209044: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x209044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x209048: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x209048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20904c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20904cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x209050: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x209050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209054: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x209054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209058: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x209058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20905c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209060: 0x3e00008  jr          $ra
    ctx->pc = 0x209060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209060u;
            // 0x209064: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209068u;
}
