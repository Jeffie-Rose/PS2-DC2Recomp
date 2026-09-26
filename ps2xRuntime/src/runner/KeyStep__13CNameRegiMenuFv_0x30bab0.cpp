#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__13CNameRegiMenuFv
// Address: 0x30bab0 - 0x30cfac
void KeyStep__13CNameRegiMenuFv_0x30bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__13CNameRegiMenuFv_0x30bab0");
#endif

    switch (ctx->pc) {
        case 0x30bae8u: goto label_30bae8;
        case 0x30baf4u: goto label_30baf4;
        case 0x30bb00u: goto label_30bb00;
        case 0x30bb44u: goto label_30bb44;
        case 0x30bb68u: goto label_30bb68;
        case 0x30bb8cu: goto label_30bb8c;
        case 0x30bba4u: goto label_30bba4;
        case 0x30bbd0u: goto label_30bbd0;
        case 0x30bbecu: goto label_30bbec;
        case 0x30bbfcu: goto label_30bbfc;
        case 0x30bc20u: goto label_30bc20;
        case 0x30bc34u: goto label_30bc34;
        case 0x30bc7cu: goto label_30bc7c;
        case 0x30bc98u: goto label_30bc98;
        case 0x30bcacu: goto label_30bcac;
        case 0x30bce8u: goto label_30bce8;
        case 0x30bd18u: goto label_30bd18;
        case 0x30bd30u: goto label_30bd30;
        case 0x30bda4u: goto label_30bda4;
        case 0x30be10u: goto label_30be10;
        case 0x30be1cu: goto label_30be1c;
        case 0x30be2cu: goto label_30be2c;
        case 0x30bf24u: goto label_30bf24;
        case 0x30bf40u: goto label_30bf40;
        case 0x30bf68u: goto label_30bf68;
        case 0x30bf70u: goto label_30bf70;
        case 0x30c06cu: goto label_30c06c;
        case 0x30c09cu: goto label_30c09c;
        case 0x30c0bcu: goto label_30c0bc;
        case 0x30c0d8u: goto label_30c0d8;
        case 0x30c0ecu: goto label_30c0ec;
        case 0x30c0f8u: goto label_30c0f8;
        case 0x30c114u: goto label_30c114;
        case 0x30c200u: goto label_30c200;
        case 0x30c218u: goto label_30c218;
        case 0x30c224u: goto label_30c224;
        case 0x30c22cu: goto label_30c22c;
        case 0x30c244u: goto label_30c244;
        case 0x30c258u: goto label_30c258;
        case 0x30c270u: goto label_30c270;
        case 0x30c284u: goto label_30c284;
        case 0x30c29cu: goto label_30c29c;
        case 0x30c32cu: goto label_30c32c;
        case 0x30c364u: goto label_30c364;
        case 0x30c3a8u: goto label_30c3a8;
        case 0x30c3b8u: goto label_30c3b8;
        case 0x30c3ccu: goto label_30c3cc;
        case 0x30c44cu: goto label_30c44c;
        case 0x30c4a8u: goto label_30c4a8;
        case 0x30c4bcu: goto label_30c4bc;
        case 0x30c544u: goto label_30c544;
        case 0x30c564u: goto label_30c564;
        case 0x30c588u: goto label_30c588;
        case 0x30c59cu: goto label_30c59c;
        case 0x30c5a8u: goto label_30c5a8;
        case 0x30c5d4u: goto label_30c5d4;
        case 0x30c5f4u: goto label_30c5f4;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c620u: goto label_30c620;
        case 0x30c644u: goto label_30c644;
        case 0x30c654u: goto label_30c654;
        case 0x30c65cu: goto label_30c65c;
        case 0x30c674u: goto label_30c674;
        case 0x30c684u: goto label_30c684;
        case 0x30c6c8u: goto label_30c6c8;
        case 0x30c6d0u: goto label_30c6d0;
        case 0x30c6e4u: goto label_30c6e4;
        case 0x30c700u: goto label_30c700;
        case 0x30c70cu: goto label_30c70c;
        case 0x30c720u: goto label_30c720;
        case 0x30c764u: goto label_30c764;
        case 0x30c77cu: goto label_30c77c;
        case 0x30c784u: goto label_30c784;
        case 0x30c7b4u: goto label_30c7b4;
        case 0x30c7c8u: goto label_30c7c8;
        case 0x30c7d8u: goto label_30c7d8;
        case 0x30c7e0u: goto label_30c7e0;
        case 0x30c7fcu: goto label_30c7fc;
        case 0x30c808u: goto label_30c808;
        case 0x30c818u: goto label_30c818;
        case 0x30c828u: goto label_30c828;
        case 0x30c844u: goto label_30c844;
        case 0x30c854u: goto label_30c854;
        case 0x30c880u: goto label_30c880;
        case 0x30c88cu: goto label_30c88c;
        case 0x30c8bcu: goto label_30c8bc;
        case 0x30c8ccu: goto label_30c8cc;
        case 0x30c8e0u: goto label_30c8e0;
        case 0x30c8f4u: goto label_30c8f4;
        case 0x30c91cu: goto label_30c91c;
        case 0x30c924u: goto label_30c924;
        case 0x30c934u: goto label_30c934;
        case 0x30c93cu: goto label_30c93c;
        case 0x30c94cu: goto label_30c94c;
        case 0x30c97cu: goto label_30c97c;
        case 0x30c9b4u: goto label_30c9b4;
        case 0x30c9c0u: goto label_30c9c0;
        case 0x30c9dcu: goto label_30c9dc;
        case 0x30c9f0u: goto label_30c9f0;
        case 0x30ca30u: goto label_30ca30;
        case 0x30ca4cu: goto label_30ca4c;
        case 0x30ca58u: goto label_30ca58;
        case 0x30ca60u: goto label_30ca60;
        case 0x30ca70u: goto label_30ca70;
        case 0x30ca90u: goto label_30ca90;
        case 0x30caa4u: goto label_30caa4;
        case 0x30caacu: goto label_30caac;
        case 0x30cac0u: goto label_30cac0;
        case 0x30caf4u: goto label_30caf4;
        case 0x30cb00u: goto label_30cb00;
        case 0x30cb10u: goto label_30cb10;
        case 0x30cb40u: goto label_30cb40;
        case 0x30cb5cu: goto label_30cb5c;
        case 0x30cb68u: goto label_30cb68;
        case 0x30cb94u: goto label_30cb94;
        case 0x30cba8u: goto label_30cba8;
        case 0x30cbb4u: goto label_30cbb4;
        case 0x30cbd4u: goto label_30cbd4;
        case 0x30cbdcu: goto label_30cbdc;
        case 0x30cc10u: goto label_30cc10;
        case 0x30cc24u: goto label_30cc24;
        case 0x30cc30u: goto label_30cc30;
        case 0x30cc58u: goto label_30cc58;
        case 0x30cc70u: goto label_30cc70;
        case 0x30cc78u: goto label_30cc78;
        case 0x30cc90u: goto label_30cc90;
        case 0x30ccc4u: goto label_30ccc4;
        case 0x30ccd8u: goto label_30ccd8;
        case 0x30ccecu: goto label_30ccec;
        case 0x30ccf4u: goto label_30ccf4;
        case 0x30cd18u: goto label_30cd18;
        case 0x30cd2cu: goto label_30cd2c;
        case 0x30cd38u: goto label_30cd38;
        case 0x30cd58u: goto label_30cd58;
        case 0x30cd60u: goto label_30cd60;
        case 0x30cd80u: goto label_30cd80;
        case 0x30cd94u: goto label_30cd94;
        case 0x30cda0u: goto label_30cda0;
        case 0x30cdb8u: goto label_30cdb8;
        case 0x30cdccu: goto label_30cdcc;
        case 0x30cdd8u: goto label_30cdd8;
        case 0x30ce28u: goto label_30ce28;
        case 0x30ce38u: goto label_30ce38;
        case 0x30ce48u: goto label_30ce48;
        case 0x30ce58u: goto label_30ce58;
        case 0x30ce70u: goto label_30ce70;
        case 0x30ce84u: goto label_30ce84;
        case 0x30ce94u: goto label_30ce94;
        case 0x30ceb8u: goto label_30ceb8;
        case 0x30cec4u: goto label_30cec4;
        case 0x30cef4u: goto label_30cef4;
        case 0x30cf68u: goto label_30cf68;
        case 0x30cf74u: goto label_30cf74;
        case 0x30cf7cu: goto label_30cf7c;
        default: break;
    }

    ctx->pc = 0x30bab0u;

    // 0x30bab0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
    // 0x30bab4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30bab8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30babc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30bac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30bac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30bac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30bacc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30baccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30badc: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x30bae0: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x30BAE0u;
    SET_GPR_U32(ctx, 31, 0x30BAE8u);
    ctx->pc = 0x30BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAE0u;
            // 0x30bae4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BAE8u; }
        if (ctx->pc != 0x30BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BAE8u; }
        if (ctx->pc != 0x30BAE8u) { return; }
    }
    ctx->pc = 0x30BAE8u;
label_30bae8:
    // 0x30bae8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x30bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x30baec: 0xc08f840  jal         func_23E100
    ctx->pc = 0x30BAECu;
    SET_GPR_U32(ctx, 31, 0x30BAF4u);
    ctx->pc = 0x30BAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAECu;
            // 0x30baf0: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BAF4u; }
        if (ctx->pc != 0x30BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BAF4u; }
        if (ctx->pc != 0x30BAF4u) { return; }
    }
    ctx->pc = 0x30BAF4u;
label_30baf4:
    // 0x30baf4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x30baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x30baf8: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x30BAF8u;
    SET_GPR_U32(ctx, 31, 0x30BB00u);
    ctx->pc = 0x30BAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAF8u;
            // 0x30bafc: 0xafa2053c  sw          $v0, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB00u; }
        if (ctx->pc != 0x30BB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB00u; }
        if (ctx->pc != 0x30BB00u) { return; }
    }
    ctx->pc = 0x30BB00u;
label_30bb00:
    // 0x30bb00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30bb04: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x30bb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30bb08: 0x8c32ca5c  lw          $s2, -0x35A4($at)
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x30bb0c: 0x106000c5  beqz        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x30BB0Cu;
    {
        const bool branch_taken_0x30bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB0Cu;
            // 0x30bb10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb0c) {
            ctx->pc = 0x30BE24u;
            goto label_30be24;
        }
    }
    ctx->pc = 0x30BB14u;
    // 0x30bb14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30bb18: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30BB18u;
    {
        const bool branch_taken_0x30bb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB18u;
            // 0x30bb1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb18) {
            ctx->pc = 0x30BB78u;
            goto label_30bb78;
        }
    }
    ctx->pc = 0x30BB20u;
    // 0x30bb20: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30BB20u;
    {
        const bool branch_taken_0x30bb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB20u;
            // 0x30bb24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb20) {
            ctx->pc = 0x30BB60u;
            goto label_30bb60;
        }
    }
    ctx->pc = 0x30BB28u;
    // 0x30bb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bb2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BB2Cu;
    {
        const bool branch_taken_0x30bb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB2Cu;
            // 0x30bb30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb2c) {
            ctx->pc = 0x30BB3Cu;
            goto label_30bb3c;
        }
    }
    ctx->pc = 0x30BB34u;
    // 0x30bb34: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x30BB34u;
    {
        const bool branch_taken_0x30bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB34u;
            // 0x30bb38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb34) {
            ctx->pc = 0x30C140u;
            goto label_30c140;
        }
    }
    ctx->pc = 0x30BB3Cu;
label_30bb3c:
    // 0x30bb3c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x30BB3Cu;
    SET_GPR_U32(ctx, 31, 0x30BB44u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB44u; }
        if (ctx->pc != 0x30BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB44u; }
        if (ctx->pc != 0x30BB44u) { return; }
    }
    ctx->pc = 0x30BB44u;
label_30bb44:
    // 0x30bb44: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x30BB44u;
    {
        const bool branch_taken_0x30bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb44) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BB4Cu;
    // 0x30bb4c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x30bb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x30bb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bb54: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x30bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x30bb58: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x30BB58u;
    {
        const bool branch_taken_0x30bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB58u;
            // 0x30bb5c: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb58) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BB60u;
label_30bb60:
    // 0x30bb60: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x30BB60u;
    SET_GPR_U32(ctx, 31, 0x30BB68u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB68u; }
        if (ctx->pc != 0x30BB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB68u; }
        if (ctx->pc != 0x30BB68u) { return; }
    }
    ctx->pc = 0x30BB68u;
label_30bb68:
    // 0x30bb68: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x30BB68u;
    {
        const bool branch_taken_0x30bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB68u;
            // 0x30bb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb68) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BB70u;
    // 0x30bb70: 0x10000504  b           . + 4 + (0x504 << 2)
    ctx->pc = 0x30BB70u;
    {
        const bool branch_taken_0x30bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB70u;
            // 0x30bb74: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb70) {
            ctx->pc = 0x30CF84u;
            goto label_30cf84;
        }
    }
    ctx->pc = 0x30BB78u;
label_30bb78:
    // 0x30bb78: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x30bb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bb7c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x30BB7Cu;
    {
        const bool branch_taken_0x30bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB7Cu;
            // 0x30bb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb7c) {
            ctx->pc = 0x30BCC8u;
            goto label_30bcc8;
        }
    }
    ctx->pc = 0x30BB84u;
    // 0x30bb84: 0xc087654  jal         func_21D950
    ctx->pc = 0x30BB84u;
    SET_GPR_U32(ctx, 31, 0x30BB8Cu);
    ctx->pc = 0x30BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB84u;
            // 0x30bb88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB8Cu; }
        if (ctx->pc != 0x30BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB8Cu; }
        if (ctx->pc != 0x30BB8Cu) { return; }
    }
    ctx->pc = 0x30BB8Cu;
label_30bb8c:
    // 0x30bb8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30bb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bb94: 0x16640041  bne         $s3, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x30BB94u;
    {
        const bool branch_taken_0x30bb94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x30BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB94u;
            // 0x30bb98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb94) {
            ctx->pc = 0x30BC9Cu;
            goto label_30bc9c;
        }
    }
    ctx->pc = 0x30BB9Cu;
    // 0x30bb9c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BB9Cu;
    SET_GPR_U32(ctx, 31, 0x30BBA4u);
    ctx->pc = 0x30BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB9Cu;
            // 0x30bba0: 0x241001fe  addiu       $s0, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBA4u; }
        if (ctx->pc != 0x30BBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBA4u; }
        if (ctx->pc != 0x30BBA4u) { return; }
    }
    ctx->pc = 0x30BBA4u;
label_30bba4:
    // 0x30bba4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bbac: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30bbacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30bbb0: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x30BBB0u;
    {
        const bool branch_taken_0x30bbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBB0u;
            // 0x30bbb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbb0) {
            ctx->pc = 0x30BC48u;
            goto label_30bc48;
        }
    }
    ctx->pc = 0x30BBB8u;
    // 0x30bbb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30bbbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30bbc0: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30bbc4: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x30bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
    // 0x30bbc8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30BBC8u;
    SET_GPR_U32(ctx, 31, 0x30BBD0u);
    ctx->pc = 0x30BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBC8u;
            // 0x30bbcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBD0u; }
        if (ctx->pc != 0x30BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBD0u; }
        if (ctx->pc != 0x30BBD0u) { return; }
    }
    ctx->pc = 0x30BBD0u;
label_30bbd0:
    // 0x30bbd0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30bbd4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BBD4u;
    {
        const bool branch_taken_0x30bbd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30bbd4) {
            ctx->pc = 0x30BBECu;
            goto label_30bbec;
        }
    }
    ctx->pc = 0x30BBDCu;
    // 0x30bbdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbe0: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30bbe4: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30BBE4u;
    SET_GPR_U32(ctx, 31, 0x30BBECu);
    ctx->pc = 0x30BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBE4u;
            // 0x30bbe8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBECu; }
        if (ctx->pc != 0x30BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBECu; }
        if (ctx->pc != 0x30BBECu) { return; }
    }
    ctx->pc = 0x30BBECu;
label_30bbec:
    // 0x30bbec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30bbf0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30bbf4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x30BBF4u;
    SET_GPR_U32(ctx, 31, 0x30BBFCu);
    ctx->pc = 0x30BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBF4u;
            // 0x30bbf8: 0x2484dce8  addiu       $a0, $a0, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBFCu; }
        if (ctx->pc != 0x30BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BBFCu; }
        if (ctx->pc != 0x30BBFCu) { return; }
    }
    ctx->pc = 0x30BBFCu;
label_30bbfc:
    // 0x30bbfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BBFCu;
    {
        const bool branch_taken_0x30bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBFCu;
            // 0x30bc00: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbfc) {
            ctx->pc = 0x30BC10u;
            goto label_30bc10;
        }
    }
    ctx->pc = 0x30BC04u;
    // 0x30bc04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bc08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30bc0c: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x30bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_30bc10:
    // 0x30bc10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30bc14: 0x2484dce8  addiu       $a0, $a0, -0x2318
    ctx->pc = 0x30bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
    // 0x30bc18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x30BC18u;
    SET_GPR_U32(ctx, 31, 0x30BC20u);
    ctx->pc = 0x30BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC18u;
            // 0x30bc1c: 0x24a52530  addiu       $a1, $a1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC20u; }
        if (ctx->pc != 0x30BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC20u; }
        if (ctx->pc != 0x30BC20u) { return; }
    }
    ctx->pc = 0x30BC20u;
label_30bc20:
    // 0x30bc20: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30BC20u;
    {
        const bool branch_taken_0x30bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC20u;
            // 0x30bc24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc20) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC28u;
    // 0x30bc28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30bc2c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x30BC2Cu;
    SET_GPR_U32(ctx, 31, 0x30BC34u);
    ctx->pc = 0x30BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC2Cu;
            // 0x30bc30: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC34u; }
        if (ctx->pc != 0x30BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC34u; }
        if (ctx->pc != 0x30BC34u) { return; }
    }
    ctx->pc = 0x30BC34u;
label_30bc34:
    // 0x30bc34: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30BC34u;
    {
        const bool branch_taken_0x30bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC34u;
            // 0x30bc38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc34) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC3Cu;
    // 0x30bc3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30bc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30bc40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30BC40u;
    {
        const bool branch_taken_0x30bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC40u;
            // 0x30bc44: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc40) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC48u;
label_30bc48:
    // 0x30bc48: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC48u;
    {
        const bool branch_taken_0x30bc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC48u;
            // 0x30bc4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc48) {
            ctx->pc = 0x30BC64u;
            goto label_30bc64;
        }
    }
    ctx->pc = 0x30BC50u;
    // 0x30bc50: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x30bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x30bc54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30BC54u;
    {
        const bool branch_taken_0x30bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC54u;
            // 0x30bc58: 0x241003e8  addiu       $s0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc54) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC5Cu;
    // 0x30bc5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30BC5Cu;
    {
        const bool branch_taken_0x30bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC5Cu;
            // 0x30bc60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc5c) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC64u;
label_30bc64:
    // 0x30bc64: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30BC64u;
    {
        const bool branch_taken_0x30bc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC64u;
            // 0x30bc68: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc64) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC6Cu;
    // 0x30bc6c: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30bc70: 0x2484dce8  addiu       $a0, $a0, -0x2318
    ctx->pc = 0x30bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
    // 0x30bc74: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30BC74u;
    SET_GPR_U32(ctx, 31, 0x30BC7Cu);
    ctx->pc = 0x30BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC74u;
            // 0x30bc78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC7Cu; }
        if (ctx->pc != 0x30BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC7Cu; }
        if (ctx->pc != 0x30BC7Cu) { return; }
    }
    ctx->pc = 0x30BC7Cu;
label_30bc7c:
    // 0x30bc7c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30bc80: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BC80u;
    {
        const bool branch_taken_0x30bc80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC80u;
            // 0x30bc84: 0x3c0601f6  lui         $a2, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc80) {
            ctx->pc = 0x30BC98u;
            goto label_30bc98;
        }
    }
    ctx->pc = 0x30BC88u;
    // 0x30bc88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc8c: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30bc90: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30BC90u;
    SET_GPR_U32(ctx, 31, 0x30BC98u);
    ctx->pc = 0x30BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC90u;
            // 0x30bc94: 0x24c6dce8  addiu       $a2, $a2, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC98u; }
        if (ctx->pc != 0x30BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC98u; }
        if (ctx->pc != 0x30BC98u) { return; }
    }
    ctx->pc = 0x30BC98u;
label_30bc98:
    // 0x30bc98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bc9c:
    // 0x30bc9c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30BC9Cu;
    {
        const bool branch_taken_0x30bc9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC9Cu;
            // 0x30bca0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc9c) {
            ctx->pc = 0x30BCC8u;
            goto label_30bcc8;
        }
    }
    ctx->pc = 0x30BCA4u;
    // 0x30bca4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BCA4u;
    SET_GPR_U32(ctx, 31, 0x30BCACu);
    ctx->pc = 0x30BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCA4u;
            // 0x30bca8: 0x241001f9  addiu       $s0, $zero, 0x1F9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BCACu; }
        if (ctx->pc != 0x30BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BCACu; }
        if (ctx->pc != 0x30BCACu) { return; }
    }
    ctx->pc = 0x30BCACu;
label_30bcac:
    // 0x30bcac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bcb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bcb4: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30bcb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30bcb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BCB8u;
    {
        const bool branch_taken_0x30bcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCB8u;
            // 0x30bcbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcb8) {
            ctx->pc = 0x30BCC8u;
            goto label_30bcc8;
        }
    }
    ctx->pc = 0x30BCC0u;
    // 0x30bcc0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30bcc4: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x30bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_30bcc8:
    // 0x30bcc8: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x30bcc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bcd0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BCD0u;
    {
        const bool branch_taken_0x30bcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30bcd0) {
            ctx->pc = 0x30BCE8u;
            goto label_30bce8;
        }
    }
    ctx->pc = 0x30BCD8u;
    // 0x30bcd8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BCD8u;
    {
        const bool branch_taken_0x30bcd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bcd8) {
            ctx->pc = 0x30BCE8u;
            goto label_30bce8;
        }
    }
    ctx->pc = 0x30BCE0u;
    // 0x30bce0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BCE0u;
    SET_GPR_U32(ctx, 31, 0x30BCE8u);
    ctx->pc = 0x30BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCE0u;
            // 0x30bce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BCE8u; }
        if (ctx->pc != 0x30BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BCE8u; }
        if (ctx->pc != 0x30BCE8u) { return; }
    }
    ctx->pc = 0x30BCE8u;
label_30bce8:
    // 0x30bce8: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x30bce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bcec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bcf0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BCF0u;
    {
        const bool branch_taken_0x30bcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCF0u;
            // 0x30bcf4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcf0) {
            ctx->pc = 0x30BD08u;
            goto label_30bd08;
        }
    }
    ctx->pc = 0x30BCF8u;
    // 0x30bcf8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BCF8u;
    {
        const bool branch_taken_0x30bcf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bcf8) {
            ctx->pc = 0x30BD04u;
            goto label_30bd04;
        }
    }
    ctx->pc = 0x30BD00u;
    // 0x30bd00: 0x241001f9  addiu       $s0, $zero, 0x1F9
    ctx->pc = 0x30bd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_30bd04:
    // 0x30bd04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x30bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_30bd08:
    // 0x30bd08: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x30BD08u;
    {
        const bool branch_taken_0x30bd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD08u;
            // 0x30bd0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd08) {
            ctx->pc = 0x30BD8Cu;
            goto label_30bd8c;
        }
    }
    ctx->pc = 0x30BD10u;
    // 0x30bd10: 0xc087654  jal         func_21D950
    ctx->pc = 0x30BD10u;
    SET_GPR_U32(ctx, 31, 0x30BD18u);
    ctx->pc = 0x30BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD10u;
            // 0x30bd14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BD18u; }
        if (ctx->pc != 0x30BD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BD18u; }
        if (ctx->pc != 0x30BD18u) { return; }
    }
    ctx->pc = 0x30BD18u;
label_30bd18:
    // 0x30bd18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30bd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bd20: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30BD20u;
    {
        const bool branch_taken_0x30bd20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x30BD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD20u;
            // 0x30bd24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd20) {
            ctx->pc = 0x30BD80u;
            goto label_30bd80;
        }
    }
    ctx->pc = 0x30BD28u;
    // 0x30bd28: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BD28u;
    SET_GPR_U32(ctx, 31, 0x30BD30u);
    ctx->pc = 0x30BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD28u;
            // 0x30bd2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BD30u; }
        if (ctx->pc != 0x30BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BD30u; }
        if (ctx->pc != 0x30BD30u) { return; }
    }
    ctx->pc = 0x30BD30u;
label_30bd30:
    // 0x30bd30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bd34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bd38: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30bd38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30bd3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BD3Cu;
    {
        const bool branch_taken_0x30bd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30bd3c) {
            ctx->pc = 0x30BD4Cu;
            goto label_30bd4c;
        }
    }
    ctx->pc = 0x30BD44u;
    // 0x30bd44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bd48: 0xa020dce8  sb          $zero, -0x2318($at)
    ctx->pc = 0x30bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958312), (uint8_t)GPR_U32(ctx, 0));
label_30bd4c:
    // 0x30bd4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bd50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bd54: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30bd54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30bd58: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BD58u;
    {
        const bool branch_taken_0x30bd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD58u;
            // 0x30bd5c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd58) {
            ctx->pc = 0x30BD7Cu;
            goto label_30bd7c;
        }
    }
    ctx->pc = 0x30BD60u;
    // 0x30bd60: 0x8c23dce4  lw          $v1, -0x231C($at)
    ctx->pc = 0x30bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30bd64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BD64u;
    {
        const bool branch_taken_0x30bd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD64u;
            // 0x30bd68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd64) {
            ctx->pc = 0x30BD7Cu;
            goto label_30bd7c;
        }
    }
    ctx->pc = 0x30BD6Cu;
    // 0x30bd6c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30bd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30bd70: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x30bd70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x30bd74: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30bd78: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x30bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
label_30bd7c:
    // 0x30bd7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bd80:
    // 0x30bd80: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BD80u;
    {
        const bool branch_taken_0x30bd80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x30bd80) {
            ctx->pc = 0x30BD8Cu;
            goto label_30bd8c;
        }
    }
    ctx->pc = 0x30BD88u;
    // 0x30bd88: 0x241001f9  addiu       $s0, $zero, 0x1F9
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_30bd8c:
    // 0x30bd8c: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x30bd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bd90: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30bd94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30BD94u;
    {
        const bool branch_taken_0x30bd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD94u;
            // 0x30bd98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd94) {
            ctx->pc = 0x30BDC0u;
            goto label_30bdc0;
        }
    }
    ctx->pc = 0x30BD9Cu;
    // 0x30bd9c: 0xc087654  jal         func_21D950
    ctx->pc = 0x30BD9Cu;
    SET_GPR_U32(ctx, 31, 0x30BDA4u);
    ctx->pc = 0x30BDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD9Cu;
            // 0x30bda0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BDA4u; }
        if (ctx->pc != 0x30BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BDA4u; }
        if (ctx->pc != 0x30BDA4u) { return; }
    }
    ctx->pc = 0x30BDA4u;
label_30bda4:
    // 0x30bda4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bda8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BDA8u;
    {
        const bool branch_taken_0x30bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDA8u;
            // 0x30bdac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bda8) {
            ctx->pc = 0x30BDB4u;
            goto label_30bdb4;
        }
    }
    ctx->pc = 0x30BDB0u;
    // 0x30bdb0: 0x24100083  addiu       $s0, $zero, 0x83
    ctx->pc = 0x30bdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_30bdb4:
    // 0x30bdb4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BDB4u;
    {
        const bool branch_taken_0x30bdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30bdb4) {
            ctx->pc = 0x30BDC0u;
            goto label_30bdc0;
        }
    }
    ctx->pc = 0x30BDBCu;
    // 0x30bdbc: 0x241001f9  addiu       $s0, $zero, 0x1F9
    ctx->pc = 0x30bdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_30bdc0:
    // 0x30bdc0: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x30bdc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bdc4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30bdc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BDC8u;
    {
        const bool branch_taken_0x30bdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDC8u;
            // 0x30bdcc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdc8) {
            ctx->pc = 0x30BDD8u;
            goto label_30bdd8;
        }
    }
    ctx->pc = 0x30BDD0u;
    // 0x30bdd0: 0x146200da  bne         $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x30BDD0u;
    {
        const bool branch_taken_0x30bdd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30bdd0) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BDD8u;
label_30bdd8:
    // 0x30bdd8: 0x122000d8  beqz        $s1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x30BDD8u;
    {
        const bool branch_taken_0x30bdd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDD8u;
            // 0x30bddc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdd8) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BDE0u;
    // 0x30bde0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BDE0u;
    {
        const bool branch_taken_0x30bde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30bde0) {
            ctx->pc = 0x30BDECu;
            goto label_30bdec;
        }
    }
    ctx->pc = 0x30BDE8u;
    // 0x30bde8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x30bde8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_30bdec:
    // 0x30bdec: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x30bdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30bdf0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x30bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30bdf4: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BDF4u;
    {
        const bool branch_taken_0x30bdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDF4u;
            // 0x30bdf8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdf4) {
            ctx->pc = 0x30BE14u;
            goto label_30be14;
        }
    }
    ctx->pc = 0x30BDFCu;
    // 0x30bdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30be00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30be00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30be04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30be08: 0xc08e898  jal         func_23A260
    ctx->pc = 0x30BE08u;
    SET_GPR_U32(ctx, 31, 0x30BE10u);
    ctx->pc = 0x30BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE08u;
            // 0x30be0c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE10u; }
        if (ctx->pc != 0x30BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE10u; }
        if (ctx->pc != 0x30BE10u) { return; }
    }
    ctx->pc = 0x30BE10u;
label_30be10:
    // 0x30be10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30be14:
    // 0x30be14: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BE14u;
    SET_GPR_U32(ctx, 31, 0x30BE1Cu);
    ctx->pc = 0x30BE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE14u;
            // 0x30be18: 0xae8003b0  sw          $zero, 0x3B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE1Cu; }
        if (ctx->pc != 0x30BE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE1Cu; }
        if (ctx->pc != 0x30BE1Cu) { return; }
    }
    ctx->pc = 0x30BE1Cu;
label_30be1c:
    // 0x30be1c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x30BE1Cu;
    {
        const bool branch_taken_0x30be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be1c) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BE24u;
label_30be24:
    // 0x30be24: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30BE24u;
    SET_GPR_U32(ctx, 31, 0x30BE2Cu);
    ctx->pc = 0x30BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE24u;
            // 0x30be28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE2Cu; }
        if (ctx->pc != 0x30BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE2Cu; }
        if (ctx->pc != 0x30BE2Cu) { return; }
    }
    ctx->pc = 0x30BE2Cu;
label_30be2c:
    // 0x30be2c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x30be2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x30be30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30be30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be34: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x30be34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30be38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30be38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30be3c: 0x2442e410  addiu       $v0, $v0, -0x1BF0
    ctx->pc = 0x30be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960144));
    // 0x30be40: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x30be40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30be44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30be48: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x30BE48u;
    {
        const bool branch_taken_0x30be48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE48u;
            // 0x30be4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be48) {
            ctx->pc = 0x30BFD8u;
            goto label_30bfd8;
        }
    }
    ctx->pc = 0x30BE50u;
    // 0x30be50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BE50u;
    {
        const bool branch_taken_0x30be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE50u;
            // 0x30be54: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be50) {
            ctx->pc = 0x30BE60u;
            goto label_30be60;
        }
    }
    ctx->pc = 0x30BE58u;
    // 0x30be58: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x30BE58u;
    {
        const bool branch_taken_0x30be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be58) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BE60u;
label_30be60:
    // 0x30be60: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30be64: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x30be68: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x30be68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x30be6c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x30be6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30be70: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x30be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x30be74: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x30be74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30be78: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x30be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x30be7c: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x30be7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x30be80: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x30be80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x30be84: 0x7ce40010  sq          $a0, 0x10($a3)
    ctx->pc = 0x30be84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 4));
    // 0x30be88: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x30be88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x30be8c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x30be8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30be90: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x30be90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30be94: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x30be94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x30be98: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30be98u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30be9c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x30be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x30bea0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x30bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x30bea4: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x30bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x30bea8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30beac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30beb0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x30beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x30beb4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BEB4u;
    {
        const bool branch_taken_0x30beb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEB4u;
            // 0x30beb8: 0x24640190  addiu       $a0, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30beb4) {
            ctx->pc = 0x30BEC0u;
            goto label_30bec0;
        }
    }
    ctx->pc = 0x30BEBCu;
    // 0x30bebc: 0x246401c0  addiu       $a0, $v1, 0x1C0
    ctx->pc = 0x30bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_30bec0:
    // 0x30bec0: 0x8fa5053c  lw          $a1, 0x53C($sp)
    ctx->pc = 0x30bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x30bec4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x30bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x30bec8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BEC8u;
    {
        const bool branch_taken_0x30bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEC8u;
            // 0x30becc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bec8) {
            ctx->pc = 0x30BED4u;
            goto label_30bed4;
        }
    }
    ctx->pc = 0x30BED0u;
    // 0x30bed0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30bed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bed4:
    // 0x30bed4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x30bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x30bed8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BED8u;
    {
        const bool branch_taken_0x30bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BED8u;
            // 0x30bedc: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bed8) {
            ctx->pc = 0x30BEE4u;
            goto label_30bee4;
        }
    }
    ctx->pc = 0x30BEE0u;
    // 0x30bee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bee4:
    // 0x30bee4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30BEE4u;
    {
        const bool branch_taken_0x30bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEE4u;
            // 0x30bee8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bee4) {
            ctx->pc = 0x30BEF0u;
            goto label_30bef0;
        }
    }
    ctx->pc = 0x30BEECu;
    // 0x30beec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bef0:
    // 0x30bef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BEF0u;
    {
        const bool branch_taken_0x30bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEF0u;
            // 0x30bef4: 0x60082a  slt         $at, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bef0) {
            ctx->pc = 0x30BF00u;
            goto label_30bf00;
        }
    }
    ctx->pc = 0x30BEF8u;
    // 0x30bef8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30befc: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x30befcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_30bf00:
    // 0x30bf00: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x30BF00u;
    {
        const bool branch_taken_0x30bf00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF00u;
            // 0x30bf04: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf00) {
            ctx->pc = 0x30BF78u;
            goto label_30bf78;
        }
    }
    ctx->pc = 0x30BF08u;
    // 0x30bf08: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x30bf08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bf0c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x30bf0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30bf10: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BF10u;
    {
        const bool branch_taken_0x30bf10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF10u;
            // 0x30bf14: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf10) {
            ctx->pc = 0x30BF2Cu;
            goto label_30bf2c;
        }
    }
    ctx->pc = 0x30BF18u;
    // 0x30bf18: 0xae83011c  sw          $v1, 0x11C($s4)
    ctx->pc = 0x30bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 3));
    // 0x30bf1c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BF1Cu;
    SET_GPR_U32(ctx, 31, 0x30BF24u);
    ctx->pc = 0x30BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF1Cu;
            // 0x30bf20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF24u; }
        if (ctx->pc != 0x30BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF24u; }
        if (ctx->pc != 0x30BF24u) { return; }
    }
    ctx->pc = 0x30BF24u;
label_30bf24:
    // 0x30bf24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30BF24u;
    {
        const bool branch_taken_0x30bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bf24) {
            ctx->pc = 0x30BF78u;
            goto label_30bf78;
        }
    }
    ctx->pc = 0x30BF2Cu;
label_30bf2c:
    // 0x30bf2c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30BF2Cu;
    {
        const bool branch_taken_0x30bf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30bf2c) {
            ctx->pc = 0x30BF78u;
            goto label_30bf78;
        }
    }
    ctx->pc = 0x30BF34u;
    // 0x30bf34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf38: 0xc0c2dec  jal         func_30B7B0
    ctx->pc = 0x30BF38u;
    SET_GPR_U32(ctx, 31, 0x30BF40u);
    ctx->pc = 0x30BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF38u;
            // 0x30bf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7B0u;
    if (runtime->hasFunction(0x30B7B0u)) {
        auto targetFn = runtime->lookupFunction(0x30B7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF40u; }
        if (ctx->pc != 0x30BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertPositionNameRegi__13CNameRegiMenuFi_0x30b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF40u; }
        if (ctx->pc != 0x30BF40u) { return; }
    }
    ctx->pc = 0x30BF40u;
label_30bf40:
    // 0x30bf40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bf44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bf48: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BF48u;
    {
        const bool branch_taken_0x30bf48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF48u;
            // 0x30bf4c: 0xa6830014  sh          $v1, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf48) {
            ctx->pc = 0x30BF68u;
            goto label_30bf68;
        }
    }
    ctx->pc = 0x30BF50u;
    // 0x30bf50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bf54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x30bf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x30bf58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30bf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf60: 0xc0c2e5c  jal         func_30B970
    ctx->pc = 0x30BF60u;
    SET_GPR_U32(ctx, 31, 0x30BF68u);
    ctx->pc = 0x30BF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF60u;
            // 0x30bf64: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B970u;
    if (runtime->hasFunction(0x30B970u)) {
        auto targetFn = runtime->lookupFunction(0x30B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF68u; }
        if (ctx->pc != 0x30BF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiPosition__13CNameRegiMenuFiPsi_0x30b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF68u; }
        if (ctx->pc != 0x30BF68u) { return; }
    }
    ctx->pc = 0x30BF68u;
label_30bf68:
    // 0x30bf68: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30BF68u;
    SET_GPR_U32(ctx, 31, 0x30BF70u);
    ctx->pc = 0x30BF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF68u;
            // 0x30bf6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF70u; }
        if (ctx->pc != 0x30BF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF70u; }
        if (ctx->pc != 0x30BF70u) { return; }
    }
    ctx->pc = 0x30BF70u;
label_30bf70:
    // 0x30bf70: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30BF70u;
    {
        const bool branch_taken_0x30bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bf70) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BF78u;
label_30bf78:
    // 0x30bf78: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30bf7c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x30bf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x30bf80: 0x2463e4a0  addiu       $v1, $v1, -0x1B60
    ctx->pc = 0x30bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960288));
    // 0x30bf84: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x30bf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x30bf88: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x30bf88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bf8c: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x30bf8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30bf90: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x30bf90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x30bf94: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x30bf94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x30bf98: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x30bf98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x30bf9c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x30bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x30bfa0: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x30bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x30bfa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30bfa8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x30bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x30bfac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BFACu;
    {
        const bool branch_taken_0x30bfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFACu;
            // 0x30bfb0: 0x246301f0  addiu       $v1, $v1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfac) {
            ctx->pc = 0x30BFC0u;
            goto label_30bfc0;
        }
    }
    ctx->pc = 0x30BFB4u;
    // 0x30bfb4: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x30bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x30bfb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BFB8u;
    {
        const bool branch_taken_0x30bfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFB8u;
            // 0x30bfbc: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfb8) {
            ctx->pc = 0x30BFC8u;
            goto label_30bfc8;
        }
    }
    ctx->pc = 0x30BFC0u;
label_30bfc0:
    // 0x30bfc0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x30BFC0u;
    {
        const bool branch_taken_0x30bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFC0u;
            // 0x30bfc4: 0x84700000  lh          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfc0) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BFC8u;
label_30bfc8:
    // 0x30bfc8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x30BFC8u;
    {
        const bool branch_taken_0x30bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bfc8) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BFD0u;
    // 0x30bfd0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x30BFD0u;
    {
        const bool branch_taken_0x30bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFD0u;
            // 0x30bfd4: 0x84700002  lh          $s0, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd0) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30BFD8u;
label_30bfd8:
    // 0x30bfd8: 0x16a20024  bne         $s5, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x30BFD8u;
    {
        const bool branch_taken_0x30bfd8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFD8u;
            // 0x30bfdc: 0x26930114  addiu       $s3, $s4, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd8) {
            ctx->pc = 0x30C06Cu;
            goto label_30c06c;
        }
    }
    ctx->pc = 0x30BFE0u;
    // 0x30bfe0: 0x8fa3053c  lw          $v1, 0x53C($sp)
    ctx->pc = 0x30bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x30bfe4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x30bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x30bfe8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BFE8u;
    {
        const bool branch_taken_0x30bfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFE8u;
            // 0x30bfec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfe8) {
            ctx->pc = 0x30BFFCu;
            goto label_30bffc;
        }
    }
    ctx->pc = 0x30BFF0u;
    // 0x30bff0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x30bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x30bff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BFF4u;
    {
        const bool branch_taken_0x30bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bff4) {
            ctx->pc = 0x30C008u;
            goto label_30c008;
        }
    }
    ctx->pc = 0x30BFFCu;
label_30bffc:
    // 0x30bffc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c000: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30c004: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x30c004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_30c008:
    // 0x30c008: 0x8fa3053c  lw          $v1, 0x53C($sp)
    ctx->pc = 0x30c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x30c00c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x30c00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x30c010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C010u;
    {
        const bool branch_taken_0x30c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C010u;
            // 0x30c014: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c010) {
            ctx->pc = 0x30C020u;
            goto label_30c020;
        }
    }
    ctx->pc = 0x30C018u;
    // 0x30c018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C018u;
    {
        const bool branch_taken_0x30c018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c018) {
            ctx->pc = 0x30C02Cu;
            goto label_30c02c;
        }
    }
    ctx->pc = 0x30C020u;
label_30c020:
    // 0x30c020: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c024: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x30c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x30c028: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x30c028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_30c02c:
    // 0x30c02c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c030: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C030u;
    {
        const bool branch_taken_0x30c030 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30c030) {
            ctx->pc = 0x30C03Cu;
            goto label_30c03c;
        }
    }
    ctx->pc = 0x30C038u;
    // 0x30c038: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x30c038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_30c03c:
    // 0x30c03c: 0x8f83a1d8  lw          $v1, -0x5E28($gp)
    ctx->pc = 0x30c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30c040: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c044: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x30c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x30c048: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x30c048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30c04c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C04Cu;
    {
        const bool branch_taken_0x30c04c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c04c) {
            ctx->pc = 0x30C058u;
            goto label_30c058;
        }
    }
    ctx->pc = 0x30C054u;
    // 0x30c054: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x30c054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_30c058:
    // 0x30c058: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c05c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C05Cu;
    {
        const bool branch_taken_0x30c05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C05Cu;
            // 0x30c060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c05c) {
            ctx->pc = 0x30C06Cu;
            goto label_30c06c;
        }
    }
    ctx->pc = 0x30C064u;
    // 0x30c064: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C064u;
    SET_GPR_U32(ctx, 31, 0x30C06Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C06Cu; }
        if (ctx->pc != 0x30C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C06Cu; }
        if (ctx->pc != 0x30C06Cu) { return; }
    }
    ctx->pc = 0x30C06Cu;
label_30c06c:
    // 0x30c06c: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x30c06cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c070: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c074: 0x16a30013  bne         $s5, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C074u;
    {
        const bool branch_taken_0x30c074 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C074u;
            // 0x30c078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c074) {
            ctx->pc = 0x30C0C4u;
            goto label_30c0c4;
        }
    }
    ctx->pc = 0x30C07Cu;
    // 0x30c07c: 0x8fa3053c  lw          $v1, 0x53C($sp)
    ctx->pc = 0x30c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x30c080: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30C080u;
    {
        const bool branch_taken_0x30c080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C080u;
            // 0x30c084: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c080) {
            ctx->pc = 0x30C0DCu;
            goto label_30c0dc;
        }
    }
    ctx->pc = 0x30C088u;
    // 0x30c088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c08c: 0x27a5053c  addiu       $a1, $sp, 0x53C
    ctx->pc = 0x30c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
    // 0x30c090: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x30c090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c094: 0xc0c2d78  jal         func_30B5E0
    ctx->pc = 0x30C094u;
    SET_GPR_U32(ctx, 31, 0x30C09Cu);
    ctx->pc = 0x30C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C094u;
            // 0x30c098: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B5E0u;
    if (runtime->hasFunction(0x30B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x30B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C09Cu; }
        if (ctx->pc != 0x30C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C09Cu; }
        if (ctx->pc != 0x30C09Cu) { return; }
    }
    ctx->pc = 0x30C09Cu;
label_30c09c:
    // 0x30c09c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x30c09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30c0a0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x30C0A0u;
    {
        const bool branch_taken_0x30c0a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c0a0) {
            ctx->pc = 0x30C0D8u;
            goto label_30c0d8;
        }
    }
    ctx->pc = 0x30C0A8u;
    // 0x30c0a8: 0x8fa5053c  lw          $a1, 0x53C($sp)
    ctx->pc = 0x30c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x30c0ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x30c0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0b0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x30c0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0b4: 0xc0c2e5c  jal         func_30B970
    ctx->pc = 0x30C0B4u;
    SET_GPR_U32(ctx, 31, 0x30C0BCu);
    ctx->pc = 0x30C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0B4u;
            // 0x30c0b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B970u;
    if (runtime->hasFunction(0x30B970u)) {
        auto targetFn = runtime->lookupFunction(0x30B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0BCu; }
        if (ctx->pc != 0x30C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiPosition__13CNameRegiMenuFiPsi_0x30b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0BCu; }
        if (ctx->pc != 0x30C0BCu) { return; }
    }
    ctx->pc = 0x30C0BCu;
label_30c0bc:
    // 0x30c0bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C0BCu;
    {
        const bool branch_taken_0x30c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c0bc) {
            ctx->pc = 0x30C0D8u;
            goto label_30c0d8;
        }
    }
    ctx->pc = 0x30C0C4u;
label_30c0c4:
    // 0x30c0c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x30c0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0c8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x30c0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0d0: 0xc0c2d78  jal         func_30B5E0
    ctx->pc = 0x30C0D0u;
    SET_GPR_U32(ctx, 31, 0x30C0D8u);
    ctx->pc = 0x30C0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0D0u;
            // 0x30c0d4: 0x27a5053c  addiu       $a1, $sp, 0x53C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B5E0u;
    if (runtime->hasFunction(0x30B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x30B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0D8u; }
        if (ctx->pc != 0x30C0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0D8u; }
        if (ctx->pc != 0x30C0D8u) { return; }
    }
    ctx->pc = 0x30C0D8u;
label_30c0d8:
    // 0x30c0d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30c0dc:
    // 0x30c0dc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C0DCu;
    {
        const bool branch_taken_0x30c0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0DCu;
            // 0x30c0e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0dc) {
            ctx->pc = 0x30C100u;
            goto label_30c100;
        }
    }
    ctx->pc = 0x30C0E4u;
    // 0x30c0e4: 0xc0c2dec  jal         func_30B7B0
    ctx->pc = 0x30C0E4u;
    SET_GPR_U32(ctx, 31, 0x30C0ECu);
    ctx->pc = 0x30C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0E4u;
            // 0x30c0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7B0u;
    if (runtime->hasFunction(0x30B7B0u)) {
        auto targetFn = runtime->lookupFunction(0x30B7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0ECu; }
        if (ctx->pc != 0x30C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertPositionNameRegi__13CNameRegiMenuFi_0x30b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0ECu; }
        if (ctx->pc != 0x30C0ECu) { return; }
    }
    ctx->pc = 0x30C0ECu;
label_30c0ec:
    // 0x30c0ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30c0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0f0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C0F0u;
    SET_GPR_U32(ctx, 31, 0x30C0F8u);
    ctx->pc = 0x30C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0F0u;
            // 0x30c0f4: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0F8u; }
        if (ctx->pc != 0x30C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0F8u; }
        if (ctx->pc != 0x30C0F8u) { return; }
    }
    ctx->pc = 0x30C0F8u;
label_30c0f8:
    // 0x30c0f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30C0F8u;
    {
        const bool branch_taken_0x30c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c0f8) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30C100u;
label_30c100:
    // 0x30c100: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c104: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C104u;
    {
        const bool branch_taken_0x30c104 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C104u;
            // 0x30c108: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c104) {
            ctx->pc = 0x30C118u;
            goto label_30c118;
        }
    }
    ctx->pc = 0x30C10Cu;
    // 0x30c10c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C10Cu;
    SET_GPR_U32(ctx, 31, 0x30C114u);
    ctx->pc = 0x30C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C10Cu;
            // 0x30c110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C114u; }
        if (ctx->pc != 0x30C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C114u; }
        if (ctx->pc != 0x30C114u) { return; }
    }
    ctx->pc = 0x30C114u;
label_30c114:
    // 0x30c114: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x30c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_30c118:
    // 0x30c118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C118u;
    {
        const bool branch_taken_0x30c118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C118u;
            // 0x30c11c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c118) {
            ctx->pc = 0x30C128u;
            goto label_30c128;
        }
    }
    ctx->pc = 0x30C120u;
    // 0x30c120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C120u;
    {
        const bool branch_taken_0x30c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C120u;
            // 0x30c124: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c120) {
            ctx->pc = 0x30C130u;
            goto label_30c130;
        }
    }
    ctx->pc = 0x30C128u;
label_30c128:
    // 0x30c128: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x30c128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c12c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x30c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_30c130:
    // 0x30c130: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C130u;
    {
        const bool branch_taken_0x30c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c130) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30C138u;
    // 0x30c138: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x30c138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_30c13c:
    // 0x30c13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c140:
    // 0x30c140: 0x12020366  beq         $s0, $v0, . + 4 + (0x366 << 2)
    ctx->pc = 0x30C140u;
    {
        const bool branch_taken_0x30c140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C140u;
            // 0x30c144: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c140) {
            ctx->pc = 0x30CEDCu;
            goto label_30cedc;
        }
    }
    ctx->pc = 0x30C148u;
    // 0x30c148: 0x12030325  beq         $s0, $v1, . + 4 + (0x325 << 2)
    ctx->pc = 0x30C148u;
    {
        const bool branch_taken_0x30c148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C148u;
            // 0x30c14c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c148) {
            ctx->pc = 0x30CDE0u;
            goto label_30cde0;
        }
    }
    ctx->pc = 0x30C150u;
    // 0x30c150: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c154: 0x120402d0  beq         $s0, $a0, . + 4 + (0x2D0 << 2)
    ctx->pc = 0x30C154u;
    {
        const bool branch_taken_0x30c154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x30C158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C154u;
            // 0x30c158: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c154) {
            ctx->pc = 0x30CC98u;
            goto label_30cc98;
        }
    }
    ctx->pc = 0x30C15Cu;
    // 0x30c15c: 0x240301f9  addiu       $v1, $zero, 0x1F9
    ctx->pc = 0x30c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
    // 0x30c160: 0x120302c7  beq         $s0, $v1, . + 4 + (0x2C7 << 2)
    ctx->pc = 0x30C160u;
    {
        const bool branch_taken_0x30c160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C160u;
            // 0x30c164: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c160) {
            ctx->pc = 0x30CC80u;
            goto label_30cc80;
        }
    }
    ctx->pc = 0x30C168u;
    // 0x30c168: 0x120301f0  beq         $s0, $v1, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x30C168u;
    {
        const bool branch_taken_0x30c168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C168u;
            // 0x30c16c: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c168) {
            ctx->pc = 0x30C92Cu;
            goto label_30c92c;
        }
    }
    ctx->pc = 0x30C170u;
    // 0x30c170: 0x240301fe  addiu       $v1, $zero, 0x1FE
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x30c174: 0x12030168  beq         $s0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x30C174u;
    {
        const bool branch_taken_0x30c174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C174u;
            // 0x30c178: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c174) {
            ctx->pc = 0x30C718u;
            goto label_30c718;
        }
    }
    ctx->pc = 0x30C17Cu;
    // 0x30c17c: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x30c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x30c180: 0x12030138  beq         $s0, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x30C180u;
    {
        const bool branch_taken_0x30c180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C180u;
            // 0x30c184: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c180) {
            ctx->pc = 0x30C664u;
            goto label_30c664;
        }
    }
    ctx->pc = 0x30C188u;
    // 0x30c188: 0x120300f0  beq         $s0, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x30C188u;
    {
        const bool branch_taken_0x30c188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C188u;
            // 0x30c18c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c188) {
            ctx->pc = 0x30C54Cu;
            goto label_30c54c;
        }
    }
    ctx->pc = 0x30C190u;
    // 0x30c190: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x30c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x30c194: 0x120300c6  beq         $s0, $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x30C194u;
    {
        const bool branch_taken_0x30c194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C194u;
            // 0x30c198: 0x2403006e  addiu       $v1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c194) {
            ctx->pc = 0x30C4B0u;
            goto label_30c4b0;
        }
    }
    ctx->pc = 0x30C19Cu;
    // 0x30c19c: 0x120300a8  beq         $s0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x30C19Cu;
    {
        const bool branch_taken_0x30c19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C19Cu;
            // 0x30c1a0: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c19c) {
            ctx->pc = 0x30C440u;
            goto label_30c440;
        }
    }
    ctx->pc = 0x30C1A4u;
    // 0x30c1a4: 0x12030082  beq         $s0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x30C1A4u;
    {
        const bool branch_taken_0x30c1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1A4u;
            // 0x30c1a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1a4) {
            ctx->pc = 0x30C3B0u;
            goto label_30c3b0;
        }
    }
    ctx->pc = 0x30C1ACu;
    // 0x30c1ac: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x30c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30c1b0: 0x1203006e  beq         $s0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x30C1B0u;
    {
        const bool branch_taken_0x30c1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1B0u;
            // 0x30c1b4: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1b0) {
            ctx->pc = 0x30C36Cu;
            goto label_30c36c;
        }
    }
    ctx->pc = 0x30C1B8u;
    // 0x30c1b8: 0x1203005e  beq         $s0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x30C1B8u;
    {
        const bool branch_taken_0x30c1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1B8u;
            // 0x30c1bc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1b8) {
            ctx->pc = 0x30C334u;
            goto label_30c334;
        }
    }
    ctx->pc = 0x30C1C0u;
    // 0x30c1c0: 0x1204002d  beq         $s0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30C1C0u;
    {
        const bool branch_taken_0x30c1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x30C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1C0u;
            // 0x30c1c4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1c0) {
            ctx->pc = 0x30C278u;
            goto label_30c278;
        }
    }
    ctx->pc = 0x30C1C8u;
    // 0x30c1c8: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30C1C8u;
    {
        const bool branch_taken_0x30c1c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1C8u;
            // 0x30c1cc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1c8) {
            ctx->pc = 0x30C24Cu;
            goto label_30c24c;
        }
    }
    ctx->pc = 0x30C1D0u;
    // 0x30c1d0: 0x12030018  beq         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30C1D0u;
    {
        const bool branch_taken_0x30c1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c1d0) {
            ctx->pc = 0x30C234u;
            goto label_30c234;
        }
    }
    ctx->pc = 0x30C1D8u;
    // 0x30c1d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30c1dc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C1DCu;
    {
        const bool branch_taken_0x30c1dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c1dc) {
            ctx->pc = 0x30C1ECu;
            goto label_30c1ec;
        }
    }
    ctx->pc = 0x30C1E4u;
    // 0x30c1e4: 0x10000344  b           . + 4 + (0x344 << 2)
    ctx->pc = 0x30C1E4u;
    {
        const bool branch_taken_0x30c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1E4u;
            // 0x30c1e8: 0x8e820230  lw          $v0, 0x230($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1e4) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30C1ECu;
label_30c1ec:
    // 0x30c1ec: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x30c1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C1F0u;
    {
        const bool branch_taken_0x30c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c1f0) {
            ctx->pc = 0x30C208u;
            goto label_30c208;
        }
    }
    ctx->pc = 0x30C1F8u;
    // 0x30c1f8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C1F8u;
    SET_GPR_U32(ctx, 31, 0x30C200u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C200u; }
        if (ctx->pc != 0x30C200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C200u; }
        if (ctx->pc != 0x30C200u) { return; }
    }
    ctx->pc = 0x30C200u;
label_30c200:
    // 0x30c200: 0x1000033c  b           . + 4 + (0x33C << 2)
    ctx->pc = 0x30C200u;
    {
        const bool branch_taken_0x30c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c200) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C208u;
label_30c208:
    // 0x30c208: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x30c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x30c20c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c210: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30C210u;
    SET_GPR_U32(ctx, 31, 0x30C218u);
    ctx->pc = 0x30C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C210u;
            // 0x30c214: 0xae820110  sw          $v0, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C218u; }
        if (ctx->pc != 0x30C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C218u; }
        if (ctx->pc != 0x30C218u) { return; }
    }
    ctx->pc = 0x30C218u;
label_30c218:
    // 0x30c218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30c218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c21c: 0xc0c349c  jal         func_30D270
    ctx->pc = 0x30C21Cu;
    SET_GPR_U32(ctx, 31, 0x30C224u);
    ctx->pc = 0x30C220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C21Cu;
            // 0x30c220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D270u;
    if (runtime->hasFunction(0x30D270u)) {
        auto targetFn = runtime->lookupFunction(0x30D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C224u; }
        if (ctx->pc != 0x30C224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeFontSelectMode__13CNameRegiMenuFi_0x30d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C224u; }
        if (ctx->pc != 0x30C224u) { return; }
    }
    ctx->pc = 0x30C224u;
label_30c224:
    // 0x30c224: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C224u;
    SET_GPR_U32(ctx, 31, 0x30C22Cu);
    ctx->pc = 0x30C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C224u;
            // 0x30c228: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C22Cu; }
        if (ctx->pc != 0x30C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C22Cu; }
        if (ctx->pc != 0x30C22Cu) { return; }
    }
    ctx->pc = 0x30C22Cu;
label_30c22c:
    // 0x30c22c: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x30C22Cu;
    {
        const bool branch_taken_0x30c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c22c) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C234u;
label_30c234:
    // 0x30c234: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x30c234u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c23c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C23Cu;
    SET_GPR_U32(ctx, 31, 0x30C244u);
    ctx->pc = 0x30C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C23Cu;
            // 0x30c240: 0xae800118  sw          $zero, 0x118($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C244u; }
        if (ctx->pc != 0x30C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C244u; }
        if (ctx->pc != 0x30C244u) { return; }
    }
    ctx->pc = 0x30C244u;
label_30c244:
    // 0x30c244: 0x1000032b  b           . + 4 + (0x32B << 2)
    ctx->pc = 0x30C244u;
    {
        const bool branch_taken_0x30c244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c244) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C24Cu;
label_30c24c:
    // 0x30c24c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c250: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30C250u;
    SET_GPR_U32(ctx, 31, 0x30C258u);
    ctx->pc = 0x30C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C250u;
            // 0x30c254: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C258u; }
        if (ctx->pc != 0x30C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C258u; }
        if (ctx->pc != 0x30C258u) { return; }
    }
    ctx->pc = 0x30C258u;
label_30c258:
    // 0x30c258: 0x27838610  addiu       $v1, $gp, -0x79F0
    ctx->pc = 0x30c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936080));
    // 0x30c25c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30c264: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30c264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c268: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C268u;
    SET_GPR_U32(ctx, 31, 0x30C270u);
    ctx->pc = 0x30C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C268u;
            // 0x30c26c: 0xae82011c  sw          $v0, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C270u; }
        if (ctx->pc != 0x30C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C270u; }
        if (ctx->pc != 0x30C270u) { return; }
    }
    ctx->pc = 0x30C270u;
label_30c270:
    // 0x30c270: 0x10000320  b           . + 4 + (0x320 << 2)
    ctx->pc = 0x30C270u;
    {
        const bool branch_taken_0x30c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c270) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C278u;
label_30c278:
    // 0x30c278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c27c: 0xc0c33ec  jal         func_30CFB0
    ctx->pc = 0x30C27Cu;
    SET_GPR_U32(ctx, 31, 0x30C284u);
    ctx->pc = 0x30C280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C27Cu;
            // 0x30c280: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30CFB0u;
    if (runtime->hasFunction(0x30CFB0u)) {
        auto targetFn = runtime->lookupFunction(0x30CFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C284u; }
        if (ctx->pc != 0x30C284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSelectedActiveFont__13CNameRegiMenuFPc_0x30cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C284u; }
        if (ctx->pc != 0x30C284u) { return; }
    }
    ctx->pc = 0x30C284u;
label_30c284:
    // 0x30c284: 0xa3a00222  sb          $zero, 0x222($sp)
    ctx->pc = 0x30c284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 546), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30c28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c290: 0x2404ff81  addiu       $a0, $zero, -0x7F
    ctx->pc = 0x30c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    // 0x30c294: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30C294u;
    {
        const bool branch_taken_0x30c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C294u;
            // 0x30c298: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c294) {
            ctx->pc = 0x30C2C8u;
            goto label_30c2c8;
        }
    }
    ctx->pc = 0x30C29Cu;
label_30c29c:
    // 0x30c29c: 0x2863821  addu        $a3, $s4, $a2
    ctx->pc = 0x30c29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x30c2a0: 0x80e20299  lb          $v0, 0x299($a3)
    ctx->pc = 0x30c2a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 665)));
    // 0x30c2a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C2A4u;
    {
        const bool branch_taken_0x30c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C2A4u;
            // 0x30c2a8: 0x24e80299  addiu       $t0, $a3, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2a4) {
            ctx->pc = 0x30C2C0u;
            goto label_30c2c0;
        }
    }
    ctx->pc = 0x30C2ACu;
    // 0x30c2ac: 0x80e2029a  lb          $v0, 0x29A($a3)
    ctx->pc = 0x30c2acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 666)));
    // 0x30c2b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C2B0u;
    {
        const bool branch_taken_0x30c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C2B0u;
            // 0x30c2b4: 0x24e9029a  addiu       $t1, $a3, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 666));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2b0) {
            ctx->pc = 0x30C2C0u;
            goto label_30c2c0;
        }
    }
    ctx->pc = 0x30C2B8u;
    // 0x30c2b8: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x30c2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c2bc: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x30c2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_30c2c0:
    // 0x30c2c0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30c2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x30c2c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_30c2c8:
    // 0x30c2c8: 0x8e8702fc  lw          $a3, 0x2FC($s4)
    ctx->pc = 0x30c2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c2cc: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x30c2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30c2d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x30C2D0u;
    {
        const bool branch_taken_0x30c2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c2d0) {
            ctx->pc = 0x30C29Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c29c;
        }
    }
    ctx->pc = 0x30C2D8u;
    // 0x30c2d8: 0x83a30220  lb          $v1, 0x220($sp)
    ctx->pc = 0x30c2d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x30c2dc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30c2e0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30c2e4: 0xa0430299  sb          $v1, 0x299($v0)
    ctx->pc = 0x30c2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 665), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c2e8: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c2ec: 0x83a30221  lb          $v1, 0x221($sp)
    ctx->pc = 0x30c2ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 545)));
    // 0x30c2f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30c2f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30c2f8: 0xa043029a  sb          $v1, 0x29A($v0)
    ctx->pc = 0x30c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c2fc: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c304: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
    // 0x30c308: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c30c: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c310: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x30c310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30c314: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C314u;
    {
        const bool branch_taken_0x30c314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C314u;
            // 0x30c318: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c314) {
            ctx->pc = 0x30C324u;
            goto label_30c324;
        }
    }
    ctx->pc = 0x30C31Cu;
    // 0x30c31c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x30c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30c320: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
label_30c324:
    // 0x30c324: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C324u;
    SET_GPR_U32(ctx, 31, 0x30C32Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C32Cu; }
        if (ctx->pc != 0x30C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C32Cu; }
        if (ctx->pc != 0x30C32Cu) { return; }
    }
    ctx->pc = 0x30C32Cu;
label_30c32c:
    // 0x30c32c: 0x100002f1  b           . + 4 + (0x2F1 << 2)
    ctx->pc = 0x30C32Cu;
    {
        const bool branch_taken_0x30c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c32c) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C334u;
label_30c334:
    // 0x30c334: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30c33c: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
    // 0x30c340: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c344: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C344u;
    {
        const bool branch_taken_0x30c344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C344u;
            // 0x30c348: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c344) {
            ctx->pc = 0x30C350u;
            goto label_30c350;
        }
    }
    ctx->pc = 0x30C34Cu;
    // 0x30c34c: 0xae8002fc  sw          $zero, 0x2FC($s4)
    ctx->pc = 0x30c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 0));
label_30c350:
    // 0x30c350: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30c354: 0xa6830162  sh          $v1, 0x162($s4)
    ctx->pc = 0x30c354u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c35c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C35Cu;
    SET_GPR_U32(ctx, 31, 0x30C364u);
    ctx->pc = 0x30C360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C35Cu;
            // 0x30c360: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C364u; }
        if (ctx->pc != 0x30C364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C364u; }
        if (ctx->pc != 0x30C364u) { return; }
    }
    ctx->pc = 0x30C364u;
label_30c364:
    // 0x30c364: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x30C364u;
    {
        const bool branch_taken_0x30c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c364) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C36Cu;
label_30c36c:
    // 0x30c36c: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c374: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
    // 0x30c378: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c37c: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c380: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x30c380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30c384: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C384u;
    {
        const bool branch_taken_0x30c384 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C384u;
            // 0x30c388: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c384) {
            ctx->pc = 0x30C390u;
            goto label_30c390;
        }
    }
    ctx->pc = 0x30C38Cu;
    // 0x30c38c: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
label_30c390:
    // 0x30c390: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c394: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30c398: 0xa6830164  sh          $v1, 0x164($s4)
    ctx->pc = 0x30c398u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c39c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c3a0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C3A0u;
    SET_GPR_U32(ctx, 31, 0x30C3A8u);
    ctx->pc = 0x30C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3A0u;
            // 0x30c3a4: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3A8u; }
        if (ctx->pc != 0x30C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3A8u; }
        if (ctx->pc != 0x30C3A8u) { return; }
    }
    ctx->pc = 0x30C3A8u;
label_30c3a8:
    // 0x30c3a8: 0x100002d2  b           . + 4 + (0x2D2 << 2)
    ctx->pc = 0x30C3A8u;
    {
        const bool branch_taken_0x30c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c3a8) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C3B0u;
label_30c3b0:
    // 0x30c3b0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C3B0u;
    SET_GPR_U32(ctx, 31, 0x30C3B8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3B8u; }
        if (ctx->pc != 0x30C3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3B8u; }
        if (ctx->pc != 0x30C3B8u) { return; }
    }
    ctx->pc = 0x30C3B8u;
label_30c3b8:
    // 0x30c3b8: 0x8e8502fc  lw          $a1, 0x2FC($s4)
    ctx->pc = 0x30c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c3bc: 0x10a002cd  beqz        $a1, . + 4 + (0x2CD << 2)
    ctx->pc = 0x30C3BCu;
    {
        const bool branch_taken_0x30c3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3BCu;
            // 0x30c3c0: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3bc) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C3C4u;
    // 0x30c3c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30C3C4u;
    {
        const bool branch_taken_0x30c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c3c4) {
            ctx->pc = 0x30C3E8u;
            goto label_30c3e8;
        }
    }
    ctx->pc = 0x30C3CCu;
label_30c3cc:
    // 0x30c3cc: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x30c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x30c3d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30c3d4: 0x80620299  lb          $v0, 0x299($v1)
    ctx->pc = 0x30c3d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 665)));
    // 0x30c3d8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x30c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30c3dc: 0xa0620297  sb          $v0, 0x297($v1)
    ctx->pc = 0x30c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 663), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c3e0: 0x8062029a  lb          $v0, 0x29A($v1)
    ctx->pc = 0x30c3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 666)));
    // 0x30c3e4: 0xa0620298  sb          $v0, 0x298($v1)
    ctx->pc = 0x30c3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 664), (uint8_t)GPR_U32(ctx, 2));
label_30c3e8:
    // 0x30c3e8: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c3e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c3ec: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x30c3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30c3f0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30C3F0u;
    {
        const bool branch_taken_0x30c3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c3f0) {
            ctx->pc = 0x30C3CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c3cc;
        }
    }
    ctx->pc = 0x30C3F8u;
    // 0x30c3f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30c3fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c400: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x30c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x30c404: 0xa0600297  sb          $zero, 0x297($v1)
    ctx->pc = 0x30c404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 663), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c408: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c40c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30c410: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x30c414: 0xa0600298  sb          $zero, 0x298($v1)
    ctx->pc = 0x30c414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 664), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c418: 0xa6820166  sh          $v0, 0x166($s4)
    ctx->pc = 0x30c418u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c41c: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30c424: 0xae8202fc  sw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
    // 0x30c428: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c42c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C42Cu;
    {
        const bool branch_taken_0x30c42c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C42Cu;
            // 0x30c430: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c42c) {
            ctx->pc = 0x30C438u;
            goto label_30c438;
        }
    }
    ctx->pc = 0x30C434u;
    // 0x30c434: 0xae8002fc  sw          $zero, 0x2FC($s4)
    ctx->pc = 0x30c434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 0));
label_30c438:
    // 0x30c438: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x30C438u;
    {
        const bool branch_taken_0x30c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C438u;
            // 0x30c43c: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c438) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C440u;
label_30c440:
    // 0x30c440: 0x8e8402fc  lw          $a0, 0x2FC($s4)
    ctx->pc = 0x30c440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30C444u;
    {
        const bool branch_taken_0x30c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C444u;
            // 0x30c448: 0x42840  sll         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c444) {
            ctx->pc = 0x30C468u;
            goto label_30c468;
        }
    }
    ctx->pc = 0x30C44Cu;
label_30c44c:
    // 0x30c44c: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x30c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x30c450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30c454: 0x8062029b  lb          $v0, 0x29B($v1)
    ctx->pc = 0x30c454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 667)));
    // 0x30c458: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x30c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x30c45c: 0xa0620299  sb          $v0, 0x299($v1)
    ctx->pc = 0x30c45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 665), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c460: 0x8062029c  lb          $v0, 0x29C($v1)
    ctx->pc = 0x30c460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 668)));
    // 0x30c464: 0xa062029a  sb          $v0, 0x29A($v1)
    ctx->pc = 0x30c464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 666), (uint8_t)GPR_U32(ctx, 2));
label_30c468:
    // 0x30c468: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c46c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x30c46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30c470: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30C470u;
    {
        const bool branch_taken_0x30c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C470u;
            // 0x30c474: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c470) {
            ctx->pc = 0x30C44Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c44c;
        }
    }
    ctx->pc = 0x30C478u;
    // 0x30c478: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x30c478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30c47c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c480: 0xa0800299  sb          $zero, 0x299($a0)
    ctx->pc = 0x30c480u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 665), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c484: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30c488: 0x878585f8  lh          $a1, -0x7A08($gp)
    ctx->pc = 0x30c488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c48c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c490: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30c490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c494: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x30c494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x30c498: 0xa0a0029a  sb          $zero, 0x29A($a1)
    ctx->pc = 0x30c498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 666), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c49c: 0xa6830168  sh          $v1, 0x168($s4)
    ctx->pc = 0x30c49cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c4a0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C4A0u;
    SET_GPR_U32(ctx, 31, 0x30C4A8u);
    ctx->pc = 0x30C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4A0u;
            // 0x30c4a4: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4A8u; }
        if (ctx->pc != 0x30C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4A8u; }
        if (ctx->pc != 0x30C4A8u) { return; }
    }
    ctx->pc = 0x30C4A8u;
label_30c4a8:
    // 0x30c4a8: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x30C4A8u;
    {
        const bool branch_taken_0x30c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c4a8) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C4B0u;
label_30c4b0:
    // 0x30c4b0: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30c4b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c4b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C4B4u;
    {
        const bool branch_taken_0x30c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4B4u;
            // 0x30c4b8: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4b4) {
            ctx->pc = 0x30C4D4u;
            goto label_30c4d4;
        }
    }
    ctx->pc = 0x30C4BCu;
label_30c4bc:
    // 0x30c4bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30c4c0: 0x80a20299  lb          $v0, 0x299($a1)
    ctx->pc = 0x30c4c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 665)));
    // 0x30c4c4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x30c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x30c4c8: 0xa0a2029b  sb          $v0, 0x29B($a1)
    ctx->pc = 0x30c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 667), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c4cc: 0x80a2029a  lb          $v0, 0x29A($a1)
    ctx->pc = 0x30c4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 666)));
    // 0x30c4d0: 0xa0a2029c  sb          $v0, 0x29C($a1)
    ctx->pc = 0x30c4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 668), (uint8_t)GPR_U32(ctx, 2));
label_30c4d4:
    // 0x30c4d4: 0x0  nop
    ctx->pc = 0x30c4d4u;
    // NOP
    // 0x30c4d8: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x30c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c4dc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x30c4dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30c4e0: 0x1020fff6  beqz        $at, . + 4 + (-0xA << 2)
    ctx->pc = 0x30C4E0u;
    {
        const bool branch_taken_0x30c4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4E0u;
            // 0x30c4e4: 0x2842821  addu        $a1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4e0) {
            ctx->pc = 0x30C4BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c4bc;
        }
    }
    ctx->pc = 0x30C4E8u;
    // 0x30c4e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30c4ec: 0x2403ff81  addiu       $v1, $zero, -0x7F
    ctx->pc = 0x30c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    // 0x30c4f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30c4f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x30c4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30c4f8: 0xa0430299  sb          $v1, 0x299($v0)
    ctx->pc = 0x30c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 665), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c4fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c500: 0x8e8502fc  lw          $a1, 0x2FC($s4)
    ctx->pc = 0x30c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x30c504: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c508: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30c50c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c510: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x30c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x30c514: 0xa0a6029a  sb          $a2, 0x29A($a1)
    ctx->pc = 0x30c514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 666), (uint8_t)GPR_U32(ctx, 6));
    // 0x30c518: 0x878585f8  lh          $a1, -0x7A08($gp)
    ctx->pc = 0x30c518u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c51c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c520: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x30c524: 0xa0a00299  sb          $zero, 0x299($a1)
    ctx->pc = 0x30c524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 665), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c528: 0x878585f8  lh          $a1, -0x7A08($gp)
    ctx->pc = 0x30c528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30c52c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c530: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x30c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x30c534: 0xa0a0029a  sb          $zero, 0x29A($a1)
    ctx->pc = 0x30c534u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 666), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c538: 0xa683016a  sh          $v1, 0x16A($s4)
    ctx->pc = 0x30c538u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c53c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C53Cu;
    SET_GPR_U32(ctx, 31, 0x30C544u);
    ctx->pc = 0x30C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C53Cu;
            // 0x30c540: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C544u; }
        if (ctx->pc != 0x30C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C544u; }
        if (ctx->pc != 0x30C544u) { return; }
    }
    ctx->pc = 0x30C544u;
label_30c544:
    // 0x30c544: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x30C544u;
    {
        const bool branch_taken_0x30c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c544) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C54Cu;
label_30c54c:
    // 0x30c54c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c550: 0x8424dce0  lh          $a0, -0x2320($at)
    ctx->pc = 0x30c550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c554: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C554u;
    {
        const bool branch_taken_0x30c554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C554u;
            // 0x30c558: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c554) {
            ctx->pc = 0x30C56Cu;
            goto label_30c56c;
        }
    }
    ctx->pc = 0x30C55Cu;
    // 0x30c55c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C55Cu;
    SET_GPR_U32(ctx, 31, 0x30C564u);
    ctx->pc = 0x30C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C55Cu;
            // 0x30c560: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C564u; }
        if (ctx->pc != 0x30C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C564u; }
        if (ctx->pc != 0x30C564u) { return; }
    }
    ctx->pc = 0x30C564u;
label_30c564:
    // 0x30c564: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x30C564u;
    {
        const bool branch_taken_0x30c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c564) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C56Cu;
label_30c56c:
    // 0x30c56c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x30c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30c570: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x30c570u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x30c574: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x30c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30c578: 0xae8203b0  sw          $v0, 0x3B0($s4)
    ctx->pc = 0x30c578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 2));
    // 0x30c57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c580: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30C580u;
    SET_GPR_U32(ctx, 31, 0x30C588u);
    ctx->pc = 0x30C584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C580u;
            // 0x30c584: 0xa6830006  sh          $v1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C588u; }
        if (ctx->pc != 0x30C588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C588u; }
        if (ctx->pc != 0x30C588u) { return; }
    }
    ctx->pc = 0x30C588u;
label_30c588:
    // 0x30c588: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c590: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30c590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30c594: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30C594u;
    SET_GPR_U32(ctx, 31, 0x30C59Cu);
    ctx->pc = 0x30C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C594u;
            // 0x30c598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C59Cu; }
        if (ctx->pc != 0x30C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C59Cu; }
        if (ctx->pc != 0x30C59Cu) { return; }
    }
    ctx->pc = 0x30C59Cu;
label_30c59c:
    // 0x30c59c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5a0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30C5A0u;
    SET_GPR_U32(ctx, 31, 0x30C5A8u);
    ctx->pc = 0x30C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5A0u;
            // 0x30c5a4: 0x24051007  addiu       $a1, $zero, 0x1007 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5A8u; }
        if (ctx->pc != 0x30C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5A8u; }
        if (ctx->pc != 0x30C5A8u) { return; }
    }
    ctx->pc = 0x30C5A8u;
label_30c5a8:
    // 0x30c5a8: 0xdf82a1f8  ld          $v0, -0x5E08($gp)
    ctx->pc = 0x30c5a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294943224)));
    // 0x30c5ac: 0x27a30500  addiu       $v1, $sp, 0x500
    ctx->pc = 0x30c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x30c5b0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c5b4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30c5b8: 0x8422dce0  lh          $v0, -0x2320($at)
    ctx->pc = 0x30c5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c5bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C5BCu;
    {
        const bool branch_taken_0x30c5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c5bc) {
            ctx->pc = 0x30C5D8u;
            goto label_30c5d8;
        }
    }
    ctx->pc = 0x30C5C4u;
    // 0x30c5c4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c5c8: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c5cc: 0xc065810  jal         func_196040
    ctx->pc = 0x30C5CCu;
    SET_GPR_U32(ctx, 31, 0x30C5D4u);
    ctx->pc = 0x30C5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5CCu;
            // 0x30c5d0: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5D4u; }
        if (ctx->pc != 0x30C5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5D4u; }
        if (ctx->pc != 0x30C5D4u) { return; }
    }
    ctx->pc = 0x30C5D4u;
label_30c5d4:
    // 0x30c5d4: 0xafa20500  sw          $v0, 0x500($sp)
    ctx->pc = 0x30c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 2));
label_30c5d8:
    // 0x30c5d8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c5e0: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c5e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C5E4u;
    {
        const bool branch_taken_0x30c5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c5e4) {
            ctx->pc = 0x30C600u;
            goto label_30c600;
        }
    }
    ctx->pc = 0x30C5ECu;
    // 0x30c5ec: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x30C5ECu;
    SET_GPR_U32(ctx, 31, 0x30C5F4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5F4u; }
        if (ctx->pc != 0x30C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5F4u; }
        if (ctx->pc != 0x30C5F4u) { return; }
    }
    ctx->pc = 0x30C5F4u;
label_30c5f4:
    // 0x30c5f4: 0xc067114  jal         func_19C450
    ctx->pc = 0x30C5F4u;
    SET_GPR_U32(ctx, 31, 0x30C5FCu);
    ctx->pc = 0x30C5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5F4u;
            // 0x30c5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C450u;
    if (runtime->hasFunction(0x19C450u)) {
        auto targetFn = runtime->lookupFunction(0x19C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5FCu; }
        if (ctx->pc != 0x30C5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboNameDefault__16CUserDataManagerFv_0x19c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C5FCu; }
        if (ctx->pc != 0x30C5FCu) { return; }
    }
    ctx->pc = 0x30C5FCu;
label_30c5fc:
    // 0x30c5fc: 0xafa20500  sw          $v0, 0x500($sp)
    ctx->pc = 0x30c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 2));
label_30c600:
    // 0x30c600: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c608: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c60c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C60Cu;
    {
        const bool branch_taken_0x30c60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c60c) {
            ctx->pc = 0x30C620u;
            goto label_30c620;
        }
    }
    ctx->pc = 0x30C614u;
    // 0x30c614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c618: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30C618u;
    SET_GPR_U32(ctx, 31, 0x30C620u);
    ctx->pc = 0x30C61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C618u;
            // 0x30c61c: 0x24051008  addiu       $a1, $zero, 0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C620u; }
        if (ctx->pc != 0x30C620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C620u; }
        if (ctx->pc != 0x30C620u) { return; }
    }
    ctx->pc = 0x30C620u;
label_30c620:
    // 0x30c620: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c624: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c628: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c62c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C62Cu;
    {
        const bool branch_taken_0x30c62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C62Cu;
            // 0x30c630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c62c) {
            ctx->pc = 0x30C648u;
            goto label_30c648;
        }
    }
    ctx->pc = 0x30C634u;
    // 0x30c634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c638: 0x2405101b  addiu       $a1, $zero, 0x101B
    ctx->pc = 0x30c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4123));
    // 0x30c63c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30C63Cu;
    SET_GPR_U32(ctx, 31, 0x30C644u);
    ctx->pc = 0x30C640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C63Cu;
            // 0x30c640: 0xafa00500  sw          $zero, 0x500($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C644u; }
        if (ctx->pc != 0x30C644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C644u; }
        if (ctx->pc != 0x30C644u) { return; }
    }
    ctx->pc = 0x30C644u;
label_30c644:
    // 0x30c644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c648:
    // 0x30c648: 0x27a50500  addiu       $a1, $sp, 0x500
    ctx->pc = 0x30c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x30c64c: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30C64Cu;
    SET_GPR_U32(ctx, 31, 0x30C654u);
    ctx->pc = 0x30C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C64Cu;
            // 0x30c650: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C654u; }
        if (ctx->pc != 0x30C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C654u; }
        if (ctx->pc != 0x30C654u) { return; }
    }
    ctx->pc = 0x30C654u;
label_30c654:
    // 0x30c654: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C654u;
    SET_GPR_U32(ctx, 31, 0x30C65Cu);
    ctx->pc = 0x30C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C654u;
            // 0x30c658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C65Cu; }
        if (ctx->pc != 0x30C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C65Cu; }
        if (ctx->pc != 0x30C65Cu) { return; }
    }
    ctx->pc = 0x30C65Cu;
label_30c65c:
    // 0x30c65c: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x30C65Cu;
    {
        const bool branch_taken_0x30c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c65c) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C664u;
label_30c664:
    // 0x30c664: 0xae8003b0  sw          $zero, 0x3B0($s4)
    ctx->pc = 0x30c664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 0));
    // 0x30c668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c66c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C66Cu;
    SET_GPR_U32(ctx, 31, 0x30C674u);
    ctx->pc = 0x30C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C66Cu;
            // 0x30c670: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C674u; }
        if (ctx->pc != 0x30C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C674u; }
        if (ctx->pc != 0x30C674u) { return; }
    }
    ctx->pc = 0x30C674u;
label_30c674:
    // 0x30c674: 0x26840299  addiu       $a0, $s4, 0x299
    ctx->pc = 0x30c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30c678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c67c: 0xc049c86  jal         func_127218
    ctx->pc = 0x30C67Cu;
    SET_GPR_U32(ctx, 31, 0x30C684u);
    ctx->pc = 0x30C680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C67Cu;
            // 0x30c680: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C684u; }
        if (ctx->pc != 0x30C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C684u; }
        if (ctx->pc != 0x30C684u) { return; }
    }
    ctx->pc = 0x30C684u;
label_30c684:
    // 0x30c684: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c68c: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c68cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c690: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C690u;
    {
        const bool branch_taken_0x30c690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C690u;
            // 0x30c694: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c690) {
            ctx->pc = 0x30C6A0u;
            goto label_30c6a0;
        }
    }
    ctx->pc = 0x30C698u;
    // 0x30c698: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x30C698u;
    {
        const bool branch_taken_0x30c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C698u;
            // 0x30c69c: 0xae8002fc  sw          $zero, 0x2FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c698) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C6A0u;
label_30c6a0:
    // 0x30c6a0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30C6A0u;
    {
        const bool branch_taken_0x30c6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6A0u;
            // 0x30c6a4: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6a0) {
            ctx->pc = 0x30C6DCu;
            goto label_30c6dc;
        }
    }
    ctx->pc = 0x30C6A8u;
    // 0x30c6a8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30c6ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30c6b0: 0x2442dac0  addiu       $v0, $v0, -0x2540
    ctx->pc = 0x30c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x30c6b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30c6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c6bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c6c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30C6C0u;
    SET_GPR_U32(ctx, 31, 0x30C6C8u);
    ctx->pc = 0x30C6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6C0u;
            // 0x30c6c4: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6C8u; }
        if (ctx->pc != 0x30C6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6C8u; }
        if (ctx->pc != 0x30C6C8u) { return; }
    }
    ctx->pc = 0x30C6C8u;
label_30c6c8:
    // 0x30c6c8: 0xc04a422  jal         func_129088
    ctx->pc = 0x30C6C8u;
    SET_GPR_U32(ctx, 31, 0x30C6D0u);
    ctx->pc = 0x30C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6C8u;
            // 0x30c6cc: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6D0u; }
        if (ctx->pc != 0x30C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6D0u; }
        if (ctx->pc != 0x30C6D0u) { return; }
    }
    ctx->pc = 0x30C6D0u;
label_30c6d0:
    // 0x30c6d0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x30c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30c6d4: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x30C6D4u;
    {
        const bool branch_taken_0x30c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6D4u;
            // 0x30c6d8: 0xae8202fc  sw          $v0, 0x2FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6d4) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C6DCu;
label_30c6dc:
    // 0x30c6dc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30C6DCu;
    SET_GPR_U32(ctx, 31, 0x30C6E4u);
    ctx->pc = 0x30C6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6DCu;
            // 0x30c6e0: 0x26451801  addiu       $a1, $s2, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E4u; }
        if (ctx->pc != 0x30C6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E4u; }
        if (ctx->pc != 0x30C6E4u) { return; }
    }
    ctx->pc = 0x30C6E4u;
label_30c6e4:
    // 0x30c6e4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30c6e8: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C6E8u;
    {
        const bool branch_taken_0x30c6e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6E8u;
            // 0x30c6ec: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6e8) {
            ctx->pc = 0x30C704u;
            goto label_30c704;
        }
    }
    ctx->pc = 0x30C6F0u;
    // 0x30c6f0: 0x8f84a1d8  lw          $a0, -0x5E28($gp)
    ctx->pc = 0x30c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30c6f4: 0x26451801  addiu       $a1, $s2, 0x1801
    ctx->pc = 0x30c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6145));
    // 0x30c6f8: 0xc0c2a48  jal         func_30A920
    ctx->pc = 0x30C6F8u;
    SET_GPR_U32(ctx, 31, 0x30C700u);
    ctx->pc = 0x30C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6F8u;
            // 0x30c6fc: 0x26860299  addiu       $a2, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A920u;
    if (runtime->hasFunction(0x30A920u)) {
        auto targetFn = runtime->lookupFunction(0x30A920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C700u; }
        if (ctx->pc != 0x30C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyAsciiToJis__13CNameRegiMenuFPcPc_0x30a920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C700u; }
        if (ctx->pc != 0x30C700u) { return; }
    }
    ctx->pc = 0x30C700u;
label_30c700:
    // 0x30c700: 0x26840299  addiu       $a0, $s4, 0x299
    ctx->pc = 0x30c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
label_30c704:
    // 0x30c704: 0xc04a422  jal         func_129088
    ctx->pc = 0x30C704u;
    SET_GPR_U32(ctx, 31, 0x30C70Cu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C70Cu; }
        if (ctx->pc != 0x30C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C70Cu; }
        if (ctx->pc != 0x30C70Cu) { return; }
    }
    ctx->pc = 0x30C70Cu;
label_30c70c:
    // 0x30c70c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x30c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30c710: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x30C710u;
    {
        const bool branch_taken_0x30c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C710u;
            // 0x30c714: 0xae8202fc  sw          $v0, 0x2FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c710) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C718u;
label_30c718:
    // 0x30c718: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30C718u;
    SET_GPR_U32(ctx, 31, 0x30C720u);
    ctx->pc = 0x30C71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C718u;
            // 0x30c71c: 0x26850299  addiu       $a1, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C720u; }
        if (ctx->pc != 0x30C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C720u; }
        if (ctx->pc != 0x30C720u) { return; }
    }
    ctx->pc = 0x30C720u;
label_30c720:
    // 0x30c720: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c724: 0x8422dce0  lh          $v0, -0x2320($at)
    ctx->pc = 0x30c724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c728: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x30C728u;
    {
        const bool branch_taken_0x30c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c728) {
            ctx->pc = 0x30C864u;
            goto label_30c864;
        }
    }
    ctx->pc = 0x30C730u;
    // 0x30c730: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30c734: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30C7FCu;
            goto label_30c7fc;
        }
    }
    ctx->pc = 0x30C73Cu;
    // 0x30c73c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c740: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30c740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c744: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30C744u;
    {
        const bool branch_taken_0x30c744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c744) {
            ctx->pc = 0x30C7FCu;
            goto label_30c7fc;
        }
    }
    ctx->pc = 0x30C74Cu;
    // 0x30c74c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30c74cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c750: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c754: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30C754u;
    {
        const bool branch_taken_0x30c754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c754) {
            ctx->pc = 0x30C7FCu;
            goto label_30c7fc;
        }
    }
    ctx->pc = 0x30C75Cu;
    // 0x30c75c: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x30C75Cu;
    SET_GPR_U32(ctx, 31, 0x30C764u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C764u; }
        if (ctx->pc != 0x30C764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C764u; }
        if (ctx->pc != 0x30C764u) { return; }
    }
    ctx->pc = 0x30C764u;
label_30c764:
    // 0x30c764: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x30C764u;
    {
        const bool branch_taken_0x30c764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c764) {
            ctx->pc = 0x30C7FCu;
            goto label_30c7fc;
        }
    }
    ctx->pc = 0x30C76Cu;
    // 0x30c76c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c770: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30c774: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30C774u;
    SET_GPR_U32(ctx, 31, 0x30C77Cu);
    ctx->pc = 0x30C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C774u;
            // 0x30c778: 0x27a602c0  addiu       $a2, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C77Cu; }
        if (ctx->pc != 0x30C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C77Cu; }
        if (ctx->pc != 0x30C77Cu) { return; }
    }
    ctx->pc = 0x30C77Cu;
label_30c77c:
    // 0x30c77c: 0xc065970  jal         func_1965C0
    ctx->pc = 0x30C77Cu;
    SET_GPR_U32(ctx, 31, 0x30C784u);
    ctx->pc = 0x30C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C77Cu;
            // 0x30c780: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965C0u;
    if (runtime->hasFunction(0x1965C0u)) {
        auto targetFn = runtime->lookupFunction(0x1965C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C784u; }
        if (ctx->pc != 0x30C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemByName__FPc_0x1965c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C784u; }
        if (ctx->pc != 0x30C784u) { return; }
    }
    ctx->pc = 0x30C784u;
label_30c784:
    // 0x30c784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c788: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x30c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x30c78c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C78Cu;
    {
        const bool branch_taken_0x30c78c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C78Cu;
            // 0x30c790: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c78c) {
            ctx->pc = 0x30C7A4u;
            goto label_30c7a4;
        }
    }
    ctx->pc = 0x30C794u;
    // 0x30c794: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x30c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x30c798: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C798u;
    {
        const bool branch_taken_0x30c798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C798u;
            // 0x30c79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c798) {
            ctx->pc = 0x30C7D0u;
            goto label_30c7d0;
        }
    }
    ctx->pc = 0x30C7A0u;
    // 0x30c7a0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_30c7a4:
    // 0x30c7a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7a8: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x30c7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c7ac: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30C7ACu;
    SET_GPR_U32(ctx, 31, 0x30C7B4u);
    ctx->pc = 0x30C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7ACu;
            // 0x30c7b0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7B4u; }
        if (ctx->pc != 0x30C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7B4u; }
        if (ctx->pc != 0x30C7B4u) { return; }
    }
    ctx->pc = 0x30C7B4u;
label_30c7b4:
    // 0x30c7b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7bc: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30c7c0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30C7C0u;
    SET_GPR_U32(ctx, 31, 0x30C7C8u);
    ctx->pc = 0x30C7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7C0u;
            // 0x30c7c4: 0x24050fd4  addiu       $a1, $zero, 0xFD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7C8u; }
        if (ctx->pc != 0x30C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7C8u; }
        if (ctx->pc != 0x30C7C8u) { return; }
    }
    ctx->pc = 0x30C7C8u;
label_30c7c8:
    // 0x30c7c8: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x30C7C8u;
    {
        const bool branch_taken_0x30c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7c8) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C7D0u;
label_30c7d0:
    // 0x30c7d0: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x30C7D0u;
    SET_GPR_U32(ctx, 31, 0x30C7D8u);
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7D8u; }
        if (ctx->pc != 0x30C7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7D8u; }
        if (ctx->pc != 0x30C7D8u) { return; }
    }
    ctx->pc = 0x30C7D8u;
label_30c7d8:
    // 0x30c7d8: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x30C7D8u;
    SET_GPR_U32(ctx, 31, 0x30C7E0u);
    ctx->pc = 0x30C7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7D8u;
            // 0x30c7dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7E0u; }
        if (ctx->pc != 0x30C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7E0u; }
        if (ctx->pc != 0x30C7E0u) { return; }
    }
    ctx->pc = 0x30C7E0u;
label_30c7e0:
    // 0x30c7e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c7e4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C7E4u;
    {
        const bool branch_taken_0x30c7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30c7e4) {
            ctx->pc = 0x30C7FCu;
            goto label_30c7fc;
        }
    }
    ctx->pc = 0x30C7ECu;
    // 0x30c7ec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c7f0: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c7f4: 0xc066694  jal         func_199A50
    ctx->pc = 0x30C7F4u;
    SET_GPR_U32(ctx, 31, 0x30C7FCu);
    ctx->pc = 0x30C7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7F4u;
            // 0x30c7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199A50u;
    if (runtime->hasFunction(0x199A50u)) {
        auto targetFn = runtime->lookupFunction(0x199A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7FCu; }
        if (ctx->pc != 0x30C7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataWeapon__13CGameDataUsedFi_0x199a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7FCu; }
        if (ctx->pc != 0x30C7FCu) { return; }
    }
    ctx->pc = 0x30C7FCu;
label_30c7fc:
    // 0x30c7fc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c800: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x30C800u;
    SET_GPR_U32(ctx, 31, 0x30C808u);
    ctx->pc = 0x30C804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C800u;
            // 0x30c804: 0x8c24dce4  lw          $a0, -0x231C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (runtime->hasFunction(0x30A690u)) {
        auto targetFn = runtime->lookupFunction(0x30A690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C808u; }
        if (ctx->pc != 0x30C808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDeleteNameRegisteItem__FP13CGameDataUsed_0x30a690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C808u; }
        if (ctx->pc != 0x30C808u) { return; }
    }
    ctx->pc = 0x30C808u;
label_30c808:
    // 0x30c808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C808u;
    {
        const bool branch_taken_0x30c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c808) {
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C810u;
    // 0x30c810: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x30C810u;
    SET_GPR_U32(ctx, 31, 0x30C818u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C818u; }
        if (ctx->pc != 0x30C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C818u; }
        if (ctx->pc != 0x30C818u) { return; }
    }
    ctx->pc = 0x30C818u;
label_30c818:
    // 0x30c818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c81c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x30c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x30c820: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x30C820u;
    SET_GPR_U32(ctx, 31, 0x30C828u);
    ctx->pc = 0x30C824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C820u;
            // 0x30c824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C828u; }
        if (ctx->pc != 0x30C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C828u; }
        if (ctx->pc != 0x30C828u) { return; }
    }
    ctx->pc = 0x30C828u;
label_30c828:
    // 0x30c828: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30c82c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C82Cu;
    {
        const bool branch_taken_0x30c82c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c82c) {
            ctx->pc = 0x30C844u;
            goto label_30c844;
        }
    }
    ctx->pc = 0x30C834u;
    // 0x30c834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c838: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30c83c: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30C83Cu;
    SET_GPR_U32(ctx, 31, 0x30C844u);
    ctx->pc = 0x30C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C83Cu;
            // 0x30c840: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C844u; }
        if (ctx->pc != 0x30C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C844u; }
        if (ctx->pc != 0x30C844u) { return; }
    }
    ctx->pc = 0x30C844u;
label_30c844:
    // 0x30c844: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c848: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30c848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c84c: 0xc065d8c  jal         func_197630
    ctx->pc = 0x30C84Cu;
    SET_GPR_U32(ctx, 31, 0x30C854u);
    ctx->pc = 0x30C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C84Cu;
            // 0x30c850: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C854u; }
        if (ctx->pc != 0x30C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C854u; }
        if (ctx->pc != 0x30C854u) { return; }
    }
    ctx->pc = 0x30C854u;
label_30c854:
    // 0x30c854: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c85c: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c860: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x30c860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_30c864:
    // 0x30c864: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c86c: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c870: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C870u;
    {
        const bool branch_taken_0x30c870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c870) {
            ctx->pc = 0x30C88Cu;
            goto label_30c88c;
        }
    }
    ctx->pc = 0x30C878u;
    // 0x30c878: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x30C878u;
    SET_GPR_U32(ctx, 31, 0x30C880u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C880u; }
        if (ctx->pc != 0x30C880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C880u; }
        if (ctx->pc != 0x30C880u) { return; }
    }
    ctx->pc = 0x30C880u;
label_30c880:
    // 0x30c880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c884: 0xc067108  jal         func_19C420
    ctx->pc = 0x30C884u;
    SET_GPR_U32(ctx, 31, 0x30C88Cu);
    ctx->pc = 0x30C888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C884u;
            // 0x30c888: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C420u;
    if (runtime->hasFunction(0x19C420u)) {
        auto targetFn = runtime->lookupFunction(0x19C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C88Cu; }
        if (ctx->pc != 0x30C88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboName__16CUserDataManagerFPc_0x19c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C88Cu; }
        if (ctx->pc != 0x30C88Cu) { return; }
    }
    ctx->pc = 0x30C88Cu;
label_30c88c:
    // 0x30c88c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c890: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c894: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c898: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C898u;
    {
        const bool branch_taken_0x30c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C898u;
            // 0x30c89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c898) {
            ctx->pc = 0x30C8D0u;
            goto label_30c8d0;
        }
    }
    ctx->pc = 0x30C8A0u;
    // 0x30c8a0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30c8a4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C8A4u;
    {
        const bool branch_taken_0x30c8a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c8a4) {
            ctx->pc = 0x30C8BCu;
            goto label_30c8bc;
        }
    }
    ctx->pc = 0x30C8ACu;
    // 0x30c8ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8b0: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30c8b4: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30C8B4u;
    SET_GPR_U32(ctx, 31, 0x30C8BCu);
    ctx->pc = 0x30C8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8B4u;
            // 0x30c8b8: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8BCu; }
        if (ctx->pc != 0x30C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8BCu; }
        if (ctx->pc != 0x30C8BCu) { return; }
    }
    ctx->pc = 0x30C8BCu;
label_30c8bc:
    // 0x30c8bc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30c8c0: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x30c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x30c8c4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30C8C4u;
    SET_GPR_U32(ctx, 31, 0x30C8CCu);
    ctx->pc = 0x30C8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8C4u;
            // 0x30c8c8: 0x2484dce8  addiu       $a0, $a0, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8CCu; }
        if (ctx->pc != 0x30C8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8CCu; }
        if (ctx->pc != 0x30C8CCu) { return; }
    }
    ctx->pc = 0x30C8CCu;
label_30c8cc:
    // 0x30c8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c8d0:
    // 0x30c8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8d4: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x30c8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c8d8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30C8D8u;
    SET_GPR_U32(ctx, 31, 0x30C8E0u);
    ctx->pc = 0x30C8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8D8u;
            // 0x30c8dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8E0u; }
        if (ctx->pc != 0x30C8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8E0u; }
        if (ctx->pc != 0x30C8E0u) { return; }
    }
    ctx->pc = 0x30C8E0u;
label_30c8e0:
    // 0x30c8e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c8e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8e8: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30c8ec: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30C8ECu;
    SET_GPR_U32(ctx, 31, 0x30C8F4u);
    ctx->pc = 0x30C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8ECu;
            // 0x30c8f0: 0x24051006  addiu       $a1, $zero, 0x1006 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8F4u; }
        if (ctx->pc != 0x30C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8F4u; }
        if (ctx->pc != 0x30C8F4u) { return; }
    }
    ctx->pc = 0x30C8F4u;
label_30c8f4:
    // 0x30c8f4: 0xdf87a200  ld          $a3, -0x5E00($gp)
    ctx->pc = 0x30c8f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294943232)));
    // 0x30c8f8: 0x27a50508  addiu       $a1, $sp, 0x508
    ctx->pc = 0x30c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
    // 0x30c8fc: 0x26830238  addiu       $v1, $s4, 0x238
    ctx->pc = 0x30c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 568));
    // 0x30c900: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x30c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x30c904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c908: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30c908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c90c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x30c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x30c910: 0xafa30508  sw          $v1, 0x508($sp)
    ctx->pc = 0x30c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 3));
    // 0x30c914: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30C914u;
    SET_GPR_U32(ctx, 31, 0x30C91Cu);
    ctx->pc = 0x30C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C914u;
            // 0x30c918: 0xafa2050c  sw          $v0, 0x50C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C91Cu; }
        if (ctx->pc != 0x30C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C91Cu; }
        if (ctx->pc != 0x30C91Cu) { return; }
    }
    ctx->pc = 0x30C91Cu;
label_30c91c:
    // 0x30c91c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C91Cu;
    SET_GPR_U32(ctx, 31, 0x30C924u);
    ctx->pc = 0x30C920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C91Cu;
            // 0x30c920: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C924u; }
        if (ctx->pc != 0x30C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C924u; }
        if (ctx->pc != 0x30C924u) { return; }
    }
    ctx->pc = 0x30C924u;
label_30c924:
    // 0x30c924: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x30C924u;
    {
        const bool branch_taken_0x30c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c924) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C92Cu;
label_30c92c:
    // 0x30c92c: 0xc0c2d54  jal         func_30B550
    ctx->pc = 0x30C92Cu;
    SET_GPR_U32(ctx, 31, 0x30C934u);
    ctx->pc = 0x30C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C92Cu;
            // 0x30c930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B550u;
    if (runtime->hasFunction(0x30B550u)) {
        auto targetFn = runtime->lookupFunction(0x30B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C934u; }
        if (ctx->pc != 0x30C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInputWord__FPci_0x30b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C934u; }
        if (ctx->pc != 0x30C934u) { return; }
    }
    ctx->pc = 0x30C934u;
label_30c934:
    // 0x30c934: 0xc04a422  jal         func_129088
    ctx->pc = 0x30C934u;
    SET_GPR_U32(ctx, 31, 0x30C93Cu);
    ctx->pc = 0x30C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C934u;
            // 0x30c938: 0x26840299  addiu       $a0, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C93Cu; }
        if (ctx->pc != 0x30C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C93Cu; }
        if (ctx->pc != 0x30C93Cu) { return; }
    }
    ctx->pc = 0x30C93Cu;
label_30c93c:
    // 0x30c93c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C93Cu;
    {
        const bool branch_taken_0x30c93c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C93Cu;
            // 0x30c940: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c93c) {
            ctx->pc = 0x30C954u;
            goto label_30c954;
        }
    }
    ctx->pc = 0x30C944u;
    // 0x30c944: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30C944u;
    SET_GPR_U32(ctx, 31, 0x30C94Cu);
    ctx->pc = 0x30C948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C944u;
            // 0x30c948: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C94Cu; }
        if (ctx->pc != 0x30C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C94Cu; }
        if (ctx->pc != 0x30C94Cu) { return; }
    }
    ctx->pc = 0x30C94Cu;
label_30c94c:
    // 0x30c94c: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x30C94Cu;
    {
        const bool branch_taken_0x30c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c94c) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30C954u;
label_30c954:
    // 0x30c954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30c954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c958: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30c958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30c95c: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x30C95Cu;
    {
        const bool branch_taken_0x30c95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C95Cu;
            // 0x30c960: 0x24101005  addiu       $s0, $zero, 0x1005 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c95c) {
            ctx->pc = 0x30CB18u;
            goto label_30cb18;
        }
    }
    ctx->pc = 0x30C964u;
    // 0x30c964: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x30c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x30c968: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x30C968u;
    {
        const bool branch_taken_0x30c968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C968u;
            // 0x30c96c: 0x24101010  addiu       $s0, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c968) {
            ctx->pc = 0x30CBF0u;
            goto label_30cbf0;
        }
    }
    ctx->pc = 0x30C970u;
    // 0x30c970: 0x26840299  addiu       $a0, $s4, 0x299
    ctx->pc = 0x30c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30c974: 0xc0c2ba0  jal         func_30AE80
    ctx->pc = 0x30C974u;
    SET_GPR_U32(ctx, 31, 0x30C97Cu);
    ctx->pc = 0x30C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C974u;
            // 0x30c978: 0x27a50340  addiu       $a1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AE80u;
    if (runtime->hasFunction(0x30AE80u)) {
        auto targetFn = runtime->lookupFunction(0x30AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C97Cu; }
        if (ctx->pc != 0x30C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertShitJiss2Ascii__FPcPc_0x30ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C97Cu; }
        if (ctx->pc != 0x30C97Cu) { return; }
    }
    ctx->pc = 0x30C97Cu;
label_30c97c:
    // 0x30c97c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30c980: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x30c980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x30c984: 0x2442ddb0  addiu       $v0, $v0, -0x2250
    ctx->pc = 0x30c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958512));
    // 0x30c988: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30c98c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x30c98cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c994: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x30c994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30c998: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x30c998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x30c99c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x30c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x30c9a0: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x30c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x30c9a4: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x30c9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c9a8: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30c9ac: 0xc065dc0  jal         func_197700
    ctx->pc = 0x30C9ACu;
    SET_GPR_U32(ctx, 31, 0x30C9B4u);
    ctx->pc = 0x30C9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9ACu;
            // 0x30c9b0: 0xa3a00356  sb          $zero, 0x356($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 854), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9B4u; }
        if (ctx->pc != 0x30C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9B4u; }
        if (ctx->pc != 0x30C9B4u) { return; }
    }
    ctx->pc = 0x30C9B4u;
label_30c9b4:
    // 0x30c9b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30C9B8u;
    SET_GPR_U32(ctx, 31, 0x30C9C0u);
    ctx->pc = 0x30C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9B8u;
            // 0x30c9bc: 0x27a40390  addiu       $a0, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9C0u; }
        if (ctx->pc != 0x30C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9C0u; }
        if (ctx->pc != 0x30C9C0u) { return; }
    }
    ctx->pc = 0x30C9C0u;
label_30c9c0:
    // 0x30c9c0: 0x27b00390  addiu       $s0, $sp, 0x390
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x30c9c4: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x30c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x30c9c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30c9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9cc: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x30c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x30c9d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x30c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30c9d4: 0xc0c74d0  jal         func_31D340
    ctx->pc = 0x30C9D4u;
    SET_GPR_U32(ctx, 31, 0x30C9DCu);
    ctx->pc = 0x30C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9D4u;
            // 0x30c9d8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D340u;
    if (runtime->hasFunction(0x31D340u)) {
        auto targetFn = runtime->lookupFunction(0x31D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9DCu; }
        if (ctx->pc != 0x30C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DecodePassword__FPcPUciPUci_0x31d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9DCu; }
        if (ctx->pc != 0x30C9DCu) { return; }
    }
    ctx->pc = 0x30C9DCu;
label_30c9dc:
    // 0x30c9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30c9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9e0: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x30c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x30c9e4: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x30c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x30c9e8: 0xc049c18  jal         func_127060
    ctx->pc = 0x30C9E8u;
    SET_GPR_U32(ctx, 31, 0x30C9F0u);
    ctx->pc = 0x30C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9E8u;
            // 0x30c9ec: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9F0u; }
        if (ctx->pc != 0x30C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9F0u; }
        if (ctx->pc != 0x30C9F0u) { return; }
    }
    ctx->pc = 0x30C9F0u;
label_30c9f0:
    // 0x30c9f0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C9F0u;
    {
        const bool branch_taken_0x30c9f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9F0u;
            // 0x30c9f4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9f0) {
            ctx->pc = 0x30CA10u;
            goto label_30ca10;
        }
    }
    ctx->pc = 0x30C9F8u;
    // 0x30c9f8: 0x97a20510  lhu         $v0, 0x510($sp)
    ctx->pc = 0x30c9f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x30c9fc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x30c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x30ca00: 0x28410136  slti        $at, $v0, 0x136
    ctx->pc = 0x30ca00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)310) ? 1 : 0);
    // 0x30ca04: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x30CA04u;
    {
        const bool branch_taken_0x30ca04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA04u;
            // 0x30ca08: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca04) {
            ctx->pc = 0x30CA68u;
            goto label_30ca68;
        }
    }
    ctx->pc = 0x30CA0Cu;
    // 0x30ca0c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_30ca10:
    // 0x30ca10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ca14: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x30ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ca18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca1c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30ca20: 0xae8303b0  sw          $v1, 0x3B0($s4)
    ctx->pc = 0x30ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 3));
    // 0x30ca24: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x30ca24u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ca28: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CA28u;
    SET_GPR_U32(ctx, 31, 0x30CA30u);
    ctx->pc = 0x30CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA28u;
            // 0x30ca2c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA30u; }
        if (ctx->pc != 0x30CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA30u; }
        if (ctx->pc != 0x30CA30u) { return; }
    }
    ctx->pc = 0x30CA30u;
label_30ca30:
    // 0x30ca30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30ca34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ca38: 0xae43014c  sw          $v1, 0x14C($s2)
    ctx->pc = 0x30ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 3));
    // 0x30ca3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca40: 0xae4217e4  sw          $v0, 0x17E4($s2)
    ctx->pc = 0x30ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 2));
    // 0x30ca44: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CA44u;
    SET_GPR_U32(ctx, 31, 0x30CA4Cu);
    ctx->pc = 0x30CA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA44u;
            // 0x30ca48: 0x24051011  addiu       $a1, $zero, 0x1011 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4113));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA4Cu; }
        if (ctx->pc != 0x30CA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA4Cu; }
        if (ctx->pc != 0x30CA4Cu) { return; }
    }
    ctx->pc = 0x30CA4Cu;
label_30ca4c:
    // 0x30ca4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca50: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CA50u;
    SET_GPR_U32(ctx, 31, 0x30CA58u);
    ctx->pc = 0x30CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA50u;
            // 0x30ca54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA58u; }
        if (ctx->pc != 0x30CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA58u; }
        if (ctx->pc != 0x30CA58u) { return; }
    }
    ctx->pc = 0x30CA58u;
label_30ca58:
    // 0x30ca58: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CA58u;
    SET_GPR_U32(ctx, 31, 0x30CA60u);
    ctx->pc = 0x30CA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA58u;
            // 0x30ca5c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA60u; }
        if (ctx->pc != 0x30CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA60u; }
        if (ctx->pc != 0x30CA60u) { return; }
    }
    ctx->pc = 0x30CA60u;
label_30ca60:
    // 0x30ca60: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x30CA60u;
    {
        const bool branch_taken_0x30ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca60) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CA68u;
label_30ca68:
    // 0x30ca68: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x30CA68u;
    SET_GPR_U32(ctx, 31, 0x30CA70u);
    ctx->pc = 0x30CA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA68u;
            // 0x30ca6c: 0x8c24dce4  lw          $a0, -0x231C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA70u; }
        if (ctx->pc != 0x30CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA70u; }
        if (ctx->pc != 0x30CA70u) { return; }
    }
    ctx->pc = 0x30CA70u;
label_30ca70:
    // 0x30ca70: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30ca74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30ca78: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30ca7c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30ca7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ca80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30ca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30ca84: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30ca88: 0xc065d8c  jal         func_197630
    ctx->pc = 0x30CA88u;
    SET_GPR_U32(ctx, 31, 0x30CA90u);
    ctx->pc = 0x30CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA88u;
            // 0x30ca8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA90u; }
        if (ctx->pc != 0x30CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA90u; }
        if (ctx->pc != 0x30CA90u) { return; }
    }
    ctx->pc = 0x30CA90u;
label_30ca90:
    // 0x30ca90: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30ca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30ca94: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x30ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x30ca98: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30ca9c: 0xc065f04  jal         func_197C10
    ctx->pc = 0x30CA9Cu;
    SET_GPR_U32(ctx, 31, 0x30CAA4u);
    ctx->pc = 0x30CAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA9Cu;
            // 0x30caa0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197C10u;
    if (runtime->hasFunction(0x197C10u)) {
        auto targetFn = runtime->lookupFunction(0x197C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA4u; }
        if (ctx->pc != 0x30CAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransToData__13CGameDataUsedFPci_0x197c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA4u; }
        if (ctx->pc != 0x30CAA4u) { return; }
    }
    ctx->pc = 0x30CAA4u;
label_30caa4:
    // 0x30caa4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CAA4u;
    SET_GPR_U32(ctx, 31, 0x30CAACu);
    ctx->pc = 0x30CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAA4u;
            // 0x30caa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAACu; }
        if (ctx->pc != 0x30CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAACu; }
        if (ctx->pc != 0x30CAACu) { return; }
    }
    ctx->pc = 0x30CAACu;
label_30caac:
    // 0x30caac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30cab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cab4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x30cab4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cab8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CAB8u;
    SET_GPR_U32(ctx, 31, 0x30CAC0u);
    ctx->pc = 0x30CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAB8u;
            // 0x30cabc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAC0u; }
        if (ctx->pc != 0x30CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAC0u; }
        if (ctx->pc != 0x30CAC0u) { return; }
    }
    ctx->pc = 0x30CAC0u;
label_30cac0:
    // 0x30cac0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30cac8: 0xae43014c  sw          $v1, 0x14C($s2)
    ctx->pc = 0x30cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 3));
    // 0x30cacc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30caccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30cad0: 0xae4217e4  sw          $v0, 0x17E4($s2)
    ctx->pc = 0x30cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 2));
    // 0x30cad4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x30cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30cad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cadc: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x30cadcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cae0: 0xae8203b0  sw          $v0, 0x3B0($s4)
    ctx->pc = 0x30cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 2));
    // 0x30cae4: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x30cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x30cae8: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30caec: 0xc065f04  jal         func_197C10
    ctx->pc = 0x30CAECu;
    SET_GPR_U32(ctx, 31, 0x30CAF4u);
    ctx->pc = 0x30CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAECu;
            // 0x30caf0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197C10u;
    if (runtime->hasFunction(0x197C10u)) {
        auto targetFn = runtime->lookupFunction(0x197C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAF4u; }
        if (ctx->pc != 0x30CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransToData__13CGameDataUsedFPci_0x197c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAF4u; }
        if (ctx->pc != 0x30CAF4u) { return; }
    }
    ctx->pc = 0x30CAF4u;
label_30caf4:
    // 0x30caf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30caf8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CAF8u;
    SET_GPR_U32(ctx, 31, 0x30CB00u);
    ctx->pc = 0x30CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAF8u;
            // 0x30cafc: 0x24051012  addiu       $a1, $zero, 0x1012 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4114));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB00u; }
        if (ctx->pc != 0x30CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB00u; }
        if (ctx->pc != 0x30CB00u) { return; }
    }
    ctx->pc = 0x30CB00u;
label_30cb00:
    // 0x30cb00: 0x120000fc  beqz        $s0, . + 4 + (0xFC << 2)
    ctx->pc = 0x30CB00u;
    {
        const bool branch_taken_0x30cb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB00u;
            // 0x30cb04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb00) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CB08u;
    // 0x30cb08: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30CB08u;
    SET_GPR_U32(ctx, 31, 0x30CB10u);
    ctx->pc = 0x30CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB08u;
            // 0x30cb0c: 0x26441801  addiu       $a0, $s2, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB10u; }
        if (ctx->pc != 0x30CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB10u; }
        if (ctx->pc != 0x30CB10u) { return; }
    }
    ctx->pc = 0x30CB10u;
label_30cb10:
    // 0x30cb10: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x30CB10u;
    {
        const bool branch_taken_0x30cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb10) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CB18u;
label_30cb18:
    // 0x30cb18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cb1c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CB1Cu;
    {
        const bool branch_taken_0x30cb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB1Cu;
            // 0x30cb20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb1c) {
            ctx->pc = 0x30CB2Cu;
            goto label_30cb2c;
        }
    }
    ctx->pc = 0x30CB24u;
    // 0x30cb24: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x30CB24u;
    {
        const bool branch_taken_0x30cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB24u;
            // 0x30cb28: 0x2410101a  addiu       $s0, $zero, 0x101A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb24) {
            ctx->pc = 0x30CBF0u;
            goto label_30cbf0;
        }
    }
    ctx->pc = 0x30CB2Cu;
label_30cb2c:
    // 0x30cb2c: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30CB2Cu;
    {
        const bool branch_taken_0x30cb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB2Cu;
            // 0x30cb30: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb2c) {
            ctx->pc = 0x30CBE4u;
            goto label_30cbe4;
        }
    }
    ctx->pc = 0x30CB34u;
    // 0x30cb34: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x30cb38: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30CB38u;
    SET_GPR_U32(ctx, 31, 0x30CB40u);
    ctx->pc = 0x30CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB38u;
            // 0x30cb3c: 0x26850299  addiu       $a1, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB40u; }
        if (ctx->pc != 0x30CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB40u; }
        if (ctx->pc != 0x30CB40u) { return; }
    }
    ctx->pc = 0x30CB40u;
label_30cb40:
    // 0x30cb40: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30cb44: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CB44u;
    {
        const bool branch_taken_0x30cb44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30CB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB44u;
            // 0x30cb48: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb44) {
            ctx->pc = 0x30CB60u;
            goto label_30cb60;
        }
    }
    ctx->pc = 0x30CB4Cu;
    // 0x30cb4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb50: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30cb54: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30CB54u;
    SET_GPR_U32(ctx, 31, 0x30CB5Cu);
    ctx->pc = 0x30CB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB54u;
            // 0x30cb58: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB5Cu; }
        if (ctx->pc != 0x30CB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB5Cu; }
        if (ctx->pc != 0x30CB5Cu) { return; }
    }
    ctx->pc = 0x30CB5Cu;
label_30cb5c:
    // 0x30cb5c: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x30cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_30cb60:
    // 0x30cb60: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x30CB60u;
    SET_GPR_U32(ctx, 31, 0x30CB68u);
    ctx->pc = 0x30CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB60u;
            // 0x30cb64: 0x26850238  addiu       $a1, $s4, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB68u; }
        if (ctx->pc != 0x30CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB68u; }
        if (ctx->pc != 0x30CB68u) { return; }
    }
    ctx->pc = 0x30CB68u;
label_30cb68:
    // 0x30cb68: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30CB68u;
    {
        const bool branch_taken_0x30cb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB68u;
            // 0x30cb6c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb68) {
            ctx->pc = 0x30CBF4u;
            goto label_30cbf4;
        }
    }
    ctx->pc = 0x30CB70u;
    // 0x30cb70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30cb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb78: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x30cb78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cb7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x30cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30cb84: 0xae8303b0  sw          $v1, 0x3B0($s4)
    ctx->pc = 0x30cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 3));
    // 0x30cb88: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x30cb88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cb8c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CB8Cu;
    SET_GPR_U32(ctx, 31, 0x30CB94u);
    ctx->pc = 0x30CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB8Cu;
            // 0x30cb90: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB94u; }
        if (ctx->pc != 0x30CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB94u; }
        if (ctx->pc != 0x30CB94u) { return; }
    }
    ctx->pc = 0x30CB94u;
label_30cb94:
    // 0x30cb94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb9c: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30cba0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CBA0u;
    SET_GPR_U32(ctx, 31, 0x30CBA8u);
    ctx->pc = 0x30CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBA0u;
            // 0x30cba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBA8u; }
        if (ctx->pc != 0x30CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBA8u; }
        if (ctx->pc != 0x30CBA8u) { return; }
    }
    ctx->pc = 0x30CBA8u;
label_30cba8:
    // 0x30cba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbac: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CBACu;
    SET_GPR_U32(ctx, 31, 0x30CBB4u);
    ctx->pc = 0x30CBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBACu;
            // 0x30cbb0: 0x24050fdc  addiu       $a1, $zero, 0xFDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4060));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBB4u; }
        if (ctx->pc != 0x30CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBB4u; }
        if (ctx->pc != 0x30CBB4u) { return; }
    }
    ctx->pc = 0x30CBB4u;
label_30cbb4:
    // 0x30cbb4: 0xdf83a208  ld          $v1, -0x5DF8($gp)
    ctx->pc = 0x30cbb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x30cbb8: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x30cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x30cbbc: 0x26820238  addiu       $v0, $s4, 0x238
    ctx->pc = 0x30cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 568));
    // 0x30cbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cbc8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x30cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x30cbcc: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30CBCCu;
    SET_GPR_U32(ctx, 31, 0x30CBD4u);
    ctx->pc = 0x30CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBCCu;
            // 0x30cbd0: 0xafa20520  sw          $v0, 0x520($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBD4u; }
        if (ctx->pc != 0x30CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBD4u; }
        if (ctx->pc != 0x30CBD4u) { return; }
    }
    ctx->pc = 0x30CBD4u;
label_30cbd4:
    // 0x30cbd4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CBD4u;
    SET_GPR_U32(ctx, 31, 0x30CBDCu);
    ctx->pc = 0x30CBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBD4u;
            // 0x30cbd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBDCu; }
        if (ctx->pc != 0x30CBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CBDCu; }
        if (ctx->pc != 0x30CBDCu) { return; }
    }
    ctx->pc = 0x30CBDCu;
label_30cbdc:
    // 0x30cbdc: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x30CBDCu;
    {
        const bool branch_taken_0x30cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cbdc) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CBE4u;
label_30cbe4:
    // 0x30cbe4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30cbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30cbe8: 0x24101004  addiu       $s0, $zero, 0x1004
    ctx->pc = 0x30cbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x30cbec: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x30cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_30cbf0:
    // 0x30cbf0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_30cbf4:
    // 0x30cbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cbf8: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x30cbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cbfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc00: 0xa6800006  sh          $zero, 0x6($s4)
    ctx->pc = 0x30cc00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cc04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x30cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30cc08: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CC08u;
    SET_GPR_U32(ctx, 31, 0x30CC10u);
    ctx->pc = 0x30CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC08u;
            // 0x30cc0c: 0xae8203b0  sw          $v0, 0x3B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC10u; }
        if (ctx->pc != 0x30CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC10u; }
        if (ctx->pc != 0x30CC10u) { return; }
    }
    ctx->pc = 0x30CC10u;
label_30cc10:
    // 0x30cc10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cc14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc18: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30cc1c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CC1Cu;
    SET_GPR_U32(ctx, 31, 0x30CC24u);
    ctx->pc = 0x30CC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC1Cu;
            // 0x30cc20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC24u; }
        if (ctx->pc != 0x30CC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC24u; }
        if (ctx->pc != 0x30CC24u) { return; }
    }
    ctx->pc = 0x30CC24u;
label_30cc24:
    // 0x30cc24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc28: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CC28u;
    SET_GPR_U32(ctx, 31, 0x30CC30u);
    ctx->pc = 0x30CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC28u;
            // 0x30cc2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC30u; }
        if (ctx->pc != 0x30CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC30u; }
        if (ctx->pc != 0x30CC30u) { return; }
    }
    ctx->pc = 0x30CC30u;
label_30cc30:
    // 0x30cc30: 0xdf82a210  ld          $v0, -0x5DF0($gp)
    ctx->pc = 0x30cc30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x30cc34: 0x27a30528  addiu       $v1, $sp, 0x528
    ctx->pc = 0x30cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x30cc38: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30cc3c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30cc40: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30cc44: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC44u;
    {
        const bool branch_taken_0x30cc44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC44u;
            // 0x30cc48: 0xafa50528  sw          $a1, 0x528($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1320), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc44) {
            ctx->pc = 0x30CC60u;
            goto label_30cc60;
        }
    }
    ctx->pc = 0x30CC4Cu;
    // 0x30cc4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30cc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc50: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30CC50u;
    SET_GPR_U32(ctx, 31, 0x30CC58u);
    ctx->pc = 0x30CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC50u;
            // 0x30cc54: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC58u; }
        if (ctx->pc != 0x30CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC58u; }
        if (ctx->pc != 0x30CC58u) { return; }
    }
    ctx->pc = 0x30CC58u;
label_30cc58:
    // 0x30cc58: 0x27a20440  addiu       $v0, $sp, 0x440
    ctx->pc = 0x30cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x30cc5c: 0xafa20528  sw          $v0, 0x528($sp)
    ctx->pc = 0x30cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1320), GPR_U32(ctx, 2));
label_30cc60:
    // 0x30cc60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc64: 0x27a50528  addiu       $a1, $sp, 0x528
    ctx->pc = 0x30cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x30cc68: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30CC68u;
    SET_GPR_U32(ctx, 31, 0x30CC70u);
    ctx->pc = 0x30CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC68u;
            // 0x30cc6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC70u; }
        if (ctx->pc != 0x30CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC70u; }
        if (ctx->pc != 0x30CC70u) { return; }
    }
    ctx->pc = 0x30CC70u;
label_30cc70:
    // 0x30cc70: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CC70u;
    SET_GPR_U32(ctx, 31, 0x30CC78u);
    ctx->pc = 0x30CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC70u;
            // 0x30cc74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC78u; }
        if (ctx->pc != 0x30CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC78u; }
        if (ctx->pc != 0x30CC78u) { return; }
    }
    ctx->pc = 0x30CC78u;
label_30cc78:
    // 0x30cc78: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x30CC78u;
    {
        const bool branch_taken_0x30cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc78) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CC80u;
label_30cc80:
    // 0x30cc80: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x30cc80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cc84: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cc88: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CC88u;
    SET_GPR_U32(ctx, 31, 0x30CC90u);
    ctx->pc = 0x30CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC88u;
            // 0x30cc8c: 0xae8003b0  sw          $zero, 0x3B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC90u; }
        if (ctx->pc != 0x30CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC90u; }
        if (ctx->pc != 0x30CC90u) { return; }
    }
    ctx->pc = 0x30CC90u;
label_30cc90:
    // 0x30cc90: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x30CC90u;
    {
        const bool branch_taken_0x30cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc90) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CC98u;
label_30cc98:
    // 0x30cc98: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30cc98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30cc9c: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30CC9Cu;
    {
        const bool branch_taken_0x30cc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x30CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC9Cu;
            // 0x30cca0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc9c) {
            ctx->pc = 0x30CCFCu;
            goto label_30ccfc;
        }
    }
    ctx->pc = 0x30CCA4u;
    // 0x30cca4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30cca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccac: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x30ccacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ccb0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x30ccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30ccb4: 0xae8203b0  sw          $v0, 0x3B0($s4)
    ctx->pc = 0x30ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 2));
    // 0x30ccb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30ccbc: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CCBCu;
    SET_GPR_U32(ctx, 31, 0x30CCC4u);
    ctx->pc = 0x30CCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCBCu;
            // 0x30ccc0: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCC4u; }
        if (ctx->pc != 0x30CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCC4u; }
        if (ctx->pc != 0x30CCC4u) { return; }
    }
    ctx->pc = 0x30CCC4u;
label_30ccc4:
    // 0x30ccc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30ccc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cccc: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30ccd0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CCD0u;
    SET_GPR_U32(ctx, 31, 0x30CCD8u);
    ctx->pc = 0x30CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCD0u;
            // 0x30ccd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCD8u; }
        if (ctx->pc != 0x30CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCD8u; }
        if (ctx->pc != 0x30CCD8u) { return; }
    }
    ctx->pc = 0x30CCD8u;
label_30ccd8:
    // 0x30ccd8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30ccdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cce0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x30cce0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cce4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CCE4u;
    SET_GPR_U32(ctx, 31, 0x30CCECu);
    ctx->pc = 0x30CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCE4u;
            // 0x30cce8: 0x24050fb4  addiu       $a1, $zero, 0xFB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4020));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCECu; }
        if (ctx->pc != 0x30CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCECu; }
        if (ctx->pc != 0x30CCECu) { return; }
    }
    ctx->pc = 0x30CCECu;
label_30ccec:
    // 0x30ccec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CCECu;
    SET_GPR_U32(ctx, 31, 0x30CCF4u);
    ctx->pc = 0x30CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCECu;
            // 0x30ccf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCF4u; }
        if (ctx->pc != 0x30CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCF4u; }
        if (ctx->pc != 0x30CCF4u) { return; }
    }
    ctx->pc = 0x30CCF4u;
label_30ccf4:
    // 0x30ccf4: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x30CCF4u;
    {
        const bool branch_taken_0x30ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ccf4) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CCFCu;
label_30ccfc:
    // 0x30ccfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30cd00: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x30cd00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x30cd04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x30cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30cd08: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x30cd08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cd0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd10: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CD10u;
    SET_GPR_U32(ctx, 31, 0x30CD18u);
    ctx->pc = 0x30CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD10u;
            // 0x30cd14: 0xae8203b0  sw          $v0, 0x3B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD18u; }
        if (ctx->pc != 0x30CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD18u; }
        if (ctx->pc != 0x30CD18u) { return; }
    }
    ctx->pc = 0x30CD18u;
label_30cd18:
    // 0x30cd18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cd1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd20: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30cd24: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CD24u;
    SET_GPR_U32(ctx, 31, 0x30CD2Cu);
    ctx->pc = 0x30CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD24u;
            // 0x30cd28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD2Cu; }
        if (ctx->pc != 0x30CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD2Cu; }
        if (ctx->pc != 0x30CD2Cu) { return; }
    }
    ctx->pc = 0x30CD2Cu;
label_30cd2c:
    // 0x30cd2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd30: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CD30u;
    SET_GPR_U32(ctx, 31, 0x30CD38u);
    ctx->pc = 0x30CD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD30u;
            // 0x30cd34: 0x24050fdc  addiu       $a1, $zero, 0xFDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4060));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD38u; }
        if (ctx->pc != 0x30CD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD38u; }
        if (ctx->pc != 0x30CD38u) { return; }
    }
    ctx->pc = 0x30CD38u;
label_30cd38:
    // 0x30cd38: 0xdf83a218  ld          $v1, -0x5DE8($gp)
    ctx->pc = 0x30cd38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294943256)));
    // 0x30cd3c: 0x27a50530  addiu       $a1, $sp, 0x530
    ctx->pc = 0x30cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x30cd40: 0x26820238  addiu       $v0, $s4, 0x238
    ctx->pc = 0x30cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 568));
    // 0x30cd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30cd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cd4c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x30cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x30cd50: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30CD50u;
    SET_GPR_U32(ctx, 31, 0x30CD58u);
    ctx->pc = 0x30CD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD50u;
            // 0x30cd54: 0xafa20530  sw          $v0, 0x530($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD58u; }
        if (ctx->pc != 0x30CD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD58u; }
        if (ctx->pc != 0x30CD58u) { return; }
    }
    ctx->pc = 0x30CD58u;
label_30cd58:
    // 0x30cd58: 0xc094274  jal         func_2509D0
    ctx->pc = 0x30CD58u;
    SET_GPR_U32(ctx, 31, 0x30CD60u);
    ctx->pc = 0x30CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD58u;
            // 0x30cd5c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD60u; }
        if (ctx->pc != 0x30CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD60u; }
        if (ctx->pc != 0x30CD60u) { return; }
    }
    ctx->pc = 0x30CD60u;
label_30cd60:
    // 0x30cd60: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30cd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30cd64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cd68: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30cd68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30cd6c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30CD6Cu;
    {
        const bool branch_taken_0x30cd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD6Cu;
            // 0x30cd70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd6c) {
            ctx->pc = 0x30CDA8u;
            goto label_30cda8;
        }
    }
    ctx->pc = 0x30CD74u;
    // 0x30cd74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd78: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CD78u;
    SET_GPR_U32(ctx, 31, 0x30CD80u);
    ctx->pc = 0x30CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD78u;
            // 0x30cd7c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD80u; }
        if (ctx->pc != 0x30CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD80u; }
        if (ctx->pc != 0x30CD80u) { return; }
    }
    ctx->pc = 0x30CD80u;
label_30cd80:
    // 0x30cd80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd88: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30cd8c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CD8Cu;
    SET_GPR_U32(ctx, 31, 0x30CD94u);
    ctx->pc = 0x30CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD8Cu;
            // 0x30cd90: 0x24051019  addiu       $a1, $zero, 0x1019 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD94u; }
        if (ctx->pc != 0x30CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD94u; }
        if (ctx->pc != 0x30CD94u) { return; }
    }
    ctx->pc = 0x30CD94u;
label_30cd94:
    // 0x30cd94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd98: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CD98u;
    SET_GPR_U32(ctx, 31, 0x30CDA0u);
    ctx->pc = 0x30CD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD98u;
            // 0x30cd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDA0u; }
        if (ctx->pc != 0x30CDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDA0u; }
        if (ctx->pc != 0x30CDA0u) { return; }
    }
    ctx->pc = 0x30CDA0u;
label_30cda0:
    // 0x30cda0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x30CDA0u;
    {
        const bool branch_taken_0x30cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cda0) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CDA8u;
label_30cda8:
    // 0x30cda8: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x30CDA8u;
    {
        const bool branch_taken_0x30cda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDA8u;
            // 0x30cdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cda8) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CDB0u;
    // 0x30cdb0: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30CDB0u;
    SET_GPR_U32(ctx, 31, 0x30CDB8u);
    ctx->pc = 0x30CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDB0u;
            // 0x30cdb4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDB8u; }
        if (ctx->pc != 0x30CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDB8u; }
        if (ctx->pc != 0x30CDB8u) { return; }
    }
    ctx->pc = 0x30CDB8u;
label_30cdb8:
    // 0x30cdb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cdbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cdc0: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x30cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x30cdc4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CDC4u;
    SET_GPR_U32(ctx, 31, 0x30CDCCu);
    ctx->pc = 0x30CDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDC4u;
            // 0x30cdc8: 0x24051013  addiu       $a1, $zero, 0x1013 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4115));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDCCu; }
        if (ctx->pc != 0x30CDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDCCu; }
        if (ctx->pc != 0x30CDCCu) { return; }
    }
    ctx->pc = 0x30CDCCu;
label_30cdcc:
    // 0x30cdcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cdd0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x30CDD0u;
    SET_GPR_U32(ctx, 31, 0x30CDD8u);
    ctx->pc = 0x30CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDD0u;
            // 0x30cdd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDD8u; }
        if (ctx->pc != 0x30CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDD8u; }
        if (ctx->pc != 0x30CDD8u) { return; }
    }
    ctx->pc = 0x30CDD8u;
label_30cdd8:
    // 0x30cdd8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x30CDD8u;
    {
        const bool branch_taken_0x30cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cdd8) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CDE0u;
label_30cde0:
    // 0x30cde0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30cde4: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30cde4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30cde8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30CDE8u;
    {
        const bool branch_taken_0x30cde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30cde8) {
            ctx->pc = 0x30CE48u;
            goto label_30ce48;
        }
    }
    ctx->pc = 0x30CDF0u;
    // 0x30cdf0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30cdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30cdf4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x30cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x30cdf8: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30cdfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30ce00: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x30ce00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ce04: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30ce08: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x30ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30ce0c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30ce0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ce10: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30ce14: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30CE14u;
    {
        const bool branch_taken_0x30ce14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30ce14) {
            ctx->pc = 0x30CE38u;
            goto label_30ce38;
        }
    }
    ctx->pc = 0x30CE1Cu;
    // 0x30ce1c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x30ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x30ce20: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30CE20u;
    SET_GPR_U32(ctx, 31, 0x30CE28u);
    ctx->pc = 0x30CE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE20u;
            // 0x30ce24: 0x26850299  addiu       $a1, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE28u; }
        if (ctx->pc != 0x30CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE28u; }
        if (ctx->pc != 0x30CE28u) { return; }
    }
    ctx->pc = 0x30CE28u;
label_30ce28:
    // 0x30ce28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce2c: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x30ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x30ce30: 0xc0c2a74  jal         func_30A9D0
    ctx->pc = 0x30CE30u;
    SET_GPR_U32(ctx, 31, 0x30CE38u);
    ctx->pc = 0x30CE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE30u;
            // 0x30ce34: 0x26860299  addiu       $a2, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A9D0u;
    if (runtime->hasFunction(0x30A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE38u; }
        if (ctx->pc != 0x30CE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE38u; }
        if (ctx->pc != 0x30CE38u) { return; }
    }
    ctx->pc = 0x30CE38u;
label_30ce38:
    // 0x30ce38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30ce38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30ce3c: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30ce40: 0xc065d8c  jal         func_197630
    ctx->pc = 0x30CE40u;
    SET_GPR_U32(ctx, 31, 0x30CE48u);
    ctx->pc = 0x30CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE40u;
            // 0x30ce44: 0x26850299  addiu       $a1, $s4, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE48u; }
        if (ctx->pc != 0x30CE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE48u; }
        if (ctx->pc != 0x30CE48u) { return; }
    }
    ctx->pc = 0x30CE48u;
label_30ce48:
    // 0x30ce48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30ce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30ce4c: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x30ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x30ce50: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30CE50u;
    SET_GPR_U32(ctx, 31, 0x30CE58u);
    ctx->pc = 0x30CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE50u;
            // 0x30ce54: 0x2405100f  addiu       $a1, $zero, 0x100F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE58u; }
        if (ctx->pc != 0x30CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE58u; }
        if (ctx->pc != 0x30CE58u) { return; }
    }
    ctx->pc = 0x30CE58u;
label_30ce58:
    // 0x30ce58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30ce58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30ce5c: 0x26850299  addiu       $a1, $s4, 0x299
    ctx->pc = 0x30ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30ce60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CE60u;
    {
        const bool branch_taken_0x30ce60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE60u;
            // 0x30ce64: 0x8c22ca58  lw          $v0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce60) {
            ctx->pc = 0x30CE70u;
            goto label_30ce70;
        }
    }
    ctx->pc = 0x30CE68u;
    // 0x30ce68: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30CE68u;
    SET_GPR_U32(ctx, 31, 0x30CE70u);
    ctx->pc = 0x30CE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE68u;
            // 0x30ce6c: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE70u; }
        if (ctx->pc != 0x30CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE70u; }
        if (ctx->pc != 0x30CE70u) { return; }
    }
    ctx->pc = 0x30CE70u;
label_30ce70:
    // 0x30ce70: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30ce74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30ce74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30ce78: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x30ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x30ce7c: 0xc0c2b50  jal         func_30AD40
    ctx->pc = 0x30CE7Cu;
    SET_GPR_U32(ctx, 31, 0x30CE84u);
    ctx->pc = 0x30CE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE7Cu;
            // 0x30ce80: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AD40u;
    if (runtime->hasFunction(0x30AD40u)) {
        auto targetFn = runtime->lookupFunction(0x30AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE84u; }
        if (ctx->pc != 0x30CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustWaku__FP7CDC2MesP4RECT_0x30ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE84u; }
        if (ctx->pc != 0x30CE84u) { return; }
    }
    ctx->pc = 0x30CE84u;
label_30ce84:
    // 0x30ce84: 0x26840299  addiu       $a0, $s4, 0x299
    ctx->pc = 0x30ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 665));
    // 0x30ce88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ce88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce8c: 0xc049c86  jal         func_127218
    ctx->pc = 0x30CE8Cu;
    SET_GPR_U32(ctx, 31, 0x30CE94u);
    ctx->pc = 0x30CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE8Cu;
            // 0x30ce90: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE94u; }
        if (ctx->pc != 0x30CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE94u; }
        if (ctx->pc != 0x30CE94u) { return; }
    }
    ctx->pc = 0x30CE94u;
label_30ce94:
    // 0x30ce94: 0xae8002fc  sw          $zero, 0x2FC($s4)
    ctx->pc = 0x30ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 764), GPR_U32(ctx, 0));
    // 0x30ce98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce9c: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x30ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
    // 0x30cea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30cea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cea4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cea8: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x30cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x30ceac: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x30ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x30ceb0: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30CEB0u;
    SET_GPR_U32(ctx, 31, 0x30CEB8u);
    ctx->pc = 0x30CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEB0u;
            // 0x30ceb4: 0xae820110  sw          $v0, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEB8u; }
        if (ctx->pc != 0x30CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEB8u; }
        if (ctx->pc != 0x30CEB8u) { return; }
    }
    ctx->pc = 0x30CEB8u;
label_30ceb8:
    // 0x30ceb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cebc: 0xc0c349c  jal         func_30D270
    ctx->pc = 0x30CEBCu;
    SET_GPR_U32(ctx, 31, 0x30CEC4u);
    ctx->pc = 0x30CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEBCu;
            // 0x30cec0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D270u;
    if (runtime->hasFunction(0x30D270u)) {
        auto targetFn = runtime->lookupFunction(0x30D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEC4u; }
        if (ctx->pc != 0x30CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeFontSelectMode__13CNameRegiMenuFi_0x30d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEC4u; }
        if (ctx->pc != 0x30CEC4u) { return; }
    }
    ctx->pc = 0x30CEC4u;
label_30cec4:
    // 0x30cec4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x30cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30cec8: 0xa78285f8  sh          $v0, -0x7A08($gp)
    ctx->pc = 0x30cec8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936056), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cecc: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x30ceccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x30ced0: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x30ced0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x30ced4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CED4u;
    {
        const bool branch_taken_0x30ced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CED4u;
            // 0x30ced8: 0xae8003b0  sw          $zero, 0x3B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ced4) {
            ctx->pc = 0x30CEF4u;
            goto label_30cef4;
        }
    }
    ctx->pc = 0x30CEDCu;
label_30cedc:
    // 0x30cedc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cee0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30cee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30cee8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x30cee8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ceec: 0xc08e898  jal         func_23A260
    ctx->pc = 0x30CEECu;
    SET_GPR_U32(ctx, 31, 0x30CEF4u);
    ctx->pc = 0x30CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEECu;
            // 0x30cef0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEF4u; }
        if (ctx->pc != 0x30CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CEF4u; }
        if (ctx->pc != 0x30CEF4u) { return; }
    }
    ctx->pc = 0x30CEF4u;
label_30cef4:
    // 0x30cef4: 0x8e820230  lw          $v0, 0x230($s4)
    ctx->pc = 0x30cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 560)));
label_30cef8:
    // 0x30cef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cefc: 0xae820230  sw          $v0, 0x230($s4)
    ctx->pc = 0x30cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
    // 0x30cf00: 0x8e820230  lw          $v0, 0x230($s4)
    ctx->pc = 0x30cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 560)));
    // 0x30cf04: 0x28420050  slti        $v0, $v0, 0x50
    ctx->pc = 0x30cf04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x30cf08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30CF08u;
    {
        const bool branch_taken_0x30cf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cf08) {
            ctx->pc = 0x30CF14u;
            goto label_30cf14;
        }
    }
    ctx->pc = 0x30CF10u;
    // 0x30cf10: 0xae800230  sw          $zero, 0x230($s4)
    ctx->pc = 0x30cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 0));
label_30cf14:
    // 0x30cf14: 0xc6820234  lwc1        $f2, 0x234($s4)
    ctx->pc = 0x30cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cf18: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x30cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x30cf1c: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x30cf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x30cf20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30cf20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cf24: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30cf28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cf30: 0x0  nop
    ctx->pc = 0x30cf30u;
    // NOP
    // 0x30cf34: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30cf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30cf38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30cf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cf3c: 0x0  nop
    ctx->pc = 0x30cf3cu;
    // NOP
    // 0x30cf40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x30CF40u;
    {
        const bool branch_taken_0x30cf40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF40u;
            // 0x30cf44: 0xe6810234  swc1        $f1, 0x234($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf40) {
            ctx->pc = 0x30CF60u;
            goto label_30cf60;
        }
    }
    ctx->pc = 0x30CF48u;
    // 0x30cf48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x30cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x30cf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cf54: 0x0  nop
    ctx->pc = 0x30cf54u;
    // NOP
    // 0x30cf58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30cf58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30cf5c: 0xe6800234  swc1        $f0, 0x234($s4)
    ctx->pc = 0x30cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 564), bits); }
label_30cf60:
    // 0x30cf60: 0xc0c3768  jal         func_30DDA0
    ctx->pc = 0x30CF60u;
    SET_GPR_U32(ctx, 31, 0x30CF68u);
    ctx->pc = 0x30CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF60u;
            // 0x30cf64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30DDA0u;
    if (runtime->hasFunction(0x30DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x30DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF68u; }
        if (ctx->pc != 0x30CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMarkCursor__13CNameRegiMenuFv_0x30dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF68u; }
        if (ctx->pc != 0x30CF68u) { return; }
    }
    ctx->pc = 0x30CF68u;
label_30cf68:
    // 0x30cf68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30cf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30cf6c: 0xc087898  jal         func_21E260
    ctx->pc = 0x30CF6Cu;
    SET_GPR_U32(ctx, 31, 0x30CF74u);
    ctx->pc = 0x30CF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF6Cu;
            // 0x30cf70: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF74u; }
        if (ctx->pc != 0x30CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF74u; }
        if (ctx->pc != 0x30CF74u) { return; }
    }
    ctx->pc = 0x30CF74u;
label_30cf74:
    // 0x30cf74: 0xc087898  jal         func_21E260
    ctx->pc = 0x30CF74u;
    SET_GPR_U32(ctx, 31, 0x30CF7Cu);
    ctx->pc = 0x30CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF74u;
            // 0x30cf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF7Cu; }
        if (ctx->pc != 0x30CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CF7Cu; }
        if (ctx->pc != 0x30CF7Cu) { return; }
    }
    ctx->pc = 0x30CF7Cu;
label_30cf7c:
    // 0x30cf7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30cf7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30cf84:
    // 0x30cf84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30cf84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30cf88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30cf88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30cf8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30cf8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30cf90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30cf90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cf94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30cf94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cf98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30cf98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cf9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30cf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cfa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30cfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x30CFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFA4u;
            // 0x30cfa8: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30CFACu;
}
