#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__13CWorldMapMenuFv
// Address: 0x2aba20 - 0x2acae4
void KeyStep__13CWorldMapMenuFv_0x2aba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__13CWorldMapMenuFv_0x2aba20");
#endif

    switch (ctx->pc) {
        case 0x2aba60u: goto label_2aba60;
        case 0x2aba68u: goto label_2aba68;
        case 0x2aba74u: goto label_2aba74;
        case 0x2aba80u: goto label_2aba80;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb78u: goto label_2abb78;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abbacu: goto label_2abbac;
        case 0x2abbc0u: goto label_2abbc0;
        case 0x2abbd0u: goto label_2abbd0;
        case 0x2abbe8u: goto label_2abbe8;
        case 0x2abc00u: goto label_2abc00;
        case 0x2abc18u: goto label_2abc18;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc58u: goto label_2abc58;
        case 0x2abc70u: goto label_2abc70;
        case 0x2abc88u: goto label_2abc88;
        case 0x2abc90u: goto label_2abc90;
        case 0x2abc9cu: goto label_2abc9c;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abd0cu: goto label_2abd0c;
        case 0x2abd30u: goto label_2abd30;
        case 0x2abd44u: goto label_2abd44;
        case 0x2abd4cu: goto label_2abd4c;
        case 0x2abdfcu: goto label_2abdfc;
        case 0x2abe0cu: goto label_2abe0c;
        case 0x2abe84u: goto label_2abe84;
        case 0x2abeb8u: goto label_2abeb8;
        case 0x2abeecu: goto label_2abeec;
        case 0x2abefcu: goto label_2abefc;
        case 0x2abf08u: goto label_2abf08;
        case 0x2abf14u: goto label_2abf14;
        case 0x2abf40u: goto label_2abf40;
        case 0x2abf54u: goto label_2abf54;
        case 0x2abf7cu: goto label_2abf7c;
        case 0x2abfa0u: goto label_2abfa0;
        case 0x2abfb8u: goto label_2abfb8;
        case 0x2abff0u: goto label_2abff0;
        case 0x2ac034u: goto label_2ac034;
        case 0x2ac0a4u: goto label_2ac0a4;
        case 0x2ac164u: goto label_2ac164;
        case 0x2ac1bcu: goto label_2ac1bc;
        case 0x2ac200u: goto label_2ac200;
        case 0x2ac25cu: goto label_2ac25c;
        case 0x2ac268u: goto label_2ac268;
        case 0x2ac274u: goto label_2ac274;
        case 0x2ac29cu: goto label_2ac29c;
        case 0x2ac2f8u: goto label_2ac2f8;
        case 0x2ac318u: goto label_2ac318;
        case 0x2ac3acu: goto label_2ac3ac;
        case 0x2ac3b4u: goto label_2ac3b4;
        case 0x2ac440u: goto label_2ac440;
        case 0x2ac478u: goto label_2ac478;
        case 0x2ac4d4u: goto label_2ac4d4;
        case 0x2ac4f0u: goto label_2ac4f0;
        case 0x2ac574u: goto label_2ac574;
        case 0x2ac57cu: goto label_2ac57c;
        case 0x2ac58cu: goto label_2ac58c;
        case 0x2ac5acu: goto label_2ac5ac;
        case 0x2ac5e4u: goto label_2ac5e4;
        case 0x2ac60cu: goto label_2ac60c;
        case 0x2ac654u: goto label_2ac654;
        case 0x2ac678u: goto label_2ac678;
        case 0x2ac68cu: goto label_2ac68c;
        case 0x2ac69cu: goto label_2ac69c;
        case 0x2ac6acu: goto label_2ac6ac;
        case 0x2ac728u: goto label_2ac728;
        case 0x2ac778u: goto label_2ac778;
        case 0x2ac788u: goto label_2ac788;
        case 0x2ac798u: goto label_2ac798;
        case 0x2ac7ccu: goto label_2ac7cc;
        case 0x2ac7d8u: goto label_2ac7d8;
        case 0x2ac83cu: goto label_2ac83c;
        case 0x2ac854u: goto label_2ac854;
        case 0x2ac864u: goto label_2ac864;
        case 0x2ac87cu: goto label_2ac87c;
        case 0x2ac8a8u: goto label_2ac8a8;
        case 0x2ac8c0u: goto label_2ac8c0;
        case 0x2ac8ecu: goto label_2ac8ec;
        case 0x2ac948u: goto label_2ac948;
        case 0x2ac9b4u: goto label_2ac9b4;
        case 0x2ac9c0u: goto label_2ac9c0;
        case 0x2ac9f0u: goto label_2ac9f0;
        case 0x2aca00u: goto label_2aca00;
        case 0x2aca24u: goto label_2aca24;
        case 0x2aca50u: goto label_2aca50;
        case 0x2aca68u: goto label_2aca68;
        case 0x2aca74u: goto label_2aca74;
        case 0x2acaa8u: goto label_2acaa8;
        default: break;
    }

    ctx->pc = 0x2aba20u;

    // 0x2aba20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2aba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2aba24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2aba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2aba28: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2aba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2aba2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2aba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2aba30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2aba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2aba34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2aba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2aba38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2aba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2aba3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aba40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2aba40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aba48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aba4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aba50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2aba50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aba54: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2aba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2aba58: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x2ABA58u;
    SET_GPR_U32(ctx, 31, 0x2ABA60u);
    ctx->pc = 0x2ABA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA58u;
            // 0x2aba5c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA60u; }
        if (ctx->pc != 0x2ABA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA60u; }
        if (ctx->pc != 0x2ABA60u) { return; }
    }
    ctx->pc = 0x2ABA60u;
label_2aba60:
    // 0x2aba60: 0xc08f840  jal         func_23E100
    ctx->pc = 0x2ABA60u;
    SET_GPR_U32(ctx, 31, 0x2ABA68u);
    ctx->pc = 0x2ABA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA60u;
            // 0x2aba64: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA68u; }
        if (ctx->pc != 0x2ABA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA68u; }
        if (ctx->pc != 0x2ABA68u) { return; }
    }
    ctx->pc = 0x2ABA68u;
label_2aba68:
    // 0x2aba68: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2aba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2aba6c: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2ABA6Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA74u);
    ctx->pc = 0x2ABA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA6Cu;
            // 0x2aba70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA74u; }
        if (ctx->pc != 0x2ABA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA74u; }
        if (ctx->pc != 0x2ABA74u) { return; }
    }
    ctx->pc = 0x2ABA74u;
label_2aba74:
    // 0x2aba74: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2aba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2aba78: 0xc08f91c  jal         func_23E470
    ctx->pc = 0x2ABA78u;
    SET_GPR_U32(ctx, 31, 0x2ABA80u);
    ctx->pc = 0x2ABA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA78u;
            // 0x2aba7c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA80u; }
        if (ctx->pc != 0x2ABA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeyInput__12CMenuKeyFuncFv_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA80u; }
        if (ctx->pc != 0x2ABA80u) { return; }
    }
    ctx->pc = 0x2ABA80u;
label_2aba80:
    // 0x2aba80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2aba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2aba84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aba88: 0x8c32ca50  lw          $s2, -0x35B0($at)
    ctx->pc = 0x2aba88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2aba8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aba90: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2aba90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2aba94: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2aba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2aba98: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x2aba98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aba9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2aba9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2abaa0: 0x8c3eca48  lw          $fp, -0x35B8($at)
    ctx->pc = 0x2abaa0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2abaa4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2abaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2abaa8: 0x104400d6  beq         $v0, $a0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2ABAA8u;
    {
        const bool branch_taken_0x2abaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2ABAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABAA8u;
            // 0x2abaac: 0x8c30ca4c  lw          $s0, -0x35B4($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abaa8) {
            ctx->pc = 0x2ABE04u;
            goto label_2abe04;
        }
    }
    ctx->pc = 0x2ABAB0u;
    // 0x2abab0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2abab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abab4: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABAB4u;
    {
        const bool branch_taken_0x2abab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2abab4) {
            ctx->pc = 0x2ABAC4u;
            goto label_2abac4;
        }
    }
    ctx->pc = 0x2ABABCu;
    // 0x2ababc: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2ABABCu;
    {
        const bool branch_taken_0x2ababc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABABCu;
            // 0x2abac0: 0x8f8394f8  lw          $v1, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ababc) {
            ctx->pc = 0x2ABF1Cu;
            goto label_2abf1c;
        }
    }
    ctx->pc = 0x2ABAC4u;
label_2abac4:
    // 0x2abac4: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2ABAC4u;
    SET_GPR_U32(ctx, 31, 0x2ABACCu);
    ctx->pc = 0x2ABAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABAC4u;
            // 0x2abac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABACCu; }
        if (ctx->pc != 0x2ABACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABACCu; }
        if (ctx->pc != 0x2ABACCu) { return; }
    }
    ctx->pc = 0x2ABACCu;
label_2abacc:
    // 0x2abacc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2abaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abad0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2abad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2abad4: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2abad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2abad8: 0x3862000d  xori        $v0, $v1, 0xD
    ctx->pc = 0x2abad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
    // 0x2abadc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2abadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2abae0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABAE0u;
    {
        const bool branch_taken_0x2abae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABAE0u;
            // 0x2abae4: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abae0) {
            ctx->pc = 0x2ABAF4u;
            goto label_2abaf4;
        }
    }
    ctx->pc = 0x2ABAE8u;
    // 0x2abae8: 0x38620013  xori        $v0, $v1, 0x13
    ctx->pc = 0x2abae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)19);
    // 0x2abaec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2abaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2abaf0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2abaf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2abaf4:
    // 0x2abaf4: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2ABAF4u;
    SET_GPR_U32(ctx, 31, 0x2ABAFCu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABAFCu; }
        if (ctx->pc != 0x2ABAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABAFCu; }
        if (ctx->pc != 0x2ABAFCu) { return; }
    }
    ctx->pc = 0x2ABAFCu;
label_2abafc:
    // 0x2abafc: 0x1440037b  bnez        $v0, . + 4 + (0x37B << 2)
    ctx->pc = 0x2ABAFCu;
    {
        const bool branch_taken_0x2abafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abafc) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABB04u;
    // 0x2abb04: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABB04u;
    {
        const bool branch_taken_0x2abb04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb04) {
            ctx->pc = 0x2ABB14u;
            goto label_2abb14;
        }
    }
    ctx->pc = 0x2ABB0Cu;
    // 0x2abb0c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABB0Cu;
    {
        const bool branch_taken_0x2abb0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB0Cu;
            // 0x2abb10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb0c) {
            ctx->pc = 0x2ABB20u;
            goto label_2abb20;
        }
    }
    ctx->pc = 0x2ABB14u;
label_2abb14:
    // 0x2abb14: 0x16600375  bnez        $s3, . + 4 + (0x375 << 2)
    ctx->pc = 0x2ABB14u;
    {
        const bool branch_taken_0x2abb14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abb14) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABB1Cu;
    // 0x2abb1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2abb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abb20:
    // 0x2abb20: 0xc05231c  jal         func_148C70
    ctx->pc = 0x2ABB20u;
    SET_GPR_U32(ctx, 31, 0x2ABB28u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB28u; }
        if (ctx->pc != 0x2ABB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB28u; }
        if (ctx->pc != 0x2ABB28u) { return; }
    }
    ctx->pc = 0x2ABB28u;
label_2abb28:
    // 0x2abb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2abb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb2c: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2ABB2Cu;
    {
        const bool branch_taken_0x2abb2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB2Cu;
            // 0x2abb30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb2c) {
            ctx->pc = 0x2ABCA0u;
            goto label_2abca0;
        }
    }
    ctx->pc = 0x2ABB34u;
    // 0x2abb34: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2abb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2abb38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abb3c: 0x24a5e8d0  addiu       $a1, $a1, -0x1730
    ctx->pc = 0x2abb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
    // 0x2abb40: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2ABB40u;
    SET_GPR_U32(ctx, 31, 0x2ABB48u);
    ctx->pc = 0x2ABB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB40u;
            // 0x2abb44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB48u; }
        if (ctx->pc != 0x2ABB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB48u; }
        if (ctx->pc != 0x2ABB48u) { return; }
    }
    ctx->pc = 0x2ABB48u;
label_2abb48:
    // 0x2abb48: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2abb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2abb4c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2abb4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2abb50: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x2abb50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x2abb54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2abb54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb58: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2ABB58u;
    SET_GPR_U32(ctx, 31, 0x2ABB60u);
    ctx->pc = 0x2ABB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB58u;
            // 0x2abb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB60u; }
        if (ctx->pc != 0x2ABB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB60u; }
        if (ctx->pc != 0x2ABB60u) { return; }
    }
    ctx->pc = 0x2ABB60u;
label_2abb60:
    // 0x2abb60: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x2abb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2abb64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2abb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb70: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2ABB70u;
    SET_GPR_U32(ctx, 31, 0x2ABB78u);
    ctx->pc = 0x2ABB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB70u;
            // 0x2abb74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB78u; }
        if (ctx->pc != 0x2ABB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB78u; }
        if (ctx->pc != 0x2ABB78u) { return; }
    }
    ctx->pc = 0x2ABB78u;
label_2abb78:
    // 0x2abb78: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2abb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2abb7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abb80: 0x24a5e8d8  addiu       $a1, $a1, -0x1728
    ctx->pc = 0x2abb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961368));
    // 0x2abb84: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2ABB84u;
    SET_GPR_U32(ctx, 31, 0x2ABB8Cu);
    ctx->pc = 0x2ABB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB84u;
            // 0x2abb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB8Cu; }
        if (ctx->pc != 0x2ABB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB8Cu; }
        if (ctx->pc != 0x2ABB8Cu) { return; }
    }
    ctx->pc = 0x2ABB8Cu;
label_2abb8c:
    // 0x2abb8c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABB8Cu;
    {
        const bool branch_taken_0x2abb8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb8c) {
            ctx->pc = 0x2ABBACu;
            goto label_2abbac;
        }
    }
    ctx->pc = 0x2ABB94u;
    // 0x2abb94: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x2abb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2abb98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2abb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abba4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2ABBA4u;
    SET_GPR_U32(ctx, 31, 0x2ABBACu);
    ctx->pc = 0x2ABBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBA4u;
            // 0x2abba8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBACu; }
        if (ctx->pc != 0x2ABBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBACu; }
        if (ctx->pc != 0x2ABBACu) { return; }
    }
    ctx->pc = 0x2ABBACu;
label_2abbac:
    // 0x2abbac: 0x86860170  lh          $a2, 0x170($s4)
    ctx->pc = 0x2abbacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2abbb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abbb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2abbb8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2ABBB8u;
    SET_GPR_U32(ctx, 31, 0x2ABBC0u);
    ctx->pc = 0x2ABBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBB8u;
            // 0x2abbbc: 0x24a5e8e8  addiu       $a1, $a1, -0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBC0u; }
        if (ctx->pc != 0x2ABBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBC0u; }
        if (ctx->pc != 0x2ABBC0u) { return; }
    }
    ctx->pc = 0x2ABBC0u;
label_2abbc0:
    // 0x2abbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abbc4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2abbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2abbc8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABBC8u;
    SET_GPR_U32(ctx, 31, 0x2ABBD0u);
    ctx->pc = 0x2ABBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBC8u;
            // 0x2abbcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBD0u; }
        if (ctx->pc != 0x2ABBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBD0u; }
        if (ctx->pc != 0x2ABBD0u) { return; }
    }
    ctx->pc = 0x2ABBD0u;
label_2abbd0:
    // 0x2abbd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abbd4: 0xae820198  sw          $v0, 0x198($s4)
    ctx->pc = 0x2abbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
    // 0x2abbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abbdc: 0x24a5e8f0  addiu       $a1, $a1, -0x1710
    ctx->pc = 0x2abbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961392));
    // 0x2abbe0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABBE0u;
    SET_GPR_U32(ctx, 31, 0x2ABBE8u);
    ctx->pc = 0x2ABBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBE0u;
            // 0x2abbe4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBE8u; }
        if (ctx->pc != 0x2ABBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBE8u; }
        if (ctx->pc != 0x2ABBE8u) { return; }
    }
    ctx->pc = 0x2ABBE8u;
label_2abbe8:
    // 0x2abbe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abbec: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x2abbecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
    // 0x2abbf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abbf4: 0x24a5e8f8  addiu       $a1, $a1, -0x1708
    ctx->pc = 0x2abbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961400));
    // 0x2abbf8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABBF8u;
    SET_GPR_U32(ctx, 31, 0x2ABC00u);
    ctx->pc = 0x2ABBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBF8u;
            // 0x2abbfc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC00u; }
        if (ctx->pc != 0x2ABC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC00u; }
        if (ctx->pc != 0x2ABC00u) { return; }
    }
    ctx->pc = 0x2ABC00u;
label_2abc00:
    // 0x2abc00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abc04: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x2abc04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x2abc08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc0c: 0x24a5e900  addiu       $a1, $a1, -0x1700
    ctx->pc = 0x2abc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961408));
    // 0x2abc10: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABC10u;
    SET_GPR_U32(ctx, 31, 0x2ABC18u);
    ctx->pc = 0x2ABC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC10u;
            // 0x2abc14: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC18u; }
        if (ctx->pc != 0x2ABC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC18u; }
        if (ctx->pc != 0x2ABC18u) { return; }
    }
    ctx->pc = 0x2ABC18u;
label_2abc18:
    // 0x2abc18: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x2abc18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x2abc1c: 0x86830170  lh          $v1, 0x170($s4)
    ctx->pc = 0x2abc1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2abc20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2abc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2abc24: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABC24u;
    {
        const bool branch_taken_0x2abc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2abc24) {
            ctx->pc = 0x2ABC5Cu;
            goto label_2abc5c;
        }
    }
    ctx->pc = 0x2ABC2Cu;
    // 0x2abc2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abc30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc34: 0x24a5e908  addiu       $a1, $a1, -0x16F8
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961416));
    // 0x2abc38: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABC38u;
    SET_GPR_U32(ctx, 31, 0x2ABC40u);
    ctx->pc = 0x2ABC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC38u;
            // 0x2abc3c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC40u; }
        if (ctx->pc != 0x2ABC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC40u; }
        if (ctx->pc != 0x2ABC40u) { return; }
    }
    ctx->pc = 0x2ABC40u;
label_2abc40:
    // 0x2abc40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abc44: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x2abc44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x2abc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc4c: 0x24a5e910  addiu       $a1, $a1, -0x16F0
    ctx->pc = 0x2abc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961424));
    // 0x2abc50: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABC50u;
    SET_GPR_U32(ctx, 31, 0x2ABC58u);
    ctx->pc = 0x2ABC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC50u;
            // 0x2abc54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC58u; }
        if (ctx->pc != 0x2ABC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC58u; }
        if (ctx->pc != 0x2ABC58u) { return; }
    }
    ctx->pc = 0x2ABC58u;
label_2abc58:
    // 0x2abc58: 0xae820198  sw          $v0, 0x198($s4)
    ctx->pc = 0x2abc58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
label_2abc5c:
    // 0x2abc5c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abc60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc64: 0x24a5e918  addiu       $a1, $a1, -0x16E8
    ctx->pc = 0x2abc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961432));
    // 0x2abc68: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ABC68u;
    SET_GPR_U32(ctx, 31, 0x2ABC70u);
    ctx->pc = 0x2ABC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC68u;
            // 0x2abc6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC70u; }
        if (ctx->pc != 0x2ABC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC70u; }
        if (ctx->pc != 0x2ABC70u) { return; }
    }
    ctx->pc = 0x2ABC70u;
label_2abc70:
    // 0x2abc70: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x2abc70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x2abc74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2abc78: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2abc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2abc7c: 0x24a5e920  addiu       $a1, $a1, -0x16E0
    ctx->pc = 0x2abc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
    // 0x2abc80: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2ABC80u;
    SET_GPR_U32(ctx, 31, 0x2ABC88u);
    ctx->pc = 0x2ABC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC80u;
            // 0x2abc84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC88u; }
        if (ctx->pc != 0x2ABC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC88u; }
        if (ctx->pc != 0x2ABC88u) { return; }
    }
    ctx->pc = 0x2ABC88u;
label_2abc88:
    // 0x2abc88: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2ABC88u;
    SET_GPR_U32(ctx, 31, 0x2ABC90u);
    ctx->pc = 0x2ABC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC88u;
            // 0x2abc8c: 0xae820a78  sw          $v0, 0xA78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC90u; }
        if (ctx->pc != 0x2ABC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC90u; }
        if (ctx->pc != 0x2ABC90u) { return; }
    }
    ctx->pc = 0x2ABC90u;
label_2abc90:
    // 0x2abc90: 0xae820a7c  sw          $v0, 0xA7C($s4)
    ctx->pc = 0x2abc90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2684), GPR_U32(ctx, 2));
    // 0x2abc94: 0xc0aae60  jal         func_2AB980
    ctx->pc = 0x2ABC94u;
    SET_GPR_U32(ctx, 31, 0x2ABC9Cu);
    ctx->pc = 0x2ABC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC94u;
            // 0x2abc98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB980u;
    if (runtime->hasFunction(0x2AB980u)) {
        auto targetFn = runtime->lookupFunction(0x2AB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC9Cu; }
        if (ctx->pc != 0x2ABC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgBuffer__13CWorldMapMenuFv_0x2ab980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC9Cu; }
        if (ctx->pc != 0x2ABC9Cu) { return; }
    }
    ctx->pc = 0x2ABC9Cu;
label_2abc9c:
    // 0x2abc9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2abc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2abca0:
    // 0x2abca0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2abca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2abca4: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2abca4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2abca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2abca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abcac: 0xa2830004  sb          $v1, 0x4($s4)
    ctx->pc = 0x2abcacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abcb0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2abcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2abcb4: 0xae800110  sw          $zero, 0x110($s4)
    ctx->pc = 0x2abcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 0));
    // 0x2abcb8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2abcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2abcbc: 0xa283018d  sb          $v1, 0x18D($s4)
    ctx->pc = 0x2abcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 397), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abcc0: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x2abcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    // 0x2abcc4: 0xa283018c  sb          $v1, 0x18C($s4)
    ctx->pc = 0x2abcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 396), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abcc8: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x2abcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
    // 0x2abccc: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x2abcccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
    // 0x2abcd0: 0xa2830b90  sb          $v1, 0xB90($s4)
    ctx->pc = 0x2abcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2960), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abcd4: 0xae80016c  sw          $zero, 0x16C($s4)
    ctx->pc = 0x2abcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 364), GPR_U32(ctx, 0));
    // 0x2abcd8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2ABCD8u;
    SET_GPR_U32(ctx, 31, 0x2ABCE0u);
    ctx->pc = 0x2ABCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABCD8u;
            // 0x2abcdc: 0xae800180  sw          $zero, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABCE0u; }
        if (ctx->pc != 0x2ABCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABCE0u; }
        if (ctx->pc != 0x2ABCE0u) { return; }
    }
    ctx->pc = 0x2ABCE0u;
label_2abce0:
    // 0x2abce0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2abce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2abce4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2abce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2abce8: 0x8c23ca04  lw          $v1, -0x35FC($at)
    ctx->pc = 0x2abce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953476)));
    // 0x2abcec: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
    // 0x2abcf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2abcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abcf4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2abcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2abcf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2abcfc: 0x8c22ca00  lw          $v0, -0x3600($at)
    ctx->pc = 0x2abcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953472)));
    // 0x2abd00: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2abd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abd04: 0xc094440  jal         func_251100
    ctx->pc = 0x2ABD04u;
    SET_GPR_U32(ctx, 31, 0x2ABD0Cu);
    ctx->pc = 0x2ABD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD04u;
            // 0x2abd08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD0Cu; }
        if (ctx->pc != 0x2ABD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD0Cu; }
        if (ctx->pc != 0x2ABD0Cu) { return; }
    }
    ctx->pc = 0x2ABD0Cu;
label_2abd0c:
    // 0x2abd0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2abd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd10: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2abd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2abd14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD14u;
    {
        const bool branch_taken_0x2abd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD14u;
            // 0x2abd18: 0x122902  srl         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd14) {
            ctx->pc = 0x2ABD24u;
            goto label_2abd24;
        }
    }
    ctx->pc = 0x2ABD1Cu;
    // 0x2abd1c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x2abd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x2abd20: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2abd24:
    // 0x2abd24: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2abd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2abd28: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2ABD28u;
    SET_GPR_U32(ctx, 31, 0x2ABD30u);
    ctx->pc = 0x2ABD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD28u;
            // 0x2abd2c: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD30u; }
        if (ctx->pc != 0x2ABD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD30u; }
        if (ctx->pc != 0x2ABD30u) { return; }
    }
    ctx->pc = 0x2ABD30u;
label_2abd30:
    // 0x2abd30: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2abd34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2abd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2abd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd3c: 0xc0aae44  jal         func_2AB910
    ctx->pc = 0x2ABD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD44u);
    ctx->pc = 0x2ABD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD3Cu;
            // 0x2abd40: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB910u;
    if (runtime->hasFunction(0x2AB910u)) {
        auto targetFn = runtime->lookupFunction(0x2AB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD44u; }
        if (ctx->pc != 0x2ABD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        worldmap_analyze__FP9mgCMemoryPci_0x2ab910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD44u; }
        if (ctx->pc != 0x2ABD44u) { return; }
    }
    ctx->pc = 0x2ABD44u;
label_2abd44:
    // 0x2abd44: 0xc064220  jal         func_190880
    ctx->pc = 0x2ABD44u;
    SET_GPR_U32(ctx, 31, 0x2ABD4Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD4Cu; }
        if (ctx->pc != 0x2ABD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD4Cu; }
        if (ctx->pc != 0x2ABD4Cu) { return; }
    }
    ctx->pc = 0x2ABD4Cu;
label_2abd4c:
    // 0x2abd4c: 0x8c421a20  lw          $v0, 0x1A20($v0)
    ctx->pc = 0x2abd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6688)));
    // 0x2abd50: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x2abd50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
    // 0x2abd54: 0x87829ae0  lh          $v0, -0x6520($gp)
    ctx->pc = 0x2abd54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941408)));
    // 0x2abd58: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD58u;
    {
        const bool branch_taken_0x2abd58 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2ABD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD58u;
            // 0x2abd5c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd58) {
            ctx->pc = 0x2ABD68u;
            goto label_2abd68;
        }
    }
    ctx->pc = 0x2ABD60u;
    // 0x2abd60: 0xae800188  sw          $zero, 0x188($s4)
    ctx->pc = 0x2abd60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 0));
    // 0x2abd64: 0xa2800b90  sb          $zero, 0xB90($s4)
    ctx->pc = 0x2abd64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2960), (uint8_t)GPR_U32(ctx, 0));
label_2abd68:
    // 0x2abd68: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2abd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2abd6c: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2abd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2abd70: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ABD70u;
    {
        const bool branch_taken_0x2abd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD70u;
            // 0x2abd74: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd70) {
            ctx->pc = 0x2ABDE0u;
            goto label_2abde0;
        }
    }
    ctx->pc = 0x2ABD78u;
    // 0x2abd78: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2abd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2abd7c: 0x8c23d648  lw          $v1, -0x29B8($at)
    ctx->pc = 0x2abd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
    // 0x2abd80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD80u;
    {
        const bool branch_taken_0x2abd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD80u;
            // 0x2abd84: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd80) {
            ctx->pc = 0x2ABD90u;
            goto label_2abd90;
        }
    }
    ctx->pc = 0x2ABD88u;
    // 0x2abd88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABD88u;
    {
        const bool branch_taken_0x2abd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD88u;
            // 0x2abd8c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd88) {
            ctx->pc = 0x2ABDACu;
            goto label_2abdac;
        }
    }
    ctx->pc = 0x2ABD90u;
label_2abd90:
    // 0x2abd90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABD90u;
    {
        const bool branch_taken_0x2abd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD90u;
            // 0x2abd94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd90) {
            ctx->pc = 0x2ABDA0u;
            goto label_2abda0;
        }
    }
    ctx->pc = 0x2ABD98u;
    // 0x2abd98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABD98u;
    {
        const bool branch_taken_0x2abd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD98u;
            // 0x2abd9c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd98) {
            ctx->pc = 0x2ABDACu;
            goto label_2abdac;
        }
    }
    ctx->pc = 0x2ABDA0u;
label_2abda0:
    // 0x2abda0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ABDA0u;
    {
        const bool branch_taken_0x2abda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2abda0) {
            ctx->pc = 0x2ABDACu;
            goto label_2abdac;
        }
    }
    ctx->pc = 0x2ABDA8u;
    // 0x2abda8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2abdac:
    // 0x2abdac: 0x8f849adc  lw          $a0, -0x6524($gp)
    ctx->pc = 0x2abdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941404)));
    // 0x2abdb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABDB0u;
    {
        const bool branch_taken_0x2abdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDB0u;
            // 0x2abdb4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdb0) {
            ctx->pc = 0x2ABDD0u;
            goto label_2abdd0;
        }
    }
    ctx->pc = 0x2ABDB8u;
    // 0x2abdb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abdbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2abdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2abdc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2abdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2abdc4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2abdc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2abdcc: 0xae820174  sw          $v0, 0x174($s4)
    ctx->pc = 0x2abdccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 372), GPR_U32(ctx, 2));
label_2abdd0:
    // 0x2abdd0: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x2abdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x2abdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abdd8: 0xae830110  sw          $v1, 0x110($s4)
    ctx->pc = 0x2abdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
    // 0x2abddc: 0xa2820b90  sb          $v0, 0xB90($s4)
    ctx->pc = 0x2abddcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2960), (uint8_t)GPR_U32(ctx, 2));
label_2abde0:
    // 0x2abde0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2abde4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2abde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abde8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2abde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abdec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2abdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdf0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2abdf4: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2ABDF4u;
    SET_GPR_U32(ctx, 31, 0x2ABDFCu);
    ctx->pc = 0x2ABDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDF4u;
            // 0x2abdf8: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABDFCu; }
        if (ctx->pc != 0x2ABDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABDFCu; }
        if (ctx->pc != 0x2ABDFCu) { return; }
    }
    ctx->pc = 0x2ABDFCu;
label_2abdfc:
    // 0x2abdfc: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x2ABDFCu;
    {
        const bool branch_taken_0x2abdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDFCu;
            // 0x2abe00: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdfc) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABE04u;
label_2abe04:
    // 0x2abe04: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2ABE04u;
    SET_GPR_U32(ctx, 31, 0x2ABE0Cu);
    ctx->pc = 0x2ABE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE04u;
            // 0x2abe08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE0Cu; }
        if (ctx->pc != 0x2ABE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE0Cu; }
        if (ctx->pc != 0x2ABE0Cu) { return; }
    }
    ctx->pc = 0x2ABE0Cu;
label_2abe0c:
    // 0x2abe0c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2ABE0Cu;
    {
        const bool branch_taken_0x2abe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe0c) {
            ctx->pc = 0x2ABE98u;
            goto label_2abe98;
        }
    }
    ctx->pc = 0x2ABE14u;
    // 0x2abe14: 0x8e83016c  lw          $v1, 0x16C($s4)
    ctx->pc = 0x2abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
    // 0x2abe18: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2abe1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2abe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2abe20: 0xae83016c  sw          $v1, 0x16C($s4)
    ctx->pc = 0x2abe20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 364), GPR_U32(ctx, 3));
    // 0x2abe24: 0xae800198  sw          $zero, 0x198($s4)
    ctx->pc = 0x2abe24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 0));
    // 0x2abe28: 0xae80019c  sw          $zero, 0x19C($s4)
    ctx->pc = 0x2abe28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 0));
    // 0x2abe2c: 0xae8001a0  sw          $zero, 0x1A0($s4)
    ctx->pc = 0x2abe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 0));
    // 0x2abe30: 0xae8001a4  sw          $zero, 0x1A4($s4)
    ctx->pc = 0x2abe30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 0));
    // 0x2abe34: 0xa2800b90  sb          $zero, 0xB90($s4)
    ctx->pc = 0x2abe34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2960), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abe38: 0xa280018d  sb          $zero, 0x18D($s4)
    ctx->pc = 0x2abe38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 397), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abe3c: 0xa2800b91  sb          $zero, 0xB91($s4)
    ctx->pc = 0x2abe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2961), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abe40: 0xa2800b92  sb          $zero, 0xB92($s4)
    ctx->pc = 0x2abe40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2962), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abe44: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2abe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2abe48: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2abe48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2abe4c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ABE4Cu;
    {
        const bool branch_taken_0x2abe4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2abe4c) {
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE54u;
    // 0x2abe54: 0x8e83016c  lw          $v1, 0x16C($s4)
    ctx->pc = 0x2abe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
    // 0x2abe58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abe5c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ABE5Cu;
    {
        const bool branch_taken_0x2abe5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE5Cu;
            // 0x2abe60: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe5c) {
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE64u;
    // 0x2abe64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2abe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2abe68: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
    // 0x2abe6c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABE6Cu;
    {
        const bool branch_taken_0x2abe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2abe6c) {
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE74u;
    // 0x2abe74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2abe74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abe78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2abe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe7c: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2ABE7Cu;
    SET_GPR_U32(ctx, 31, 0x2ABE84u);
    ctx->pc = 0x2ABE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE7Cu;
            // 0x2abe80: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE84u; }
        if (ctx->pc != 0x2ABE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE84u; }
        if (ctx->pc != 0x2ABE84u) { return; }
    }
    ctx->pc = 0x2ABE84u;
label_2abe84:
    // 0x2abe84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABE84u;
    {
        const bool branch_taken_0x2abe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE84u;
            // 0x2abe88: 0x8e83016c  lw          $v1, 0x16C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe84) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABE8Cu;
label_2abe8c:
    // 0x2abe8c: 0x8e82016c  lw          $v0, 0x16C($s4)
    ctx->pc = 0x2abe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
    // 0x2abe90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2abe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2abe94: 0xae82016c  sw          $v0, 0x16C($s4)
    ctx->pc = 0x2abe94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 364), GPR_U32(ctx, 2));
label_2abe98:
    // 0x2abe98: 0x8e83016c  lw          $v1, 0x16C($s4)
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
label_2abe9c:
    // 0x2abe9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abea0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABEA0u;
    {
        const bool branch_taken_0x2abea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEA0u;
            // 0x2abea4: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abea0) {
            ctx->pc = 0x2ABEB8u;
            goto label_2abeb8;
        }
    }
    ctx->pc = 0x2ABEA8u;
    // 0x2abea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2abea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abeac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2abeacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2abeb0: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2ABEB0u;
    SET_GPR_U32(ctx, 31, 0x2ABEB8u);
    ctx->pc = 0x2ABEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEB0u;
            // 0x2abeb4: 0x26840180  addiu       $a0, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEB8u; }
        if (ctx->pc != 0x2ABEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEB8u; }
        if (ctx->pc != 0x2ABEB8u) { return; }
    }
    ctx->pc = 0x2ABEB8u;
label_2abeb8:
    // 0x2abeb8: 0x8e82016c  lw          $v0, 0x16C($s4)
    ctx->pc = 0x2abeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
    // 0x2abebc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2abebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2abec0: 0x1420028a  bnez        $at, . + 4 + (0x28A << 2)
    ctx->pc = 0x2ABEC0u;
    {
        const bool branch_taken_0x2abec0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEC0u;
            // 0x2abec4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abec0) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABEC8u;
    // 0x2abec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abecc: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
    // 0x2abed0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2abed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2abed4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2abed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2abed8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ABED8u;
    {
        const bool branch_taken_0x2abed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABED8u;
            // 0x2abedc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abed8) {
            ctx->pc = 0x2ABEE4u;
            goto label_2abee4;
        }
    }
    ctx->pc = 0x2ABEE0u;
    // 0x2abee0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2abee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2abee4:
    // 0x2abee4: 0xc065a18  jal         func_196860
    ctx->pc = 0x2ABEE4u;
    SET_GPR_U32(ctx, 31, 0x2ABEECu);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEECu; }
        if (ctx->pc != 0x2ABEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEECu; }
        if (ctx->pc != 0x2ABEECu) { return; }
    }
    ctx->pc = 0x2ABEECu;
label_2abeec:
    // 0x2abeec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2abeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abef4: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2ABEF4u;
    SET_GPR_U32(ctx, 31, 0x2ABEFCu);
    ctx->pc = 0x2ABEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEF4u;
            // 0x2abef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEFCu; }
        if (ctx->pc != 0x2ABEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEFCu; }
        if (ctx->pc != 0x2ABEFCu) { return; }
    }
    ctx->pc = 0x2ABEFCu;
label_2abefc:
    // 0x2abefc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2abefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf00: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2ABF00u;
    SET_GPR_U32(ctx, 31, 0x2ABF08u);
    ctx->pc = 0x2ABF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF00u;
            // 0x2abf04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF08u; }
        if (ctx->pc != 0x2ABF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF08u; }
        if (ctx->pc != 0x2ABF08u) { return; }
    }
    ctx->pc = 0x2ABF08u;
label_2abf08:
    // 0x2abf08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2abf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf0c: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2ABF0Cu;
    SET_GPR_U32(ctx, 31, 0x2ABF14u);
    ctx->pc = 0x2ABF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF0Cu;
            // 0x2abf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF14u; }
        if (ctx->pc != 0x2ABF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF14u; }
        if (ctx->pc != 0x2ABF14u) { return; }
    }
    ctx->pc = 0x2ABF14u;
label_2abf14:
    // 0x2abf14: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x2ABF14u;
    {
        const bool branch_taken_0x2abf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF14u;
            // 0x2abf18: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf14) {
            ctx->pc = 0x2AC8F0u;
            goto label_2ac8f0;
        }
    }
    ctx->pc = 0x2ABF1Cu;
label_2abf1c:
    // 0x2abf1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2abf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2abf20: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2abf24: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABF24u;
    {
        const bool branch_taken_0x2abf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF24u;
            // 0x2abf28: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf24) {
            ctx->pc = 0x2ABF5Cu;
            goto label_2abf5c;
        }
    }
    ctx->pc = 0x2ABF2Cu;
    // 0x2abf2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2abf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2abf30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2abf30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abf34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2abf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2abf38: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2ABF38u;
    SET_GPR_U32(ctx, 31, 0x2ABF40u);
    ctx->pc = 0x2ABF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF38u;
            // 0x2abf3c: 0x26840180  addiu       $a0, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF40u; }
        if (ctx->pc != 0x2ABF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF40u; }
        if (ctx->pc != 0x2ABF40u) { return; }
    }
    ctx->pc = 0x2ABF40u;
label_2abf40:
    // 0x2abf40: 0x12e0026a  beqz        $s7, . + 4 + (0x26A << 2)
    ctx->pc = 0x2ABF40u;
    {
        const bool branch_taken_0x2abf40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF40u;
            // 0x2abf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf40) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABF48u;
    // 0x2abf48: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2abf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2abf4c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2ABF4Cu;
    SET_GPR_U32(ctx, 31, 0x2ABF54u);
    ctx->pc = 0x2ABF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF4Cu;
            // 0x2abf50: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF54u; }
        if (ctx->pc != 0x2ABF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF54u; }
        if (ctx->pc != 0x2ABF54u) { return; }
    }
    ctx->pc = 0x2ABF54u;
label_2abf54:
    // 0x2abf54: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x2ABF54u;
    {
        const bool branch_taken_0x2abf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf54) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABF5Cu;
label_2abf5c:
    // 0x2abf5c: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2abf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x2abf60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABF60u;
    {
        const bool branch_taken_0x2abf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf60) {
            ctx->pc = 0x2ABF84u;
            goto label_2abf84;
        }
    }
    ctx->pc = 0x2ABF68u;
    // 0x2abf68: 0x12e00260  beqz        $s7, . + 4 + (0x260 << 2)
    ctx->pc = 0x2ABF68u;
    {
        const bool branch_taken_0x2abf68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf68) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABF70u;
    // 0x2abf70: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2abf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x2abf74: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2ABF74u;
    SET_GPR_U32(ctx, 31, 0x2ABF7Cu);
    ctx->pc = 0x2ABF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF74u;
            // 0x2abf78: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF7Cu; }
        if (ctx->pc != 0x2ABF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF7Cu; }
        if (ctx->pc != 0x2ABF7Cu) { return; }
    }
    ctx->pc = 0x2ABF7Cu;
label_2abf7c:
    // 0x2abf7c: 0x1000025b  b           . + 4 + (0x25B << 2)
    ctx->pc = 0x2ABF7Cu;
    {
        const bool branch_taken_0x2abf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf7c) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2ABF84u;
label_2abf84:
    // 0x2abf84: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2abf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2abf88: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2ABF88u;
    {
        const bool branch_taken_0x2abf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf88) {
            ctx->pc = 0x2AC04Cu;
            goto label_2ac04c;
        }
    }
    ctx->pc = 0x2ABF90u;
    // 0x2abf90: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2abf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2abf94: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2abf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2abf98: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2ABF98u;
    SET_GPR_U32(ctx, 31, 0x2ABFA0u);
    ctx->pc = 0x2ABF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF98u;
            // 0x2abf9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFA0u; }
        if (ctx->pc != 0x2ABFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFA0u; }
        if (ctx->pc != 0x2ABFA0u) { return; }
    }
    ctx->pc = 0x2ABFA0u;
label_2abfa0:
    // 0x2abfa0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ABFA0u;
    {
        const bool branch_taken_0x2abfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFA0u;
            // 0x2abfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfa0) {
            ctx->pc = 0x2AC044u;
            goto label_2ac044;
        }
    }
    ctx->pc = 0x2ABFA8u;
    // 0x2abfa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2abfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABFB0u;
    {
        const bool branch_taken_0x2abfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFB0u;
            // 0x2abfb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfb0) {
            ctx->pc = 0x2ABFCCu;
            goto label_2abfcc;
        }
    }
    ctx->pc = 0x2ABFB8u;
label_2abfb8:
    // 0x2abfb8: 0x8f829adc  lw          $v0, -0x6524($gp)
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941404)));
    // 0x2abfbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2abfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2abfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2abfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2abfc4: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x2abfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abfc8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2abfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_2abfcc:
    // 0x2abfcc: 0x0  nop
    ctx->pc = 0x2abfccu;
    // NOP
    // 0x2abfd0: 0x87829ad8  lh          $v0, -0x6528($gp)
    ctx->pc = 0x2abfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941400)));
    // 0x2abfd4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2abfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2abfd8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2ABFD8u;
    {
        const bool branch_taken_0x2abfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abfd8) {
            ctx->pc = 0x2ABFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abfb8;
        }
    }
    ctx->pc = 0x2ABFE0u;
    // 0x2abfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2abfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABFE8u;
    {
        const bool branch_taken_0x2abfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFE8u;
            // 0x2abfec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfe8) {
            ctx->pc = 0x2AC004u;
            goto label_2ac004;
        }
    }
    ctx->pc = 0x2ABFF0u;
label_2abff0:
    // 0x2abff0: 0x8f829ad4  lw          $v0, -0x652C($gp)
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2abff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2abff8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abffc: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x2abffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
    // 0x2ac000: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_2ac004:
    // 0x2ac004: 0x0  nop
    ctx->pc = 0x2ac004u;
    // NOP
    // 0x2ac008: 0x87839ad0  lh          $v1, -0x6530($gp)
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ac00c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ac00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ac010: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AC010u;
    {
        const bool branch_taken_0x2ac010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC010u;
            // 0x2ac014: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac010) {
            ctx->pc = 0x2ABFF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abff0;
        }
    }
    ctx->pc = 0x2AC018u;
    // 0x2ac018: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ac018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ac01c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ac01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ac020: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ac024: 0xa7829ae0  sh          $v0, -0x6520($gp)
    ctx->pc = 0x2ac024u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941408), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ac028: 0x24a5e918  addiu       $a1, $a1, -0x16E8
    ctx->pc = 0x2ac028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961432));
    // 0x2ac02c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AC02Cu;
    SET_GPR_U32(ctx, 31, 0x2AC034u);
    ctx->pc = 0x2AC030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC02Cu;
            // 0x2ac030: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC034u; }
        if (ctx->pc != 0x2AC034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC034u; }
        if (ctx->pc != 0x2AC034u) { return; }
    }
    ctx->pc = 0x2AC034u;
label_2ac034:
    // 0x2ac034: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x2ac034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x2ac038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac03c: 0xa2820b90  sb          $v0, 0xB90($s4)
    ctx->pc = 0x2ac03cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2960), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ac040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac044:
    // 0x2ac044: 0x1000029b  b           . + 4 + (0x29B << 2)
    ctx->pc = 0x2AC044u;
    {
        const bool branch_taken_0x2ac044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC044u;
            // 0x2ac048: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac044) {
            ctx->pc = 0x2ACAB4u;
            goto label_2acab4;
        }
    }
    ctx->pc = 0x2AC04Cu;
label_2ac04c:
    // 0x2ac04c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2ac04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ac050: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ac050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac054: 0x1062021c  beq         $v1, $v0, . + 4 + (0x21C << 2)
    ctx->pc = 0x2AC054u;
    {
        const bool branch_taken_0x2ac054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC054u;
            // 0x2ac058: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac054) {
            ctx->pc = 0x2AC8C8u;
            goto label_2ac8c8;
        }
    }
    ctx->pc = 0x2AC05Cu;
    // 0x2ac05c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ac05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac060: 0x106201fe  beq         $v1, $v0, . + 4 + (0x1FE << 2)
    ctx->pc = 0x2AC060u;
    {
        const bool branch_taken_0x2ac060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ac060) {
            ctx->pc = 0x2AC85Cu;
            goto label_2ac85c;
        }
    }
    ctx->pc = 0x2AC068u;
    // 0x2ac068: 0x1064018e  beq         $v1, $a0, . + 4 + (0x18E << 2)
    ctx->pc = 0x2AC068u;
    {
        const bool branch_taken_0x2ac068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AC06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC068u;
            // 0x2ac06c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac068) {
            ctx->pc = 0x2AC6A4u;
            goto label_2ac6a4;
        }
    }
    ctx->pc = 0x2AC070u;
    // 0x2ac070: 0x10670149  beq         $v1, $a3, . + 4 + (0x149 << 2)
    ctx->pc = 0x2AC070u;
    {
        const bool branch_taken_0x2ac070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ac070) {
            ctx->pc = 0x2AC598u;
            goto label_2ac598;
        }
    }
    ctx->pc = 0x2AC078u;
    // 0x2ac078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC078u;
    {
        const bool branch_taken_0x2ac078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac078) {
            ctx->pc = 0x2AC088u;
            goto label_2ac088;
        }
    }
    ctx->pc = 0x2AC080u;
    // 0x2ac080: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x2AC080u;
    {
        const bool branch_taken_0x2ac080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac080) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC088u;
label_2ac088:
    // 0x2ac088: 0x87829ae0  lh          $v0, -0x6520($gp)
    ctx->pc = 0x2ac088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941408)));
    // 0x2ac08c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC08Cu;
    {
        const bool branch_taken_0x2ac08c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AC090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC08Cu;
            // 0x2ac090: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac08c) {
            ctx->pc = 0x2AC0B0u;
            goto label_2ac0b0;
        }
    }
    ctx->pc = 0x2AC094u;
    // 0x2ac094: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC094u;
    {
        const bool branch_taken_0x2ac094 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC094u;
            // 0x2ac098: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac094) {
            ctx->pc = 0x2AC0B0u;
            goto label_2ac0b0;
        }
    }
    ctx->pc = 0x2AC09Cu;
    // 0x2ac09c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC09Cu;
    SET_GPR_U32(ctx, 31, 0x2AC0A4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0A4u; }
        if (ctx->pc != 0x2AC0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0A4u; }
        if (ctx->pc != 0x2AC0A4u) { return; }
    }
    ctx->pc = 0x2AC0A4u;
label_2ac0a4:
    // 0x2ac0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac0a8: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x2AC0A8u;
    {
        const bool branch_taken_0x2ac0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0A8u;
            // 0x2ac0ac: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0a8) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC0B0u;
label_2ac0b0:
    // 0x2ac0b0: 0x102000f2  beqz        $at, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2AC0B0u;
    {
        const bool branch_taken_0x2ac0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0B0u;
            // 0x2ac0b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0b0) {
            ctx->pc = 0x2AC47Cu;
            goto label_2ac47c;
        }
    }
    ctx->pc = 0x2AC0B8u;
    // 0x2ac0b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ac0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ac0bc: 0xae800a8c  sw          $zero, 0xA8C($s4)
    ctx->pc = 0x2ac0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2700), GPR_U32(ctx, 0));
    // 0x2ac0c0: 0x24424590  addiu       $v0, $v0, 0x4590
    ctx->pc = 0x2ac0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17808));
    // 0x2ac0c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ac0c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ac0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac0cc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ac0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2ac0d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC0D0u;
    {
        const bool branch_taken_0x2ac0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0D0u;
            // 0x2ac0d4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0d0) {
            ctx->pc = 0x2AC0F0u;
            goto label_2ac0f0;
        }
    }
    ctx->pc = 0x2AC0D8u;
    // 0x2ac0d8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2ac0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac0dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0e4: 0x0  nop
    ctx->pc = 0x2ac0e4u;
    // NOP
    // 0x2ac0e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ac0e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac0ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2ac0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2ac0f0:
    // 0x2ac0f0: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2ac0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2ac0f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC0F4u;
    {
        const bool branch_taken_0x2ac0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0F4u;
            // 0x2ac0f8: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0f4) {
            ctx->pc = 0x2AC118u;
            goto label_2ac118;
        }
    }
    ctx->pc = 0x2AC0FCu;
    // 0x2ac0fc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2ac0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac108: 0x0  nop
    ctx->pc = 0x2ac108u;
    // NOP
    // 0x2ac10c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ac10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac110: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2ac110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2ac114: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2ac114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_2ac118:
    // 0x2ac118: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC118u;
    {
        const bool branch_taken_0x2ac118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC118u;
            // 0x2ac11c: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac118) {
            ctx->pc = 0x2AC13Cu;
            goto label_2ac13c;
        }
    }
    ctx->pc = 0x2AC120u;
    // 0x2ac120: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2ac120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac12c: 0x0  nop
    ctx->pc = 0x2ac12cu;
    // NOP
    // 0x2ac130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ac130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac134: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2ac134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2ac138: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2ac138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2ac13c:
    // 0x2ac13c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC13Cu;
    {
        const bool branch_taken_0x2ac13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC13Cu;
            // 0x2ac140: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac13c) {
            ctx->pc = 0x2AC15Cu;
            goto label_2ac15c;
        }
    }
    ctx->pc = 0x2AC144u;
    // 0x2ac144: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2ac144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac150: 0x0  nop
    ctx->pc = 0x2ac150u;
    // NOP
    // 0x2ac154: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ac154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac158: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2ac158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2ac15c:
    // 0x2ac15c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2AC15Cu;
    SET_GPR_U32(ctx, 31, 0x2AC164u);
    ctx->pc = 0x2AC160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC15Cu;
            // 0x2ac160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC164u; }
        if (ctx->pc != 0x2AC164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC164u; }
        if (ctx->pc != 0x2AC164u) { return; }
    }
    ctx->pc = 0x2AC164u;
label_2ac164:
    // 0x2ac164: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ac164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ac168: 0x8e860110  lw          $a2, 0x110($s4)
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2ac16c: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
    // 0x2ac170: 0x8f849ad4  lw          $a0, -0x652C($gp)
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ac174: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac178: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2ac178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ac17c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ac17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ac184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac188: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2ac18c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ac190: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ac190u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2ac194: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2ac194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ac198: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac1a0: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac1a4: 0xc6c00028  lwc1        $f0, 0x28($s6)
    ctx->pc = 0x2ac1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac1a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac1ac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2ac1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2ac1b0: 0xc6c0002c  lwc1        $f0, 0x2C($s6)
    ctx->pc = 0x2ac1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac1b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac1b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac1b8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2ac1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2ac1bc:
    // 0x2ac1bc: 0x2881821  addu        $v1, $s4, $t0
    ctx->pc = 0x2ac1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x2ac1c0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2ac1c4: 0xac600a90  sw          $zero, 0xA90($v1)
    ctx->pc = 0x2ac1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2704), GPR_U32(ctx, 0));
    // 0x2ac1c8: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x2ac1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2ac1cc: 0xac600a94  sw          $zero, 0xA94($v1)
    ctx->pc = 0x2ac1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2708), GPR_U32(ctx, 0));
    // 0x2ac1d0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2ac1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ac1d4: 0xac600a98  sw          $zero, 0xA98($v1)
    ctx->pc = 0x2ac1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2712), GPR_U32(ctx, 0));
    // 0x2ac1d8: 0xac600a9c  sw          $zero, 0xA9C($v1)
    ctx->pc = 0x2ac1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2716), GPR_U32(ctx, 0));
    // 0x2ac1dc: 0xac600aa0  sw          $zero, 0xAA0($v1)
    ctx->pc = 0x2ac1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2720), GPR_U32(ctx, 0));
    // 0x2ac1e0: 0xac600aa4  sw          $zero, 0xAA4($v1)
    ctx->pc = 0x2ac1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2724), GPR_U32(ctx, 0));
    // 0x2ac1e4: 0xac600aa8  sw          $zero, 0xAA8($v1)
    ctx->pc = 0x2ac1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2728), GPR_U32(ctx, 0));
    // 0x2ac1e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AC1E8u;
    {
        const bool branch_taken_0x2ac1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1E8u;
            // 0x2ac1ec: 0xac600aac  sw          $zero, 0xAAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1e8) {
            ctx->pc = 0x2AC1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac1bc;
        }
    }
    ctx->pc = 0x2AC1F0u;
    // 0x2ac1f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ac1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac1f4: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2ac1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac1f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2AC1F8u;
    {
        const bool branch_taken_0x2ac1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1F8u;
            // 0x2ac1fc: 0x2412004c  addiu       $s2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1f8) {
            ctx->pc = 0x2AC2DCu;
            goto label_2ac2dc;
        }
    }
    ctx->pc = 0x2AC200u;
label_2ac200:
    // 0x2ac200: 0xac400a90  sw          $zero, 0xA90($v0)
    ctx->pc = 0x2ac200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2704), GPR_U32(ctx, 0));
    // 0x2ac204: 0x8f829ad4  lw          $v0, -0x652C($gp)
    ctx->pc = 0x2ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ac208: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x2ac208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ac20c: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x2ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2ac210: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AC210u;
    {
        const bool branch_taken_0x2ac210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac210) {
            ctx->pc = 0x2AC2D0u;
            goto label_2ac2d0;
        }
    }
    ctx->pc = 0x2AC218u;
    // 0x2ac218: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2ac21c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac220: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AC220u;
    {
        const bool branch_taken_0x2ac220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC220u;
            // 0x2ac224: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac220) {
            ctx->pc = 0x2AC2D0u;
            goto label_2ac2d0;
        }
    }
    ctx->pc = 0x2AC228u;
    // 0x2ac228: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2ac228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ac22c: 0x244245b0  addiu       $v0, $v0, 0x45B0
    ctx->pc = 0x2ac22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
    // 0x2ac230: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2ac230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ac234: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ac234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac238: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2ac238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ac23c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2ac23cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2ac240: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x2ac240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac248: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2ac248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2ac24c: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x2ac24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac254: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2AC254u;
    SET_GPR_U32(ctx, 31, 0x2AC25Cu);
    ctx->pc = 0x2AC258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC254u;
            // 0x2ac258: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC25Cu; }
        if (ctx->pc != 0x2AC25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC25Cu; }
        if (ctx->pc != 0x2AC25Cu) { return; }
    }
    ctx->pc = 0x2AC25Cu;
label_2ac25c:
    // 0x2ac25c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2ac25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ac260: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2AC260u;
    SET_GPR_U32(ctx, 31, 0x2AC268u);
    ctx->pc = 0x2AC264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC260u;
            // 0x2ac264: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC268u; }
        if (ctx->pc != 0x2AC268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC268u; }
        if (ctx->pc != 0x2AC268u) { return; }
    }
    ctx->pc = 0x2AC268u;
label_2ac268:
    // 0x2ac268: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ac268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ac26c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2AC26Cu;
    SET_GPR_U32(ctx, 31, 0x2AC274u);
    ctx->pc = 0x2AC270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC26Cu;
            // 0x2ac270: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC274u; }
        if (ctx->pc != 0x2AC274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC274u; }
        if (ctx->pc != 0x2AC274u) { return; }
    }
    ctx->pc = 0x2AC274u;
label_2ac274:
    // 0x2ac274: 0x8e820a8c  lw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ac278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ac27c: 0x8f839ad4  lw          $v1, -0x652C($gp)
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ac280: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2ac280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ac284: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ac288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac28c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2ac28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ac290: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac294: 0xc04c018  jal         func_130060
    ctx->pc = 0x2AC294u;
    SET_GPR_U32(ctx, 31, 0x2AC29Cu);
    ctx->pc = 0x2AC298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC294u;
            // 0x2ac298: 0xac430a90  sw          $v1, 0xA90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC29Cu; }
        if (ctx->pc != 0x2AC29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC29Cu; }
        if (ctx->pc != 0x2AC29Cu) { return; }
    }
    ctx->pc = 0x2AC29Cu;
label_2ac29c:
    // 0x2ac29c: 0x8e820a8c  lw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac2a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac2a8: 0x8c420a90  lw          $v0, 0xA90($v0)
    ctx->pc = 0x2ac2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac2ac: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ac2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ac2b0: 0x8e820a8c  lw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac2b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac2bc: 0x8c420a90  lw          $v0, 0xA90($v0)
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac2c0: 0xe4540048  swc1        $f20, 0x48($v0)
    ctx->pc = 0x2ac2c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ac2c4: 0x8e820a8c  lw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac2cc: 0xae820a8c  sw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2700), GPR_U32(ctx, 2));
label_2ac2d0:
    // 0x2ac2d0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2ac2d4: 0x2652004c  addiu       $s2, $s2, 0x4C
    ctx->pc = 0x2ac2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x2ac2d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ac2d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ac2dc:
    // 0x2ac2dc: 0x0  nop
    ctx->pc = 0x2ac2dcu;
    // NOP
    // 0x2ac2e0: 0x87829ad0  lh          $v0, -0x6530($gp)
    ctx->pc = 0x2ac2e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ac2e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2ac2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac2e8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2AC2E8u;
    {
        const bool branch_taken_0x2ac2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC2E8u;
            // 0x2ac2ec: 0x2951021  addu        $v0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2e8) {
            ctx->pc = 0x2AC200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac200;
        }
    }
    ctx->pc = 0x2AC2F0u;
    // 0x2ac2f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AC2F0u;
    {
        const bool branch_taken_0x2ac2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC2F0u;
            // 0x2ac2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2f0) {
            ctx->pc = 0x2AC374u;
            goto label_2ac374;
        }
    }
    ctx->pc = 0x2AC2F8u;
label_2ac2f8:
    // 0x2ac2f8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2ac2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ac2fc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ac300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac304: 0x24470a90  addiu       $a3, $v0, 0xA90
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
    // 0x2ac308: 0x8c420a90  lw          $v0, 0xA90($v0)
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac30c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2ac30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac310: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AC310u;
    {
        const bool branch_taken_0x2ac310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC310u;
            // 0x2ac314: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac310) {
            ctx->pc = 0x2AC350u;
            goto label_2ac350;
        }
    }
    ctx->pc = 0x2AC318u;
label_2ac318:
    // 0x2ac318: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x2ac318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2ac31c: 0x8c480a90  lw          $t0, 0xA90($v0)
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac320: 0xc5000044  lwc1        $f0, 0x44($t0)
    ctx->pc = 0x2ac320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac324: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ac324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac328: 0x0  nop
    ctx->pc = 0x2ac328u;
    // NOP
    // 0x2ac32c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC32Cu;
    {
        const bool branch_taken_0x2ac32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC32Cu;
            // 0x2ac330: 0x24490a90  addiu       $t1, $v0, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac32c) {
            ctx->pc = 0x2AC344u;
            goto label_2ac344;
        }
    }
    ctx->pc = 0x2AC334u;
    // 0x2ac334: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac338: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2ac338u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ac33c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x2ac33cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x2ac340: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2ac340u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_2ac344:
    // 0x2ac344: 0x0  nop
    ctx->pc = 0x2ac344u;
    // NOP
    // 0x2ac348: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ac348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ac34c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ac34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ac350:
    // 0x2ac350: 0x8e820a8c  lw          $v0, 0xA8C($s4)
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac354: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2ac354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac358: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2AC358u;
    {
        const bool branch_taken_0x2ac358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac358) {
            ctx->pc = 0x2AC318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac318;
        }
    }
    ctx->pc = 0x2AC360u;
    // 0x2ac360: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC360u;
    {
        const bool branch_taken_0x2ac360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac360) {
            ctx->pc = 0x2AC36Cu;
            goto label_2ac36c;
        }
    }
    ctx->pc = 0x2AC368u;
    // 0x2ac368: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ac368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac36c:
    // 0x2ac36c: 0x0  nop
    ctx->pc = 0x2ac36cu;
    // NOP
    // 0x2ac370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ac374:
    // 0x2ac374: 0x0  nop
    ctx->pc = 0x2ac374u;
    // NOP
    // 0x2ac378: 0x8e850a8c  lw          $a1, 0xA8C($s4)
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2700)));
    // 0x2ac37c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2ac37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac380: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2AC380u;
    {
        const bool branch_taken_0x2ac380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC380u;
            // 0x2ac384: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac380) {
            ctx->pc = 0x2AC2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac2f8;
        }
    }
    ctx->pc = 0x2AC388u;
    // 0x2ac388: 0x3c023f38  lui         $v0, 0x3F38
    ctx->pc = 0x2ac388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16184 << 16));
    // 0x2ac38c: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x2ac38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ac390: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2ac394: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ac394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ac398: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ac398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ac39c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac3a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ac3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac3a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AC3A4u;
    {
        const bool branch_taken_0x2ac3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3A4u;
            // 0x2ac3a8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3a4) {
            ctx->pc = 0x2AC404u;
            goto label_2ac404;
        }
    }
    ctx->pc = 0x2AC3ACu;
label_2ac3ac:
    // 0x2ac3ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AC3ACu;
    {
        const bool branch_taken_0x2ac3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3ACu;
            // 0x2ac3b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3ac) {
            ctx->pc = 0x2AC3F0u;
            goto label_2ac3f0;
        }
    }
    ctx->pc = 0x2AC3B4u;
label_2ac3b4:
    // 0x2ac3b4: 0x0  nop
    ctx->pc = 0x2ac3b4u;
    // NOP
    // 0x2ac3b8: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x2ac3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ac3bc: 0x8c420a90  lw          $v0, 0xA90($v0)
    ctx->pc = 0x2ac3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac3c0: 0xc4420048  lwc1        $f2, 0x48($v0)
    ctx->pc = 0x2ac3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac3c4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2ac3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac3c8: 0x0  nop
    ctx->pc = 0x2ac3c8u;
    // NOP
    // 0x2ac3cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC3CCu;
    {
        const bool branch_taken_0x2ac3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3CCu;
            // 0x2ac3d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3cc) {
            ctx->pc = 0x2AC3E4u;
            goto label_2ac3e4;
        }
    }
    ctx->pc = 0x2AC3D4u;
    // 0x2ac3d4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac3d8: 0x8c510a90  lw          $s1, 0xA90($v0)
    ctx->pc = 0x2ac3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x2ac3dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC3DCu;
    {
        const bool branch_taken_0x2ac3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3DCu;
            // 0x2ac3e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3dc) {
            ctx->pc = 0x2AC3FCu;
            goto label_2ac3fc;
        }
    }
    ctx->pc = 0x2AC3E4u;
label_2ac3e4:
    // 0x2ac3e4: 0x0  nop
    ctx->pc = 0x2ac3e4u;
    // NOP
    // 0x2ac3e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ac3ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ac3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ac3f0:
    // 0x2ac3f0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2ac3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac3f4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2AC3F4u;
    {
        const bool branch_taken_0x2ac3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3f4) {
            ctx->pc = 0x2AC3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac3b4;
        }
    }
    ctx->pc = 0x2AC3FCu;
label_2ac3fc:
    // 0x2ac3fc: 0x0  nop
    ctx->pc = 0x2ac3fcu;
    // NOP
    // 0x2ac400: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2ac400u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2ac404:
    // 0x2ac404: 0x0  nop
    ctx->pc = 0x2ac404u;
    // NOP
    // 0x2ac408: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC408u;
    {
        const bool branch_taken_0x2ac408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac408) {
            ctx->pc = 0x2AC420u;
            goto label_2ac420;
        }
    }
    ctx->pc = 0x2AC410u;
    // 0x2ac410: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2ac410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac414: 0x0  nop
    ctx->pc = 0x2ac414u;
    // NOP
    // 0x2ac418: 0x4501ffe4  bc1t        . + 4 + (-0x1C << 2)
    ctx->pc = 0x2AC418u;
    {
        const bool branch_taken_0x2ac418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC418u;
            // 0x2ac41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac418) {
            ctx->pc = 0x2AC3ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac3ac;
        }
    }
    ctx->pc = 0x2AC420u;
label_2ac420:
    // 0x2ac420: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC420u;
    {
        const bool branch_taken_0x2ac420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac420) {
            ctx->pc = 0x2AC42Cu;
            goto label_2ac42c;
        }
    }
    ctx->pc = 0x2AC428u;
    // 0x2ac428: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2ac428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ac42c:
    // 0x2ac42c: 0x8f849ad4  lw          $a0, -0x652C($gp)
    ctx->pc = 0x2ac42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ac430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac434: 0x87839ad0  lh          $v1, -0x6530($gp)
    ctx->pc = 0x2ac434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ac438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC438u;
    {
        const bool branch_taken_0x2ac438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC438u;
            // 0x2ac43c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac438) {
            ctx->pc = 0x2AC458u;
            goto label_2ac458;
        }
    }
    ctx->pc = 0x2AC440u;
label_2ac440:
    // 0x2ac440: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC440u;
    {
        const bool branch_taken_0x2ac440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac440) {
            ctx->pc = 0x2AC450u;
            goto label_2ac450;
        }
    }
    ctx->pc = 0x2AC448u;
    // 0x2ac448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC448u;
    {
        const bool branch_taken_0x2ac448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC448u;
            // 0x2ac44c: 0xae860110  sw          $a2, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac448) {
            ctx->pc = 0x2AC464u;
            goto label_2ac464;
        }
    }
    ctx->pc = 0x2AC450u;
label_2ac450:
    // 0x2ac450: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x2ac450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x2ac454: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ac454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ac458:
    // 0x2ac458: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ac45c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AC45Cu;
    {
        const bool branch_taken_0x2ac45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC45Cu;
            // 0x2ac460: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac45c) {
            ctx->pc = 0x2AC440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac440;
        }
    }
    ctx->pc = 0x2AC464u;
label_2ac464:
    // 0x2ac464: 0x0  nop
    ctx->pc = 0x2ac464u;
    // NOP
    // 0x2ac468: 0x12360003  beq         $s1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC468u;
    {
        const bool branch_taken_0x2ac468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x2AC46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC468u;
            // 0x2ac46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac468) {
            ctx->pc = 0x2AC478u;
            goto label_2ac478;
        }
    }
    ctx->pc = 0x2AC470u;
    // 0x2ac470: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC470u;
    SET_GPR_U32(ctx, 31, 0x2AC478u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC478u; }
        if (ctx->pc != 0x2AC478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC478u; }
        if (ctx->pc != 0x2AC478u) { return; }
    }
    ctx->pc = 0x2AC478u;
label_2ac478:
    // 0x2ac478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac47c:
    // 0x2ac47c: 0x12e20041  beq         $s7, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AC47Cu;
    {
        const bool branch_taken_0x2ac47c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC47Cu;
            // 0x2ac480: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac47c) {
            ctx->pc = 0x2AC584u;
            goto label_2ac584;
        }
    }
    ctx->pc = 0x2AC484u;
    // 0x2ac484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac488: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC488u;
    {
        const bool branch_taken_0x2ac488 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ac488) {
            ctx->pc = 0x2AC498u;
            goto label_2ac498;
        }
    }
    ctx->pc = 0x2AC490u;
    // 0x2ac490: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2AC490u;
    {
        const bool branch_taken_0x2ac490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac490) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC498u;
label_2ac498:
    // 0x2ac498: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ac498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2ac49c: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x2ac49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2ac4a0: 0x8f829ad4  lw          $v0, -0x652C($gp)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ac4a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2ac4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ac4a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac4ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac4b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac4bc: 0xae820a80  sw          $v0, 0xA80($s4)
    ctx->pc = 0x2ac4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2688), GPR_U32(ctx, 2));
    // 0x2ac4c0: 0x8e820a80  lw          $v0, 0xA80($s4)
    ctx->pc = 0x2ac4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ac4c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC4C4u;
    {
        const bool branch_taken_0x2ac4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC4C4u;
            // 0x2ac4c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4c4) {
            ctx->pc = 0x2AC4DCu;
            goto label_2ac4dc;
        }
    }
    ctx->pc = 0x2AC4CCu;
    // 0x2ac4cc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC4CCu;
    SET_GPR_U32(ctx, 31, 0x2AC4D4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC4D4u; }
        if (ctx->pc != 0x2AC4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC4D4u; }
        if (ctx->pc != 0x2AC4D4u) { return; }
    }
    ctx->pc = 0x2AC4D4u;
label_2ac4d4:
    // 0x2ac4d4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2AC4D4u;
    {
        const bool branch_taken_0x2ac4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac4d4) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC4DCu;
label_2ac4dc:
    // 0x2ac4dc: 0xae800a84  sw          $zero, 0xA84($s4)
    ctx->pc = 0x2ac4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2692), GPR_U32(ctx, 0));
    // 0x2ac4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ac4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac4ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ac4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ac4f0:
    // 0x2ac4f0: 0x8e820a80  lw          $v0, 0xA80($s4)
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ac4f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2ac4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ac4f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ac4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac4fc: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AC4FCu;
    {
        const bool branch_taken_0x2ac4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac4fc) {
            ctx->pc = 0x2AC554u;
            goto label_2ac554;
        }
    }
    ctx->pc = 0x2AC504u;
    // 0x2ac504: 0x80a2000f  lb          $v0, 0xF($a1)
    ctx->pc = 0x2ac504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x2ac508: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC508u;
    {
        const bool branch_taken_0x2ac508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac508) {
            ctx->pc = 0x2AC554u;
            goto label_2ac554;
        }
    }
    ctx->pc = 0x2AC510u;
    // 0x2ac510: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac514: 0x80a50012  lb          $a1, 0x12($a1)
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x2ac518: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ac518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ac51c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac520: 0xa4450b94  sh          $a1, 0xB94($v0)
    ctx->pc = 0x2ac520u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2964), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac524: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac528: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ac528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ac52c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ac52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac530: 0x24450b94  addiu       $a1, $v0, 0xB94
    ctx->pc = 0x2ac530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2964));
    // 0x2ac534: 0x84420b94  lh          $v0, 0xB94($v0)
    ctx->pc = 0x2ac534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2964)));
    // 0x2ac538: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC538u;
    {
        const bool branch_taken_0x2ac538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ac538) {
            ctx->pc = 0x2AC544u;
            goto label_2ac544;
        }
    }
    ctx->pc = 0x2AC540u;
    // 0x2ac540: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2ac540u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ac544:
    // 0x2ac544: 0x0  nop
    ctx->pc = 0x2ac544u;
    // NOP
    // 0x2ac548: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac54c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac550: 0xae820a84  sw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac550u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2692), GPR_U32(ctx, 2));
label_2ac554:
    // 0x2ac554: 0x0  nop
    ctx->pc = 0x2ac554u;
    // NOP
    // 0x2ac558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ac558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ac55c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x2ac55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ac560: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2AC560u;
    {
        const bool branch_taken_0x2ac560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC560u;
            // 0x2ac564: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac560) {
            ctx->pc = 0x2AC4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac4f0;
        }
    }
    ctx->pc = 0x2AC568u;
    // 0x2ac568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac56c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2AC56Cu;
    SET_GPR_U32(ctx, 31, 0x2AC574u);
    ctx->pc = 0x2AC570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC56Cu;
            // 0x2ac570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC574u; }
        if (ctx->pc != 0x2AC574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC574u; }
        if (ctx->pc != 0x2AC574u) { return; }
    }
    ctx->pc = 0x2AC574u;
label_2ac574:
    // 0x2ac574: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC574u;
    SET_GPR_U32(ctx, 31, 0x2AC57Cu);
    ctx->pc = 0x2AC578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC574u;
            // 0x2ac578: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC57Cu; }
        if (ctx->pc != 0x2AC57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC57Cu; }
        if (ctx->pc != 0x2AC57Cu) { return; }
    }
    ctx->pc = 0x2AC57Cu;
label_2ac57c:
    // 0x2ac57c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2AC57Cu;
    {
        const bool branch_taken_0x2ac57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac57c) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC584u;
label_2ac584:
    // 0x2ac584: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC584u;
    SET_GPR_U32(ctx, 31, 0x2AC58Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC58Cu; }
        if (ctx->pc != 0x2AC58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC58Cu; }
        if (ctx->pc != 0x2AC58Cu) { return; }
    }
    ctx->pc = 0x2AC58Cu;
label_2ac58c:
    // 0x2ac58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac590: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2AC590u;
    {
        const bool branch_taken_0x2ac590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC590u;
            // 0x2ac594: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac590) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC598u;
label_2ac598:
    // 0x2ac598: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5a4: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x2AC5A4u;
    SET_GPR_U32(ctx, 31, 0x2AC5ACu);
    ctx->pc = 0x2AC5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5A4u;
            // 0x2ac5a8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5ACu; }
        if (ctx->pc != 0x2AC5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5ACu; }
        if (ctx->pc != 0x2AC5ACu) { return; }
    }
    ctx->pc = 0x2AC5ACu;
label_2ac5ac:
    // 0x2ac5ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ac5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac5b0: 0x12e20038  beq         $s7, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2AC5B0u;
    {
        const bool branch_taken_0x2ac5b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5B0u;
            // 0x2ac5b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5b0) {
            ctx->pc = 0x2AC694u;
            goto label_2ac694;
        }
    }
    ctx->pc = 0x2AC5B8u;
    // 0x2ac5b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ac5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac5bc: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC5BCu;
    {
        const bool branch_taken_0x2ac5bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5BCu;
            // 0x2ac5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5bc) {
            ctx->pc = 0x2AC5D4u;
            goto label_2ac5d4;
        }
    }
    ctx->pc = 0x2AC5C4u;
    // 0x2ac5c4: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC5C4u;
    {
        const bool branch_taken_0x2ac5c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ac5c4) {
            ctx->pc = 0x2AC5D4u;
            goto label_2ac5d4;
        }
    }
    ctx->pc = 0x2AC5CCu;
    // 0x2ac5cc: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2AC5CCu;
    {
        const bool branch_taken_0x2ac5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac5cc) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC5D4u;
label_2ac5d4:
    // 0x2ac5d4: 0xae800a88  sw          $zero, 0xA88($s4)
    ctx->pc = 0x2ac5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2696), GPR_U32(ctx, 0));
    // 0x2ac5d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ac5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ac5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ac5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac5e4:
    // 0x2ac5e4: 0x8e820a80  lw          $v0, 0xA80($s4)
    ctx->pc = 0x2ac5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ac5e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ac5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ac5ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ac5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac5f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC5F0u;
    {
        const bool branch_taken_0x2ac5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac5f0) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC5F8u;
    // 0x2ac5f8: 0x8042000f  lb          $v0, 0xF($v0)
    ctx->pc = 0x2ac5f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x2ac5fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC5FCu;
    {
        const bool branch_taken_0x2ac5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5FCu;
            // 0x2ac600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5fc) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC604u;
    // 0x2ac604: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2AC604u;
    SET_GPR_U32(ctx, 31, 0x2AC60Cu);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC60Cu; }
        if (ctx->pc != 0x2AC60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC60Cu; }
        if (ctx->pc != 0x2AC60Cu) { return; }
    }
    ctx->pc = 0x2AC60Cu;
label_2ac60c:
    // 0x2ac60c: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC60Cu;
    {
        const bool branch_taken_0x2ac60c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac60c) {
            ctx->pc = 0x2AC62Cu;
            goto label_2ac62c;
        }
    }
    ctx->pc = 0x2AC614u;
    // 0x2ac614: 0x8e830a80  lw          $v1, 0xA80($s4)
    ctx->pc = 0x2ac614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ac618: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ac61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac620: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC624u;
    {
        const bool branch_taken_0x2ac624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC624u;
            // 0x2ac628: 0xae820a88  sw          $v0, 0xA88($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac624) {
            ctx->pc = 0x2AC640u;
            goto label_2ac640;
        }
    }
    ctx->pc = 0x2AC62Cu;
label_2ac62c:
    // 0x2ac62c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ac62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ac630:
    // 0x2ac630: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ac630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ac634: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2ac634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ac638: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2AC638u;
    {
        const bool branch_taken_0x2ac638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC638u;
            // 0x2ac63c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac638) {
            ctx->pc = 0x2AC5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac5e4;
        }
    }
    ctx->pc = 0x2AC640u;
label_2ac640:
    // 0x2ac640: 0x8e820a88  lw          $v0, 0xA88($s4)
    ctx->pc = 0x2ac640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac644: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC644u;
    {
        const bool branch_taken_0x2ac644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC644u;
            // 0x2ac648: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac644) {
            ctx->pc = 0x2AC65Cu;
            goto label_2ac65c;
        }
    }
    ctx->pc = 0x2AC64Cu;
    // 0x2ac64c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC64Cu;
    SET_GPR_U32(ctx, 31, 0x2AC654u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC654u; }
        if (ctx->pc != 0x2AC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC654u; }
        if (ctx->pc != 0x2AC654u) { return; }
    }
    ctx->pc = 0x2AC654u;
label_2ac654:
    // 0x2ac654: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2AC654u;
    {
        const bool branch_taken_0x2ac654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac654) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC65Cu;
label_2ac65c:
    // 0x2ac65c: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2ac65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ac660: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ac660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac664: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x2ac664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
    // 0x2ac668: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC668u;
    {
        const bool branch_taken_0x2ac668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AC66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC668u;
            // 0x2ac66c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac668) {
            ctx->pc = 0x2AC680u;
            goto label_2ac680;
        }
    }
    ctx->pc = 0x2AC670u;
    // 0x2ac670: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC670u;
    SET_GPR_U32(ctx, 31, 0x2AC678u);
    ctx->pc = 0x2AC674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC670u;
            // 0x2ac674: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC678u; }
        if (ctx->pc != 0x2AC678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC678u; }
        if (ctx->pc != 0x2AC678u) { return; }
    }
    ctx->pc = 0x2AC678u;
label_2ac678:
    // 0x2ac678: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2AC678u;
    {
        const bool branch_taken_0x2ac678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac678) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC680u;
label_2ac680:
    // 0x2ac680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac684: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC684u;
    SET_GPR_U32(ctx, 31, 0x2AC68Cu);
    ctx->pc = 0x2AC688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC684u;
            // 0x2ac688: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC68Cu; }
        if (ctx->pc != 0x2AC68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC68Cu; }
        if (ctx->pc != 0x2AC68Cu) { return; }
    }
    ctx->pc = 0x2AC68Cu;
label_2ac68c:
    // 0x2ac68c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2AC68Cu;
    {
        const bool branch_taken_0x2ac68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac68c) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC694u;
label_2ac694:
    // 0x2ac694: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC694u;
    SET_GPR_U32(ctx, 31, 0x2AC69Cu);
    ctx->pc = 0x2AC698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC694u;
            // 0x2ac698: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC69Cu; }
        if (ctx->pc != 0x2AC69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC69Cu; }
        if (ctx->pc != 0x2AC69Cu) { return; }
    }
    ctx->pc = 0x2AC69Cu;
label_2ac69c:
    // 0x2ac69c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2AC69Cu;
    {
        const bool branch_taken_0x2ac69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac69c) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC6A4u;
label_2ac6a4:
    // 0x2ac6a4: 0xc087654  jal         func_21D950
    ctx->pc = 0x2AC6A4u;
    SET_GPR_U32(ctx, 31, 0x2AC6ACu);
    ctx->pc = 0x2AC6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC6A4u;
            // 0x2ac6a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6ACu; }
        if (ctx->pc != 0x2AC6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6ACu; }
        if (ctx->pc != 0x2AC6ACu) { return; }
    }
    ctx->pc = 0x2AC6ACu;
label_2ac6ac:
    // 0x2ac6ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ac6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac6b4: 0x16250062  bne         $s1, $a1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2AC6B4u;
    {
        const bool branch_taken_0x2ac6b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AC6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC6B4u;
            // 0x2ac6b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6b4) {
            ctx->pc = 0x2AC840u;
            goto label_2ac840;
        }
    }
    ctx->pc = 0x2AC6BCu;
    // 0x2ac6bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ac6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ac6c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac6c4: 0xac24d62c  sw          $a0, -0x29D4($at)
    ctx->pc = 0x2ac6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 4));
    // 0x2ac6c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ac6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac6cc: 0x8e830a88  lw          $v1, 0xA88($s4)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac6d0: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ac6d4: 0xa7839ae8  sh          $v1, -0x6518($gp)
    ctx->pc = 0x2ac6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941416), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac6d8: 0x8e830a88  lw          $v1, 0xA88($s4)
    ctx->pc = 0x2ac6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac6dc: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x2ac6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ac6e0: 0xa7839aec  sh          $v1, -0x6514($gp)
    ctx->pc = 0x2ac6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941420), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac6e4: 0x8e860a88  lw          $a2, 0xA88($s4)
    ctx->pc = 0x2ac6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac6e8: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ac6ec: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC6ECu;
    {
        const bool branch_taken_0x2ac6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac6ec) {
            ctx->pc = 0x2AC768u;
            goto label_2ac768;
        }
    }
    ctx->pc = 0x2AC6F4u;
    // 0x2ac6f4: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x2ac6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ac6f8: 0xa7829aec  sh          $v0, -0x6514($gp)
    ctx->pc = 0x2ac6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941420), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ac6fc: 0x8e820a88  lw          $v0, 0xA88($s4)
    ctx->pc = 0x2ac6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac700: 0x8042000e  lb          $v0, 0xE($v0)
    ctx->pc = 0x2ac700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2ac704: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC704u;
    {
        const bool branch_taken_0x2ac704 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ac704) {
            ctx->pc = 0x2AC730u;
            goto label_2ac730;
        }
    }
    ctx->pc = 0x2AC70Cu;
    // 0x2ac70c: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2ac70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2ac710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ac710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac718: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2ac718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ac71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac720: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2AC720u;
    SET_GPR_U32(ctx, 31, 0x2AC728u);
    ctx->pc = 0x2AC724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC720u;
            // 0x2ac724: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC728u; }
        if (ctx->pc != 0x2AC728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC728u; }
        if (ctx->pc != 0x2AC728u) { return; }
    }
    ctx->pc = 0x2AC728u;
label_2ac728:
    // 0x2ac728: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2AC728u;
    {
        const bool branch_taken_0x2ac728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC728u;
            // 0x2ac72c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac728) {
            ctx->pc = 0x2AC834u;
            goto label_2ac834;
        }
    }
    ctx->pc = 0x2AC730u;
label_2ac730:
    // 0x2ac730: 0x87839ae8  lh          $v1, -0x6518($gp)
    ctx->pc = 0x2ac730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x2ac734: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac738: 0xac24d62c  sw          $a0, -0x29D4($at)
    ctx->pc = 0x2ac738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 4));
    // 0x2ac73c: 0x87829aec  lh          $v0, -0x6514($gp)
    ctx->pc = 0x2ac73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941420)));
    // 0x2ac740: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac744: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2ac744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2ac748: 0xac23d630  sw          $v1, -0x29D0($at)
    ctx->pc = 0x2ac748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 3));
    // 0x2ac74c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac750: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2ac750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x2ac754: 0x8e820a88  lw          $v0, 0xA88($s4)
    ctx->pc = 0x2ac754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac758: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac75c: 0x8042000e  lb          $v0, 0xE($v0)
    ctx->pc = 0x2ac75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2ac760: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2AC760u;
    {
        const bool branch_taken_0x2ac760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC760u;
            // 0x2ac764: 0xac22d638  sw          $v0, -0x29C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac760) {
            ctx->pc = 0x2AC830u;
            goto label_2ac830;
        }
    }
    ctx->pc = 0x2AC768u;
label_2ac768:
    // 0x2ac768: 0x87929aec  lh          $s2, -0x6514($gp)
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941420)));
    // 0x2ac76c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ac76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ac770: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2AC770u;
    SET_GPR_U32(ctx, 31, 0x2AC778u);
    ctx->pc = 0x2AC774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC770u;
            // 0x2ac774: 0x2484e940  addiu       $a0, $a0, -0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC778u; }
        if (ctx->pc != 0x2AC778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC778u; }
        if (ctx->pc != 0x2AC778u) { return; }
    }
    ctx->pc = 0x2AC778u;
label_2ac778:
    // 0x2ac778: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC778u;
    {
        const bool branch_taken_0x2ac778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC778u;
            // 0x2ac77c: 0x240402bc  addiu       $a0, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac778) {
            ctx->pc = 0x2AC79Cu;
            goto label_2ac79c;
        }
    }
    ctx->pc = 0x2AC780u;
    // 0x2ac780: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2AC780u;
    SET_GPR_U32(ctx, 31, 0x2AC788u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC788u; }
        if (ctx->pc != 0x2AC788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC788u; }
        if (ctx->pc != 0x2AC788u) { return; }
    }
    ctx->pc = 0x2AC788u;
label_2ac788:
    // 0x2ac788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC788u;
    {
        const bool branch_taken_0x2ac788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC788u;
            // 0x2ac78c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac788) {
            ctx->pc = 0x2AC79Cu;
            goto label_2ac79c;
        }
    }
    ctx->pc = 0x2AC790u;
    // 0x2ac790: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2AC790u;
    SET_GPR_U32(ctx, 31, 0x2AC798u);
    ctx->pc = 0x2AC794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC790u;
            // 0x2ac794: 0x2484e948  addiu       $a0, $a0, -0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC798u; }
        if (ctx->pc != 0x2AC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC798u; }
        if (ctx->pc != 0x2AC798u) { return; }
    }
    ctx->pc = 0x2AC798u;
label_2ac798:
    // 0x2ac798: 0xa7829aec  sh          $v0, -0x6514($gp)
    ctx->pc = 0x2ac798u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941420), (uint16_t)GPR_U32(ctx, 2));
label_2ac79c:
    // 0x2ac79c: 0x8e840a88  lw          $a0, 0xA88($s4)
    ctx->pc = 0x2ac79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac7a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ac7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac7a4: 0x80830012  lb          $v1, 0x12($a0)
    ctx->pc = 0x2ac7a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2ac7a8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC7A8u;
    {
        const bool branch_taken_0x2ac7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac7a8) {
            ctx->pc = 0x2AC7D8u;
            goto label_2ac7d8;
        }
    }
    ctx->pc = 0x2AC7B0u;
    // 0x2ac7b0: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x2ac7b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2ac7b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ac7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ac7b8: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x2ac7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x2ac7bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac7c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac7c4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2AC7C4u;
    SET_GPR_U32(ctx, 31, 0x2AC7CCu);
    ctx->pc = 0x2AC7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC7C4u;
            // 0x2ac7c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC7CCu; }
        if (ctx->pc != 0x2AC7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC7CCu; }
        if (ctx->pc != 0x2AC7CCu) { return; }
    }
    ctx->pc = 0x2AC7CCu;
label_2ac7cc:
    // 0x2ac7cc: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2ac7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ac7d0: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2AC7D0u;
    SET_GPR_U32(ctx, 31, 0x2AC7D8u);
    ctx->pc = 0x2AC7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC7D0u;
            // 0x2ac7d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC7D8u; }
        if (ctx->pc != 0x2AC7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC7D8u; }
        if (ctx->pc != 0x2AC7D8u) { return; }
    }
    ctx->pc = 0x2AC7D8u;
label_2ac7d8:
    // 0x2ac7d8: 0x87859ae8  lh          $a1, -0x6518($gp)
    ctx->pc = 0x2ac7d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x2ac7dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac7e0: 0xac20d63c  sw          $zero, -0x29C4($at)
    ctx->pc = 0x2ac7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 0));
    // 0x2ac7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac7e8: 0x87849aec  lh          $a0, -0x6514($gp)
    ctx->pc = 0x2ac7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941420)));
    // 0x2ac7ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac7f0: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2ac7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ac7f4: 0xac20d638  sw          $zero, -0x29C8($at)
    ctx->pc = 0x2ac7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
    // 0x2ac7f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac7fc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2ac7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2ac800: 0xac25d630  sw          $a1, -0x29D0($at)
    ctx->pc = 0x2ac800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 5));
    // 0x2ac804: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2ac804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ac808: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac80c: 0xac24d634  sw          $a0, -0x29CC($at)
    ctx->pc = 0x2ac80cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 4));
    // 0x2ac810: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x2ac810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
    // 0x2ac814: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC814u;
    {
        const bool branch_taken_0x2ac814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC814u;
            // 0x2ac818: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac814) {
            ctx->pc = 0x2AC830u;
            goto label_2ac830;
        }
    }
    ctx->pc = 0x2AC81Cu;
    // 0x2ac81c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC81Cu;
    {
        const bool branch_taken_0x2ac81c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC81Cu;
            // 0x2ac820: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac81c) {
            ctx->pc = 0x2AC830u;
            goto label_2ac830;
        }
    }
    ctx->pc = 0x2AC824u;
    // 0x2ac824: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ac828: 0xa7829aec  sh          $v0, -0x6514($gp)
    ctx->pc = 0x2ac828u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941420), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ac82c: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2ac82cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_2ac830:
    // 0x2ac830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac834:
    // 0x2ac834: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC834u;
    SET_GPR_U32(ctx, 31, 0x2AC83Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC83Cu; }
        if (ctx->pc != 0x2AC83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC83Cu; }
        if (ctx->pc != 0x2AC83Cu) { return; }
    }
    ctx->pc = 0x2AC83Cu;
label_2ac83c:
    // 0x2ac83c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac840:
    // 0x2ac840: 0x1622002a  bne         $s1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AC840u;
    {
        const bool branch_taken_0x2ac840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC840u;
            // 0x2ac844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac840) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC848u;
    // 0x2ac848: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ac848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ac84c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC84Cu;
    SET_GPR_U32(ctx, 31, 0x2AC854u);
    ctx->pc = 0x2AC850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC84Cu;
            // 0x2ac850: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC854u; }
        if (ctx->pc != 0x2AC854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC854u; }
        if (ctx->pc != 0x2AC854u) { return; }
    }
    ctx->pc = 0x2AC854u;
label_2ac854:
    // 0x2ac854: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2AC854u;
    {
        const bool branch_taken_0x2ac854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac854) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC85Cu;
label_2ac85c:
    // 0x2ac85c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2AC85Cu;
    SET_GPR_U32(ctx, 31, 0x2AC864u);
    ctx->pc = 0x2AC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC85Cu;
            // 0x2ac860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC864u; }
        if (ctx->pc != 0x2AC864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC864u; }
        if (ctx->pc != 0x2AC864u) { return; }
    }
    ctx->pc = 0x2AC864u;
label_2ac864:
    // 0x2ac864: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AC864u;
    {
        const bool branch_taken_0x2ac864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC864u;
            // 0x2ac868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac864) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC86Cu;
    // 0x2ac86c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2ac86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ac870: 0xa3828f20  sb          $v0, -0x70E0($gp)
    ctx->pc = 0x2ac870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938400), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac874: 0xc04e640  jal         func_139900
    ctx->pc = 0x2AC874u;
    SET_GPR_U32(ctx, 31, 0x2AC87Cu);
    ctx->pc = 0x2AC878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC874u;
            // 0x2ac878: 0xa3829ae4  sb          $v0, -0x651C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941412), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC87Cu; }
        if (ctx->pc != 0x2AC87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC87Cu; }
        if (ctx->pc != 0x2AC87Cu) { return; }
    }
    ctx->pc = 0x2AC87Cu;
label_2ac87c:
    // 0x2ac87c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ac87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ac880: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ac884: 0x8c23ca08  lw          $v1, -0x35F8($at)
    ctx->pc = 0x2ac884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953480)));
    // 0x2ac888: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ac888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ac88c: 0x8c25ca04  lw          $a1, -0x35FC($at)
    ctx->pc = 0x2ac88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953476)));
    // 0x2ac890: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ac890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ac894: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2ac894u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac898: 0x8c22ca00  lw          $v0, -0x3600($at)
    ctx->pc = 0x2ac898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953472)));
    // 0x2ac89c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2ac89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ac8a0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AC8A0u;
    SET_GPR_U32(ctx, 31, 0x2AC8A8u);
    ctx->pc = 0x2AC8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8A0u;
            // 0x2ac8a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8A8u; }
        if (ctx->pc != 0x2AC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8A8u; }
        if (ctx->pc != 0x2AC8A8u) { return; }
    }
    ctx->pc = 0x2AC8A8u;
label_2ac8a8:
    // 0x2ac8a8: 0x8e820a88  lw          $v0, 0xA88($s4)
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2ac8ac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2ac8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ac8b0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2ac8b4: 0x8447000c  lh          $a3, 0xC($v0)
    ctx->pc = 0x2ac8b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac8b8: 0xc07c720  jal         func_1F1C80
    ctx->pc = 0x2AC8B8u;
    SET_GPR_U32(ctx, 31, 0x2AC8C0u);
    ctx->pc = 0x2AC8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8B8u;
            // 0x2ac8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C80u;
    if (runtime->hasFunction(0x1F1C80u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8C0u; }
        if (ctx->pc != 0x2AC8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngTreeMapInit__FP9mgCMemoryPiii_0x1f1c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8C0u; }
        if (ctx->pc != 0x2AC8C0u) { return; }
    }
    ctx->pc = 0x2AC8C0u;
label_2ac8c0:
    // 0x2ac8c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AC8C0u;
    {
        const bool branch_taken_0x2ac8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac8c0) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC8C8u;
label_2ac8c8:
    // 0x2ac8c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC8C8u;
    {
        const bool branch_taken_0x2ac8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8C8u;
            // 0x2ac8cc: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8c8) {
            ctx->pc = 0x2AC8D8u;
            goto label_2ac8d8;
        }
    }
    ctx->pc = 0x2AC8D0u;
    // 0x2ac8d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC8D0u;
    {
        const bool branch_taken_0x2ac8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac8d0) {
            ctx->pc = 0x2AC8ECu;
            goto label_2ac8ec;
        }
    }
    ctx->pc = 0x2AC8D8u;
label_2ac8d8:
    // 0x2ac8d8: 0xa2800b92  sb          $zero, 0xB92($s4)
    ctx->pc = 0x2ac8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2962), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac8e0: 0xa284018d  sb          $a0, 0x18D($s4)
    ctx->pc = 0x2ac8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 397), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac8e4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AC8E4u;
    SET_GPR_U32(ctx, 31, 0x2AC8ECu);
    ctx->pc = 0x2AC8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8E4u;
            // 0x2ac8e8: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8ECu; }
        if (ctx->pc != 0x2AC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8ECu; }
        if (ctx->pc != 0x2AC8ECu) { return; }
    }
    ctx->pc = 0x2AC8ECu;
label_2ac8ec:
    // 0x2ac8ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ac8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ac8f0:
    // 0x2ac8f0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2ac8f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2ac8f4: 0x14200061  bnez        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x2AC8F4u;
    {
        const bool branch_taken_0x2ac8f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8F4u;
            // 0x2ac8f8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8f4) {
            ctx->pc = 0x2ACA7Cu;
            goto label_2aca7c;
        }
    }
    ctx->pc = 0x2AC8FCu;
    // 0x2ac8fc: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2AC8FCu;
    {
        const bool branch_taken_0x2ac8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8FCu;
            // 0x2ac900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8fc) {
            ctx->pc = 0x2ACA08u;
            goto label_2aca08;
        }
    }
    ctx->pc = 0x2AC904u;
    // 0x2ac904: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AC904u;
    {
        const bool branch_taken_0x2ac904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac904) {
            ctx->pc = 0x2AC92Cu;
            goto label_2ac92c;
        }
    }
    ctx->pc = 0x2AC90Cu;
    // 0x2ac90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC90Cu;
    {
        const bool branch_taken_0x2ac90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac90c) {
            ctx->pc = 0x2AC91Cu;
            goto label_2ac91c;
        }
    }
    ctx->pc = 0x2AC914u;
    // 0x2ac914: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2AC914u;
    {
        const bool branch_taken_0x2ac914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC914u;
            // 0x2ac918: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac914) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2AC91Cu;
label_2ac91c:
    // 0x2ac91c: 0xa283018d  sb          $v1, 0x18D($s4)
    ctx->pc = 0x2ac91cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 397), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac920: 0xa2800b91  sb          $zero, 0xB91($s4)
    ctx->pc = 0x2ac920u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2961), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac924: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2AC924u;
    {
        const bool branch_taken_0x2ac924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC924u;
            // 0x2ac928: 0xa2800b92  sb          $zero, 0xB92($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2962), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac924) {
            ctx->pc = 0x2ACA74u;
            goto label_2aca74;
        }
    }
    ctx->pc = 0x2AC92Cu;
label_2ac92c:
    // 0x2ac92c: 0xa280018d  sb          $zero, 0x18D($s4)
    ctx->pc = 0x2ac92cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 397), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ac930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac934: 0xa2830b91  sb          $v1, 0xB91($s4)
    ctx->pc = 0x2ac934u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2961), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac93c: 0xa2800b92  sb          $zero, 0xB92($s4)
    ctx->pc = 0x2ac93cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2962), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac948:
    // 0x2ac948: 0x8e820a80  lw          $v0, 0xA80($s4)
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ac94c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC94Cu;
    {
        const bool branch_taken_0x2ac94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac94c) {
            ctx->pc = 0x2AC994u;
            goto label_2ac994;
        }
    }
    ctx->pc = 0x2AC954u;
    // 0x2ac954: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ac954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac95c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AC95Cu;
    {
        const bool branch_taken_0x2ac95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac95c) {
            ctx->pc = 0x2AC994u;
            goto label_2ac994;
        }
    }
    ctx->pc = 0x2AC964u;
    // 0x2ac964: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x2ac964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x2ac968: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC968u;
    {
        const bool branch_taken_0x2ac968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac968) {
            ctx->pc = 0x2AC994u;
            goto label_2ac994;
        }
    }
    ctx->pc = 0x2AC970u;
    // 0x2ac970: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac974: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2ac974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac978: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC978u;
    {
        const bool branch_taken_0x2ac978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac978) {
            ctx->pc = 0x2AC994u;
            goto label_2ac994;
        }
    }
    ctx->pc = 0x2AC980u;
    // 0x2ac980: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ac980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac984: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x2ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2ac988: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ac988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ac98c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ac98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ac990: 0xac430170  sw          $v1, 0x170($v0)
    ctx->pc = 0x2ac990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
label_2ac994:
    // 0x2ac994: 0x0  nop
    ctx->pc = 0x2ac994u;
    // NOP
    // 0x2ac998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ac998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ac99c: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x2ac99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ac9a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AC9A0u;
    {
        const bool branch_taken_0x2ac9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9A0u;
            // 0x2ac9a4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9a0) {
            ctx->pc = 0x2AC948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac948;
        }
    }
    ctx->pc = 0x2AC9A8u;
    // 0x2ac9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9ac: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AC9ACu;
    SET_GPR_U32(ctx, 31, 0x2AC9B4u);
    ctx->pc = 0x2AC9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9ACu;
            // 0x2ac9b0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9B4u; }
        if (ctx->pc != 0x2AC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9B4u; }
        if (ctx->pc != 0x2AC9B4u) { return; }
    }
    ctx->pc = 0x2AC9B4u;
label_2ac9b4:
    // 0x2ac9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9b8: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2AC9B8u;
    SET_GPR_U32(ctx, 31, 0x2AC9C0u);
    ctx->pc = 0x2AC9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9B8u;
            // 0x2ac9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9C0u; }
        if (ctx->pc != 0x2AC9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9C0u; }
        if (ctx->pc != 0x2AC9C0u) { return; }
    }
    ctx->pc = 0x2AC9C0u;
label_2ac9c0:
    // 0x2ac9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac9c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ac9c8: 0xa20221e8  sb          $v0, 0x21E8($s0)
    ctx->pc = 0x2ac9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9d0: 0xae0317e4  sw          $v1, 0x17E4($s0)
    ctx->pc = 0x2ac9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
    // 0x2ac9d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac9d8: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x2ac9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
    // 0x2ac9dc: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x2ac9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x2ac9e0: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x2ac9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x2ac9e4: 0x8e860a84  lw          $a2, 0xA84($s4)
    ctx->pc = 0x2ac9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac9e8: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2AC9E8u;
    SET_GPR_U32(ctx, 31, 0x2AC9F0u);
    ctx->pc = 0x2AC9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9E8u;
            // 0x2ac9ec: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9F0u; }
        if (ctx->pc != 0x2AC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC9F0u; }
        if (ctx->pc != 0x2AC9F0u) { return; }
    }
    ctx->pc = 0x2AC9F0u;
label_2ac9f0:
    // 0x2ac9f0: 0x8e820a84  lw          $v0, 0xA84($s4)
    ctx->pc = 0x2ac9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ac9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9f8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AC9F8u;
    SET_GPR_U32(ctx, 31, 0x2ACA00u);
    ctx->pc = 0x2AC9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9F8u;
            // 0x2ac9fc: 0x24450045  addiu       $a1, $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA00u; }
        if (ctx->pc != 0x2ACA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA00u; }
        if (ctx->pc != 0x2ACA00u) { return; }
    }
    ctx->pc = 0x2ACA00u;
label_2aca00:
    // 0x2aca00: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2ACA00u;
    {
        const bool branch_taken_0x2aca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aca00) {
            ctx->pc = 0x2ACA74u;
            goto label_2aca74;
        }
    }
    ctx->pc = 0x2ACA08u;
label_2aca08:
    // 0x2aca08: 0xa2800b91  sb          $zero, 0xB91($s4)
    ctx->pc = 0x2aca08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2961), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aca0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aca10: 0xa2820b92  sb          $v0, 0xB92($s4)
    ctx->pc = 0x2aca10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2962), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aca14: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2aca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca18: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2aca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2aca1c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2ACA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA24u);
    ctx->pc = 0x2ACA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA1Cu;
            // 0x2aca20: 0xa20021e8  sb          $zero, 0x21E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8680), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA24u; }
        if (ctx->pc != 0x2ACA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA24u; }
        if (ctx->pc != 0x2ACA24u) { return; }
    }
    ctx->pc = 0x2ACA24u;
label_2aca24:
    // 0x2aca24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2aca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aca28: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x2aca2c: 0xafc2014c  sw          $v0, 0x14C($fp)
    ctx->pc = 0x2aca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 332), GPR_U32(ctx, 2));
    // 0x2aca30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2aca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca34: 0xc7809af4  lwc1        $f0, -0x650C($gp)
    ctx->pc = 0x2aca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aca38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aca38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aca3c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2aca3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2aca40: 0x8e820a88  lw          $v0, 0xA88($s4)
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2696)));
    // 0x2aca44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2aca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aca48: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2ACA48u;
    SET_GPR_U32(ctx, 31, 0x2ACA50u);
    ctx->pc = 0x2ACA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA48u;
            // 0x2aca4c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA50u; }
        if (ctx->pc != 0x2ACA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA50u; }
        if (ctx->pc != 0x2ACA50u) { return; }
    }
    ctx->pc = 0x2ACA50u;
label_2aca50:
    // 0x2aca50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aca54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2aca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca58: 0xafc217e4  sw          $v0, 0x17E4($fp)
    ctx->pc = 0x2aca58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6116), GPR_U32(ctx, 2));
    // 0x2aca5c: 0x240509c6  addiu       $a1, $zero, 0x9C6
    ctx->pc = 0x2aca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2502));
    // 0x2aca60: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2ACA60u;
    SET_GPR_U32(ctx, 31, 0x2ACA68u);
    ctx->pc = 0x2ACA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA60u;
            // 0x2aca64: 0xafc00188  sw          $zero, 0x188($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA68u; }
        if (ctx->pc != 0x2ACA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA68u; }
        if (ctx->pc != 0x2ACA68u) { return; }
    }
    ctx->pc = 0x2ACA68u;
label_2aca68:
    // 0x2aca68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2aca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca6c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2ACA6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA74u);
    ctx->pc = 0x2ACA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA6Cu;
            // 0x2aca70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA74u; }
        if (ctx->pc != 0x2ACA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA74u; }
        if (ctx->pc != 0x2ACA74u) { return; }
    }
    ctx->pc = 0x2ACA74u;
label_2aca74:
    // 0x2aca74: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2aca78:
    // 0x2aca78: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2aca78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2aca7c:
    // 0x2aca7c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2aca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aca80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACA80u;
    {
        const bool branch_taken_0x2aca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aca80) {
            ctx->pc = 0x2ACAA8u;
            goto label_2acaa8;
        }
    }
    ctx->pc = 0x2ACA88u;
    // 0x2aca88: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2aca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2aca8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aca90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aca90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aca94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca98: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2aca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2aca9c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2aca9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2acaa0: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2ACAA0u;
    SET_GPR_U32(ctx, 31, 0x2ACAA8u);
    ctx->pc = 0x2ACAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACAA0u;
            // 0x2acaa4: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACAA8u; }
        if (ctx->pc != 0x2ACAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACAA8u; }
        if (ctx->pc != 0x2ACAA8u) { return; }
    }
    ctx->pc = 0x2ACAA8u;
label_2acaa8:
    // 0x2acaa8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2acaac: 0x0  nop
    ctx->pc = 0x2acaacu;
    // NOP
    // 0x2acab0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2acab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2acab4:
    // 0x2acab4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2acab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acab8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2acab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2acabc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2acabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2acac0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2acac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2acac4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2acac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acac8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2acac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acacc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2acaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acad0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2acad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2acad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2acad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACADCu;
            // 0x2acae0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACAE4u;
}
