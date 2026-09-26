#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CDamageScoreFv
// Address: 0x1caae0 - 0x1cae0c
void Draw__12CDamageScoreFv_0x1caae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CDamageScoreFv_0x1caae0");
#endif

    switch (ctx->pc) {
        case 0x1cab1cu: goto label_1cab1c;
        case 0x1cab2cu: goto label_1cab2c;
        case 0x1cab34u: goto label_1cab34;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab4cu: goto label_1cab4c;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab78u: goto label_1cab78;
        case 0x1cab98u: goto label_1cab98;
        case 0x1caba0u: goto label_1caba0;
        case 0x1cabb0u: goto label_1cabb0;
        case 0x1cabd4u: goto label_1cabd4;
        case 0x1cabe8u: goto label_1cabe8;
        case 0x1cac08u: goto label_1cac08;
        case 0x1cac34u: goto label_1cac34;
        case 0x1cac40u: goto label_1cac40;
        case 0x1cac54u: goto label_1cac54;
        case 0x1cac64u: goto label_1cac64;
        case 0x1cac6cu: goto label_1cac6c;
        case 0x1cac78u: goto label_1cac78;
        case 0x1cac84u: goto label_1cac84;
        case 0x1cac90u: goto label_1cac90;
        case 0x1cac9cu: goto label_1cac9c;
        case 0x1cacb0u: goto label_1cacb0;
        case 0x1cacb8u: goto label_1cacb8;
        case 0x1cacd8u: goto label_1cacd8;
        case 0x1cad18u: goto label_1cad18;
        case 0x1cad28u: goto label_1cad28;
        case 0x1cad60u: goto label_1cad60;
        case 0x1cad74u: goto label_1cad74;
        case 0x1cad9cu: goto label_1cad9c;
        case 0x1cadc8u: goto label_1cadc8;
        case 0x1cadecu: goto label_1cadec;
        default: break;
    }

    ctx->pc = 0x1caae0u;

    // 0x1caae0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1caae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1caae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1caae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1caae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1caaec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1caaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1caaf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1caaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1caaf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1caaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1caaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1caaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1caafc: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1cab00: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1CAB00u;
    {
        const bool branch_taken_0x1cab00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB00u;
            // 0x1cab04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab00) {
            ctx->pc = 0x1CADECu;
            goto label_1cadec;
        }
    }
    ctx->pc = 0x1CAB08u;
    // 0x1cab08: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1cab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1cab0c: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CAB0Cu;
    {
        const bool branch_taken_0x1cab0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB0Cu;
            // 0x1cab10: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab0c) {
            ctx->pc = 0x1CAC40u;
            goto label_1cac40;
        }
    }
    ctx->pc = 0x1CAB14u;
    // 0x1cab14: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CAB14u;
    SET_GPR_U32(ctx, 31, 0x1CAB1Cu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB1Cu; }
        if (ctx->pc != 0x1CAB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB1Cu; }
        if (ctx->pc != 0x1CAB1Cu) { return; }
    }
    ctx->pc = 0x1CAB1Cu;
label_1cab1c:
    // 0x1cab1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cab20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab24: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CAB24u;
    SET_GPR_U32(ctx, 31, 0x1CAB2Cu);
    ctx->pc = 0x1CAB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB24u;
            // 0x1cab28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB2Cu; }
        if (ctx->pc != 0x1CAB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB2Cu; }
        if (ctx->pc != 0x1CAB2Cu) { return; }
    }
    ctx->pc = 0x1CAB2Cu;
label_1cab2c:
    // 0x1cab2c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CAB2Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB34u);
    ctx->pc = 0x1CAB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB2Cu;
            // 0x1cab30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB34u; }
        if (ctx->pc != 0x1CAB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB34u; }
        if (ctx->pc != 0x1CAB34u) { return; }
    }
    ctx->pc = 0x1CAB34u;
label_1cab34:
    // 0x1cab34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cab38: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CAB38u;
    SET_GPR_U32(ctx, 31, 0x1CAB40u);
    ctx->pc = 0x1CAB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB38u;
            // 0x1cab3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB40u; }
        if (ctx->pc != 0x1CAB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB40u; }
        if (ctx->pc != 0x1CAB40u) { return; }
    }
    ctx->pc = 0x1CAB40u;
label_1cab40:
    // 0x1cab40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cab44: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CAB44u;
    SET_GPR_U32(ctx, 31, 0x1CAB4Cu);
    ctx->pc = 0x1CAB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB44u;
            // 0x1cab48: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB4Cu; }
        if (ctx->pc != 0x1CAB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB4Cu; }
        if (ctx->pc != 0x1CAB4Cu) { return; }
    }
    ctx->pc = 0x1CAB4Cu;
label_1cab4c:
    // 0x1cab4c: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1cab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1cab50: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1CAB50u;
    SET_GPR_U32(ctx, 31, 0x1CAB58u);
    ctx->pc = 0x1CAB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB50u;
            // 0x1cab54: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB58u; }
        if (ctx->pc != 0x1CAB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB58u; }
        if (ctx->pc != 0x1CAB58u) { return; }
    }
    ctx->pc = 0x1CAB58u;
label_1cab58:
    // 0x1cab58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cab5c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1CAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB64u);
    ctx->pc = 0x1CAB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB5Cu;
            // 0x1cab60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB64u; }
        if (ctx->pc != 0x1CAB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB64u; }
        if (ctx->pc != 0x1CAB64u) { return; }
    }
    ctx->pc = 0x1CAB64u;
label_1cab64:
    // 0x1cab64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cab68: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1cab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1cab6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1cab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1cab70: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1CAB70u;
    SET_GPR_U32(ctx, 31, 0x1CAB78u);
    ctx->pc = 0x1CAB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB70u;
            // 0x1cab74: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB78u; }
        if (ctx->pc != 0x1CAB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB78u; }
        if (ctx->pc != 0x1CAB78u) { return; }
    }
    ctx->pc = 0x1CAB78u;
label_1cab78:
    // 0x1cab78: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CAB78u;
    {
        const bool branch_taken_0x1cab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB78u;
            // 0x1cab7c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab78) {
            ctx->pc = 0x1CAC38u;
            goto label_1cac38;
        }
    }
    ctx->pc = 0x1CAB80u;
    // 0x1cab80: 0x8608004e  lh          $t0, 0x4E($s0)
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x1cab84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cab88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cab8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cab8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab90: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CAB90u;
    SET_GPR_U32(ctx, 31, 0x1CAB98u);
    ctx->pc = 0x1CAB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB90u;
            // 0x1cab94: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB98u; }
        if (ctx->pc != 0x1CAB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB98u; }
        if (ctx->pc != 0x1CAB98u) { return; }
    }
    ctx->pc = 0x1CAB98u;
label_1cab98:
    // 0x1cab98: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1CAB98u;
    SET_GPR_U32(ctx, 31, 0x1CABA0u);
    ctx->pc = 0x1CAB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB98u;
            // 0x1cab9c: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABA0u; }
        if (ctx->pc != 0x1CABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABA0u; }
        if (ctx->pc != 0x1CABA0u) { return; }
    }
    ctx->pc = 0x1CABA0u;
label_1caba0:
    // 0x1caba0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1caba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1caba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caba8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CABA8u;
    SET_GPR_U32(ctx, 31, 0x1CABB0u);
    ctx->pc = 0x1CABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABA8u;
            // 0x1cabac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABB0u; }
        if (ctx->pc != 0x1CABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABB0u; }
        if (ctx->pc != 0x1CABB0u) { return; }
    }
    ctx->pc = 0x1CABB0u;
label_1cabb0:
    // 0x1cabb0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cabb4: 0x27b10184  addiu       $s1, $sp, 0x184
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1cabb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cabbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cabc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cabc4: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cabc8: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1cabcc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CABCCu;
    SET_GPR_U32(ctx, 31, 0x1CABD4u);
    ctx->pc = 0x1CABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABCCu;
            // 0x1cabd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABD4u; }
        if (ctx->pc != 0x1CABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABD4u; }
        if (ctx->pc != 0x1CABD4u) { return; }
    }
    ctx->pc = 0x1CABD4u;
label_1cabd4:
    // 0x1cabd4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cabd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cabdc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cabe0: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CABE0u;
    SET_GPR_U32(ctx, 31, 0x1CABE8u);
    ctx->pc = 0x1CABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABE0u;
            // 0x1cabe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABE8u; }
        if (ctx->pc != 0x1CABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CABE8u; }
        if (ctx->pc != 0x1CABE8u) { return; }
    }
    ctx->pc = 0x1CABE8u;
label_1cabe8:
    // 0x1cabe8: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cabec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cabecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cabf0: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1cabf4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1cabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1cabf8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1cabfc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cac00: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CAC00u;
    SET_GPR_U32(ctx, 31, 0x1CAC08u);
    ctx->pc = 0x1CAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC00u;
            // 0x1cac04: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC08u; }
        if (ctx->pc != 0x1CAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC08u; }
        if (ctx->pc != 0x1CAC08u) { return; }
    }
    ctx->pc = 0x1CAC08u;
label_1cac08:
    // 0x1cac08: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x1cac08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1cac0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cac10: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1cac14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cac14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac18: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cac1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cac20: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cac24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cac28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cac2c: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC34u);
    ctx->pc = 0x1CAC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC2Cu;
            // 0x1cac30: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC34u; }
        if (ctx->pc != 0x1CAC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC34u; }
        if (ctx->pc != 0x1CAC34u) { return; }
    }
    ctx->pc = 0x1CAC34u;
label_1cac34:
    // 0x1cac34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1cac38:
    // 0x1cac38: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CAC38u;
    SET_GPR_U32(ctx, 31, 0x1CAC40u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC40u; }
        if (ctx->pc != 0x1CAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC40u; }
        if (ctx->pc != 0x1CAC40u) { return; }
    }
    ctx->pc = 0x1CAC40u;
label_1cac40:
    // 0x1cac40: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1cac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1cac44: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CAC44u;
    {
        const bool branch_taken_0x1cac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC44u;
            // 0x1cac48: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac44) {
            ctx->pc = 0x1CADECu;
            goto label_1cadec;
        }
    }
    ctx->pc = 0x1CAC4Cu;
    // 0x1cac4c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC54u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC54u; }
        if (ctx->pc != 0x1CAC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC54u; }
        if (ctx->pc != 0x1CAC54u) { return; }
    }
    ctx->pc = 0x1CAC54u;
label_1cac54:
    // 0x1cac54: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cac58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cac58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac5c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC64u);
    ctx->pc = 0x1CAC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC5Cu;
            // 0x1cac60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC64u; }
        if (ctx->pc != 0x1CAC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC64u; }
        if (ctx->pc != 0x1CAC64u) { return; }
    }
    ctx->pc = 0x1CAC64u;
label_1cac64:
    // 0x1cac64: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CAC64u;
    SET_GPR_U32(ctx, 31, 0x1CAC6Cu);
    ctx->pc = 0x1CAC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC64u;
            // 0x1cac68: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC6Cu; }
        if (ctx->pc != 0x1CAC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC6Cu; }
        if (ctx->pc != 0x1CAC6Cu) { return; }
    }
    ctx->pc = 0x1CAC6Cu;
label_1cac6c:
    // 0x1cac6c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cac70: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CAC70u;
    SET_GPR_U32(ctx, 31, 0x1CAC78u);
    ctx->pc = 0x1CAC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC70u;
            // 0x1cac74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC78u; }
        if (ctx->pc != 0x1CAC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC78u; }
        if (ctx->pc != 0x1CAC78u) { return; }
    }
    ctx->pc = 0x1CAC78u;
label_1cac78:
    // 0x1cac78: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cac7c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC84u);
    ctx->pc = 0x1CAC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC7Cu;
            // 0x1cac80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC84u; }
        if (ctx->pc != 0x1CAC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC84u; }
        if (ctx->pc != 0x1CAC84u) { return; }
    }
    ctx->pc = 0x1CAC84u;
label_1cac84:
    // 0x1cac84: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1cac88: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1CAC88u;
    SET_GPR_U32(ctx, 31, 0x1CAC90u);
    ctx->pc = 0x1CAC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC88u;
            // 0x1cac8c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC90u; }
        if (ctx->pc != 0x1CAC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC90u; }
        if (ctx->pc != 0x1CAC90u) { return; }
    }
    ctx->pc = 0x1CAC90u;
label_1cac90:
    // 0x1cac90: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cac94: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1CAC94u;
    SET_GPR_U32(ctx, 31, 0x1CAC9Cu);
    ctx->pc = 0x1CAC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC94u;
            // 0x1cac98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC9Cu; }
        if (ctx->pc != 0x1CAC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC9Cu; }
        if (ctx->pc != 0x1CAC9Cu) { return; }
    }
    ctx->pc = 0x1CAC9Cu;
label_1cac9c:
    // 0x1cac9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1caca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1caca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caca4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1caca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1caca8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1CACA8u;
    {
        const bool branch_taken_0x1caca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACA8u;
            // 0x1cacac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caca8) {
            ctx->pc = 0x1CADD0u;
            goto label_1cadd0;
        }
    }
    ctx->pc = 0x1CACB0u;
label_1cacb0:
    // 0x1cacb0: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1CACB0u;
    SET_GPR_U32(ctx, 31, 0x1CACB8u);
    ctx->pc = 0x1CACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACB0u;
            // 0x1cacb4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACB8u; }
        if (ctx->pc != 0x1CACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACB8u; }
        if (ctx->pc != 0x1CACB8u) { return; }
    }
    ctx->pc = 0x1CACB8u;
label_1cacb8:
    // 0x1cacb8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1CACB8u;
    {
        const bool branch_taken_0x1cacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cacb8) {
            ctx->pc = 0x1CADC8u;
            goto label_1cadc8;
        }
    }
    ctx->pc = 0x1CACC0u;
    // 0x1cacc0: 0x86050048  lh          $a1, 0x48($s0)
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1cacc4: 0x8606004a  lh          $a2, 0x4A($s0)
    ctx->pc = 0x1cacc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1cacc8: 0x8607004c  lh          $a3, 0x4C($s0)
    ctx->pc = 0x1cacc8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1caccc: 0x8608004e  lh          $t0, 0x4E($s0)
    ctx->pc = 0x1cacccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x1cacd0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CACD0u;
    SET_GPR_U32(ctx, 31, 0x1CACD8u);
    ctx->pc = 0x1CACD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACD0u;
            // 0x1cacd4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACD8u; }
        if (ctx->pc != 0x1CACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACD8u; }
        if (ctx->pc != 0x1CACD8u) { return; }
    }
    ctx->pc = 0x1CACD8u;
label_1cacd8:
    // 0x1cacd8: 0x86050052  lh          $a1, 0x52($s0)
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1cacdc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1cacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1cace0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1cace4: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x1cace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1cace8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1cace8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cacec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cacf0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cacf4: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x1cacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
    // 0x1cacf8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1cacfc: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1cad00: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x1cad00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cad04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cad08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cad0c: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x1cad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
    // 0x1cad10: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1CAD10u;
    SET_GPR_U32(ctx, 31, 0x1CAD18u);
    ctx->pc = 0x1CAD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD10u;
            // 0x1cad14: 0xc44c0028  lwc1        $f12, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD18u; }
        if (ctx->pc != 0x1CAD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD18u; }
        if (ctx->pc != 0x1CAD18u) { return; }
    }
    ctx->pc = 0x1CAD18u;
label_1cad18:
    // 0x1cad18: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1cad1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cad1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cad20: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CAD20u;
    SET_GPR_U32(ctx, 31, 0x1CAD28u);
    ctx->pc = 0x1CAD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD20u;
            // 0x1cad24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD28u; }
        if (ctx->pc != 0x1CAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD28u; }
        if (ctx->pc != 0x1CAD28u) { return; }
    }
    ctx->pc = 0x1CAD28u;
label_1cad28:
    // 0x1cad28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cad2c: 0x27b402b4  addiu       $s4, $sp, 0x2B4
    ctx->pc = 0x1cad2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x1cad30: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cad34: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cad38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cad3c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1cad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1cad40: 0x82450000  lb          $a1, 0x0($s2)
    ctx->pc = 0x1cad40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cad44: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1cad48: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cad4c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1cad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cad50: 0x24b2ffd0  addiu       $s2, $a1, -0x30
    ctx->pc = 0x1cad50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x1cad54: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1cad54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cad58: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CAD58u;
    SET_GPR_U32(ctx, 31, 0x1CAD60u);
    ctx->pc = 0x1CAD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD58u;
            // 0x1cad5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD60u; }
        if (ctx->pc != 0x1CAD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD60u; }
        if (ctx->pc != 0x1CAD60u) { return; }
    }
    ctx->pc = 0x1CAD60u;
label_1cad60:
    // 0x1cad60: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1cad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1cad64: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cad68: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1cad68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cad6c: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD74u);
    ctx->pc = 0x1CAD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD6Cu;
            // 0x1cad70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD74u; }
        if (ctx->pc != 0x1CAD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD74u; }
        if (ctx->pc != 0x1CAD74u) { return; }
    }
    ctx->pc = 0x1CAD74u;
label_1cad74:
    // 0x1cad74: 0x8e08005c  lw          $t0, 0x5C($s0)
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1cad78: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cad7c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cad80: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cad84: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cad88: 0x2483818  mult        $a3, $s2, $t0
    ctx->pc = 0x1cad88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cad8c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1cad8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cad90: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1cad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1cad94: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CAD94u;
    SET_GPR_U32(ctx, 31, 0x1CAD9Cu);
    ctx->pc = 0x1CAD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD94u;
            // 0x1cad98: 0x1022821  addu        $a1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD9Cu; }
        if (ctx->pc != 0x1CAD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD9Cu; }
        if (ctx->pc != 0x1CAD9Cu) { return; }
    }
    ctx->pc = 0x1CAD9Cu;
label_1cad9c:
    // 0x1cad9c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x1cad9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1cada0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1cada4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1cada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cada8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cada8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadac: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1cadb0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cadb4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1cadb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cadb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cadbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cadc0: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CADC0u;
    SET_GPR_U32(ctx, 31, 0x1CADC8u);
    ctx->pc = 0x1CADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADC0u;
            // 0x1cadc4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADC8u; }
        if (ctx->pc != 0x1CADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADC8u; }
        if (ctx->pc != 0x1CADC8u) { return; }
    }
    ctx->pc = 0x1CADC8u;
label_1cadc8:
    // 0x1cadc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1cadc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1cadcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cadccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cadd0:
    // 0x1cadd0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cadd4: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x1cadd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cadd8: 0x80420020  lb          $v0, 0x20($v0)
    ctx->pc = 0x1cadd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1caddc: 0x1c40ffb4  bgtz        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1CADDCu;
    {
        const bool branch_taken_0x1caddc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1CADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADDCu;
            // 0x1cade0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caddc) {
            ctx->pc = 0x1CACB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cacb0;
        }
    }
    ctx->pc = 0x1CADE4u;
    // 0x1cade4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CADE4u;
    SET_GPR_U32(ctx, 31, 0x1CADECu);
    ctx->pc = 0x1CADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADE4u;
            // 0x1cade8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADECu; }
        if (ctx->pc != 0x1CADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADECu; }
        if (ctx->pc != 0x1CADECu) { return; }
    }
    ctx->pc = 0x1CADECu;
label_1cadec:
    // 0x1cadec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cadecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cadf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cadf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cadf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cadf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cadf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cadf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cadfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cadfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cae00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE04u;
            // 0x1cae08: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAE0Cu;
}
