#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CStarDustFP10mgCTextureii
// Address: 0x22ebf0 - 0x22ed04
void Draw__9CStarDustFP10mgCTextureii_0x22ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CStarDustFP10mgCTextureii_0x22ebf0");
#endif

    switch (ctx->pc) {
        case 0x22ec48u: goto label_22ec48;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ec60u: goto label_22ec60;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec84u: goto label_22ec84;
        case 0x22ec94u: goto label_22ec94;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecb8u: goto label_22ecb8;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ece4u: goto label_22ece4;
        default: break;
    }

    ctx->pc = 0x22ebf0u;

    // 0x22ebf0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x22ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x22ebf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ebf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22ebfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ec00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ec04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22ec04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ec0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22ec0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ec14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22ec14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec18: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x22ec18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x22ec1c: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x22EC1Cu;
    {
        const bool branch_taken_0x22ec1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC1Cu;
            // 0x22ec20: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec1c) {
            ctx->pc = 0x22ECE4u;
            goto label_22ece4;
        }
    }
    ctx->pc = 0x22EC24u;
    // 0x22ec24: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x22EC24u;
    {
        const bool branch_taken_0x22ec24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec24) {
            ctx->pc = 0x22ECE4u;
            goto label_22ece4;
        }
    }
    ctx->pc = 0x22EC2Cu;
    // 0x22ec2c: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x22ec2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22ec30: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x22ec30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22ec34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC34u;
            // 0x22ec38: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC40u;
            goto label_22ec40;
        }
    }
    ctx->pc = 0x22EC3Cu;
    // 0x22ec3c: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22ec40:
    // 0x22ec40: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22EC40u;
    SET_GPR_U32(ctx, 31, 0x22EC48u);
    ctx->pc = 0x22EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC40u;
            // 0x22ec44: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC48u; }
        if (ctx->pc != 0x22EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC48u; }
        if (ctx->pc != 0x22EC48u) { return; }
    }
    ctx->pc = 0x22EC48u;
label_22ec48:
    // 0x22ec48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22ec4c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22EC4Cu;
    SET_GPR_U32(ctx, 31, 0x22EC54u);
    ctx->pc = 0x22EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC4Cu;
            // 0x22ec50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC54u; }
        if (ctx->pc != 0x22EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC54u; }
        if (ctx->pc != 0x22EC54u) { return; }
    }
    ctx->pc = 0x22EC54u;
label_22ec54:
    // 0x22ec54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22ec58: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22EC58u;
    SET_GPR_U32(ctx, 31, 0x22EC60u);
    ctx->pc = 0x22EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC58u;
            // 0x22ec5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC60u; }
        if (ctx->pc != 0x22EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC60u; }
        if (ctx->pc != 0x22EC60u) { return; }
    }
    ctx->pc = 0x22EC60u;
label_22ec60:
    // 0x22ec60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22ec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec64: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22EC64u;
    SET_GPR_U32(ctx, 31, 0x22EC6Cu);
    ctx->pc = 0x22EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC64u;
            // 0x22ec68: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC6Cu; }
        if (ctx->pc != 0x22EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC6Cu; }
        if (ctx->pc != 0x22EC6Cu) { return; }
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22ec70: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22ec70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec74: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22ec78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec7c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22EC7Cu;
    SET_GPR_U32(ctx, 31, 0x22EC84u);
    ctx->pc = 0x22EC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC7Cu;
            // 0x22ec80: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC84u; }
        if (ctx->pc != 0x22EC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC84u; }
        if (ctx->pc != 0x22EC84u) { return; }
    }
    ctx->pc = 0x22EC84u;
label_22ec84:
    // 0x22ec84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22ec88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec8c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22EC8Cu;
    SET_GPR_U32(ctx, 31, 0x22EC94u);
    ctx->pc = 0x22EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC8Cu;
            // 0x22ec90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC94u; }
        if (ctx->pc != 0x22EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC94u; }
        if (ctx->pc != 0x22EC94u) { return; }
    }
    ctx->pc = 0x22EC94u;
label_22ec94:
    // 0x22ec94: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x22ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ec98: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x22ec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22ec9c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22ec9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22eca0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22ECA0u;
    SET_GPR_U32(ctx, 31, 0x22ECA8u);
    ctx->pc = 0x22ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECA0u;
            // 0x22eca4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECA8u; }
        if (ctx->pc != 0x22ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECA8u; }
        if (ctx->pc != 0x22ECA8u) { return; }
    }
    ctx->pc = 0x22ECA8u;
label_22eca8:
    // 0x22eca8: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x22ecac: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x22ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x22ecb0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22ECB0u;
    SET_GPR_U32(ctx, 31, 0x22ECB8u);
    ctx->pc = 0x22ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECB0u;
            // 0x22ecb4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECB8u; }
        if (ctx->pc != 0x22ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECB8u; }
        if (ctx->pc != 0x22ECB8u) { return; }
    }
    ctx->pc = 0x22ECB8u;
label_22ecb8:
    // 0x22ecb8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x22ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ecbc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22ecc0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x22ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ecc4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22ecc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22ecc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22eccc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22ecccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22ecd0: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x22ecd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22ecd4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22ECD4u;
    SET_GPR_U32(ctx, 31, 0x22ECDCu);
    ctx->pc = 0x22ECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECD4u;
            // 0x22ecd8: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECDCu; }
        if (ctx->pc != 0x22ECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECDCu; }
        if (ctx->pc != 0x22ECDCu) { return; }
    }
    ctx->pc = 0x22ECDCu;
label_22ecdc:
    // 0x22ecdc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22ECDCu;
    SET_GPR_U32(ctx, 31, 0x22ECE4u);
    ctx->pc = 0x22ECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECDCu;
            // 0x22ece0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECE4u; }
        if (ctx->pc != 0x22ECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECE4u; }
        if (ctx->pc != 0x22ECE4u) { return; }
    }
    ctx->pc = 0x22ECE4u;
label_22ece4:
    // 0x22ece4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22ece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ece8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ece8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ecec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ececu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ecf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ecf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ecf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ecf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ecf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ecf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22ECFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECFCu;
            // 0x22ed00: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22ED04u;
}
