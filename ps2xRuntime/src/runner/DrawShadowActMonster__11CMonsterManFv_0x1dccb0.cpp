#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawShadowActMonster__11CMonsterManFv
// Address: 0x1dccb0 - 0x1dce8c
void DrawShadowActMonster__11CMonsterManFv_0x1dccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawShadowActMonster__11CMonsterManFv_0x1dccb0");
#endif

    switch (ctx->pc) {
        case 0x1dccb0u: goto label_1dccb0;
        case 0x1dccb4u: goto label_1dccb4;
        case 0x1dccb8u: goto label_1dccb8;
        case 0x1dccbcu: goto label_1dccbc;
        case 0x1dccc0u: goto label_1dccc0;
        case 0x1dccc4u: goto label_1dccc4;
        case 0x1dccc8u: goto label_1dccc8;
        case 0x1dccccu: goto label_1dcccc;
        case 0x1dccd0u: goto label_1dccd0;
        case 0x1dccd4u: goto label_1dccd4;
        case 0x1dccd8u: goto label_1dccd8;
        case 0x1dccdcu: goto label_1dccdc;
        case 0x1dcce0u: goto label_1dcce0;
        case 0x1dcce4u: goto label_1dcce4;
        case 0x1dcce8u: goto label_1dcce8;
        case 0x1dccecu: goto label_1dccec;
        case 0x1dccf0u: goto label_1dccf0;
        case 0x1dccf4u: goto label_1dccf4;
        case 0x1dccf8u: goto label_1dccf8;
        case 0x1dccfcu: goto label_1dccfc;
        case 0x1dcd00u: goto label_1dcd00;
        case 0x1dcd04u: goto label_1dcd04;
        case 0x1dcd08u: goto label_1dcd08;
        case 0x1dcd0cu: goto label_1dcd0c;
        case 0x1dcd10u: goto label_1dcd10;
        case 0x1dcd14u: goto label_1dcd14;
        case 0x1dcd18u: goto label_1dcd18;
        case 0x1dcd1cu: goto label_1dcd1c;
        case 0x1dcd20u: goto label_1dcd20;
        case 0x1dcd24u: goto label_1dcd24;
        case 0x1dcd28u: goto label_1dcd28;
        case 0x1dcd2cu: goto label_1dcd2c;
        case 0x1dcd30u: goto label_1dcd30;
        case 0x1dcd34u: goto label_1dcd34;
        case 0x1dcd38u: goto label_1dcd38;
        case 0x1dcd3cu: goto label_1dcd3c;
        case 0x1dcd40u: goto label_1dcd40;
        case 0x1dcd44u: goto label_1dcd44;
        case 0x1dcd48u: goto label_1dcd48;
        case 0x1dcd4cu: goto label_1dcd4c;
        case 0x1dcd50u: goto label_1dcd50;
        case 0x1dcd54u: goto label_1dcd54;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd60u: goto label_1dcd60;
        case 0x1dcd64u: goto label_1dcd64;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd70u: goto label_1dcd70;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcd78u: goto label_1dcd78;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd80u: goto label_1dcd80;
        case 0x1dcd84u: goto label_1dcd84;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcd8cu: goto label_1dcd8c;
        case 0x1dcd90u: goto label_1dcd90;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        case 0x1dce38u: goto label_1dce38;
        case 0x1dce3cu: goto label_1dce3c;
        case 0x1dce40u: goto label_1dce40;
        case 0x1dce44u: goto label_1dce44;
        case 0x1dce48u: goto label_1dce48;
        case 0x1dce4cu: goto label_1dce4c;
        case 0x1dce50u: goto label_1dce50;
        case 0x1dce54u: goto label_1dce54;
        case 0x1dce58u: goto label_1dce58;
        case 0x1dce5cu: goto label_1dce5c;
        case 0x1dce60u: goto label_1dce60;
        case 0x1dce64u: goto label_1dce64;
        case 0x1dce68u: goto label_1dce68;
        case 0x1dce6cu: goto label_1dce6c;
        case 0x1dce70u: goto label_1dce70;
        case 0x1dce74u: goto label_1dce74;
        case 0x1dce78u: goto label_1dce78;
        case 0x1dce7cu: goto label_1dce7c;
        case 0x1dce80u: goto label_1dce80;
        case 0x1dce84u: goto label_1dce84;
        case 0x1dce88u: goto label_1dce88;
        default: break;
    }

    ctx->pc = 0x1dccb0u;

label_1dccb0:
    // 0x1dccb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1dccb4:
    // 0x1dccb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1dccb8:
    // 0x1dccb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dccbc:
    // 0x1dccbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dccc0:
    // 0x1dccc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dccc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dccc4:
    // 0x1dccc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dccc8:
    // 0x1dccc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcccc:
    // 0x1dcccc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dccccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dccd0:
    // 0x1dccd0: 0xc0a0f58  jal         func_283D60
label_1dccd4:
    if (ctx->pc == 0x1DCCD4u) {
        ctx->pc = 0x1DCCD4u;
            // 0x1dccd4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1DCCD8u;
        goto label_1dccd8;
    }
    ctx->pc = 0x1DCCD0u;
    SET_GPR_U32(ctx, 31, 0x1DCCD8u);
    ctx->pc = 0x1DCCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCD0u;
            // 0x1dccd4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD8u; }
        if (ctx->pc != 0x1DCCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD8u; }
        if (ctx->pc != 0x1DCCD8u) { return; }
    }
    ctx->pc = 0x1DCCD8u;
label_1dccd8:
    // 0x1dccd8: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1dccdc:
    if (ctx->pc == 0x1DCCDCu) {
        ctx->pc = 0x1DCCDCu;
            // 0x1dccdc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1DCCE0u;
        goto label_1dcce0;
    }
    ctx->pc = 0x1DCCD8u;
    {
        const bool branch_taken_0x1dccd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCD8u;
            // 0x1dccdc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccd8) {
            ctx->pc = 0x1DCE70u;
            goto label_1dce70;
        }
    }
    ctx->pc = 0x1DCCE0u;
label_1dcce0:
    // 0x1dcce0: 0xc050dd8  jal         func_143760
label_1dcce4:
    if (ctx->pc == 0x1DCCE4u) {
        ctx->pc = 0x1DCCE4u;
            // 0x1dcce4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DCCE8u;
        goto label_1dcce8;
    }
    ctx->pc = 0x1DCCE0u;
    SET_GPR_U32(ctx, 31, 0x1DCCE8u);
    ctx->pc = 0x1DCCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCE0u;
            // 0x1dcce4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCE8u; }
        if (ctx->pc != 0x1DCCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCE8u; }
        if (ctx->pc != 0x1DCCE8u) { return; }
    }
    ctx->pc = 0x1DCCE8u;
label_1dcce8:
    // 0x1dcce8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_1dccec:
    // 0x1dccec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dccf0:
    // 0x1dccf0: 0x24638900  addiu       $v1, $v1, -0x7700
    ctx->pc = 0x1dccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936832));
label_1dccf4:
    // 0x1dccf4: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x1dccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1dccf8:
    // 0x1dccf8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1dccf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1dccfc:
    // 0x1dccfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dccfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dcd00:
    // 0x1dcd00: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1dcd00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1dcd04:
    // 0x1dcd04: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1dcd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dcd08:
    // 0x1dcd08: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1dcd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dcd0c:
    // 0x1dcd0c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1dcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcd10:
    // 0x1dcd10: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x1dcd10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1dcd14:
    // 0x1dcd14: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x1dcd14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1dcd18:
    // 0x1dcd18: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x1dcd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1dcd1c:
    // 0x1dcd1c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1dcd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcd20:
    // 0x1dcd20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcd24:
    // 0x1dcd24: 0x0  nop
    ctx->pc = 0x1dcd24u;
    // NOP
label_1dcd28:
    // 0x1dcd28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dcd2c:
    if (ctx->pc == 0x1DCD2Cu) {
        ctx->pc = 0x1DCD30u;
        goto label_1dcd30;
    }
    ctx->pc = 0x1DCD28u;
    {
        const bool branch_taken_0x1dcd28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcd28) {
            ctx->pc = 0x1DCD34u;
            goto label_1dcd34;
        }
    }
    ctx->pc = 0x1DCD30u;
label_1dcd30:
    // 0x1dcd30: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1dcd30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1dcd34:
    // 0x1dcd34: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1dcd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_1dcd38:
    // 0x1dcd38: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1dcd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1dcd3c:
    // 0x1dcd3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dcd3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dcd40:
    // 0x1dcd40: 0x0  nop
    ctx->pc = 0x1dcd40u;
    // NOP
label_1dcd44:
    // 0x1dcd44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcd44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcd48:
    // 0x1dcd48: 0x0  nop
    ctx->pc = 0x1dcd48u;
    // NOP
label_1dcd4c:
    // 0x1dcd4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dcd50:
    if (ctx->pc == 0x1DCD50u) {
        ctx->pc = 0x1DCD50u;
            // 0x1dcd50: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x1DCD54u;
        goto label_1dcd54;
    }
    ctx->pc = 0x1DCD4Cu;
    {
        const bool branch_taken_0x1dcd4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD4Cu;
            // 0x1dcd50: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd4c) {
            ctx->pc = 0x1DCD58u;
            goto label_1dcd58;
        }
    }
    ctx->pc = 0x1DCD54u;
label_1dcd54:
    // 0x1dcd54: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dcd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1dcd58:
    // 0x1dcd58: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1dcd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_1dcd5c:
    // 0x1dcd5c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dcd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dcd60:
    // 0x1dcd60: 0x2463d120  addiu       $v1, $v1, -0x2EE0
    ctx->pc = 0x1dcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955296));
label_1dcd64:
    // 0x1dcd64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dcd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd68:
    // 0x1dcd68: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1dcd68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1dcd6c:
    // 0x1dcd6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dcd6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd70:
    // 0x1dcd70: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1dcd70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1dcd74:
    // 0x1dcd74: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1dcd78:
    // 0x1dcd78: 0x8c660484  lw          $a2, 0x484($v1)
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dcd7c:
    // 0x1dcd7c: 0x10c00038  beqz        $a2, . + 4 + (0x38 << 2)
label_1dcd80:
    if (ctx->pc == 0x1DCD80u) {
        ctx->pc = 0x1DCD80u;
            // 0x1dcd80: 0x24720484  addiu       $s2, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->pc = 0x1DCD84u;
        goto label_1dcd84;
    }
    ctx->pc = 0x1DCD7Cu;
    {
        const bool branch_taken_0x1dcd7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD7Cu;
            // 0x1dcd80: 0x24720484  addiu       $s2, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd7c) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCD84u;
label_1dcd84:
    // 0x1dcd84: 0x84c4068a  lh          $a0, 0x68A($a2)
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1674)));
label_1dcd88:
    // 0x1dcd88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dcd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcd8c:
    // 0x1dcd8c: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_1dcd90:
    if (ctx->pc == 0x1DCD90u) {
        ctx->pc = 0x1DCD94u;
        goto label_1dcd94;
    }
    ctx->pc = 0x1DCD8Cu;
    {
        const bool branch_taken_0x1dcd8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dcd8c) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCD94u;
label_1dcd94:
    // 0x1dcd94: 0x84c30730  lh          $v1, 0x730($a2)
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1840)));
label_1dcd98:
    // 0x1dcd98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcd9c:
    // 0x1dcd9c: 0x10650030  beq         $v1, $a1, . + 4 + (0x30 << 2)
label_1dcda0:
    if (ctx->pc == 0x1DCDA0u) {
        ctx->pc = 0x1DCDA4u;
        goto label_1dcda4;
    }
    ctx->pc = 0x1DCD9Cu;
    {
        const bool branch_taken_0x1dcd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1dcd9c) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCDA4u;
label_1dcda4:
    // 0x1dcda4: 0xc4c012fc  lwc1        $f0, 0x12FC($a2)
    ctx->pc = 0x1dcda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcda8:
    // 0x1dcda8: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1dcda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1dcdac:
    // 0x1dcdac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1dcdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1dcdb0:
    // 0x1dcdb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcdb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dcdb4:
    // 0x1dcdb4: 0xc4c112f4  lwc1        $f1, 0x12F4($a2)
    ctx->pc = 0x1dcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcdb8:
    // 0x1dcdb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dcdb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1dcdbc:
    // 0x1dcdbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcdbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcdc0:
    // 0x1dcdc0: 0x0  nop
    ctx->pc = 0x1dcdc0u;
    // NOP
label_1dcdc4:
    // 0x1dcdc4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1dcdc8:
    if (ctx->pc == 0x1DCDC8u) {
        ctx->pc = 0x1DCDC8u;
            // 0x1dcdc8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DCDCCu;
        goto label_1dcdcc;
    }
    ctx->pc = 0x1DCDC4u;
    {
        const bool branch_taken_0x1dcdc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDC4u;
            // 0x1dcdc8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdc4) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCDCCu;
label_1dcdcc:
    // 0x1dcdcc: 0x84c412f0  lh          $a0, 0x12F0($a2)
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4848)));
label_1dcdd0:
    // 0x1dcdd0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_1dcdd4:
    // 0x1dcdd4: 0x84230080  lh          $v1, 0x80($at)
    ctx->pc = 0x1dcdd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 128)));
label_1dcdd8:
    // 0x1dcdd8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1dcdd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dcddc:
    // 0x1dcddc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1dcde0:
    if (ctx->pc == 0x1DCDE0u) {
        ctx->pc = 0x1DCDE4u;
        goto label_1dcde4;
    }
    ctx->pc = 0x1DCDDCu;
    {
        const bool branch_taken_0x1dcddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcddc) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCDE4u;
label_1dcde4:
    // 0x1dcde4: 0xc4c00100  lwc1        $f0, 0x100($a2)
    ctx->pc = 0x1dcde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcde8:
    // 0x1dcde8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1dcde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcdec:
    // 0x1dcdec: 0x0  nop
    ctx->pc = 0x1dcdecu;
    // NOP
label_1dcdf0:
    // 0x1dcdf0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_1dcdf4:
    if (ctx->pc == 0x1DCDF4u) {
        ctx->pc = 0x1DCDF8u;
        goto label_1dcdf8;
    }
    ctx->pc = 0x1DCDF0u;
    {
        const bool branch_taken_0x1dcdf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcdf0) {
            ctx->pc = 0x1DCE60u;
            goto label_1dce60;
        }
    }
    ctx->pc = 0x1DCDF8u;
label_1dcdf8:
    // 0x1dcdf8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1dcdfc:
    // 0x1dcdfc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1dce00:
    // 0x1dce00: 0x2442d130  addiu       $v0, $v0, -0x2ED0
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
label_1dce04:
    // 0x1dce04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dce04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dce08:
    // 0x1dce08: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1dce08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1dce0c:
    // 0x1dce0c: 0xc05d3d4  jal         func_174F50
label_1dce10:
    if (ctx->pc == 0x1DCE10u) {
        ctx->pc = 0x1DCE10u;
            // 0x1dce10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1DCE14u;
        goto label_1dce14;
    }
    ctx->pc = 0x1DCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE14u);
    ctx->pc = 0x1DCE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE0Cu;
            // 0x1dce10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE14u; }
        if (ctx->pc != 0x1DCE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE14u; }
        if (ctx->pc != 0x1DCE14u) { return; }
    }
    ctx->pc = 0x1DCE14u;
label_1dce14:
    // 0x1dce14: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1dce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dce18:
    // 0x1dce18: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1dce1c:
    // 0x1dce1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dce1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dce20:
    // 0x1dce20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dce24:
    // 0x1dce24: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1dce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1dce28:
    // 0x1dce28: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dce2c:
    // 0x1dce2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dce2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dce30:
    // 0x1dce30: 0xc050e30  jal         func_1438C0
label_1dce34:
    if (ctx->pc == 0x1DCE34u) {
        ctx->pc = 0x1DCE34u;
            // 0x1dce34: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x1DCE38u;
        goto label_1dce38;
    }
    ctx->pc = 0x1DCE30u;
    SET_GPR_U32(ctx, 31, 0x1DCE38u);
    ctx->pc = 0x1DCE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE30u;
            // 0x1dce34: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (runtime->hasFunction(0x1438C0u)) {
        auto targetFn = runtime->lookupFunction(0x1438C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE38u; }
        if (ctx->pc != 0x1DCE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDropShadowMatrix__FPfPfPf_0x1438c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE38u; }
        if (ctx->pc != 0x1DCE38u) { return; }
    }
    ctx->pc = 0x1DCE38u;
label_1dce38:
    // 0x1dce38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1dce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dce3c:
    // 0x1dce3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dce40:
    // 0x1dce40: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1dce44:
    // 0x1dce44: 0x320f809  jalr        $t9
label_1dce48:
    if (ctx->pc == 0x1DCE48u) {
        ctx->pc = 0x1DCE4Cu;
        goto label_1dce4c;
    }
    ctx->pc = 0x1DCE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCE4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE4Cu; }
            if (ctx->pc != 0x1DCE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DCE4Cu;
label_1dce4c:
    // 0x1dce4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dce50:
    // 0x1dce50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dce50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dce54:
    // 0x1dce54: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x1dce54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_1dce58:
    // 0x1dce58: 0x320f809  jalr        $t9
label_1dce5c:
    if (ctx->pc == 0x1DCE5Cu) {
        ctx->pc = 0x1DCE60u;
        goto label_1dce60;
    }
    ctx->pc = 0x1DCE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCE60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCE60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE60u; }
            if (ctx->pc != 0x1DCE60u) { return; }
        }
        }
    }
    ctx->pc = 0x1DCE60u;
label_1dce60:
    // 0x1dce60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dce64:
    // 0x1dce64: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1dce64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1dce68:
    // 0x1dce68: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1dce6c:
    if (ctx->pc == 0x1DCE6Cu) {
        ctx->pc = 0x1DCE6Cu;
            // 0x1dce6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1DCE70u;
        goto label_1dce70;
    }
    ctx->pc = 0x1DCE68u;
    {
        const bool branch_taken_0x1dce68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE68u;
            // 0x1dce6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce68) {
            ctx->pc = 0x1DCD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcd74;
        }
    }
    ctx->pc = 0x1DCE70u;
label_1dce70:
    // 0x1dce70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1dce74:
    // 0x1dce74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dce74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dce78:
    // 0x1dce78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dce78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dce7c:
    // 0x1dce7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dce7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dce80:
    // 0x1dce80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dce80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dce84:
    // 0x1dce84: 0x3e00008  jr          $ra
label_1dce88:
    if (ctx->pc == 0x1DCE88u) {
        ctx->pc = 0x1DCE88u;
            // 0x1dce88: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1DCE8Cu;
        goto label_fallthrough_0x1dce84;
    }
    ctx->pc = 0x1DCE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE84u;
            // 0x1dce88: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dce84:
    ctx->pc = 0x1DCE8Cu;
}
