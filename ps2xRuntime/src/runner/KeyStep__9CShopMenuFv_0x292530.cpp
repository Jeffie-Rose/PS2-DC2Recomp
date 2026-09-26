#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__9CShopMenuFv
// Address: 0x292530 - 0x293830
void KeyStep__9CShopMenuFv_0x292530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__9CShopMenuFv_0x292530");
#endif

    switch (ctx->pc) {
        case 0x29256cu: goto label_29256c;
        case 0x292574u: goto label_292574;
        case 0x292580u: goto label_292580;
        case 0x292588u: goto label_292588;
        case 0x292594u: goto label_292594;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925e8u: goto label_2925e8;
        case 0x29260cu: goto label_29260c;
        case 0x292618u: goto label_292618;
        case 0x29262cu: goto label_29262c;
        case 0x292650u: goto label_292650;
        case 0x292660u: goto label_292660;
        case 0x29266cu: goto label_29266c;
        case 0x292710u: goto label_292710;
        case 0x292768u: goto label_292768;
        case 0x292794u: goto label_292794;
        case 0x292820u: goto label_292820;
        case 0x292838u: goto label_292838;
        case 0x292888u: goto label_292888;
        case 0x292900u: goto label_292900;
        case 0x292ae4u: goto label_292ae4;
        case 0x292b3cu: goto label_292b3c;
        case 0x292b54u: goto label_292b54;
        case 0x292b68u: goto label_292b68;
        case 0x292b90u: goto label_292b90;
        case 0x292ba4u: goto label_292ba4;
        case 0x292bc8u: goto label_292bc8;
        case 0x292be8u: goto label_292be8;
        case 0x292c08u: goto label_292c08;
        case 0x292c24u: goto label_292c24;
        case 0x292c50u: goto label_292c50;
        case 0x292c70u: goto label_292c70;
        case 0x292cf0u: goto label_292cf0;
        case 0x292d34u: goto label_292d34;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d9cu: goto label_292d9c;
        case 0x292db8u: goto label_292db8;
        case 0x292df8u: goto label_292df8;
        case 0x292e08u: goto label_292e08;
        case 0x292e1cu: goto label_292e1c;
        case 0x292eb0u: goto label_292eb0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292f10u: goto label_292f10;
        case 0x292f24u: goto label_292f24;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f54u: goto label_292f54;
        case 0x292f64u: goto label_292f64;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fd0u: goto label_292fd0;
        case 0x292ff8u: goto label_292ff8;
        case 0x293008u: goto label_293008;
        case 0x293020u: goto label_293020;
        case 0x293058u: goto label_293058;
        case 0x293080u: goto label_293080;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930fcu: goto label_2930fc;
        case 0x293110u: goto label_293110;
        case 0x293124u: goto label_293124;
        case 0x29314cu: goto label_29314c;
        case 0x29315cu: goto label_29315c;
        case 0x293178u: goto label_293178;
        case 0x293198u: goto label_293198;
        case 0x2931acu: goto label_2931ac;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931d8u: goto label_2931d8;
        case 0x293224u: goto label_293224;
        case 0x293234u: goto label_293234;
        case 0x293244u: goto label_293244;
        case 0x293270u: goto label_293270;
        case 0x293284u: goto label_293284;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932e0u: goto label_2932e0;
        case 0x293300u: goto label_293300;
        case 0x29330cu: goto label_29330c;
        case 0x293320u: goto label_293320;
        case 0x29332cu: goto label_29332c;
        case 0x293340u: goto label_293340;
        case 0x29334cu: goto label_29334c;
        case 0x293360u: goto label_293360;
        case 0x29336cu: goto label_29336c;
        case 0x293384u: goto label_293384;
        case 0x293390u: goto label_293390;
        case 0x293398u: goto label_293398;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933fcu: goto label_2933fc;
        case 0x29340cu: goto label_29340c;
        case 0x293434u: goto label_293434;
        case 0x293444u: goto label_293444;
        case 0x293478u: goto label_293478;
        case 0x29349cu: goto label_29349c;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293510u: goto label_293510;
        case 0x293520u: goto label_293520;
        case 0x293554u: goto label_293554;
        case 0x293588u: goto label_293588;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935d8u: goto label_2935d8;
        case 0x293614u: goto label_293614;
        case 0x293624u: goto label_293624;
        case 0x293638u: goto label_293638;
        case 0x293644u: goto label_293644;
        case 0x29364cu: goto label_29364c;
        case 0x293654u: goto label_293654;
        case 0x29366cu: goto label_29366c;
        case 0x293678u: goto label_293678;
        case 0x293690u: goto label_293690;
        case 0x2936a8u: goto label_2936a8;
        case 0x293718u: goto label_293718;
        case 0x293734u: goto label_293734;
        case 0x293750u: goto label_293750;
        case 0x293764u: goto label_293764;
        case 0x293778u: goto label_293778;
        case 0x293794u: goto label_293794;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937f8u: goto label_2937f8;
        default: break;
    }

    ctx->pc = 0x292530u;

    // 0x292530: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x292534: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x292534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x292538: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x292538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29253c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x292540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x292540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x292544: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x292544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x292548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x292548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29254c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292550: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x292550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29255c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292560: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292564: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x292564u;
    SET_GPR_U32(ctx, 31, 0x29256Cu);
    ctx->pc = 0x292568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292564u;
            // 0x292568: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29256Cu; }
        if (ctx->pc != 0x29256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29256Cu; }
        if (ctx->pc != 0x29256Cu) { return; }
    }
    ctx->pc = 0x29256Cu;
label_29256c:
    // 0x29256c: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x29256Cu;
    SET_GPR_U32(ctx, 31, 0x292574u);
    ctx->pc = 0x292570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29256Cu;
            // 0x292570: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292574u; }
        if (ctx->pc != 0x292574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292574u; }
        if (ctx->pc != 0x292574u) { return; }
    }
    ctx->pc = 0x292574u;
label_292574:
    // 0x292574: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292578: 0xc08f840  jal         func_23E100
    ctx->pc = 0x292578u;
    SET_GPR_U32(ctx, 31, 0x292580u);
    ctx->pc = 0x29257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292578u;
            // 0x29257c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292580u; }
        if (ctx->pc != 0x292580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292580u; }
        if (ctx->pc != 0x292580u) { return; }
    }
    ctx->pc = 0x292580u;
label_292580:
    // 0x292580: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x292580u;
    SET_GPR_U32(ctx, 31, 0x292588u);
    ctx->pc = 0x292584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292580u;
            // 0x292584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292588u; }
        if (ctx->pc != 0x292588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292588u; }
        if (ctx->pc != 0x292588u) { return; }
    }
    ctx->pc = 0x292588u;
label_292588:
    // 0x292588: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x292588u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29258c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x29258Cu;
    SET_GPR_U32(ctx, 31, 0x292594u);
    ctx->pc = 0x292590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29258Cu;
            // 0x292590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292594u; }
        if (ctx->pc != 0x292594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292594u; }
        if (ctx->pc != 0x292594u) { return; }
    }
    ctx->pc = 0x292594u;
label_292594:
    // 0x292594: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x292594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x292598: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x292598u;
    {
        const bool branch_taken_0x292598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29259Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292598u;
            // 0x29259c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292598) {
            ctx->pc = 0x292624u;
            goto label_292624;
        }
    }
    ctx->pc = 0x2925A0u;
    // 0x2925a0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2925A0u;
    {
        const bool branch_taken_0x2925a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2925A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925A0u;
            // 0x2925a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925a0) {
            ctx->pc = 0x2925D4u;
            goto label_2925d4;
        }
    }
    ctx->pc = 0x2925A8u;
    // 0x2925a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2925A8u;
    {
        const bool branch_taken_0x2925a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2925a8) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x2925B0u;
    // 0x2925b0: 0x1000047a  b           . + 4 + (0x47A << 2)
    ctx->pc = 0x2925B0u;
    {
        const bool branch_taken_0x2925b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925B0u;
            // 0x2925b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925b0) {
            ctx->pc = 0x29379Cu;
            goto label_29379c;
        }
    }
    ctx->pc = 0x2925B8u;
label_2925b8:
    // 0x2925b8: 0x1040047b  beqz        $v0, . + 4 + (0x47B << 2)
    ctx->pc = 0x2925B8u;
    {
        const bool branch_taken_0x2925b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925B8u;
            // 0x2925bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925b8) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x2925C0u;
    // 0x2925c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2925c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925c4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2925C4u;
    SET_GPR_U32(ctx, 31, 0x2925CCu);
    ctx->pc = 0x2925C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2925C4u;
            // 0x2925c8: 0x24a5db28  addiu       $a1, $a1, -0x24D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2925CCu; }
        if (ctx->pc != 0x2925CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2925CCu; }
        if (ctx->pc != 0x2925CCu) { return; }
    }
    ctx->pc = 0x2925CCu;
label_2925cc:
    // 0x2925cc: 0x10000476  b           . + 4 + (0x476 << 2)
    ctx->pc = 0x2925CCu;
    {
        const bool branch_taken_0x2925cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925CCu;
            // 0x2925d0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925cc) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x2925D4u;
label_2925d4:
    // 0x2925d4: 0x10400474  beqz        $v0, . + 4 + (0x474 << 2)
    ctx->pc = 0x2925D4u;
    {
        const bool branch_taken_0x2925d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925d4) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x2925DCu;
    // 0x2925dc: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2925dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2925e0: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2925E0u;
    SET_GPR_U32(ctx, 31, 0x2925E8u);
    ctx->pc = 0x2925E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2925E0u;
            // 0x2925e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2925E8u; }
        if (ctx->pc != 0x2925E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2925E8u; }
        if (ctx->pc != 0x2925E8u) { return; }
    }
    ctx->pc = 0x2925E8u;
label_2925e8:
    // 0x2925e8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2925e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2925ec: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2925ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2925f0: 0x8c235304  lw          $v1, 0x5304($at)
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x2925f4: 0x8e8501f0  lw          $a1, 0x1F0($s4)
    ctx->pc = 0x2925f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 496)));
    // 0x2925f8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2925f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2925fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x292600: 0x8c225300  lw          $v0, 0x5300($at)
    ctx->pc = 0x292600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x292604: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x292604u;
    SET_GPR_U32(ctx, 31, 0x29260Cu);
    ctx->pc = 0x292608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292604u;
            // 0x292608: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29260Cu; }
        if (ctx->pc != 0x29260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29260Cu; }
        if (ctx->pc != 0x29260Cu) { return; }
    }
    ctx->pc = 0x29260Cu;
label_29260c:
    // 0x29260c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x292610: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x292610u;
    SET_GPR_U32(ctx, 31, 0x292618u);
    ctx->pc = 0x292614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292610u;
            // 0x292614: 0x268501ec  addiu       $a1, $s4, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 492));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292618u; }
        if (ctx->pc != 0x292618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292618u; }
        if (ctx->pc != 0x292618u) { return; }
    }
    ctx->pc = 0x292618u;
label_292618:
    // 0x292618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29261c: 0x10000462  b           . + 4 + (0x462 << 2)
    ctx->pc = 0x29261Cu;
    {
        const bool branch_taken_0x29261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29261Cu;
            // 0x292620: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29261c) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x292624u;
label_292624:
    // 0x292624: 0xc087940  jal         func_21E500
    ctx->pc = 0x292624u;
    SET_GPR_U32(ctx, 31, 0x29262Cu);
    ctx->pc = 0x292628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292624u;
            // 0x292628: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (runtime->hasFunction(0x21E500u)) {
        auto targetFn = runtime->lookupFunction(0x21E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29262Cu; }
        if (ctx->pc != 0x29262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMove__13CMenuMoveItemFv_0x21e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29262Cu; }
        if (ctx->pc != 0x29262Cu) { return; }
    }
    ctx->pc = 0x29262Cu;
label_29262c:
    // 0x29262c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29262Cu;
    {
        const bool branch_taken_0x29262c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29262c) {
            ctx->pc = 0x292638u;
            goto label_292638;
        }
    }
    ctx->pc = 0x292634u;
    // 0x292634: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292638:
    // 0x292638: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x29263c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29263Cu;
    {
        const bool branch_taken_0x29263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29263Cu;
            // 0x292640: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29263c) {
            ctx->pc = 0x292678u;
            goto label_292678;
        }
    }
    ctx->pc = 0x292644u;
    // 0x292644: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x292644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x292648: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x292648u;
    SET_GPR_U32(ctx, 31, 0x292650u);
    ctx->pc = 0x29264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292648u;
            // 0x29264c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292650u; }
        if (ctx->pc != 0x292650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292650u; }
        if (ctx->pc != 0x292650u) { return; }
    }
    ctx->pc = 0x292650u;
label_292650:
    // 0x292650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292650u;
    {
        const bool branch_taken_0x292650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292650u;
            // 0x292654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292650) {
            ctx->pc = 0x292670u;
            goto label_292670;
        }
    }
    ctx->pc = 0x292658u;
    // 0x292658: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x292658u;
    SET_GPR_U32(ctx, 31, 0x292660u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292660u; }
        if (ctx->pc != 0x292660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292660u; }
        if (ctx->pc != 0x292660u) { return; }
    }
    ctx->pc = 0x292660u;
label_292660:
    // 0x292660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292664: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x292664u;
    SET_GPR_U32(ctx, 31, 0x29266Cu);
    ctx->pc = 0x292668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292664u;
            // 0x292668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29266Cu; }
        if (ctx->pc != 0x29266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29266Cu; }
        if (ctx->pc != 0x29266Cu) { return; }
    }
    ctx->pc = 0x29266Cu;
label_29266c:
    // 0x29266c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29266cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292670:
    // 0x292670: 0x10000464  b           . + 4 + (0x464 << 2)
    ctx->pc = 0x292670u;
    {
        const bool branch_taken_0x292670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292670u;
            // 0x292674: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292670) {
            ctx->pc = 0x293804u;
            goto label_293804;
        }
    }
    ctx->pc = 0x292678u;
label_292678:
    // 0x292678: 0x83829860  lb          $v0, -0x67A0($gp)
    ctx->pc = 0x292678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940768)));
    // 0x29267c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29267Cu;
    {
        const bool branch_taken_0x29267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29267Cu;
            // 0x292680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29267c) {
            ctx->pc = 0x292694u;
            goto label_292694;
        }
    }
    ctx->pc = 0x292684u;
    // 0x292684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292688: 0xa780985c  sh          $zero, -0x67A4($gp)
    ctx->pc = 0x292688u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940764), (uint16_t)GPR_U32(ctx, 0));
    // 0x29268c: 0xa3829860  sb          $v0, -0x67A0($gp)
    ctx->pc = 0x29268cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940768), (uint8_t)GPR_U32(ctx, 2));
    // 0x292690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_292694:
    // 0x292694: 0x27be00c2  addiu       $fp, $sp, 0xC2
    ctx->pc = 0x292694u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 194));
    // 0x292698: 0x27b600c4  addiu       $s6, $sp, 0xC4
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x29269c: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x29269cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2926a0: 0x27b500c6  addiu       $s5, $sp, 0xC6
    ctx->pc = 0x2926a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 198));
    // 0x2926a4: 0xa6c00000  sh          $zero, 0x0($s6)
    ctx->pc = 0x2926a4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2926a8: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x2926a8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2926ac: 0x8f829840  lw          $v0, -0x67C0($gp)
    ctx->pc = 0x2926acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x2926b0: 0xa7a000c0  sh          $zero, 0xC0($sp)
    ctx->pc = 0x2926b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2926b4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2926b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2926b8: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x2926b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x2926bc: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x2926bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2926c0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x2926c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2926c4: 0x102001aa  beqz        $at, . + 4 + (0x1AA << 2)
    ctx->pc = 0x2926C4u;
    {
        const bool branch_taken_0x2926c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2926C4u;
            // 0x2926c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926c4) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x2926CCu;
    // 0x2926cc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2926d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2926d4: 0x2463dc30  addiu       $v1, $v1, -0x23D0
    ctx->pc = 0x2926d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958128));
    // 0x2926d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2926dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2926dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2926e0: 0x400008  jr          $v0
    ctx->pc = 0x2926E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2926E8u: goto label_2926e8;
            case 0x292874u: goto label_292874;
            case 0x2929ACu: goto label_2929ac;
            case 0x292CE0u: goto label_292ce0;
            case 0x292D60u: goto label_292d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2926E8u;
label_2926e8:
    // 0x2926e8: 0x8e9601bc  lw          $s6, 0x1BC($s4)
    ctx->pc = 0x2926e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x2926ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2926ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926f0: 0x8e9501c0  lw          $s5, 0x1C0($s4)
    ctx->pc = 0x2926f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x2926f4: 0x268501bc  addiu       $a1, $s4, 0x1BC
    ctx->pc = 0x2926f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x2926f8: 0x268601c0  addiu       $a2, $s4, 0x1C0
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x2926fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2926fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292700: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x292704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x292704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292708: 0xc08eccc  jal         func_23B330
    ctx->pc = 0x292708u;
    SET_GPR_U32(ctx, 31, 0x292710u);
    ctx->pc = 0x29270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292708u;
            // 0x29270c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B330u;
    if (runtime->hasFunction(0x23B330u)) {
        auto targetFn = runtime->lookupFunction(0x23B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292710u; }
        if (ctx->pc != 0x292710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListKeyCheck__FiPiPiiiii_0x23b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292710u; }
        if (ctx->pc != 0x292710u) { return; }
    }
    ctx->pc = 0x292710u;
label_292710:
    // 0x292710: 0x32030050  andi        $v1, $s0, 0x50
    ctx->pc = 0x292710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)80);
    // 0x292714: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x292714u;
    {
        const bool branch_taken_0x292714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292714u;
            // 0x292718: 0x320300a0  andi        $v1, $s0, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292714) {
            ctx->pc = 0x29272Cu;
            goto label_29272c;
        }
    }
    ctx->pc = 0x29271Cu;
    // 0x29271c: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x29271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x292720: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x292724: 0xae8301bc  sw          $v1, 0x1BC($s4)
    ctx->pc = 0x292724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 3));
    // 0x292728: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x292728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
label_29272c:
    // 0x29272c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29272Cu;
    {
        const bool branch_taken_0x29272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29272c) {
            ctx->pc = 0x292740u;
            goto label_292740;
        }
    }
    ctx->pc = 0x292734u;
    // 0x292734: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x292738: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x292738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x29273c: 0xae8301bc  sw          $v1, 0x1BC($s4)
    ctx->pc = 0x29273cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 3));
label_292740:
    // 0x292740: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x292744: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x292744u;
    {
        const bool branch_taken_0x292744 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x292744) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x29274Cu;
    // 0x29274c: 0xae8001bc  sw          $zero, 0x1BC($s4)
    ctx->pc = 0x29274cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 0));
label_292750:
    // 0x292750: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x292754: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x292754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x292758: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x292758u;
    {
        const bool branch_taken_0x292758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292758u;
            // 0x29275c: 0x2663ffff  addiu       $v1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292758) {
            ctx->pc = 0x292774u;
            goto label_292774;
        }
    }
    ctx->pc = 0x292760u;
    // 0x292760: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292760u;
    {
        const bool branch_taken_0x292760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292760u;
            // 0x292764: 0xae8301bc  sw          $v1, 0x1BC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292760) {
            ctx->pc = 0x292774u;
            goto label_292774;
        }
    }
    ctx->pc = 0x292768u;
label_292768:
    // 0x292768: 0x8e8301c0  lw          $v1, 0x1C0($s4)
    ctx->pc = 0x292768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x29276c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x292770: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x292770u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
label_292774:
    // 0x292774: 0x0  nop
    ctx->pc = 0x292774u;
    // NOP
    // 0x292778: 0x8e8401bc  lw          $a0, 0x1BC($s4)
    ctx->pc = 0x292778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x29277c: 0x8e8301c0  lw          $v1, 0x1C0($s4)
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x292780: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x292780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x292784: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x292784u;
    {
        const bool branch_taken_0x292784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292784) {
            ctx->pc = 0x292768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292768;
        }
    }
    ctx->pc = 0x29278Cu;
    // 0x29278c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29278Cu;
    {
        const bool branch_taken_0x29278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29278c) {
            ctx->pc = 0x2927A0u;
            goto label_2927a0;
        }
    }
    ctx->pc = 0x292794u;
label_292794:
    // 0x292794: 0x8e8301c0  lw          $v1, 0x1C0($s4)
    ctx->pc = 0x292794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x292798: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x292798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29279c: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x29279cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
label_2927a0:
    // 0x2927a0: 0x8e8501c0  lw          $a1, 0x1C0($s4)
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x2927a4: 0x8e8401bc  lw          $a0, 0x1BC($s4)
    ctx->pc = 0x2927a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x2927a8: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x2927ac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2927acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2927b0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2927B0u;
    {
        const bool branch_taken_0x2927b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927b0) {
            ctx->pc = 0x292794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292794;
        }
    }
    ctx->pc = 0x2927B8u;
    // 0x2927b8: 0x16c40003  bne         $s6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2927B8u;
    {
        const bool branch_taken_0x2927b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x2927b8) {
            ctx->pc = 0x2927C8u;
            goto label_2927c8;
        }
    }
    ctx->pc = 0x2927C0u;
    // 0x2927c0: 0x12a50003  beq         $s5, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2927C0u;
    {
        const bool branch_taken_0x2927c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x2927C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927C0u;
            // 0x2927c4: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927c0) {
            ctx->pc = 0x2927D0u;
            goto label_2927d0;
        }
    }
    ctx->pc = 0x2927C8u;
label_2927c8:
    // 0x2927c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2927c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2927cc: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x2927ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_2927d0:
    // 0x2927d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2927D0u;
    {
        const bool branch_taken_0x2927d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2927d0) {
            ctx->pc = 0x292828u;
            goto label_292828;
        }
    }
    ctx->pc = 0x2927D8u;
    // 0x2927d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2927dc: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x2927dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2927e0: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x2927e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x2927e4: 0x8e8201c0  lw          $v0, 0x1C0($s4)
    ctx->pc = 0x2927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x2927e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2927e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2927ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2927ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2927f0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2927f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2927f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2927F4u;
    {
        const bool branch_taken_0x2927f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927f4) {
            ctx->pc = 0x292800u;
            goto label_292800;
        }
    }
    ctx->pc = 0x2927FCu;
    // 0x2927fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_292800:
    // 0x292800: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x292804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x292804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292808: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29280c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x292810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292814: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x292818: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292818u;
    SET_GPR_U32(ctx, 31, 0x292820u);
    ctx->pc = 0x29281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292818u;
            // 0x29281c: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292820u; }
        if (ctx->pc != 0x292820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292820u; }
        if (ctx->pc != 0x292820u) { return; }
    }
    ctx->pc = 0x292820u;
label_292820:
    // 0x292820: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x292820u;
    {
        const bool branch_taken_0x292820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292820u;
            // 0x292824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292820) {
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292828u;
label_292828:
    // 0x292828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292828u;
    {
        const bool branch_taken_0x292828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292828u;
            // 0x29282c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292828) {
            ctx->pc = 0x29283Cu;
            goto label_29283c;
        }
    }
    ctx->pc = 0x292830u;
    // 0x292830: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292830u;
    SET_GPR_U32(ctx, 31, 0x292838u);
    ctx->pc = 0x292834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292830u;
            // 0x292834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292838u; }
        if (ctx->pc != 0x292838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292838u; }
        if (ctx->pc != 0x292838u) { return; }
    }
    ctx->pc = 0x292838u;
label_292838:
    // 0x292838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29283c:
    // 0x29283c: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29283Cu;
    {
        const bool branch_taken_0x29283c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x292840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29283Cu;
            // 0x292840: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29283c) {
            ctx->pc = 0x29286Cu;
            goto label_29286c;
        }
    }
    ctx->pc = 0x292844u;
    // 0x292844: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292844u;
    {
        const bool branch_taken_0x292844 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x292848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292844u;
            // 0x292848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292844) {
            ctx->pc = 0x29285Cu;
            goto label_29285c;
        }
    }
    ctx->pc = 0x29284Cu;
    // 0x29284c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29284Cu;
    {
        const bool branch_taken_0x29284c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x29284c) {
            ctx->pc = 0x29285Cu;
            goto label_29285c;
        }
    }
    ctx->pc = 0x292854u;
    // 0x292854: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x292854u;
    {
        const bool branch_taken_0x292854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292854) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x29285Cu;
label_29285c:
    // 0x29285c: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292860: 0x241103e8  addiu       $s1, $zero, 0x3E8
    ctx->pc = 0x292860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x292864: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x292864u;
    {
        const bool branch_taken_0x292864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292864u;
            // 0x292868: 0xa782985c  sh          $v0, -0x67A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940764), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292864) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x29286Cu;
label_29286c:
    // 0x29286c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x29286Cu;
    {
        const bool branch_taken_0x29286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29286Cu;
            // 0x292870: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29286c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292874u;
label_292874:
    // 0x292874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292878: 0x268501b4  addiu       $a1, $s4, 0x1B4
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    // 0x29287c: 0x268601b8  addiu       $a2, $s4, 0x1B8
    ctx->pc = 0x29287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 440));
    // 0x292880: 0xc08ede0  jal         func_23B780
    ctx->pc = 0x292880u;
    SET_GPR_U32(ctx, 31, 0x292888u);
    ctx->pc = 0x292884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292880u;
            // 0x292884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B780u;
    if (runtime->hasFunction(0x23B780u)) {
        auto targetFn = runtime->lookupFunction(0x23B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292888u; }
        if (ctx->pc != 0x292888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdKey__FiPiPii_0x23b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292888u; }
        if (ctx->pc != 0x292888u) { return; }
    }
    ctx->pc = 0x292888u;
label_292888:
    // 0x292888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29288c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x29288Cu;
    {
        const bool branch_taken_0x29288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29288c) {
            ctx->pc = 0x292908u;
            goto label_292908;
        }
    }
    ctx->pc = 0x292894u;
    // 0x292894: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292898: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x29289c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29289Cu;
    {
        const bool branch_taken_0x29289c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x29289c) {
            ctx->pc = 0x292908u;
            goto label_292908;
        }
    }
    ctx->pc = 0x2928A4u;
    // 0x2928a4: 0x1a600132  blez        $s3, . + 4 + (0x132 << 2)
    ctx->pc = 0x2928A4u;
    {
        const bool branch_taken_0x2928a4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2928a4) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x2928ACu;
    // 0x2928ac: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x2928acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2928b0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x2928b4: 0x8e8401b4  lw          $a0, 0x1B4($s4)
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x2928b8: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x2928b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2928bc: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x2928bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x2928c0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2928c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2928c4: 0x0  nop
    ctx->pc = 0x2928c4u;
    // NOP
    // 0x2928c8: 0x0  nop
    ctx->pc = 0x2928c8u;
    // NOP
    // 0x2928cc: 0x1810  mfhi        $v1
    ctx->pc = 0x2928ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2928d0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2928d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2928d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2928d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2928d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2928dc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2928dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2928e0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2928E0u;
    {
        const bool branch_taken_0x2928e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2928e0) {
            ctx->pc = 0x2928ECu;
            goto label_2928ec;
        }
    }
    ctx->pc = 0x2928E8u;
    // 0x2928e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2928e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2928ec:
    // 0x2928ec: 0x8e8201c0  lw          $v0, 0x1C0($s4)
    ctx->pc = 0x2928ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x2928f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2928f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2928f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2928f8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2928F8u;
    SET_GPR_U32(ctx, 31, 0x292900u);
    ctx->pc = 0x2928FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2928F8u;
            // 0x2928fc: 0xae8201bc  sw          $v0, 0x1BC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292900u; }
        if (ctx->pc != 0x292900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292900u; }
        if (ctx->pc != 0x292900u) { return; }
    }
    ctx->pc = 0x292900u;
label_292900:
    // 0x292900: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x292900u;
    {
        const bool branch_taken_0x292900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292900) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292908u;
label_292908:
    // 0x292908: 0x8e8501b4  lw          $a1, 0x1B4($s4)
    ctx->pc = 0x292908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x29290c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292914: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x292914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292918: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x292918u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29291c: 0xa6c50000  sh          $a1, 0x0($s6)
    ctx->pc = 0x29291cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x292920: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x292920u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x292924: 0x1244001f  beq         $s2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x292924u;
    {
        const bool branch_taken_0x292924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x292928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292924u;
            // 0x292928: 0xa7a000c0  sh          $zero, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292924) {
            ctx->pc = 0x2929A4u;
            goto label_2929a4;
        }
    }
    ctx->pc = 0x29292Cu;
    // 0x29292c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x29292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292930: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x292930u;
    {
        const bool branch_taken_0x292930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x292934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292930u;
            // 0x292934: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292930) {
            ctx->pc = 0x29299Cu;
            goto label_29299c;
        }
    }
    ctx->pc = 0x292938u;
    // 0x292938: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x292938u;
    {
        const bool branch_taken_0x292938 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x29293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292938u;
            // 0x29293c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292938) {
            ctx->pc = 0x292994u;
            goto label_292994;
        }
    }
    ctx->pc = 0x292940u;
    // 0x292940: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292940u;
    {
        const bool branch_taken_0x292940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x292940) {
            ctx->pc = 0x292950u;
            goto label_292950;
        }
    }
    ctx->pc = 0x292948u;
    // 0x292948: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x292948u;
    {
        const bool branch_taken_0x292948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292948) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292950u;
label_292950:
    // 0x292950: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292954: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x292958: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292958u;
    {
        const bool branch_taken_0x292958 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292958u;
            // 0x29295c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292958) {
            ctx->pc = 0x292968u;
            goto label_292968;
        }
    }
    ctx->pc = 0x292960u;
    // 0x292960: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x292960u;
    {
        const bool branch_taken_0x292960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292960) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292968u;
label_292968:
    // 0x292968: 0x8782983c  lh          $v0, -0x67C4($gp)
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x29296c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29296Cu;
    {
        const bool branch_taken_0x29296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x292970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29296Cu;
            // 0x292970: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29296c) {
            ctx->pc = 0x29297Cu;
            goto label_29297c;
        }
    }
    ctx->pc = 0x292974u;
    // 0x292974: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292974u;
    {
        const bool branch_taken_0x292974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x292974) {
            ctx->pc = 0x292984u;
            goto label_292984;
        }
    }
    ctx->pc = 0x29297Cu;
label_29297c:
    // 0x29297c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x29297Cu;
    {
        const bool branch_taken_0x29297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29297c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292984u;
label_292984:
    // 0x292984: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292988: 0x241103f2  addiu       $s1, $zero, 0x3F2
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
    // 0x29298c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x29298Cu;
    {
        const bool branch_taken_0x29298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29298Cu;
            // 0x292990: 0xa782985c  sh          $v0, -0x67A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940764), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29298c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292994u;
label_292994:
    // 0x292994: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x292994u;
    {
        const bool branch_taken_0x292994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292994u;
            // 0x292998: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292994) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x29299Cu;
label_29299c:
    // 0x29299c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x29299Cu;
    {
        const bool branch_taken_0x29299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29299Cu;
            // 0x2929a0: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29299c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x2929A4u;
label_2929a4:
    // 0x2929a4: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2929A4u;
    {
        const bool branch_taken_0x2929a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929A4u;
            // 0x2929a8: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929a4) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x2929ACu;
label_2929ac:
    // 0x2929ac: 0x32040004  andi        $a0, $s0, 0x4
    ctx->pc = 0x2929acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x2929b0: 0x868301ca  lh          $v1, 0x1CA($s4)
    ctx->pc = 0x2929b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x2929b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2929B4u;
    {
        const bool branch_taken_0x2929b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929B4u;
            // 0x2929b8: 0x868201c8  lh          $v0, 0x1C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929b4) {
            ctx->pc = 0x2929C4u;
            goto label_2929c4;
        }
    }
    ctx->pc = 0x2929BCu;
    // 0x2929bc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2929bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2929c0: 0xa68401c8  sh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 4));
label_2929c4:
    // 0x2929c4: 0x32040008  andi        $a0, $s0, 0x8
    ctx->pc = 0x2929c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x2929c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2929C8u;
    {
        const bool branch_taken_0x2929c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2929c8) {
            ctx->pc = 0x2929DCu;
            goto label_2929dc;
        }
    }
    ctx->pc = 0x2929D0u;
    // 0x2929d0: 0x868401c8  lh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x2929d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2929d8: 0xa68401c8  sh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 4));
label_2929dc:
    // 0x2929dc: 0x868401c8  lh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x2929e0: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2929E0u;
    {
        const bool branch_taken_0x2929e0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2929e0) {
            ctx->pc = 0x2929ECu;
            goto label_2929ec;
        }
    }
    ctx->pc = 0x2929E8u;
    // 0x2929e8: 0xa68001c8  sh          $zero, 0x1C8($s4)
    ctx->pc = 0x2929e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 0));
label_2929ec:
    // 0x2929ec: 0x868401c8  lh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x2929f0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2929f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2929f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2929F4u;
    {
        const bool branch_taken_0x2929f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2929F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2929F4u;
            // 0x2929f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929f4) {
            ctx->pc = 0x292A00u;
            goto label_292a00;
        }
    }
    ctx->pc = 0x2929FCu;
    // 0x2929fc: 0xa68401c8  sh          $a0, 0x1C8($s4)
    ctx->pc = 0x2929fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 4));
label_292a00:
    // 0x292a00: 0x868401c8  lh          $a0, 0x1C8($s4)
    ctx->pc = 0x292a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x292a04: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x292A04u;
    {
        const bool branch_taken_0x292a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x292A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A04u;
            // 0x292a08: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a04) {
            ctx->pc = 0x292A80u;
            goto label_292a80;
        }
    }
    ctx->pc = 0x292A0Cu;
    // 0x292a0c: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x292a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x292a10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292A10u;
    {
        const bool branch_taken_0x292a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A10u;
            // 0x292a14: 0x32040002  andi        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a10) {
            ctx->pc = 0x292A28u;
            goto label_292a28;
        }
    }
    ctx->pc = 0x292A18u;
    // 0x292a18: 0x868401ca  lh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292a1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x292a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x292a20: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
    // 0x292a24: 0x32040002  andi        $a0, $s0, 0x2
    ctx->pc = 0x292a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_292a28:
    // 0x292a28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292A28u;
    {
        const bool branch_taken_0x292a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A28u;
            // 0x292a2c: 0x32040050  andi        $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a28) {
            ctx->pc = 0x292A40u;
            goto label_292a40;
        }
    }
    ctx->pc = 0x292A30u;
    // 0x292a30: 0x868401ca  lh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292a34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x292a38: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
    // 0x292a3c: 0x32040050  andi        $a0, $s0, 0x50
    ctx->pc = 0x292a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)80);
label_292a40:
    // 0x292a40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292A40u;
    {
        const bool branch_taken_0x292a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A40u;
            // 0x292a44: 0x320400a0  andi        $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a40) {
            ctx->pc = 0x292A58u;
            goto label_292a58;
        }
    }
    ctx->pc = 0x292A48u;
    // 0x292a48: 0x868401ca  lh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292a4c: 0x2484fff6  addiu       $a0, $a0, -0xA
    ctx->pc = 0x292a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x292a50: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
    // 0x292a54: 0x320400a0  andi        $a0, $s0, 0xA0
    ctx->pc = 0x292a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
label_292a58:
    // 0x292a58: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292A58u;
    {
        const bool branch_taken_0x292a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a58) {
            ctx->pc = 0x292A80u;
            goto label_292a80;
        }
    }
    ctx->pc = 0x292A60u;
    // 0x292a60: 0x868501ca  lh          $a1, 0x1CA($s4)
    ctx->pc = 0x292a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x292a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292a68: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292A68u;
    {
        const bool branch_taken_0x292a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x292A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A68u;
            // 0x292a6c: 0x24a4000a  addiu       $a0, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a68) {
            ctx->pc = 0x292A7Cu;
            goto label_292a7c;
        }
    }
    ctx->pc = 0x292A70u;
    // 0x292a70: 0x24a40009  addiu       $a0, $a1, 0x9
    ctx->pc = 0x292a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x292a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292A74u;
    {
        const bool branch_taken_0x292a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A74u;
            // 0x292a78: 0xa68401ca  sh          $a0, 0x1CA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a74) {
            ctx->pc = 0x292A80u;
            goto label_292a80;
        }
    }
    ctx->pc = 0x292A7Cu;
label_292a7c:
    // 0x292a7c: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
label_292a80:
    // 0x292a80: 0x868401ca  lh          $a0, 0x1CA($s4)
    ctx->pc = 0x292a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292a84: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x292a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x292a88: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x292A88u;
    {
        const bool branch_taken_0x292a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A88u;
            // 0x292a8c: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a88) {
            ctx->pc = 0x292A94u;
            goto label_292a94;
        }
    }
    ctx->pc = 0x292A90u;
    // 0x292a90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x292a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292a94:
    // 0x292a94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x292A94u;
    {
        const bool branch_taken_0x292a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a94) {
            ctx->pc = 0x292AA0u;
            goto label_292aa0;
        }
    }
    ctx->pc = 0x292A9Cu;
    // 0x292a9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x292a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292aa0:
    // 0x292aa0: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x292AA0u;
    {
        const bool branch_taken_0x292aa0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x292AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292AA0u;
            // 0x292aa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292aa0) {
            ctx->pc = 0x292AACu;
            goto label_292aac;
        }
    }
    ctx->pc = 0x292AA8u;
    // 0x292aa8: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
label_292aac:
    // 0x292aac: 0x868501ca  lh          $a1, 0x1CA($s4)
    ctx->pc = 0x292aacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292ab0: 0x868401cc  lh          $a0, 0x1CC($s4)
    ctx->pc = 0x292ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x292ab4: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x292ab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x292ab8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x292AB8u;
    {
        const bool branch_taken_0x292ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ab8) {
            ctx->pc = 0x292AC4u;
            goto label_292ac4;
        }
    }
    ctx->pc = 0x292AC0u;
    // 0x292ac0: 0xa68401ca  sh          $a0, 0x1CA($s4)
    ctx->pc = 0x292ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 4));
label_292ac4:
    // 0x292ac4: 0x868401c8  lh          $a0, 0x1C8($s4)
    ctx->pc = 0x292ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x292ac8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292AC8u;
    {
        const bool branch_taken_0x292ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x292ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292AC8u;
            // 0x292acc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ac8) {
            ctx->pc = 0x292ADCu;
            goto label_292adc;
        }
    }
    ctx->pc = 0x292AD0u;
    // 0x292ad0: 0x868201ca  lh          $v0, 0x1CA($s4)
    ctx->pc = 0x292ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292ad4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x292AD4u;
    {
        const bool branch_taken_0x292ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292ad4) {
            ctx->pc = 0x292B0Cu;
            goto label_292b0c;
        }
    }
    ctx->pc = 0x292ADCu;
label_292adc:
    // 0x292adc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292ADCu;
    SET_GPR_U32(ctx, 31, 0x292AE4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292AE4u; }
        if (ctx->pc != 0x292AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292AE4u; }
        if (ctx->pc != 0x292AE4u) { return; }
    }
    ctx->pc = 0x292AE4u;
label_292ae4:
    // 0x292ae4: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x292ae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x292ae8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x292AE8u;
    {
        const bool branch_taken_0x292ae8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x292AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292AE8u;
            // 0x292aec: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ae8) {
            ctx->pc = 0x292B0Cu;
            goto label_292b0c;
        }
    }
    ctx->pc = 0x292AF0u;
    // 0x292af0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292af4: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x292af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x292af8: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x292af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x292afc: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x292afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
    // 0x292b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292b04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x292b08: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x292b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
label_292b0c:
    // 0x292b0c: 0xae8001c4  sw          $zero, 0x1C4($s4)
    ctx->pc = 0x292b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 0));
    // 0x292b10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292b14: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x292b14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x292b18: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292B18u;
    {
        const bool branch_taken_0x292b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292b18) {
            ctx->pc = 0x292B3Cu;
            goto label_292b3c;
        }
    }
    ctx->pc = 0x292B20u;
    // 0x292b20: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292b28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292B28u;
    {
        const bool branch_taken_0x292b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B28u;
            // 0x292b2c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b28) {
            ctx->pc = 0x292B3Cu;
            goto label_292b3c;
        }
    }
    ctx->pc = 0x292B30u;
    // 0x292b30: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x292b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x292b34: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x292B34u;
    SET_GPR_U32(ctx, 31, 0x292B3Cu);
    ctx->pc = 0x292B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292B34u;
            // 0x292b38: 0x868501c8  lh          $a1, 0x1C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B3Cu; }
        if (ctx->pc != 0x292B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B3Cu; }
        if (ctx->pc != 0x292B3Cu) { return; }
    }
    ctx->pc = 0x292B3Cu;
label_292b3c:
    // 0x292b3c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292b3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292b44: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x292B44u;
    {
        const bool branch_taken_0x292b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B44u;
            // 0x292b48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b44) {
            ctx->pc = 0x292B78u;
            goto label_292b78;
        }
    }
    ctx->pc = 0x292B4Cu;
    // 0x292b4c: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x292B4Cu;
    SET_GPR_U32(ctx, 31, 0x292B54u);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B54u; }
        if (ctx->pc != 0x292B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B54u; }
        if (ctx->pc != 0x292B54u) { return; }
    }
    ctx->pc = 0x292B54u;
label_292b54:
    // 0x292b54: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x292b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x292b58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b5c: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x292b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x292b60: 0xc0a4610  jal         func_291840
    ctx->pc = 0x292B60u;
    SET_GPR_U32(ctx, 31, 0x292B68u);
    ctx->pc = 0x292B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292B60u;
            // 0x292b64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B68u; }
        if (ctx->pc != 0x292B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B68u; }
        if (ctx->pc != 0x292B68u) { return; }
    }
    ctx->pc = 0x292B68u;
label_292b68:
    // 0x292b68: 0x868301ca  lh          $v1, 0x1CA($s4)
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292b6c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x292b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x292b70: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x292b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292b74: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x292b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
label_292b78:
    // 0x292b78: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292b7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292b80: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x292B80u;
    {
        const bool branch_taken_0x292b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B80u;
            // 0x292b84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b80) {
            ctx->pc = 0x292BB4u;
            goto label_292bb4;
        }
    }
    ctx->pc = 0x292B88u;
    // 0x292b88: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x292B88u;
    SET_GPR_U32(ctx, 31, 0x292B90u);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B90u; }
        if (ctx->pc != 0x292B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B90u; }
        if (ctx->pc != 0x292B90u) { return; }
    }
    ctx->pc = 0x292B90u;
label_292b90:
    // 0x292b90: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x292b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x292b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b9c: 0xc0a4610  jal         func_291840
    ctx->pc = 0x292B9Cu;
    SET_GPR_U32(ctx, 31, 0x292BA4u);
    ctx->pc = 0x292BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292B9Cu;
            // 0x292ba0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BA4u; }
        if (ctx->pc != 0x292BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BA4u; }
        if (ctx->pc != 0x292BA4u) { return; }
    }
    ctx->pc = 0x292BA4u;
label_292ba4:
    // 0x292ba4: 0x868301ca  lh          $v1, 0x1CA($s4)
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x292ba8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x292bac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x292bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292bb0: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x292bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
label_292bb4:
    // 0x292bb4: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292bb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292bbc: 0x8e8601c4  lw          $a2, 0x1C4($s4)
    ctx->pc = 0x292bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x292bc0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x292BC0u;
    SET_GPR_U32(ctx, 31, 0x292BC8u);
    ctx->pc = 0x292BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292BC0u;
            // 0x292bc4: 0x24a5db38  addiu       $a1, $a1, -0x24C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BC8u; }
        if (ctx->pc != 0x292BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BC8u; }
        if (ctx->pc != 0x292BC8u) { return; }
    }
    ctx->pc = 0x292BC8u;
label_292bc8:
    // 0x292bc8: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292bcc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x292bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x292bd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292bd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x292bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bd8: 0x24a5db38  addiu       $a1, $a1, -0x24C8
    ctx->pc = 0x292bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
    // 0x292bdc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x292bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292be0: 0xc089734  jal         func_225CD0
    ctx->pc = 0x292BE0u;
    SET_GPR_U32(ctx, 31, 0x292BE8u);
    ctx->pc = 0x292BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292BE0u;
            // 0x292be4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BE8u; }
        if (ctx->pc != 0x292BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BE8u; }
        if (ctx->pc != 0x292BE8u) { return; }
    }
    ctx->pc = 0x292BE8u;
label_292be8:
    // 0x292be8: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292bec: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x292becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x292bf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292bf4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x292bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bf8: 0x24a5db40  addiu       $a1, $a1, -0x24C0
    ctx->pc = 0x292bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957888));
    // 0x292bfc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x292bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c00: 0xc089734  jal         func_225CD0
    ctx->pc = 0x292C00u;
    SET_GPR_U32(ctx, 31, 0x292C08u);
    ctx->pc = 0x292C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292C00u;
            // 0x292c04: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C08u; }
        if (ctx->pc != 0x292C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C08u; }
        if (ctx->pc != 0x292C08u) { return; }
    }
    ctx->pc = 0x292C08u;
label_292c08:
    // 0x292c08: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292c0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292c10: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x292C10u;
    {
        const bool branch_taken_0x292c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C10u;
            // 0x292c14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c10) {
            ctx->pc = 0x292C74u;
            goto label_292c74;
        }
    }
    ctx->pc = 0x292C18u;
    // 0x292c18: 0x8e9001c4  lw          $s0, 0x1C4($s4)
    ctx->pc = 0x292c18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x292c1c: 0xc0a468c  jal         func_291A30
    ctx->pc = 0x292C1Cu;
    SET_GPR_U32(ctx, 31, 0x292C24u);
    ctx->pc = 0x292C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292C1Cu;
            // 0x292c20: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291A30u;
    if (runtime->hasFunction(0x291A30u)) {
        auto targetFn = runtime->lookupFunction(0x291A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C24u; }
        if (ctx->pc != 0x292C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoney__5CShopFv_0x291a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C24u; }
        if (ctx->pc != 0x292C24u) { return; }
    }
    ctx->pc = 0x292C24u;
label_292c24:
    // 0x292c24: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x292c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x292c28: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x292C28u;
    {
        const bool branch_taken_0x292c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c28) {
            ctx->pc = 0x292C70u;
            goto label_292c70;
        }
    }
    ctx->pc = 0x292C30u;
    // 0x292c30: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292c34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292c38: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x292c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x292c3c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x292c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x292c40: 0x24a5db38  addiu       $a1, $a1, -0x24C8
    ctx->pc = 0x292c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
    // 0x292c44: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x292c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c48: 0xc089734  jal         func_225CD0
    ctx->pc = 0x292C48u;
    SET_GPR_U32(ctx, 31, 0x292C50u);
    ctx->pc = 0x292C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292C48u;
            // 0x292c4c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C50u; }
        if (ctx->pc != 0x292C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C50u; }
        if (ctx->pc != 0x292C50u) { return; }
    }
    ctx->pc = 0x292C50u;
label_292c50:
    // 0x292c50: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292c54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292c58: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x292c5c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x292c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x292c60: 0x24a5db40  addiu       $a1, $a1, -0x24C0
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957888));
    // 0x292c64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x292c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c68: 0xc089734  jal         func_225CD0
    ctx->pc = 0x292C68u;
    SET_GPR_U32(ctx, 31, 0x292C70u);
    ctx->pc = 0x292C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292C68u;
            // 0x292c6c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C70u; }
        if (ctx->pc != 0x292C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C70u; }
        if (ctx->pc != 0x292C70u) { return; }
    }
    ctx->pc = 0x292C70u;
label_292c70:
    // 0x292c70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_292c74:
    // 0x292c74: 0x12420018  beq         $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x292C74u;
    {
        const bool branch_taken_0x292c74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x292C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C74u;
            // 0x292c78: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c74) {
            ctx->pc = 0x292CD8u;
            goto label_292cd8;
        }
    }
    ctx->pc = 0x292C7Cu;
    // 0x292c7c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292C7Cu;
    {
        const bool branch_taken_0x292c7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x292C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C7Cu;
            // 0x292c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c7c) {
            ctx->pc = 0x292C94u;
            goto label_292c94;
        }
    }
    ctx->pc = 0x292C84u;
    // 0x292c84: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292C84u;
    {
        const bool branch_taken_0x292c84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x292c84) {
            ctx->pc = 0x292C94u;
            goto label_292c94;
        }
    }
    ctx->pc = 0x292C8Cu;
    // 0x292c8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x292C8Cu;
    {
        const bool branch_taken_0x292c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c8c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292C94u;
label_292c94:
    // 0x292c94: 0x868201c8  lh          $v0, 0x1C8($s4)
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x292c98: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x292C98u;
    {
        const bool branch_taken_0x292c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292c98) {
            ctx->pc = 0x292CD8u;
            goto label_292cd8;
        }
    }
    ctx->pc = 0x292CA0u;
    // 0x292ca0: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x292ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292ca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292ca8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292CA8u;
    {
        const bool branch_taken_0x292ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x292CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CA8u;
            // 0x292cac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ca8) {
            ctx->pc = 0x292CC8u;
            goto label_292cc8;
        }
    }
    ctx->pc = 0x292CB0u;
    // 0x292cb0: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x292cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x292cb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292cb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x292CB8u;
    {
        const bool branch_taken_0x292cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CB8u;
            // 0x292cbc: 0x241103e9  addiu       $s1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cb8) {
            ctx->pc = 0x292CC4u;
            goto label_292cc4;
        }
    }
    ctx->pc = 0x292CC0u;
    // 0x292cc0: 0x241103ed  addiu       $s1, $zero, 0x3ED
    ctx->pc = 0x292cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_292cc4:
    // 0x292cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_292cc8:
    // 0x292cc8: 0x14820029  bne         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x292CC8u;
    {
        const bool branch_taken_0x292cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x292cc8) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CD0u;
    // 0x292cd0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x292CD0u;
    {
        const bool branch_taken_0x292cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CD0u;
            // 0x292cd4: 0x241103f3  addiu       $s1, $zero, 0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cd0) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CD8u;
label_292cd8:
    // 0x292cd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x292CD8u;
    {
        const bool branch_taken_0x292cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CD8u;
            // 0x292cdc: 0x2411044c  addiu       $s1, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cd8) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CE0u;
label_292ce0:
    // 0x292ce0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x292ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x292ce4: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x292ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x292ce8: 0xc087654  jal         func_21D950
    ctx->pc = 0x292CE8u;
    SET_GPR_U32(ctx, 31, 0x292CF0u);
    ctx->pc = 0x292CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292CE8u;
            // 0x292cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292CF0u; }
        if (ctx->pc != 0x292CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292CF0u; }
        if (ctx->pc != 0x292CF0u) { return; }
    }
    ctx->pc = 0x292CF0u;
label_292cf0:
    // 0x292cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292cf4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x292CF4u;
    {
        const bool branch_taken_0x292cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CF4u;
            // 0x292cf8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cf4) {
            ctx->pc = 0x292D20u;
            goto label_292d20;
        }
    }
    ctx->pc = 0x292CFCu;
    // 0x292cfc: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x292cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292d00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x292d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292d04: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x292D04u;
    {
        const bool branch_taken_0x292d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x292D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D04u;
            // 0x292d08: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d04) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292D0Cu;
    // 0x292d0c: 0x241103ed  addiu       $s1, $zero, 0x3ED
    ctx->pc = 0x292d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_292d10:
    // 0x292d10: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x292D10u;
    {
        const bool branch_taken_0x292d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x292d10) {
            ctx->pc = 0x292D1Cu;
            goto label_292d1c;
        }
    }
    ctx->pc = 0x292D18u;
    // 0x292d18: 0x241103f7  addiu       $s1, $zero, 0x3F7
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
label_292d1c:
    // 0x292d1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_292d20:
    // 0x292d20: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x292D20u;
    {
        const bool branch_taken_0x292d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D20u;
            // 0x292d24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d20) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D28u;
    // 0x292d28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d2c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x292D2Cu;
    SET_GPR_U32(ctx, 31, 0x292D34u);
    ctx->pc = 0x292D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292D2Cu;
            // 0x292d30: 0x24a5db50  addiu       $a1, $a1, -0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D34u; }
        if (ctx->pc != 0x292D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D34u; }
        if (ctx->pc != 0x292D34u) { return; }
    }
    ctx->pc = 0x292D34u;
label_292d34:
    // 0x292d34: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292d38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x292d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292d3c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x292D3Cu;
    {
        const bool branch_taken_0x292d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D3Cu;
            // 0x292d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d3c) {
            ctx->pc = 0x292D48u;
            goto label_292d48;
        }
    }
    ctx->pc = 0x292D44u;
    // 0x292d44: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x292d44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_292d48:
    // 0x292d48: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x292d4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x292d50: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292D50u;
    {
        const bool branch_taken_0x292d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D50u;
            // 0x292d54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d50) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D58u;
    // 0x292d58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x292D58u;
    {
        const bool branch_taken_0x292d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D58u;
            // 0x292d5c: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d58) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D60u;
label_292d60:
    // 0x292d60: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x292D60u;
    {
        const bool branch_taken_0x292d60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D60u;
            // 0x292d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d60) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D68u;
    // 0x292d68: 0x2411044c  addiu       $s1, $zero, 0x44C
    ctx->pc = 0x292d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x292d6c: 0xa282020c  sb          $v0, 0x20C($s4)
    ctx->pc = 0x292d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 524), (uint8_t)GPR_U32(ctx, 2));
label_292d70:
    // 0x292d70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292d74:
    // 0x292d74: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x292D74u;
    SET_GPR_U32(ctx, 31, 0x292D7Cu);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D7Cu; }
        if (ctx->pc != 0x292D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D7Cu; }
        if (ctx->pc != 0x292D7Cu) { return; }
    }
    ctx->pc = 0x292D7Cu;
label_292d7c:
    // 0x292d7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d80: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x292d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x292d84: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x292D84u;
    {
        const bool branch_taken_0x292d84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D84u;
            // 0x292d88: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d84) {
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D8Cu;
    // 0x292d8c: 0x86500002  lh          $s0, 0x2($s2)
    ctx->pc = 0x292d8cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x292d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d94: 0xc065dc0  jal         func_197700
    ctx->pc = 0x292D94u;
    SET_GPR_U32(ctx, 31, 0x292D9Cu);
    ctx->pc = 0x292D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292D94u;
            // 0x292d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D9Cu; }
        if (ctx->pc != 0x292D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D9Cu; }
        if (ctx->pc != 0x292D9Cu) { return; }
    }
    ctx->pc = 0x292D9Cu;
label_292d9c:
    // 0x292d9c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x292d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_292da0:
    // 0x292da0: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x292da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x292da4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x292DA4u;
    {
        const bool branch_taken_0x292da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x292da4) {
            ctx->pc = 0x292E1Cu;
            goto label_292e1c;
        }
    }
    ctx->pc = 0x292DACu;
    // 0x292dac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292db0: 0xc089664  jal         func_225990
    ctx->pc = 0x292DB0u;
    SET_GPR_U32(ctx, 31, 0x292DB8u);
    ctx->pc = 0x292DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292DB0u;
            // 0x292db4: 0x24a5db60  addiu       $a1, $a1, -0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DB8u; }
        if (ctx->pc != 0x292DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DB8u; }
        if (ctx->pc != 0x292DB8u) { return; }
    }
    ctx->pc = 0x292DB8u;
label_292db8:
    // 0x292db8: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x292DB8u;
    {
        const bool branch_taken_0x292db8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292DB8u;
            // 0x292dbc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292db8) {
            ctx->pc = 0x292E1Cu;
            goto label_292e1c;
        }
    }
    ctx->pc = 0x292DC0u;
    // 0x292dc0: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x292dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x292dc4: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x292DC4u;
    {
        const bool branch_taken_0x292dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x292dc4) {
            ctx->pc = 0x292E1Cu;
            goto label_292e1c;
        }
    }
    ctx->pc = 0x292DCCu;
    // 0x292dcc: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x292dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x292dd0: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x292DD0u;
    {
        const bool branch_taken_0x292dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x292dd0) {
            ctx->pc = 0x292E1Cu;
            goto label_292e1c;
        }
    }
    ctx->pc = 0x292DD8u;
    // 0x292dd8: 0x240201aa  addiu       $v0, $zero, 0x1AA
    ctx->pc = 0x292dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x292ddc: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292DDCu;
    {
        const bool branch_taken_0x292ddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x292DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292DDCu;
            // 0x292de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ddc) {
            ctx->pc = 0x292E00u;
            goto label_292e00;
        }
    }
    ctx->pc = 0x292DE4u;
    // 0x292de4: 0x86470010  lh          $a3, 0x10($s2)
    ctx->pc = 0x292de4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x292de8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x292decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292df0: 0xc089624  jal         func_225890
    ctx->pc = 0x292DF0u;
    SET_GPR_U32(ctx, 31, 0x292DF8u);
    ctx->pc = 0x292DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292DF0u;
            // 0x292df4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225890u;
    if (runtime->hasFunction(0x225890u)) {
        auto targetFn = runtime->lookupFunction(0x225890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DF8u; }
        if (ctx->pc != 0x292DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormPartsPresetItem__FP18MENUFORMPARTS_TYPEiii_0x225890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DF8u; }
        if (ctx->pc != 0x292DF8u) { return; }
    }
    ctx->pc = 0x292DF8u;
label_292df8:
    // 0x292df8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292DF8u;
    {
        const bool branch_taken_0x292df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292df8) {
            ctx->pc = 0x292E1Cu;
            goto label_292e1c;
        }
    }
    ctx->pc = 0x292E00u;
label_292e00:
    // 0x292e00: 0xc065c94  jal         func_197250
    ctx->pc = 0x292E00u;
    SET_GPR_U32(ctx, 31, 0x292E08u);
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E08u; }
        if (ctx->pc != 0x292E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpectolNo__13CGameDataUsedFv_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E08u; }
        if (ctx->pc != 0x292E08u) { return; }
    }
    ctx->pc = 0x292E08u;
label_292e08:
    // 0x292e08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x292e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x292e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292e14: 0xc089624  jal         func_225890
    ctx->pc = 0x292E14u;
    SET_GPR_U32(ctx, 31, 0x292E1Cu);
    ctx->pc = 0x292E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292E14u;
            // 0x292e18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225890u;
    if (runtime->hasFunction(0x225890u)) {
        auto targetFn = runtime->lookupFunction(0x225890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E1Cu; }
        if (ctx->pc != 0x292E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormPartsPresetItem__FP18MENUFORMPARTS_TYPEiii_0x225890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E1Cu; }
        if (ctx->pc != 0x292E1Cu) { return; }
    }
    ctx->pc = 0x292E1Cu;
label_292e1c:
    // 0x292e1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x292e20: 0x8c22ca4c  lw          $v0, -0x35B4($at)
    ctx->pc = 0x292e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x292e24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x292e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x292e28: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x292e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x292e2c: 0x8c3eca50  lw          $fp, -0x35B0($at)
    ctx->pc = 0x292e2cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x292e30: 0x2402044c  addiu       $v0, $zero, 0x44C
    ctx->pc = 0x292e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x292e34: 0x12220212  beq         $s1, $v0, . + 4 + (0x212 << 2)
    ctx->pc = 0x292E34u;
    {
        const bool branch_taken_0x292e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E34u;
            // 0x292e38: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e34) {
            ctx->pc = 0x293680u;
            goto label_293680;
        }
    }
    ctx->pc = 0x292E3Cu;
    // 0x292e3c: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x292e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x292e40: 0x122201fa  beq         $s1, $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x292E40u;
    {
        const bool branch_taken_0x292e40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E40u;
            // 0x292e44: 0x240203f3  addiu       $v0, $zero, 0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e40) {
            ctx->pc = 0x29362Cu;
            goto label_29362c;
        }
    }
    ctx->pc = 0x292E48u;
    // 0x292e48: 0x122201b7  beq         $s1, $v0, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x292E48u;
    {
        const bool branch_taken_0x292e48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E48u;
            // 0x292e4c: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e48) {
            ctx->pc = 0x293528u;
            goto label_293528;
        }
    }
    ctx->pc = 0x292E50u;
    // 0x292e50: 0x122201b5  beq         $s1, $v0, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x292E50u;
    {
        const bool branch_taken_0x292e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E50u;
            // 0x292e54: 0x240203f2  addiu       $v0, $zero, 0x3F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e50) {
            ctx->pc = 0x293528u;
            goto label_293528;
        }
    }
    ctx->pc = 0x292E58u;
    // 0x292e58: 0x12220163  beq         $s1, $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x292E58u;
    {
        const bool branch_taken_0x292e58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E58u;
            // 0x292e5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e58) {
            ctx->pc = 0x2933E8u;
            goto label_2933e8;
        }
    }
    ctx->pc = 0x292E60u;
    // 0x292e60: 0x240203ed  addiu       $v0, $zero, 0x3ED
    ctx->pc = 0x292e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x292e64: 0x122200d3  beq         $s1, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x292E64u;
    {
        const bool branch_taken_0x292e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E64u;
            // 0x292e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e64) {
            ctx->pc = 0x2931B4u;
            goto label_2931b4;
        }
    }
    ctx->pc = 0x292E6Cu;
    // 0x292e6c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x292e70: 0x12220045  beq         $s1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x292E70u;
    {
        const bool branch_taken_0x292e70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E70u;
            // 0x292e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e70) {
            ctx->pc = 0x292F88u;
            goto label_292f88;
        }
    }
    ctx->pc = 0x292E78u;
    // 0x292e78: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x292e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x292e7c: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x292E7Cu;
    {
        const bool branch_taken_0x292e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E7Cu;
            // 0x292e80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e7c) {
            ctx->pc = 0x292F5Cu;
            goto label_292f5c;
        }
    }
    ctx->pc = 0x292E84u;
    // 0x292e84: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x292e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x292e88: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x292E88u;
    {
        const bool branch_taken_0x292e88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E88u;
            // 0x292e8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e88) {
            ctx->pc = 0x292F44u;
            goto label_292f44;
        }
    }
    ctx->pc = 0x292E90u;
    // 0x292e90: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292E90u;
    {
        const bool branch_taken_0x292e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x292E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E90u;
            // 0x292e94: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e90) {
            ctx->pc = 0x292EB8u;
            goto label_292eb8;
        }
    }
    ctx->pc = 0x292E98u;
    // 0x292e98: 0x12240003  beq         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292E98u;
    {
        const bool branch_taken_0x292e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x292e98) {
            ctx->pc = 0x292EA8u;
            goto label_292ea8;
        }
    }
    ctx->pc = 0x292EA0u;
    // 0x292ea0: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x292EA0u;
    {
        const bool branch_taken_0x292ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ea0) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292EA8u;
label_292ea8:
    // 0x292ea8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292EA8u;
    SET_GPR_U32(ctx, 31, 0x292EB0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EB0u; }
        if (ctx->pc != 0x292EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EB0u; }
        if (ctx->pc != 0x292EB0u) { return; }
    }
    ctx->pc = 0x292EB0u;
label_292eb0:
    // 0x292eb0: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x292EB0u;
    {
        const bool branch_taken_0x292eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292eb0) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292EB8u;
label_292eb8:
    // 0x292eb8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292ebc: 0xc08f0b8  jal         func_23C2E0
    ctx->pc = 0x292EBCu;
    SET_GPR_U32(ctx, 31, 0x292EC4u);
    ctx->pc = 0x292EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292EBCu;
            // 0x292ec0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2E0u;
    if (runtime->hasFunction(0x23C2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EC4u; }
        if (ctx->pc != 0x292EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EC4u; }
        if (ctx->pc != 0x292EC4u) { return; }
    }
    ctx->pc = 0x292EC4u;
label_292ec4:
    // 0x292ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x292ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292ec8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x292EC8u;
    {
        const bool branch_taken_0x292ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x292ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292EC8u;
            // 0x292ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ec8) {
            ctx->pc = 0x292F18u;
            goto label_292f18;
        }
    }
    ctx->pc = 0x292ED0u;
    // 0x292ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292ED0u;
    {
        const bool branch_taken_0x292ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ed0) {
            ctx->pc = 0x292EE0u;
            goto label_292ee0;
        }
    }
    ctx->pc = 0x292ED8u;
    // 0x292ed8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x292ED8u;
    {
        const bool branch_taken_0x292ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292ED8u;
            // 0x292edc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ed8) {
            ctx->pc = 0x292F34u;
            goto label_292f34;
        }
    }
    ctx->pc = 0x292EE0u;
label_292ee0:
    // 0x292ee0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x292ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292ee8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292eec: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x292eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x292ef0: 0xc08f9ac  jal         func_23E6B0
    ctx->pc = 0x292EF0u;
    SET_GPR_U32(ctx, 31, 0x292EF8u);
    ctx->pc = 0x292EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292EF0u;
            // 0x292ef4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EF8u; }
        if (ctx->pc != 0x292EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EF8u; }
        if (ctx->pc != 0x292EF8u) { return; }
    }
    ctx->pc = 0x292EF8u;
label_292ef8:
    // 0x292ef8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x292ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x292efc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x292efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x292f00: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x292f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x292f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292f08: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292F08u;
    SET_GPR_U32(ctx, 31, 0x292F10u);
    ctx->pc = 0x292F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F08u;
            // 0x292f0c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F10u; }
        if (ctx->pc != 0x292F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F10u; }
        if (ctx->pc != 0x292F10u) { return; }
    }
    ctx->pc = 0x292F10u;
label_292f10:
    // 0x292f10: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x292F10u;
    {
        const bool branch_taken_0x292f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f10) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F18u;
label_292f18:
    // 0x292f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f1c: 0xc08e73c  jal         func_239CF0
    ctx->pc = 0x292F1Cu;
    SET_GPR_U32(ctx, 31, 0x292F24u);
    ctx->pc = 0x292F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F1Cu;
            // 0x292f20: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239CF0u;
    if (runtime->hasFunction(0x239CF0u)) {
        auto targetFn = runtime->lookupFunction(0x239CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F24u; }
        if (ctx->pc != 0x292F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed_0x239cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F24u; }
        if (ctx->pc != 0x292F24u) { return; }
    }
    ctx->pc = 0x292F24u;
label_292f24:
    // 0x292f24: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292F24u;
    SET_GPR_U32(ctx, 31, 0x292F2Cu);
    ctx->pc = 0x292F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F24u;
            // 0x292f28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F2Cu; }
        if (ctx->pc != 0x292F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F2Cu; }
        if (ctx->pc != 0x292F2Cu) { return; }
    }
    ctx->pc = 0x292F2Cu;
label_292f2c:
    // 0x292f2c: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x292F2Cu;
    {
        const bool branch_taken_0x292f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f2c) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F34u;
label_292f34:
    // 0x292f34: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292F34u;
    SET_GPR_U32(ctx, 31, 0x292F3Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F3Cu; }
        if (ctx->pc != 0x292F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F3Cu; }
        if (ctx->pc != 0x292F3Cu) { return; }
    }
    ctx->pc = 0x292F3Cu;
label_292f3c:
    // 0x292f3c: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x292F3Cu;
    {
        const bool branch_taken_0x292f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f3c) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F44u;
label_292f44:
    // 0x292f44: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f4c: 0xc08f244  jal         func_23C910
    ctx->pc = 0x292F4Cu;
    SET_GPR_U32(ctx, 31, 0x292F54u);
    ctx->pc = 0x292F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F4Cu;
            // 0x292f50: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C910u;
    if (runtime->hasFunction(0x23C910u)) {
        auto targetFn = runtime->lookupFunction(0x23C910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F54u; }
        if (ctx->pc != 0x292F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO_0x23c910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F54u; }
        if (ctx->pc != 0x292F54u) { return; }
    }
    ctx->pc = 0x292F54u;
label_292f54:
    // 0x292f54: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x292F54u;
    {
        const bool branch_taken_0x292f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f54) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F5Cu;
label_292f5c:
    // 0x292f5c: 0xc0a47cc  jal         func_291F30
    ctx->pc = 0x292F5Cu;
    SET_GPR_U32(ctx, 31, 0x292F64u);
    ctx->pc = 0x291F30u;
    if (runtime->hasFunction(0x291F30u)) {
        auto targetFn = runtime->lookupFunction(0x291F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F64u; }
        if (ctx->pc != 0x292F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCancelNoneLoadItem__9CShopMenuFv_0x291f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F64u; }
        if (ctx->pc != 0x292F64u) { return; }
    }
    ctx->pc = 0x292F64u;
label_292f64:
    // 0x292f64: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x292F64u;
    {
        const bool branch_taken_0x292f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f64) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F6Cu;
    // 0x292f6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292f70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f74: 0xc08e898  jal         func_23A260
    ctx->pc = 0x292F74u;
    SET_GPR_U32(ctx, 31, 0x292F7Cu);
    ctx->pc = 0x292F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F74u;
            // 0x292f78: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F7Cu; }
        if (ctx->pc != 0x292F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F7Cu; }
        if (ctx->pc != 0x292F7Cu) { return; }
    }
    ctx->pc = 0x292F7Cu;
label_292f7c:
    // 0x292f7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292f80: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x292F80u;
    {
        const bool branch_taken_0x292f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F80u;
            // 0x292f84: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f80) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292F88u;
label_292f88:
    // 0x292f88: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x292f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x292f8c: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x292f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x292f90: 0xa68201cc  sh          $v0, 0x1CC($s4)
    ctx->pc = 0x292f90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 460), (uint16_t)GPR_U32(ctx, 2));
    // 0x292f94: 0xc0655dc  jal         func_195770
    ctx->pc = 0x292F94u;
    SET_GPR_U32(ctx, 31, 0x292F9Cu);
    ctx->pc = 0x292F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F94u;
            // 0x292f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F9Cu; }
        if (ctx->pc != 0x292F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F9Cu; }
        if (ctx->pc != 0x292F9Cu) { return; }
    }
    ctx->pc = 0x292F9Cu;
label_292f9c:
    // 0x292f9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x292f9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fa0: 0x12a001c1  beqz        $s5, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x292FA0u;
    {
        const bool branch_taken_0x292fa0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FA0u;
            // 0x292fa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fa0) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x292FA8u;
    // 0x292fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fac: 0xc066d14  jal         func_19B450
    ctx->pc = 0x292FACu;
    SET_GPR_U32(ctx, 31, 0x292FB4u);
    ctx->pc = 0x292FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292FACu;
            // 0x292fb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FB4u; }
        if (ctx->pc != 0x292FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FB4u; }
        if (ctx->pc != 0x292FB4u) { return; }
    }
    ctx->pc = 0x292FB4u;
label_292fb4:
    // 0x292fb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x292fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fbc: 0xc068644  jal         func_1A1910
    ctx->pc = 0x292FBCu;
    SET_GPR_U32(ctx, 31, 0x292FC4u);
    ctx->pc = 0x292FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292FBCu;
            // 0x292fc0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FC4u; }
        if (ctx->pc != 0x292FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FC4u; }
        if (ctx->pc != 0x292FC4u) { return; }
    }
    ctx->pc = 0x292FC4u;
label_292fc4:
    // 0x292fc4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x292fc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x292fc8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x292FC8u;
    {
        const bool branch_taken_0x292fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292fc8) {
            ctx->pc = 0x29302Cu;
            goto label_29302c;
        }
    }
    ctx->pc = 0x292FD0u;
label_292fd0:
    // 0x292fd0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x292fd4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292FD4u;
    {
        const bool branch_taken_0x292fd4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x292fd4) {
            ctx->pc = 0x292FE4u;
            goto label_292fe4;
        }
    }
    ctx->pc = 0x292FDCu;
    // 0x292fdc: 0x86a2001e  lh          $v0, 0x1E($s5)
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x292fe0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x292fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_292fe4:
    // 0x292fe4: 0x0  nop
    ctx->pc = 0x292fe4u;
    // NOP
    // 0x292fe8: 0x14700008  bne         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292FE8u;
    {
        const bool branch_taken_0x292fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x292FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FE8u;
            // 0x292fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fe8) {
            ctx->pc = 0x29300Cu;
            goto label_29300c;
        }
    }
    ctx->pc = 0x292FF0u;
    // 0x292ff0: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x292FF0u;
    SET_GPR_U32(ctx, 31, 0x292FF8u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FF8u; }
        if (ctx->pc != 0x292FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FF8u; }
        if (ctx->pc != 0x292FF8u) { return; }
    }
    ctx->pc = 0x292FF8u;
label_292ff8:
    // 0x292ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292FF8u;
    {
        const bool branch_taken_0x292ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FF8u;
            // 0x292ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ff8) {
            ctx->pc = 0x29300Cu;
            goto label_29300c;
        }
    }
    ctx->pc = 0x293000u;
    // 0x293000: 0xc065c9c  jal         func_197270
    ctx->pc = 0x293000u;
    SET_GPR_U32(ctx, 31, 0x293008u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293008u; }
        if (ctx->pc != 0x293008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293008u; }
        if (ctx->pc != 0x293008u) { return; }
    }
    ctx->pc = 0x293008u;
label_293008:
    // 0x293008: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x293008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29300c:
    // 0x29300c: 0x0  nop
    ctx->pc = 0x29300cu;
    // NOP
    // 0x293010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x293010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293014: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x293018: 0xc068644  jal         func_1A1910
    ctx->pc = 0x293018u;
    SET_GPR_U32(ctx, 31, 0x293020u);
    ctx->pc = 0x29301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293018u;
            // 0x29301c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293020u; }
        if (ctx->pc != 0x293020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293020u; }
        if (ctx->pc != 0x293020u) { return; }
    }
    ctx->pc = 0x293020u;
label_293020:
    // 0x293020: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x293020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x293024: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x293024u;
    {
        const bool branch_taken_0x293024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293024) {
            ctx->pc = 0x292FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292fd0;
        }
    }
    ctx->pc = 0x29302Cu;
label_29302c:
    // 0x29302c: 0x0  nop
    ctx->pc = 0x29302cu;
    // NOP
    // 0x293030: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x293030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x293034: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x293034u;
    {
        const bool branch_taken_0x293034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x293038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293034u;
            // 0x293038: 0x240201a8  addiu       $v0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293034) {
            ctx->pc = 0x293064u;
            goto label_293064;
        }
    }
    ctx->pc = 0x29303Cu;
    // 0x29303c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29303Cu;
    {
        const bool branch_taken_0x29303c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x293040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29303Cu;
            // 0x293040: 0x2602fe55  addiu       $v0, $s0, -0x1AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29303c) {
            ctx->pc = 0x293064u;
            goto label_293064;
        }
    }
    ctx->pc = 0x293044u;
    // 0x293044: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x293044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x293048: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x293048u;
    {
        const bool branch_taken_0x293048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293048u;
            // 0x29304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293048) {
            ctx->pc = 0x293064u;
            goto label_293064;
        }
    }
    ctx->pc = 0x293050u;
    // 0x293050: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x293050u;
    SET_GPR_U32(ctx, 31, 0x293058u);
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293058u; }
        if (ctx->pc != 0x293058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293058u; }
        if (ctx->pc != 0x293058u) { return; }
    }
    ctx->pc = 0x293058u;
label_293058:
    // 0x293058: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x293058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29305c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29305Cu;
    {
        const bool branch_taken_0x29305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29305c) {
            ctx->pc = 0x293068u;
            goto label_293068;
        }
    }
    ctx->pc = 0x293064u;
label_293064:
    // 0x293064: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293068:
    // 0x293068: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293068u;
    {
        const bool branch_taken_0x293068 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x29306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293068u;
            // 0x29306c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293068) {
            ctx->pc = 0x293078u;
            goto label_293078;
        }
    }
    ctx->pc = 0x293070u;
    // 0x293070: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x293070u;
    {
        const bool branch_taken_0x293070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293070u;
            // 0x293074: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293070) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293078u;
label_293078:
    // 0x293078: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x293078u;
    SET_GPR_U32(ctx, 31, 0x293080u);
    ctx->pc = 0x29307Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293078u;
            // 0x29307c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293080u; }
        if (ctx->pc != 0x293080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293080u; }
        if (ctx->pc != 0x293080u) { return; }
    }
    ctx->pc = 0x293080u;
label_293080:
    // 0x293080: 0x96a3000a  lhu         $v1, 0xA($s5)
    ctx->pc = 0x293080u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x293084: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x293084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293088: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293088u;
    {
        const bool branch_taken_0x293088 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x29308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293088u;
            // 0x29308c: 0x223082a  slt         $at, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293088) {
            ctx->pc = 0x293098u;
            goto label_293098;
        }
    }
    ctx->pc = 0x293090u;
    // 0x293090: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x293090u;
    {
        const bool branch_taken_0x293090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293090u;
            // 0x293094: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293090) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293098u;
label_293098:
    // 0x293098: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x293098u;
    {
        const bool branch_taken_0x293098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293098) {
            ctx->pc = 0x2930A4u;
            goto label_2930a4;
        }
    }
    ctx->pc = 0x2930A0u;
    // 0x2930a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2930a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2930a4:
    // 0x2930a4: 0xa68001c8  sh          $zero, 0x1C8($s4)
    ctx->pc = 0x2930a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 0));
    // 0x2930a8: 0x240201a7  addiu       $v0, $zero, 0x1A7
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x2930ac: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2930ACu;
    {
        const bool branch_taken_0x2930ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2930B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930ACu;
            // 0x2930b0: 0xa68301cc  sh          $v1, 0x1CC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 460), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930ac) {
            ctx->pc = 0x2930C4u;
            goto label_2930c4;
        }
    }
    ctx->pc = 0x2930B4u;
    // 0x2930b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2930b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2930b8: 0xa68301cc  sh          $v1, 0x1CC($s4)
    ctx->pc = 0x2930b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 460), (uint16_t)GPR_U32(ctx, 3));
    // 0x2930bc: 0x8f829840  lw          $v0, -0x67C0($gp)
    ctx->pc = 0x2930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x2930c0: 0xac430208  sw          $v1, 0x208($v0)
    ctx->pc = 0x2930c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 3));
label_2930c4:
    // 0x2930c4: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x2930c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x2930c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2930c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2930cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2930CCu;
    {
        const bool branch_taken_0x2930cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2930D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930CCu;
            // 0x2930d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930cc) {
            ctx->pc = 0x2930DCu;
            goto label_2930dc;
        }
    }
    ctx->pc = 0x2930D4u;
    // 0x2930d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2930d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2930d8: 0xa68201cc  sh          $v0, 0x1CC($s4)
    ctx->pc = 0x2930d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 460), (uint16_t)GPR_U32(ctx, 2));
label_2930dc:
    // 0x2930dc: 0xc08cb34  jal         func_232CD0
    ctx->pc = 0x2930DCu;
    SET_GPR_U32(ctx, 31, 0x2930E4u);
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2930E4u; }
        if (ctx->pc != 0x2930E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2930E4u; }
        if (ctx->pc != 0x2930E4u) { return; }
    }
    ctx->pc = 0x2930E4u;
label_2930e4:
    // 0x2930e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2930e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2930e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2930e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930ec: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x2930ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2930f0: 0xae8001d4  sw          $zero, 0x1D4($s4)
    ctx->pc = 0x2930f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 0));
    // 0x2930f4: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x2930F4u;
    SET_GPR_U32(ctx, 31, 0x2930FCu);
    ctx->pc = 0x2930F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2930F4u;
            // 0x2930f8: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2930FCu; }
        if (ctx->pc != 0x2930FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2930FCu; }
        if (ctx->pc != 0x2930FCu) { return; }
    }
    ctx->pc = 0x2930FCu;
label_2930fc:
    // 0x2930fc: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x293100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x293100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293104: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x293108: 0xc0a4610  jal         func_291840
    ctx->pc = 0x293108u;
    SET_GPR_U32(ctx, 31, 0x293110u);
    ctx->pc = 0x29310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293108u;
            // 0x29310c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293110u; }
        if (ctx->pc != 0x293110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293110u; }
        if (ctx->pc != 0x293110u) { return; }
    }
    ctx->pc = 0x293110u;
label_293110:
    // 0x293110: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293114: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293118: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x29311c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x29311Cu;
    SET_GPR_U32(ctx, 31, 0x293124u);
    ctx->pc = 0x293120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29311Cu;
            // 0x293120: 0x24a5db68  addiu       $a1, $a1, -0x2498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293124u; }
        if (ctx->pc != 0x293124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293124u; }
        if (ctx->pc != 0x293124u) { return; }
    }
    ctx->pc = 0x293124u;
label_293124:
    // 0x293124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293128: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x29312c: 0xa68301ca  sh          $v1, 0x1CA($s4)
    ctx->pc = 0x29312cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 3));
    // 0x293130: 0x24424050  addiu       $v0, $v0, 0x4050
    ctx->pc = 0x293130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16464));
    // 0x293134: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x293138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29313c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293140: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293144: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293144u;
    SET_GPR_U32(ctx, 31, 0x29314Cu);
    ctx->pc = 0x293148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293144u;
            // 0x293148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29314Cu; }
        if (ctx->pc != 0x29314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29314Cu; }
        if (ctx->pc != 0x29314Cu) { return; }
    }
    ctx->pc = 0x29314Cu;
label_29314c:
    // 0x29314c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293150: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x293150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x293154: 0xc087720  jal         func_21DC80
    ctx->pc = 0x293154u;
    SET_GPR_U32(ctx, 31, 0x29315Cu);
    ctx->pc = 0x293158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293154u;
            // 0x293158: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29315Cu; }
        if (ctx->pc != 0x29315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29315Cu; }
        if (ctx->pc != 0x29315Cu) { return; }
    }
    ctx->pc = 0x29315Cu;
label_29315c:
    // 0x29315c: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x29315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x293160: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293160u;
    {
        const bool branch_taken_0x293160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293160u;
            // 0x293164: 0x240201a8  addiu       $v0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293160) {
            ctx->pc = 0x293180u;
            goto label_293180;
        }
    }
    ctx->pc = 0x293168u;
    // 0x293168: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29316c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293170: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293170u;
    SET_GPR_U32(ctx, 31, 0x293178u);
    ctx->pc = 0x293174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293170u;
            // 0x293174: 0x24a5db70  addiu       $a1, $a1, -0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293178u; }
        if (ctx->pc != 0x293178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293178u; }
        if (ctx->pc != 0x293178u) { return; }
    }
    ctx->pc = 0x293178u;
label_293178:
    // 0x293178: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x293178u;
    {
        const bool branch_taken_0x293178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293178) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293180u;
label_293180:
    // 0x293180: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293180u;
    {
        const bool branch_taken_0x293180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293180u;
            // 0x293184: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293180) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x293188u;
    // 0x293188: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29318c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293190: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293190u;
    SET_GPR_U32(ctx, 31, 0x293198u);
    ctx->pc = 0x293194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293190u;
            // 0x293194: 0x24a5db78  addiu       $a1, $a1, -0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293198u; }
        if (ctx->pc != 0x293198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293198u; }
        if (ctx->pc != 0x293198u) { return; }
    }
    ctx->pc = 0x293198u;
label_293198:
    // 0x293198: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x293198u;
    {
        const bool branch_taken_0x293198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293198) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x2931A0u;
label_2931a0:
    // 0x2931a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2931a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931a4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2931A4u;
    SET_GPR_U32(ctx, 31, 0x2931ACu);
    ctx->pc = 0x2931A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2931A4u;
            // 0x2931a8: 0x24a5db88  addiu       $a1, $a1, -0x2478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931ACu; }
        if (ctx->pc != 0x2931ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931ACu; }
        if (ctx->pc != 0x2931ACu) { return; }
    }
    ctx->pc = 0x2931ACu;
label_2931ac:
    // 0x2931ac: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2931ACu;
    {
        const bool branch_taken_0x2931ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931ac) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x2931B4u;
label_2931b4:
    // 0x2931b4: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x2931B4u;
    SET_GPR_U32(ctx, 31, 0x2931BCu);
    ctx->pc = 0x2931B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2931B4u;
            // 0x2931b8: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931BCu; }
        if (ctx->pc != 0x2931BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931BCu; }
        if (ctx->pc != 0x2931BCu) { return; }
    }
    ctx->pc = 0x2931BCu;
label_2931bc:
    // 0x2931bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2931bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2931c0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2931C0u;
    {
        const bool branch_taken_0x2931c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2931C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931C0u;
            // 0x2931c4: 0x240201a8  addiu       $v0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931c0) {
            ctx->pc = 0x2931DCu;
            goto label_2931dc;
        }
    }
    ctx->pc = 0x2931C8u;
    // 0x2931c8: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2931cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2931ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931d0: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x2931D0u;
    SET_GPR_U32(ctx, 31, 0x2931D8u);
    ctx->pc = 0x2931D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2931D0u;
            // 0x2931d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931D8u; }
        if (ctx->pc != 0x2931D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931D8u; }
        if (ctx->pc != 0x2931D8u) { return; }
    }
    ctx->pc = 0x2931D8u;
label_2931d8:
    // 0x2931d8: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x2931d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_2931dc:
    // 0x2931dc: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2931DCu;
    {
        const bool branch_taken_0x2931dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2931E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931DCu;
            // 0x2931e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931dc) {
            ctx->pc = 0x2931F8u;
            goto label_2931f8;
        }
    }
    ctx->pc = 0x2931E4u;
    // 0x2931e4: 0x240201ac  addiu       $v0, $zero, 0x1AC
    ctx->pc = 0x2931e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    // 0x2931e8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2931E8u;
    {
        const bool branch_taken_0x2931e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2931ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931E8u;
            // 0x2931ec: 0x240201ab  addiu       $v0, $zero, 0x1AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e8) {
            ctx->pc = 0x2931F8u;
            goto label_2931f8;
        }
    }
    ctx->pc = 0x2931F0u;
    // 0x2931f0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2931F0u;
    {
        const bool branch_taken_0x2931f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2931F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931F0u;
            // 0x2931f4: 0x240201a6  addiu       $v0, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931f0) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931F8u;
label_2931f8:
    // 0x2931f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2931f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2931fc: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x2931fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_293200:
    // 0x293200: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293200u;
    {
        const bool branch_taken_0x293200 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x293200) {
            ctx->pc = 0x29320Cu;
            goto label_29320c;
        }
    }
    ctx->pc = 0x293208u;
    // 0x293208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29320c:
    // 0x29320c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29320Cu;
    {
        const bool branch_taken_0x29320c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29320c) {
            ctx->pc = 0x293224u;
            goto label_293224;
        }
    }
    ctx->pc = 0x293214u;
    // 0x293214: 0x868601ca  lh          $a2, 0x1CA($s4)
    ctx->pc = 0x293214u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x293218: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29321c: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x29321Cu;
    SET_GPR_U32(ctx, 31, 0x293224u);
    ctx->pc = 0x293220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29321Cu;
            // 0x293220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293224u; }
        if (ctx->pc != 0x293224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293224u; }
        if (ctx->pc != 0x293224u) { return; }
    }
    ctx->pc = 0x293224u;
label_293224:
    // 0x293224: 0x8e8201c4  lw          $v0, 0x1C4($s4)
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x293228: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x293228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x29322c: 0xc0a46b4  jal         func_291AD0
    ctx->pc = 0x29322Cu;
    SET_GPR_U32(ctx, 31, 0x293234u);
    ctx->pc = 0x293230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29322Cu;
            // 0x293230: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291AD0u;
    if (runtime->hasFunction(0x291AD0u)) {
        auto targetFn = runtime->lookupFunction(0x291AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293234u; }
        if (ctx->pc != 0x293234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__5CShopFi_0x291ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293234u; }
        if (ctx->pc != 0x293234u) { return; }
    }
    ctx->pc = 0x293234u;
label_293234:
    // 0x293234: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293238: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29323c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x29323Cu;
    SET_GPR_U32(ctx, 31, 0x293244u);
    ctx->pc = 0x293240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29323Cu;
            // 0x293240: 0x24a5db98  addiu       $a1, $a1, -0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293244u; }
        if (ctx->pc != 0x293244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293244u; }
        if (ctx->pc != 0x293244u) { return; }
    }
    ctx->pc = 0x293244u;
label_293244:
    // 0x293244: 0x240201a7  addiu       $v0, $zero, 0x1A7
    ctx->pc = 0x293244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x293248: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293248u;
    {
        const bool branch_taken_0x293248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293248u;
            // 0x29324c: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293248) {
            ctx->pc = 0x293268u;
            goto label_293268;
        }
    }
    ctx->pc = 0x293250u;
    // 0x293250: 0x2e10821  addu        $at, $s7, $at
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x293254: 0x84224dc0  lh          $v0, 0x4DC0($at)
    ctx->pc = 0x293254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19904)));
    // 0x293258: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x29325c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293260: 0x2e10821  addu        $at, $s7, $at
    ctx->pc = 0x293260u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x293264: 0xa4224dc0  sh          $v0, 0x4DC0($at)
    ctx->pc = 0x293264u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19904), (uint16_t)GPR_U32(ctx, 2));
label_293268:
    // 0x293268: 0xc064220  jal         func_190880
    ctx->pc = 0x293268u;
    SET_GPR_U32(ctx, 31, 0x293270u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293270u; }
        if (ctx->pc != 0x293270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293270u; }
        if (ctx->pc != 0x293270u) { return; }
    }
    ctx->pc = 0x293270u;
label_293270:
    // 0x293270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x293270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293274: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x293274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x293278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29327c: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x29327Cu;
    SET_GPR_U32(ctx, 31, 0x293284u);
    ctx->pc = 0x293280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29327Cu;
            // 0x293280: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293284u; }
        if (ctx->pc != 0x293284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293284u; }
        if (ctx->pc != 0x293284u) { return; }
    }
    ctx->pc = 0x293284u;
label_293284:
    // 0x293284: 0x24020173  addiu       $v0, $zero, 0x173
    ctx->pc = 0x293284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x293288: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293288u;
    {
        const bool branch_taken_0x293288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293288u;
            // 0x29328c: 0x240201a8  addiu       $v0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293288) {
            ctx->pc = 0x2932A4u;
            goto label_2932a4;
        }
    }
    ctx->pc = 0x293290u;
    // 0x293290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293294: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x293294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x293298: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x293298u;
    SET_GPR_U32(ctx, 31, 0x2932A0u);
    ctx->pc = 0x29329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293298u;
            // 0x29329c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932A0u; }
        if (ctx->pc != 0x2932A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932A0u; }
        if (ctx->pc != 0x2932A0u) { return; }
    }
    ctx->pc = 0x2932A0u;
label_2932a0:
    // 0x2932a0: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x2932a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_2932a4:
    // 0x2932a4: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2932A4u;
    {
        const bool branch_taken_0x2932a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2932A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932A4u;
            // 0x2932a8: 0x240201ac  addiu       $v0, $zero, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932a4) {
            ctx->pc = 0x2932F0u;
            goto label_2932f0;
        }
    }
    ctx->pc = 0x2932ACu;
    // 0x2932ac: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2932ACu;
    SET_GPR_U32(ctx, 31, 0x2932B4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932B4u; }
        if (ctx->pc != 0x2932B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932B4u; }
        if (ctx->pc != 0x2932B4u) { return; }
    }
    ctx->pc = 0x2932B4u;
label_2932b4:
    // 0x2932b4: 0x24444eb0  addiu       $a0, $v0, 0x4EB0
    ctx->pc = 0x2932b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
    // 0x2932b8: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x2932B8u;
    SET_GPR_U32(ctx, 31, 0x2932C0u);
    ctx->pc = 0x2932BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2932B8u;
            // 0x2932bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932C0u; }
        if (ctx->pc != 0x2932C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932C0u; }
        if (ctx->pc != 0x2932C0u) { return; }
    }
    ctx->pc = 0x2932C0u;
label_2932c0:
    // 0x2932c0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2932c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2932c4: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2932C4u;
    SET_GPR_U32(ctx, 31, 0x2932CCu);
    ctx->pc = 0x2932C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2932C4u;
            // 0x2932c8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932CCu; }
        if (ctx->pc != 0x2932CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932CCu; }
        if (ctx->pc != 0x2932CCu) { return; }
    }
    ctx->pc = 0x2932CCu;
label_2932cc:
    // 0x2932cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2932CCu;
    {
        const bool branch_taken_0x2932cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932CCu;
            // 0x2932d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932cc) {
            ctx->pc = 0x2932ECu;
            goto label_2932ec;
        }
    }
    ctx->pc = 0x2932D4u;
    // 0x2932d4: 0x24440cb0  addiu       $a0, $v0, 0xCB0
    ctx->pc = 0x2932d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2932d8: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x2932D8u;
    SET_GPR_U32(ctx, 31, 0x2932E0u);
    ctx->pc = 0x2932DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2932D8u;
            // 0x2932dc: 0x24a5dba8  addiu       $a1, $a1, -0x2458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932E0u; }
        if (ctx->pc != 0x2932E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932E0u; }
        if (ctx->pc != 0x2932E0u) { return; }
    }
    ctx->pc = 0x2932E0u;
label_2932e0:
    // 0x2932e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2932E0u;
    {
        const bool branch_taken_0x2932e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932E0u;
            // 0x2932e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932e0) {
            ctx->pc = 0x2932ECu;
            goto label_2932ec;
        }
    }
    ctx->pc = 0x2932E8u;
    // 0x2932e8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2932e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_2932ec:
    // 0x2932ec: 0x240201ac  addiu       $v0, $zero, 0x1AC
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
label_2932f0:
    // 0x2932f0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2932F0u;
    {
        const bool branch_taken_0x2932f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2932F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932F0u;
            // 0x2932f4: 0x240201ab  addiu       $v0, $zero, 0x1AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932f0) {
            ctx->pc = 0x293310u;
            goto label_293310;
        }
    }
    ctx->pc = 0x2932F8u;
    // 0x2932f8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2932F8u;
    SET_GPR_U32(ctx, 31, 0x293300u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293300u; }
        if (ctx->pc != 0x293300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293300u; }
        if (ctx->pc != 0x293300u) { return; }
    }
    ctx->pc = 0x293300u;
label_293300:
    // 0x293300: 0x24444eb0  addiu       $a0, $v0, 0x4EB0
    ctx->pc = 0x293300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
    // 0x293304: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x293304u;
    SET_GPR_U32(ctx, 31, 0x29330Cu);
    ctx->pc = 0x293308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293304u;
            // 0x293308: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29330Cu; }
        if (ctx->pc != 0x29330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29330Cu; }
        if (ctx->pc != 0x29330Cu) { return; }
    }
    ctx->pc = 0x29330Cu;
label_29330c:
    // 0x29330c: 0x240201ab  addiu       $v0, $zero, 0x1AB
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
label_293310:
    // 0x293310: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293310u;
    {
        const bool branch_taken_0x293310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293310u;
            // 0x293314: 0x240201a6  addiu       $v0, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293310) {
            ctx->pc = 0x293330u;
            goto label_293330;
        }
    }
    ctx->pc = 0x293318u;
    // 0x293318: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x293318u;
    SET_GPR_U32(ctx, 31, 0x293320u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293320u; }
        if (ctx->pc != 0x293320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293320u; }
        if (ctx->pc != 0x293320u) { return; }
    }
    ctx->pc = 0x293320u;
label_293320:
    // 0x293320: 0x24444eb0  addiu       $a0, $v0, 0x4EB0
    ctx->pc = 0x293320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
    // 0x293324: 0xc066b30  jal         func_19ACC0
    ctx->pc = 0x293324u;
    SET_GPR_U32(ctx, 31, 0x29332Cu);
    ctx->pc = 0x293328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293324u;
            // 0x293328: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29332Cu; }
        if (ctx->pc != 0x29332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29332Cu; }
        if (ctx->pc != 0x29332Cu) { return; }
    }
    ctx->pc = 0x29332Cu;
label_29332c:
    // 0x29332c: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x29332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_293330:
    // 0x293330: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293330u;
    {
        const bool branch_taken_0x293330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293330u;
            // 0x293334: 0x24020163  addiu       $v0, $zero, 0x163 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293330) {
            ctx->pc = 0x293350u;
            goto label_293350;
        }
    }
    ctx->pc = 0x293338u;
    // 0x293338: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x293338u;
    SET_GPR_U32(ctx, 31, 0x293340u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293340u; }
        if (ctx->pc != 0x293340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293340u; }
        if (ctx->pc != 0x293340u) { return; }
    }
    ctx->pc = 0x293340u;
label_293340:
    // 0x293340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293344: 0xc067124  jal         func_19C490
    ctx->pc = 0x293344u;
    SET_GPR_U32(ctx, 31, 0x29334Cu);
    ctx->pc = 0x293348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293344u;
            // 0x293348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C490u;
    if (runtime->hasFunction(0x19C490u)) {
        auto targetFn = runtime->lookupFunction(0x19C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29334Cu; }
        if (ctx->pc != 0x29334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVoiceUnit__16CUserDataManagerFi_0x19c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29334Cu; }
        if (ctx->pc != 0x29334Cu) { return; }
    }
    ctx->pc = 0x29334Cu;
label_29334c:
    // 0x29334c: 0x24020163  addiu       $v0, $zero, 0x163
    ctx->pc = 0x29334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
label_293350:
    // 0x293350: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293350u;
    {
        const bool branch_taken_0x293350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x293350) {
            ctx->pc = 0x29336Cu;
            goto label_29336c;
        }
    }
    ctx->pc = 0x293358u;
    // 0x293358: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x293358u;
    SET_GPR_U32(ctx, 31, 0x293360u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293360u; }
        if (ctx->pc != 0x293360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293360u; }
        if (ctx->pc != 0x293360u) { return; }
    }
    ctx->pc = 0x293360u;
label_293360:
    // 0x293360: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x293360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x293364: 0xc07fd4c  jal         func_1FF530
    ctx->pc = 0x293364u;
    SET_GPR_U32(ctx, 31, 0x29336Cu);
    ctx->pc = 0x293368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293364u;
            // 0x293368: 0x24440ad8  addiu       $a0, $v0, 0xAD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF530u;
    if (runtime->hasFunction(0x1FF530u)) {
        auto targetFn = runtime->lookupFunction(0x1FF530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29336Cu; }
        if (ctx->pc != 0x29336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KnowScoop__17CScoopDataManagerFv_0x1ff530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29336Cu; }
        if (ctx->pc != 0x29336Cu) { return; }
    }
    ctx->pc = 0x29336Cu;
label_29336c:
    // 0x29336c: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x29336cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x293370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293374: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293374u;
    {
        const bool branch_taken_0x293374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293374) {
            ctx->pc = 0x293390u;
            goto label_293390;
        }
    }
    ctx->pc = 0x29337Cu;
    // 0x29337c: 0xc08cab4  jal         func_232AD0
    ctx->pc = 0x29337Cu;
    SET_GPR_U32(ctx, 31, 0x293384u);
    ctx->pc = 0x232AD0u;
    if (runtime->hasFunction(0x232AD0u)) {
        auto targetFn = runtime->lookupFunction(0x232AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293384u; }
        if (ctx->pc != 0x293384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuSysData__Fv_0x232ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293384u; }
        if (ctx->pc != 0x293384u) { return; }
    }
    ctx->pc = 0x293384u;
label_293384:
    // 0x293384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293388: 0xc0bc4d4  jal         func_2F1350
    ctx->pc = 0x293388u;
    SET_GPR_U32(ctx, 31, 0x293390u);
    ctx->pc = 0x29338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293388u;
            // 0x29338c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1350u;
    if (runtime->hasFunction(0x2F1350u)) {
        auto targetFn = runtime->lookupFunction(0x2F1350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293390u; }
        if (ctx->pc != 0x293390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGhobi__15CMenuSystemDataFi_0x2f1350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293390u; }
        if (ctx->pc != 0x293390u) { return; }
    }
    ctx->pc = 0x293390u;
label_293390:
    // 0x293390: 0xc0a4540  jal         func_291500
    ctx->pc = 0x293390u;
    SET_GPR_U32(ctx, 31, 0x293398u);
    ctx->pc = 0x293394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293390u;
            // 0x293394: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291500u;
    if (runtime->hasFunction(0x291500u)) {
        auto targetFn = runtime->lookupFunction(0x291500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293398u; }
        if (ctx->pc != 0x293398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventItem__5CShopFv_0x291500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293398u; }
        if (ctx->pc != 0x293398u) { return; }
    }
    ctx->pc = 0x293398u;
label_293398:
    // 0x293398: 0xc0a4510  jal         func_291440
    ctx->pc = 0x293398u;
    SET_GPR_U32(ctx, 31, 0x2933A0u);
    ctx->pc = 0x29339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293398u;
            // 0x29339c: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291440u;
    if (runtime->hasFunction(0x291440u)) {
        auto targetFn = runtime->lookupFunction(0x291440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933A0u; }
        if (ctx->pc != 0x2933A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSyojiHin__5CShopFv_0x291440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933A0u; }
        if (ctx->pc != 0x2933A0u) { return; }
    }
    ctx->pc = 0x2933A0u;
label_2933a0:
    // 0x2933a0: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x2933A0u;
    SET_GPR_U32(ctx, 31, 0x2933A8u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933A8u; }
        if (ctx->pc != 0x2933A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933A8u; }
        if (ctx->pc != 0x2933A8u) { return; }
    }
    ctx->pc = 0x2933A8u;
label_2933a8:
    // 0x2933a8: 0xc0a4810  jal         func_292040
    ctx->pc = 0x2933A8u;
    SET_GPR_U32(ctx, 31, 0x2933B0u);
    ctx->pc = 0x2933ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2933A8u;
            // 0x2933ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292040u;
    if (runtime->hasFunction(0x292040u)) {
        auto targetFn = runtime->lookupFunction(0x292040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933B0u; }
        if (ctx->pc != 0x2933B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataScrlBar__9CShopMenuFv_0x292040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933B0u; }
        if (ctx->pc != 0x2933B0u) { return; }
    }
    ctx->pc = 0x2933B0u;
label_2933b0:
    // 0x2933b0: 0x8f829840  lw          $v0, -0x67C0($gp)
    ctx->pc = 0x2933b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x2933b4: 0x268401bc  addiu       $a0, $s4, 0x1BC
    ctx->pc = 0x2933b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x2933b8: 0x268501c0  addiu       $a1, $s4, 0x1C0
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x2933bc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2933bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2933c0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2933c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2933c4: 0xc07c960  jal         func_1F2580
    ctx->pc = 0x2933C4u;
    SET_GPR_U32(ctx, 31, 0x2933CCu);
    ctx->pc = 0x2933C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2933C4u;
            // 0x2933c8: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2580u;
    if (runtime->hasFunction(0x1F2580u)) {
        auto targetFn = runtime->lookupFunction(0x1F2580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933CCu; }
        if (ctx->pc != 0x2933CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMenuLine__FPiPiii_0x1f2580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933CCu; }
        if (ctx->pc != 0x2933CCu) { return; }
    }
    ctx->pc = 0x2933CCu;
label_2933cc:
    // 0x2933cc: 0x8e840144  lw          $a0, 0x144($s4)
    ctx->pc = 0x2933ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
    // 0x2933d0: 0xc094280  jal         func_250A00
    ctx->pc = 0x2933D0u;
    SET_GPR_U32(ctx, 31, 0x2933D8u);
    ctx->pc = 0x2933D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2933D0u;
            // 0x2933d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933D8u; }
        if (ctx->pc != 0x2933D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933D8u; }
        if (ctx->pc != 0x2933D8u) { return; }
    }
    ctx->pc = 0x2933D8u;
label_2933d8:
    // 0x2933d8: 0x1e2000b3  bgtz        $s1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2933D8u;
    {
        const bool branch_taken_0x2933d8 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2933DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933D8u;
            // 0x2933dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933d8) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x2933E0u;
    // 0x2933e0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2933E0u;
    {
        const bool branch_taken_0x2933e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933E0u;
            // 0x2933e4: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933e0) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x2933E8u;
label_2933e8:
    // 0x2933e8: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x2933E8u;
    SET_GPR_U32(ctx, 31, 0x2933F0u);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933F0u; }
        if (ctx->pc != 0x2933F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933F0u; }
        if (ctx->pc != 0x2933F0u) { return; }
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2933f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933f4: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x2933F4u;
    SET_GPR_U32(ctx, 31, 0x2933FCu);
    ctx->pc = 0x2933F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2933F4u;
            // 0x2933f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933FCu; }
        if (ctx->pc != 0x2933FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933FCu; }
        if (ctx->pc != 0x2933FCu) { return; }
    }
    ctx->pc = 0x2933FCu;
label_2933fc:
    // 0x2933fc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2933FCu;
    {
        const bool branch_taken_0x2933fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x293400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933FCu;
            // 0x293400: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933fc) {
            ctx->pc = 0x293414u;
            goto label_293414;
        }
    }
    ctx->pc = 0x293404u;
    // 0x293404: 0xc094274  jal         func_2509D0
    ctx->pc = 0x293404u;
    SET_GPR_U32(ctx, 31, 0x29340Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29340Cu; }
        if (ctx->pc != 0x29340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29340Cu; }
        if (ctx->pc != 0x29340Cu) { return; }
    }
    ctx->pc = 0x29340Cu;
label_29340c:
    // 0x29340c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x29340Cu;
    {
        const bool branch_taken_0x29340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29340c) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293414u;
label_293414:
    // 0x293414: 0x8f839840  lw          $v1, -0x67C0($gp)
    ctx->pc = 0x293414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x293418: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29341c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293420: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x293420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x293424: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293424u;
    {
        const bool branch_taken_0x293424 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x293428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293424u;
            // 0x293428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293424) {
            ctx->pc = 0x29343Cu;
            goto label_29343c;
        }
    }
    ctx->pc = 0x29342Cu;
    // 0x29342c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x29342Cu;
    SET_GPR_U32(ctx, 31, 0x293434u);
    ctx->pc = 0x293430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29342Cu;
            // 0x293430: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293434u; }
        if (ctx->pc != 0x293434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293434u; }
        if (ctx->pc != 0x293434u) { return; }
    }
    ctx->pc = 0x293434u;
label_293434:
    // 0x293434: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x293434u;
    {
        const bool branch_taken_0x293434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293434) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x29343Cu;
label_29343c:
    // 0x29343c: 0xc08e3e8  jal         func_238FA0
    ctx->pc = 0x29343Cu;
    SET_GPR_U32(ctx, 31, 0x293444u);
    ctx->pc = 0x238FA0u;
    if (runtime->hasFunction(0x238FA0u)) {
        auto targetFn = runtime->lookupFunction(0x238FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293444u; }
        if (ctx->pc != 0x293444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipFishRod__FP13CGameDataUsed_0x238fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293444u; }
        if (ctx->pc != 0x293444u) { return; }
    }
    ctx->pc = 0x293444u;
label_293444:
    // 0x293444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293448: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293448u;
    {
        const bool branch_taken_0x293448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x293448) {
            ctx->pc = 0x293458u;
            goto label_293458;
        }
    }
    ctx->pc = 0x293450u;
    // 0x293450: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x293450u;
    {
        const bool branch_taken_0x293450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293450u;
            // 0x293454: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293450) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293458u;
label_293458:
    // 0x293458: 0xae8001d4  sw          $zero, 0x1D4($s4)
    ctx->pc = 0x293458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 0));
    // 0x29345c: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x29345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x293460: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293460u;
    {
        const bool branch_taken_0x293460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293460u;
            // 0x293464: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293460) {
            ctx->pc = 0x293480u;
            goto label_293480;
        }
    }
    ctx->pc = 0x293468u;
    // 0x293468: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29346c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293470: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293470u;
    SET_GPR_U32(ctx, 31, 0x293478u);
    ctx->pc = 0x293474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293470u;
            // 0x293474: 0x24a5db70  addiu       $a1, $a1, -0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293478u; }
        if (ctx->pc != 0x293478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293478u; }
        if (ctx->pc != 0x293478u) { return; }
    }
    ctx->pc = 0x293478u;
label_293478:
    // 0x293478: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x293478u;
    {
        const bool branch_taken_0x293478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293478u;
            // 0x29347c: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293478) {
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293480u;
label_293480:
    // 0x293480: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x293480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x293484: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293484u;
    {
        const bool branch_taken_0x293484 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x293488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293484u;
            // 0x293488: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293484) {
            ctx->pc = 0x2934A4u;
            goto label_2934a4;
        }
    }
    ctx->pc = 0x29348Cu;
    // 0x29348c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29348cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293494: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293494u;
    SET_GPR_U32(ctx, 31, 0x29349Cu);
    ctx->pc = 0x293498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293494u;
            // 0x293498: 0x24a5db78  addiu       $a1, $a1, -0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29349Cu; }
        if (ctx->pc != 0x29349Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29349Cu; }
        if (ctx->pc != 0x29349Cu) { return; }
    }
    ctx->pc = 0x29349Cu;
label_29349c:
    // 0x29349c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29349Cu;
    {
        const bool branch_taken_0x29349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29349c) {
            ctx->pc = 0x2934B0u;
            goto label_2934b0;
        }
    }
    ctx->pc = 0x2934A4u;
label_2934a4:
    // 0x2934a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2934a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934a8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2934A8u;
    SET_GPR_U32(ctx, 31, 0x2934B0u);
    ctx->pc = 0x2934ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934A8u;
            // 0x2934ac: 0x24a5db88  addiu       $a1, $a1, -0x2478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934B0u; }
        if (ctx->pc != 0x2934B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934B0u; }
        if (ctx->pc != 0x2934B0u) { return; }
    }
    ctx->pc = 0x2934B0u;
label_2934b0:
    // 0x2934b0: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
label_2934b4:
    // 0x2934b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2934b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2934b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934bc: 0xc0a4610  jal         func_291840
    ctx->pc = 0x2934BCu;
    SET_GPR_U32(ctx, 31, 0x2934C4u);
    ctx->pc = 0x2934C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934BCu;
            // 0x2934c0: 0x27a700e8  addiu       $a3, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934C4u; }
        if (ctx->pc != 0x2934C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934C4u; }
        if (ctx->pc != 0x2934C4u) { return; }
    }
    ctx->pc = 0x2934C4u;
label_2934c4:
    // 0x2934c4: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x2934c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2934c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2934c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2934cc: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2934ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2934d0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2934D0u;
    SET_GPR_U32(ctx, 31, 0x2934D8u);
    ctx->pc = 0x2934D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934D0u;
            // 0x2934d4: 0x24a5db68  addiu       $a1, $a1, -0x2498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934D8u; }
        if (ctx->pc != 0x2934D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934D8u; }
        if (ctx->pc != 0x2934D8u) { return; }
    }
    ctx->pc = 0x2934D8u;
label_2934d8:
    // 0x2934d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2934dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2934e0: 0xc08cb34  jal         func_232CD0
    ctx->pc = 0x2934E0u;
    SET_GPR_U32(ctx, 31, 0x2934E8u);
    ctx->pc = 0x2934E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934E0u;
            // 0x2934e4: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934E8u; }
        if (ctx->pc != 0x2934E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934E8u; }
        if (ctx->pc != 0x2934E8u) { return; }
    }
    ctx->pc = 0x2934E8u;
label_2934e8:
    // 0x2934e8: 0xa68001c8  sh          $zero, 0x1C8($s4)
    ctx->pc = 0x2934e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 456), (uint16_t)GPR_U32(ctx, 0));
    // 0x2934ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2934f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2934f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934f4: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x2934F4u;
    SET_GPR_U32(ctx, 31, 0x2934FCu);
    ctx->pc = 0x2934F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934F4u;
            // 0x2934f8: 0xa68201ca  sh          $v0, 0x1CA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 458), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934FCu; }
        if (ctx->pc != 0x2934FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934FCu; }
        if (ctx->pc != 0x2934FCu) { return; }
    }
    ctx->pc = 0x2934FCu;
label_2934fc:
    // 0x2934fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2934fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293500: 0xa68201cc  sh          $v0, 0x1CC($s4)
    ctx->pc = 0x293500u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 460), (uint16_t)GPR_U32(ctx, 2));
    // 0x293504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293508: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293508u;
    SET_GPR_U32(ctx, 31, 0x293510u);
    ctx->pc = 0x29350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293508u;
            // 0x29350c: 0x24a5dbb0  addiu       $a1, $a1, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293510u; }
        if (ctx->pc != 0x293510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293510u; }
        if (ctx->pc != 0x293510u) { return; }
    }
    ctx->pc = 0x293510u;
label_293510:
    // 0x293510: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293514: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x293514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x293518: 0xc087720  jal         func_21DC80
    ctx->pc = 0x293518u;
    SET_GPR_U32(ctx, 31, 0x293520u);
    ctx->pc = 0x29351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293518u;
            // 0x29351c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293520u; }
        if (ctx->pc != 0x293520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293520u; }
        if (ctx->pc != 0x293520u) { return; }
    }
    ctx->pc = 0x293520u;
label_293520:
    // 0x293520: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x293520u;
    {
        const bool branch_taken_0x293520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293520) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293528u;
label_293528:
    // 0x293528: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29352c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293530: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x293530u;
    {
        const bool branch_taken_0x293530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293530) {
            ctx->pc = 0x293590u;
            goto label_293590;
        }
    }
    ctx->pc = 0x293538u;
    // 0x293538: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x29353c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293540: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293540u;
    {
        const bool branch_taken_0x293540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x293540) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293548u;
    // 0x293548: 0x8e9101c4  lw          $s1, 0x1C4($s4)
    ctx->pc = 0x293548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x29354c: 0xc0a468c  jal         func_291A30
    ctx->pc = 0x29354Cu;
    SET_GPR_U32(ctx, 31, 0x293554u);
    ctx->pc = 0x293550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29354Cu;
            // 0x293550: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291A30u;
    if (runtime->hasFunction(0x291A30u)) {
        auto targetFn = runtime->lookupFunction(0x291A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293554u; }
        if (ctx->pc != 0x293554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoney__5CShopFv_0x291a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293554u; }
        if (ctx->pc != 0x293554u) { return; }
    }
    ctx->pc = 0x293554u;
label_293554:
    // 0x293554: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x293554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x293558: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x293558u;
    {
        const bool branch_taken_0x293558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293558) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293560u;
    // 0x293560: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x293560u;
    {
        const bool branch_taken_0x293560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293560u;
            // 0x293564: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293560) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293568u;
label_293568:
    // 0x293568: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x29356c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x29356cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x293570: 0x24424060  addiu       $v0, $v0, 0x4060
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16480));
    // 0x293574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x293578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29357c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293580: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293580u;
    SET_GPR_U32(ctx, 31, 0x293588u);
    ctx->pc = 0x293584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293580u;
            // 0x293584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293588u; }
        if (ctx->pc != 0x293588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293588u; }
        if (ctx->pc != 0x293588u) { return; }
    }
    ctx->pc = 0x293588u;
label_293588:
    // 0x293588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x293588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29358c: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x29358cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_293590:
    // 0x293590: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x293590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x293594: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293598: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293598u;
    {
        const bool branch_taken_0x293598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293598u;
            // 0x29359c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293598) {
            ctx->pc = 0x2935BCu;
            goto label_2935bc;
        }
    }
    ctx->pc = 0x2935A0u;
    // 0x2935a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2935a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2935a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2935a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935a8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2935A8u;
    SET_GPR_U32(ctx, 31, 0x2935B0u);
    ctx->pc = 0x2935ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2935A8u;
            // 0x2935ac: 0x24a5dbc0  addiu       $a1, $a1, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935B0u; }
        if (ctx->pc != 0x2935B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935B0u; }
        if (ctx->pc != 0x2935B0u) { return; }
    }
    ctx->pc = 0x2935B0u;
label_2935b0:
    // 0x2935b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2935b4: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x2935b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2935b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2935b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2935bc:
    // 0x2935bc: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x2935BCu;
    SET_GPR_U32(ctx, 31, 0x2935C4u);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935C4u; }
        if (ctx->pc != 0x2935C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935C4u; }
        if (ctx->pc != 0x2935C4u) { return; }
    }
    ctx->pc = 0x2935C4u;
label_2935c4:
    // 0x2935c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2935C4u;
    {
        const bool branch_taken_0x2935c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935C4u;
            // 0x2935c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935c4) {
            ctx->pc = 0x2935DCu;
            goto label_2935dc;
        }
    }
    ctx->pc = 0x2935CCu;
    // 0x2935cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2935ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935d0: 0xc065dc0  jal         func_197700
    ctx->pc = 0x2935D0u;
    SET_GPR_U32(ctx, 31, 0x2935D8u);
    ctx->pc = 0x2935D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2935D0u;
            // 0x2935d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935D8u; }
        if (ctx->pc != 0x2935D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935D8u; }
        if (ctx->pc != 0x2935D8u) { return; }
    }
    ctx->pc = 0x2935D8u;
label_2935d8:
    // 0x2935d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2935d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2935dc:
    // 0x2935dc: 0xdf829868  ld          $v0, -0x6798($gp)
    ctx->pc = 0x2935dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940776)));
    // 0x2935e0: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2935e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2935e4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2935e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2935e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2935e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2935ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2935f0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2935f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2935f4: 0xdf829870  ld          $v0, -0x6790($gp)
    ctx->pc = 0x2935f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940784)));
    // 0x2935f8: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x2935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x2935fc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2935fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x293600: 0x868201ca  lh          $v0, 0x1CA($s4)
    ctx->pc = 0x293600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x293604: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x293604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x293608: 0x8e8201c4  lw          $v0, 0x1C4($s4)
    ctx->pc = 0x293608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x29360c: 0xc087720  jal         func_21DC80
    ctx->pc = 0x29360Cu;
    SET_GPR_U32(ctx, 31, 0x293614u);
    ctx->pc = 0x293610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29360Cu;
            // 0x293610: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293614u; }
        if (ctx->pc != 0x293614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293614u; }
        if (ctx->pc != 0x293614u) { return; }
    }
    ctx->pc = 0x293614u;
label_293614:
    // 0x293614: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x293614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293618: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x293618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29361c: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x29361Cu;
    SET_GPR_U32(ctx, 31, 0x293624u);
    ctx->pc = 0x293620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29361Cu;
            // 0x293620: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293624u; }
        if (ctx->pc != 0x293624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293624u; }
        if (ctx->pc != 0x293624u) { return; }
    }
    ctx->pc = 0x293624u;
label_293624:
    // 0x293624: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x293624u;
    {
        const bool branch_taken_0x293624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293624) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x29362Cu;
label_29362c:
    // 0x29362c: 0x868501ca  lh          $a1, 0x1CA($s4)
    ctx->pc = 0x29362cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x293630: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x293630u;
    SET_GPR_U32(ctx, 31, 0x293638u);
    ctx->pc = 0x293634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293630u;
            // 0x293634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293638u; }
        if (ctx->pc != 0x293638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293638u; }
        if (ctx->pc != 0x293638u) { return; }
    }
    ctx->pc = 0x293638u;
label_293638:
    // 0x293638: 0x8e8501c4  lw          $a1, 0x1C4($s4)
    ctx->pc = 0x293638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x29363c: 0xc0a46b4  jal         func_291AD0
    ctx->pc = 0x29363Cu;
    SET_GPR_U32(ctx, 31, 0x293644u);
    ctx->pc = 0x293640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29363Cu;
            // 0x293640: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291AD0u;
    if (runtime->hasFunction(0x291AD0u)) {
        auto targetFn = runtime->lookupFunction(0x291AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293644u; }
        if (ctx->pc != 0x293644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__5CShopFi_0x291ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293644u; }
        if (ctx->pc != 0x293644u) { return; }
    }
    ctx->pc = 0x293644u;
label_293644:
    // 0x293644: 0xc0a4510  jal         func_291440
    ctx->pc = 0x293644u;
    SET_GPR_U32(ctx, 31, 0x29364Cu);
    ctx->pc = 0x293648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293644u;
            // 0x293648: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291440u;
    if (runtime->hasFunction(0x291440u)) {
        auto targetFn = runtime->lookupFunction(0x291440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29364Cu; }
        if (ctx->pc != 0x29364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSyojiHin__5CShopFv_0x291440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29364Cu; }
        if (ctx->pc != 0x29364Cu) { return; }
    }
    ctx->pc = 0x29364Cu;
label_29364c:
    // 0x29364c: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x29364Cu;
    SET_GPR_U32(ctx, 31, 0x293654u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293654u; }
        if (ctx->pc != 0x293654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293654u; }
        if (ctx->pc != 0x293654u) { return; }
    }
    ctx->pc = 0x293654u;
label_293654:
    // 0x293654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293658: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29365c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293660: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x293660u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x293664: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293664u;
    SET_GPR_U32(ctx, 31, 0x29366Cu);
    ctx->pc = 0x293668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293664u;
            // 0x293668: 0x24a5db98  addiu       $a1, $a1, -0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29366Cu; }
        if (ctx->pc != 0x29366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29366Cu; }
        if (ctx->pc != 0x29366Cu) { return; }
    }
    ctx->pc = 0x29366Cu;
label_29366c:
    // 0x29366c: 0x8e840144  lw          $a0, 0x144($s4)
    ctx->pc = 0x29366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
    // 0x293670: 0xc094280  jal         func_250A00
    ctx->pc = 0x293670u;
    SET_GPR_U32(ctx, 31, 0x293678u);
    ctx->pc = 0x293674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293670u;
            // 0x293674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293678u; }
        if (ctx->pc != 0x293678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293678u; }
        if (ctx->pc != 0x293678u) { return; }
    }
    ctx->pc = 0x293678u;
label_293678:
    // 0x293678: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x293678u;
    {
        const bool branch_taken_0x293678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293678) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x293680u;
label_293680:
    // 0x293680: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293684: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293688: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293688u;
    SET_GPR_U32(ctx, 31, 0x293690u);
    ctx->pc = 0x29368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293688u;
            // 0x29368c: 0x24a5dbd0  addiu       $a1, $a1, -0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293690u; }
        if (ctx->pc != 0x293690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293690u; }
        if (ctx->pc != 0x293690u) { return; }
    }
    ctx->pc = 0x293690u;
label_293690:
    // 0x293690: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x293690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x293694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293698: 0xae820208  sw          $v0, 0x208($s4)
    ctx->pc = 0x293698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 520), GPR_U32(ctx, 2));
    // 0x29369c: 0x8782985c  lh          $v0, -0x67A4($gp)
    ctx->pc = 0x29369cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940764)));
    // 0x2936a0: 0xc08cb34  jal         func_232CD0
    ctx->pc = 0x2936A0u;
    SET_GPR_U32(ctx, 31, 0x2936A8u);
    ctx->pc = 0x2936A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2936A0u;
            // 0x2936a4: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936A8u; }
        if (ctx->pc != 0x2936A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936A8u; }
        if (ctx->pc != 0x2936A8u) { return; }
    }
    ctx->pc = 0x2936A8u;
label_2936a8:
    // 0x2936a8: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2936A8u;
    {
        const bool branch_taken_0x2936a8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2936ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936A8u;
            // 0x2936ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936a8) {
            ctx->pc = 0x2936C0u;
            goto label_2936c0;
        }
    }
    ctx->pc = 0x2936B0u;
    // 0x2936b0: 0xae960208  sw          $s6, 0x208($s4)
    ctx->pc = 0x2936b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 520), GPR_U32(ctx, 22));
    // 0x2936b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2936b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2936b8: 0xafc217e4  sw          $v0, 0x17E4($fp)
    ctx->pc = 0x2936b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6116), GPR_U32(ctx, 2));
    // 0x2936bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2936bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2936c0:
    // 0x2936c0: 0x12c2002f  beq         $s6, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2936C0u;
    {
        const bool branch_taken_0x2936c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2936C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936C0u;
            // 0x2936c4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936c0) {
            ctx->pc = 0x293780u;
            goto label_293780;
        }
    }
    ctx->pc = 0x2936C8u;
    // 0x2936c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2936c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2936cc: 0x12c2001b  beq         $s6, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2936CCu;
    {
        const bool branch_taken_0x2936cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2936D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936CCu;
            // 0x2936d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936cc) {
            ctx->pc = 0x29373Cu;
            goto label_29373c;
        }
    }
    ctx->pc = 0x2936D4u;
    // 0x2936d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2936d8: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2936D8u;
    {
        const bool branch_taken_0x2936d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2936DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936D8u;
            // 0x2936dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936d8) {
            ctx->pc = 0x293720u;
            goto label_293720;
        }
    }
    ctx->pc = 0x2936E0u;
    // 0x2936e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2936e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2936e4: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2936E4u;
    {
        const bool branch_taken_0x2936e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2936E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936E4u;
            // 0x2936e8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936e4) {
            ctx->pc = 0x2936F4u;
            goto label_2936f4;
        }
    }
    ctx->pc = 0x2936ECu;
    // 0x2936ec: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2936ECu;
    {
        const bool branch_taken_0x2936ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2936F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936ECu;
            // 0x2936f0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936ec) {
            ctx->pc = 0x2937ACu;
            goto label_2937ac;
        }
    }
    ctx->pc = 0x2936F4u;
label_2936f4:
    // 0x2936f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2936f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2936f8: 0xa6830014  sh          $v1, 0x14($s4)
    ctx->pc = 0x2936f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2936fc: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x2936fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x293700: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x293704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x293708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29370c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29370cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293710: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293710u;
    SET_GPR_U32(ctx, 31, 0x293718u);
    ctx->pc = 0x293714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293710u;
            // 0x293714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293718u; }
        if (ctx->pc != 0x293718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293718u; }
        if (ctx->pc != 0x293718u) { return; }
    }
    ctx->pc = 0x293718u;
label_293718:
    // 0x293718: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x293718u;
    {
        const bool branch_taken_0x293718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293718) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x293720u;
label_293720:
    // 0x293720: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293724: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293728: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x293728u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x29372c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x29372Cu;
    SET_GPR_U32(ctx, 31, 0x293734u);
    ctx->pc = 0x293730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29372Cu;
            // 0x293730: 0x24a5dbf0  addiu       $a1, $a1, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293734u; }
        if (ctx->pc != 0x293734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293734u; }
        if (ctx->pc != 0x293734u) { return; }
    }
    ctx->pc = 0x293734u;
label_293734:
    // 0x293734: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x293734u;
    {
        const bool branch_taken_0x293734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293734) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x29373Cu;
label_29373c:
    // 0x29373c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29373cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293744: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x293744u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x293748: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x293748u;
    SET_GPR_U32(ctx, 31, 0x293750u);
    ctx->pc = 0x29374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293748u;
            // 0x29374c: 0x24a5dc08  addiu       $a1, $a1, -0x23F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293750u; }
        if (ctx->pc != 0x293750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293750u; }
        if (ctx->pc != 0x293750u) { return; }
    }
    ctx->pc = 0x293750u;
label_293750:
    // 0x293750: 0xc7809878  lwc1        $f0, -0x6788($gp)
    ctx->pc = 0x293750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293754: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x293754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x293758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29375c: 0xc065810  jal         func_196040
    ctx->pc = 0x29375Cu;
    SET_GPR_U32(ctx, 31, 0x293764u);
    ctx->pc = 0x293760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29375Cu;
            // 0x293760: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293764u; }
        if (ctx->pc != 0x293764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293764u; }
        if (ctx->pc != 0x293764u) { return; }
    }
    ctx->pc = 0x293764u;
label_293764:
    // 0x293764: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x293764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x293768: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x293768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29376c: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x29376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x293770: 0xc087720  jal         func_21DC80
    ctx->pc = 0x293770u;
    SET_GPR_U32(ctx, 31, 0x293778u);
    ctx->pc = 0x293774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293770u;
            // 0x293774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293778u; }
        if (ctx->pc != 0x293778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293778u; }
        if (ctx->pc != 0x293778u) { return; }
    }
    ctx->pc = 0x293778u;
label_293778:
    // 0x293778: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x293778u;
    {
        const bool branch_taken_0x293778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293778) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x293780u;
label_293780:
    // 0x293780: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293788: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x293788u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x29378c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x29378Cu;
    SET_GPR_U32(ctx, 31, 0x293794u);
    ctx->pc = 0x293790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29378Cu;
            // 0x293790: 0x24a5dc18  addiu       $a1, $a1, -0x23E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293794u; }
        if (ctx->pc != 0x293794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293794u; }
        if (ctx->pc != 0x293794u) { return; }
    }
    ctx->pc = 0x293794u;
label_293794:
    // 0x293794: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x293794u;
    {
        const bool branch_taken_0x293794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293794) {
            ctx->pc = 0x2937A8u;
            goto label_2937a8;
        }
    }
    ctx->pc = 0x29379Cu;
label_29379c:
    // 0x29379c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29379cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937a0: 0xc08e7d4  jal         func_239F50
    ctx->pc = 0x2937A0u;
    SET_GPR_U32(ctx, 31, 0x2937A8u);
    ctx->pc = 0x2937A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937A0u;
            // 0x2937a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F50u;
    if (runtime->hasFunction(0x239F50u)) {
        auto targetFn = runtime->lookupFunction(0x239F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937A8u; }
        if (ctx->pc != 0x2937A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendCommand__14CBaseMenuClassFii_0x239f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937A8u; }
        if (ctx->pc != 0x2937A8u) { return; }
    }
    ctx->pc = 0x2937A8u;
label_2937a8:
    // 0x2937a8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2937a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2937ac:
    // 0x2937ac: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x2937ACu;
    SET_GPR_U32(ctx, 31, 0x2937B4u);
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937B4u; }
        if (ctx->pc != 0x2937B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937B4u; }
        if (ctx->pc != 0x2937B4u) { return; }
    }
    ctx->pc = 0x2937B4u;
label_2937b4:
    // 0x2937b4: 0xc0a4e0c  jal         func_293830
    ctx->pc = 0x2937B4u;
    SET_GPR_U32(ctx, 31, 0x2937BCu);
    ctx->pc = 0x2937B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937B4u;
            // 0x2937b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293830u;
    if (runtime->hasFunction(0x293830u)) {
        auto targetFn = runtime->lookupFunction(0x293830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937BCu; }
        if (ctx->pc != 0x2937BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__9CShopMenuFv_0x293830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937BCu; }
        if (ctx->pc != 0x2937BCu) { return; }
    }
    ctx->pc = 0x2937BCu;
label_2937bc:
    // 0x2937bc: 0xc0a4fc4  jal         func_293F10
    ctx->pc = 0x2937BCu;
    SET_GPR_U32(ctx, 31, 0x2937C4u);
    ctx->pc = 0x2937C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937BCu;
            // 0x2937c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F10u;
    if (runtime->hasFunction(0x293F10u)) {
        auto targetFn = runtime->lookupFunction(0x293F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937C4u; }
        if (ctx->pc != 0x2937C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__9CShopMenuFv_0x293f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937C4u; }
        if (ctx->pc != 0x2937C4u) { return; }
    }
    ctx->pc = 0x2937C4u;
label_2937c4:
    // 0x2937c4: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x2937C4u;
    SET_GPR_U32(ctx, 31, 0x2937CCu);
    ctx->pc = 0x2937C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937C4u;
            // 0x2937c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937CCu; }
        if (ctx->pc != 0x2937CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937CCu; }
        if (ctx->pc != 0x2937CCu) { return; }
    }
    ctx->pc = 0x2937CCu;
label_2937cc:
    // 0x2937cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2937CCu;
    {
        const bool branch_taken_0x2937cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2937CCu;
            // 0x2937d0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937cc) {
            ctx->pc = 0x2937ECu;
            goto label_2937ec;
        }
    }
    ctx->pc = 0x2937D4u;
    // 0x2937d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2937d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2937d8: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2937dc: 0xc0877f0  jal         func_21DFC0
    ctx->pc = 0x2937DCu;
    SET_GPR_U32(ctx, 31, 0x2937E4u);
    ctx->pc = 0x2937E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937DCu;
            // 0x2937e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DFC0u;
    if (runtime->hasFunction(0x21DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937E4u; }
        if (ctx->pc != 0x2937E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937E4u; }
        if (ctx->pc != 0x2937E4u) { return; }
    }
    ctx->pc = 0x2937E4u;
label_2937e4:
    // 0x2937e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2937E4u;
    {
        const bool branch_taken_0x2937e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2937E4u;
            // 0x2937e8: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937e4) {
            ctx->pc = 0x2937FCu;
            goto label_2937fc;
        }
    }
    ctx->pc = 0x2937ECu;
label_2937ec:
    // 0x2937ec: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2937ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2937f0: 0xc0877f0  jal         func_21DFC0
    ctx->pc = 0x2937F0u;
    SET_GPR_U32(ctx, 31, 0x2937F8u);
    ctx->pc = 0x2937F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937F0u;
            // 0x2937f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DFC0u;
    if (runtime->hasFunction(0x21DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937F8u; }
        if (ctx->pc != 0x2937F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937F8u; }
        if (ctx->pc != 0x2937F8u) { return; }
    }
    ctx->pc = 0x2937F8u;
label_2937f8:
    // 0x2937f8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2937f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2937fc:
    // 0x2937fc: 0x0  nop
    ctx->pc = 0x2937fcu;
    // NOP
    // 0x293800: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x293800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_293804:
    // 0x293804: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x293804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x293808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x293808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29380c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29380cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x293810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x293814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x293818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29381c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29381cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293828: 0x3e00008  jr          $ra
    ctx->pc = 0x293828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293828u;
            // 0x29382c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293830u;
}
