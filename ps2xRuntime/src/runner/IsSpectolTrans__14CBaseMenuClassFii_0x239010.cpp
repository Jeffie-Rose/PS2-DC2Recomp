#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsSpectolTrans__14CBaseMenuClassFii
// Address: 0x239010 - 0x23941c
void IsSpectolTrans__14CBaseMenuClassFii_0x239010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSpectolTrans__14CBaseMenuClassFii_0x239010");
#endif

    switch (ctx->pc) {
        case 0x239098u: goto label_239098;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390ecu: goto label_2390ec;
        case 0x239108u: goto label_239108;
        case 0x239124u: goto label_239124;
        case 0x239134u: goto label_239134;
        case 0x23915cu: goto label_23915c;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391bcu: goto label_2391bc;
        case 0x239240u: goto label_239240;
        case 0x239260u: goto label_239260;
        case 0x23926cu: goto label_23926c;
        case 0x23927cu: goto label_23927c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392f0u: goto label_2392f0;
        case 0x239300u: goto label_239300;
        case 0x239318u: goto label_239318;
        case 0x23934cu: goto label_23934c;
        case 0x239360u: goto label_239360;
        case 0x239374u: goto label_239374;
        case 0x239380u: goto label_239380;
        case 0x23938cu: goto label_23938c;
        case 0x239394u: goto label_239394;
        case 0x2393f0u: goto label_2393f0;
        default: break;
    }

    ctx->pc = 0x239010u;

    // 0x239010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x239010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x239014: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x239018: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x239018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23901c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x239020: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x239020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x239024: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x239024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23902c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x23902cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x239030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239034: 0x24c6ca40  addiu       $a2, $a2, -0x35C0
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953536));
    // 0x239038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23903c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23903cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239044: 0x8487005a  lh          $a3, 0x5A($a0)
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x239048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23904c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x239050: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x239054: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x239058: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x239058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x23905c: 0x2484cb30  addiu       $a0, $a0, -0x34D0
    ctx->pc = 0x23905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    // 0x239060: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239064: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x239064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x239068: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x239068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23906c: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x23906Cu;
    {
        const bool branch_taken_0x23906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23906Cu;
            // 0x239070: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23906c) {
            ctx->pc = 0x2392ACu;
            goto label_2392ac;
        }
    }
    ctx->pc = 0x239074u;
    // 0x239074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239078: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x239078u;
    {
        const bool branch_taken_0x239078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x239078) {
            ctx->pc = 0x239180u;
            goto label_239180;
        }
    }
    ctx->pc = 0x239080u;
    // 0x239080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239080u;
    {
        const bool branch_taken_0x239080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239080u;
            // 0x239084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239080) {
            ctx->pc = 0x239090u;
            goto label_239090;
        }
    }
    ctx->pc = 0x239088u;
    // 0x239088: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x239088u;
    {
        const bool branch_taken_0x239088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239088) {
            ctx->pc = 0x2393ACu;
            goto label_2393ac;
        }
    }
    ctx->pc = 0x239090u;
label_239090:
    // 0x239090: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x239090u;
    SET_GPR_U32(ctx, 31, 0x239098u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239098u; }
        if (ctx->pc != 0x239098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239098u; }
        if (ctx->pc != 0x239098u) { return; }
    }
    ctx->pc = 0x239098u;
label_239098:
    // 0x239098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23909c: 0x12a20036  beq         $s5, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x23909Cu;
    {
        const bool branch_taken_0x23909c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2390A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23909Cu;
            // 0x2390a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23909c) {
            ctx->pc = 0x239178u;
            goto label_239178;
        }
    }
    ctx->pc = 0x2390A4u;
    // 0x2390a4: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2390A4u;
    {
        const bool branch_taken_0x2390a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390A4u;
            // 0x2390a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390a4) {
            ctx->pc = 0x2390C0u;
            goto label_2390c0;
        }
    }
    ctx->pc = 0x2390ACu;
    // 0x2390ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2390b0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2390B0u;
    {
        const bool branch_taken_0x2390b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2390b0) {
            ctx->pc = 0x2390C0u;
            goto label_2390c0;
        }
    }
    ctx->pc = 0x2390B8u;
    // 0x2390b8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2390B8u;
    {
        const bool branch_taken_0x2390b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390b8) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2390C0u;
label_2390c0:
    // 0x2390c0: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2390C0u;
    SET_GPR_U32(ctx, 31, 0x2390C8u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390C8u; }
        if (ctx->pc != 0x2390C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390C8u; }
        if (ctx->pc != 0x2390C8u) { return; }
    }
    ctx->pc = 0x2390C8u;
label_2390c8:
    // 0x2390c8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2390C8u;
    {
        const bool branch_taken_0x2390c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2390c8) {
            ctx->pc = 0x239178u;
            goto label_239178;
        }
    }
    ctx->pc = 0x2390D0u;
    // 0x2390d0: 0xc08e3e8  jal         func_238FA0
    ctx->pc = 0x2390D0u;
    SET_GPR_U32(ctx, 31, 0x2390D8u);
    ctx->pc = 0x2390D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2390D0u;
            // 0x2390d4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238FA0u;
    if (runtime->hasFunction(0x238FA0u)) {
        auto targetFn = runtime->lookupFunction(0x238FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390D8u; }
        if (ctx->pc != 0x2390D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipFishRod__FP13CGameDataUsed_0x238fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390D8u; }
        if (ctx->pc != 0x2390D8u) { return; }
    }
    ctx->pc = 0x2390D8u;
label_2390d8:
    // 0x2390d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2390d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2390dc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2390DCu;
    {
        const bool branch_taken_0x2390dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2390E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390DCu;
            // 0x2390e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390dc) {
            ctx->pc = 0x2390F4u;
            goto label_2390f4;
        }
    }
    ctx->pc = 0x2390E4u;
    // 0x2390e4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2390E4u;
    SET_GPR_U32(ctx, 31, 0x2390ECu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390ECu; }
        if (ctx->pc != 0x2390ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2390ECu; }
        if (ctx->pc != 0x2390ECu) { return; }
    }
    ctx->pc = 0x2390ECu;
label_2390ec:
    // 0x2390ec: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2390ECu;
    {
        const bool branch_taken_0x2390ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390ec) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2390F4u;
label_2390f4:
    // 0x2390f4: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x2390f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2390f8: 0xaf828374  sw          $v0, -0x7C8C($gp)
    ctx->pc = 0x2390f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935412), GPR_U32(ctx, 2));
    // 0x2390fc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2390fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x239100: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x239100u;
    SET_GPR_U32(ctx, 31, 0x239108u);
    ctx->pc = 0x239104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239100u;
            // 0x239104: 0x87919610  lh          $s1, -0x69F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239108u; }
        if (ctx->pc != 0x239108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239108u; }
        if (ctx->pc != 0x239108u) { return; }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239108u;
    {
        const bool branch_taken_0x239108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x239108) {
            ctx->pc = 0x23911Cu;
            goto label_23911c;
        }
    }
    ctx->pc = 0x239110u;
    // 0x239110: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x239114: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x239114u;
    {
        const bool branch_taken_0x239114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239114u;
            // 0x239118: 0xa7829628  sh          $v0, -0x69D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940200), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239114) {
            ctx->pc = 0x239140u;
            goto label_239140;
        }
    }
    ctx->pc = 0x23911Cu;
label_23911c:
    // 0x23911c: 0xc067610  jal         func_19D840
    ctx->pc = 0x23911Cu;
    SET_GPR_U32(ctx, 31, 0x239124u);
    ctx->pc = 0x239120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23911Cu;
            // 0x239120: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239124u; }
        if (ctx->pc != 0x239124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239124u; }
        if (ctx->pc != 0x239124u) { return; }
    }
    ctx->pc = 0x239124u;
label_239124:
    // 0x239124: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239124u;
    {
        const bool branch_taken_0x239124 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x239128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239124u;
            // 0x239128: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239124) {
            ctx->pc = 0x23913Cu;
            goto label_23913c;
        }
    }
    ctx->pc = 0x23912Cu;
    // 0x23912c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23912Cu;
    SET_GPR_U32(ctx, 31, 0x239134u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239134u; }
        if (ctx->pc != 0x239134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239134u; }
        if (ctx->pc != 0x239134u) { return; }
    }
    ctx->pc = 0x239134u;
label_239134:
    // 0x239134: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x239134u;
    {
        const bool branch_taken_0x239134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239134) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x23913Cu;
label_23913c:
    // 0x23913c: 0xa7829628  sh          $v0, -0x69D8($gp)
    ctx->pc = 0x23913cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940200), (uint16_t)GPR_U32(ctx, 2));
label_239140:
    // 0x239140: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x239140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x239144: 0xaf80961c  sw          $zero, -0x69E4($gp)
    ctx->pc = 0x239144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940188), GPR_U32(ctx, 0));
    // 0x239148: 0xaf82837c  sw          $v0, -0x7C84($gp)
    ctx->pc = 0x239148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935420), GPR_U32(ctx, 2));
    // 0x23914c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239150: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x239150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x239154: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239154u;
    SET_GPR_U32(ctx, 31, 0x23915Cu);
    ctx->pc = 0x239158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239154u;
            // 0x239158: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23915Cu; }
        if (ctx->pc != 0x23915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23915Cu; }
        if (ctx->pc != 0x23915Cu) { return; }
    }
    ctx->pc = 0x23915Cu;
label_23915c:
    // 0x23915c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239160: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x239160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x239164: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239164u;
    {
        const bool branch_taken_0x239164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239164u;
            // 0x239168: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239164) {
            ctx->pc = 0x239170u;
            goto label_239170;
        }
    }
    ctx->pc = 0x23916Cu;
    // 0x23916c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x23916cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_239170:
    // 0x239170: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x239170u;
    {
        const bool branch_taken_0x239170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239170) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x239178u;
    {
        const bool branch_taken_0x239178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239178u;
            // 0x23917c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239178) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
    // 0x239184: 0x80510009  lb          $s1, 0x9($v0)
    ctx->pc = 0x239184u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x239188: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x239188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23918c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23918Cu;
    {
        const bool branch_taken_0x23918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23918Cu;
            // 0x239190: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23918c) {
            ctx->pc = 0x2391D4u;
            goto label_2391d4;
        }
    }
    ctx->pc = 0x239194u;
    // 0x239194: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x239194u;
    {
        const bool branch_taken_0x239194 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x239198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239194u;
            // 0x239198: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239194) {
            ctx->pc = 0x2391C4u;
            goto label_2391c4;
        }
    }
    ctx->pc = 0x23919Cu;
    // 0x23919c: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2391a0: 0xc08ebd8  jal         func_23AF60
    ctx->pc = 0x2391A0u;
    SET_GPR_U32(ctx, 31, 0x2391A8u);
    ctx->pc = 0x2391A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2391A0u;
            // 0x2391a4: 0x87859610  lh          $a1, -0x69F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AF60u;
    if (runtime->hasFunction(0x23AF60u)) {
        auto targetFn = runtime->lookupFunction(0x23AF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391A8u; }
        if (ctx->pc != 0x2391A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransSpectolDataSave__FP13CGameDataUsedi_0x23af60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391A8u; }
        if (ctx->pc != 0x2391A8u) { return; }
    }
    ctx->pc = 0x2391A8u;
label_2391a8:
    // 0x2391a8: 0x87829628  lh          $v0, -0x69D8($gp)
    ctx->pc = 0x2391a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940200)));
    // 0x2391ac: 0xaf828374  sw          $v0, -0x7C8C($gp)
    ctx->pc = 0x2391acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935412), GPR_U32(ctx, 2));
    // 0x2391b0: 0x8f858374  lw          $a1, -0x7C8C($gp)
    ctx->pc = 0x2391b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
    // 0x2391b4: 0xc066d14  jal         func_19B450
    ctx->pc = 0x2391B4u;
    SET_GPR_U32(ctx, 31, 0x2391BCu);
    ctx->pc = 0x2391B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2391B4u;
            // 0x2391b8: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391BCu; }
        if (ctx->pc != 0x2391BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391BCu; }
        if (ctx->pc != 0x2391BCu) { return; }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x2391bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x2391c0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2391c4:
    // 0x2391c4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2391C4u;
    {
        const bool branch_taken_0x2391c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391C4u;
            // 0x2391c8: 0xa3809620  sb          $zero, -0x69E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391c4) {
            ctx->pc = 0x2391D4u;
            goto label_2391d4;
        }
    }
    ctx->pc = 0x2391CCu;
    // 0x2391cc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2391CCu;
    {
        const bool branch_taken_0x2391cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391CCu;
            // 0x2391d0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391cc) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2391D4u;
label_2391d4:
    // 0x2391d4: 0x83829620  lb          $v0, -0x69E0($gp)
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940192)));
    // 0x2391d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2391D8u;
    {
        const bool branch_taken_0x2391d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2391DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391D8u;
            // 0x2391dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391d8) {
            ctx->pc = 0x239248u;
            goto label_239248;
        }
    }
    ctx->pc = 0x2391E0u;
    // 0x2391e0: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2391E0u;
    {
        const bool branch_taken_0x2391e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2391e0) {
            ctx->pc = 0x239248u;
            goto label_239248;
        }
    }
    ctx->pc = 0x2391E8u;
    // 0x2391e8: 0x8f8395c8  lw          $v1, -0x6A38($gp)
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
    // 0x2391ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2391f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2391f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2391f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2391f8: 0xc4411bdc  lwc1        $f1, 0x1BDC($v0)
    ctx->pc = 0x2391f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2391fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2391fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239200: 0x0  nop
    ctx->pc = 0x239200u;
    // NOP
    // 0x239204: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x239204u;
    {
        const bool branch_taken_0x239204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x239208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239204u;
            // 0x239208: 0x24431bc0  addiu       $v1, $v0, 0x1BC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239204) {
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x23920Cu;
    // 0x23920c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x23920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239210: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x239214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239218: 0x0  nop
    ctx->pc = 0x239218u;
    // NOP
    // 0x23921c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23921cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239220: 0x0  nop
    ctx->pc = 0x239220u;
    // NOP
    // 0x239224: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x239224u;
    {
        const bool branch_taken_0x239224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239224) {
            ctx->pc = 0x239248u;
            goto label_239248;
        }
    }
    ctx->pc = 0x23922Cu;
label_23922c:
    // 0x23922c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x23922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x239230: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x239234: 0x2484dd70  addiu       $a0, $a0, -0x2290
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
    // 0x239238: 0xc066284  jal         func_198A10
    ctx->pc = 0x239238u;
    SET_GPR_U32(ctx, 31, 0x239240u);
    ctx->pc = 0x23923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239238u;
            // 0x23923c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198A10u;
    if (runtime->hasFunction(0x198A10u)) {
        auto targetFn = runtime->lookupFunction(0x198A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239240u; }
        if (ctx->pc != 0x239240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239240u; }
        if (ctx->pc != 0x239240u) { return; }
    }
    ctx->pc = 0x239240u;
label_239240:
    // 0x239240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239244: 0xa3829620  sb          $v0, -0x69E0($gp)
    ctx->pc = 0x239244u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940192), (uint8_t)GPR_U32(ctx, 2));
label_239248:
    // 0x239248: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x239248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
    // 0x23924c: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x23924cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x239250: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x239250u;
    {
        const bool branch_taken_0x239250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239250) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x239258u;
    // 0x239258: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x239258u;
    SET_GPR_U32(ctx, 31, 0x239260u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239260u; }
        if (ctx->pc != 0x239260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239260u; }
        if (ctx->pc != 0x239260u) { return; }
    }
    ctx->pc = 0x239260u;
label_239260:
    // 0x239260: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239264: 0xc08fbd0  jal         func_23EF40
    ctx->pc = 0x239264u;
    SET_GPR_U32(ctx, 31, 0x23926Cu);
    ctx->pc = 0x239268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239264u;
            // 0x239268: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF40u;
    if (runtime->hasFunction(0x23EF40u)) {
        auto targetFn = runtime->lookupFunction(0x23EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23926Cu; }
        if (ctx->pc != 0x23926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23926Cu; }
        if (ctx->pc != 0x23926Cu) { return; }
    }
    ctx->pc = 0x23926Cu;
label_23926c:
    // 0x23926c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239274: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x239274u;
    SET_GPR_U32(ctx, 31, 0x23927Cu);
    ctx->pc = 0x239278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239274u;
            // 0x239278: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23927Cu; }
        if (ctx->pc != 0x23927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23927Cu; }
        if (ctx->pc != 0x23927Cu) { return; }
    }
    ctx->pc = 0x23927Cu;
label_23927c:
    // 0x23927c: 0x83829620  lb          $v0, -0x69E0($gp)
    ctx->pc = 0x23927cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940192)));
    // 0x239280: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239284: 0xaf80961c  sw          $zero, -0x69E4($gp)
    ctx->pc = 0x239284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940188), GPR_U32(ctx, 0));
    // 0x239288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239288u;
            // 0x23928c: 0xaf868374  sw          $a2, -0x7C8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392A0u;
            goto label_2392a0;
        }
    }
    ctx->pc = 0x239290u;
    // 0x239290: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x239294: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x239294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x239298: 0xc066284  jal         func_198A10
    ctx->pc = 0x239298u;
    SET_GPR_U32(ctx, 31, 0x2392A0u);
    ctx->pc = 0x23929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239298u;
            // 0x23929c: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198A10u;
    if (runtime->hasFunction(0x198A10u)) {
        auto targetFn = runtime->lookupFunction(0x198A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392A0u; }
        if (ctx->pc != 0x2392A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392A0u; }
        if (ctx->pc != 0x2392A0u) { return; }
    }
    ctx->pc = 0x2392A0u;
label_2392a0:
    // 0x2392a0: 0xa3809620  sb          $zero, -0x69E0($gp)
    ctx->pc = 0x2392a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2392a4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2392A4u;
    {
        const bool branch_taken_0x2392a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392A4u;
            // 0x2392a8: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392a4) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2392acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392b0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2392b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2392b4: 0xc08e254  jal         func_238950
    ctx->pc = 0x2392B4u;
    SET_GPR_U32(ctx, 31, 0x2392BCu);
    ctx->pc = 0x2392B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392B4u;
            // 0x2392b8: 0x8786960c  lh          $a2, -0x69F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238950u;
    if (runtime->hasFunction(0x238950u)) {
        auto targetFn = runtime->lookupFunction(0x238950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392BCu; }
        if (ctx->pc != 0x2392BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuHowMuchNumSelect__FiP13CGameDataUsedi_0x238950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392BCu; }
        if (ctx->pc != 0x2392BCu) { return; }
    }
    ctx->pc = 0x2392BCu;
label_2392bc:
    // 0x2392bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2392BCu;
    {
        const bool branch_taken_0x2392bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392BCu;
            // 0x2392c0: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392bc) {
            ctx->pc = 0x2392D8u;
            goto label_2392d8;
        }
    }
    ctx->pc = 0x2392C4u;
    // 0x2392c4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2392c8: 0x8f869608  lw          $a2, -0x69F8($gp)
    ctx->pc = 0x2392c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x2392cc: 0xc08e3bc  jal         func_238EF0
    ctx->pc = 0x2392CCu;
    SET_GPR_U32(ctx, 31, 0x2392D4u);
    ctx->pc = 0x2392D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392CCu;
            // 0x2392d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238EF0u;
    if (runtime->hasFunction(0x238EF0u)) {
        auto targetFn = runtime->lookupFunction(0x238EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392D4u; }
        if (ctx->pc != 0x2392D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataInfoSpectolBreakItem__FP7CDC2MesP13CGameDataUsedi_0x238ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392D4u; }
        if (ctx->pc != 0x2392D4u) { return; }
    }
    ctx->pc = 0x2392D4u;
label_2392d4:
    // 0x2392d4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2392d8:
    // 0x2392d8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2392D8u;
    {
        const bool branch_taken_0x2392d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392D8u;
            // 0x2392dc: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392d8) {
            ctx->pc = 0x23939Cu;
            goto label_23939c;
        }
    }
    ctx->pc = 0x2392E0u;
    // 0x2392e0: 0x87829608  lh          $v0, -0x69F8($gp)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x2392e4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2392e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2392e8: 0xc067610  jal         func_19D840
    ctx->pc = 0x2392E8u;
    SET_GPR_U32(ctx, 31, 0x2392F0u);
    ctx->pc = 0x2392ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392E8u;
            // 0x2392ec: 0xa7829610  sh          $v0, -0x69F0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392F0u; }
        if (ctx->pc != 0x2392F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392F0u; }
        if (ctx->pc != 0x2392F0u) { return; }
    }
    ctx->pc = 0x2392F0u;
label_2392f0:
    // 0x2392f0: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2392F0u;
    {
        const bool branch_taken_0x2392f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2392f0) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x2392F8u;
    // 0x2392f8: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x2392F8u;
    SET_GPR_U32(ctx, 31, 0x239300u);
    ctx->pc = 0x2392FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392F8u;
            // 0x2392fc: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239300u; }
        if (ctx->pc != 0x239300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239300u; }
        if (ctx->pc != 0x239300u) { return; }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x8f839608  lw          $v1, -0x69F8($gp)
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x239304: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x239304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x239308: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x239308u;
    {
        const bool branch_taken_0x239308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239308u;
            // 0x23930c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239308) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x239310u;
    // 0x239310: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239310u;
    SET_GPR_U32(ctx, 31, 0x239318u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239318u; }
        if (ctx->pc != 0x239318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239318u; }
        if (ctx->pc != 0x239318u) { return; }
    }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x239318u;
    {
        const bool branch_taken_0x239318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239318) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x239320u;
label_239320:
    // 0x239320: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239324: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x239328: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x239328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23932c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x23932cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239330: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239334: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x239338: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239338u;
    {
        const bool branch_taken_0x239338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239338u;
            // 0x23933c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239338) {
            ctx->pc = 0x239344u;
            goto label_239344;
        }
    }
    ctx->pc = 0x239340u;
    // 0x239340: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x239340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_239344:
    // 0x239344: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x239344u;
    SET_GPR_U32(ctx, 31, 0x23934Cu);
    ctx->pc = 0x239348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239344u;
            // 0x239348: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23934Cu; }
        if (ctx->pc != 0x23934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23934Cu; }
        if (ctx->pc != 0x23934Cu) { return; }
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x23934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x239350: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x239350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x239354: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x239358: 0xc065dc0  jal         func_197700
    ctx->pc = 0x239358u;
    SET_GPR_U32(ctx, 31, 0x239360u);
    ctx->pc = 0x23935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239358u;
            // 0x23935c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239360u; }
        if (ctx->pc != 0x239360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239360u; }
        if (ctx->pc != 0x239360u) { return; }
    }
    ctx->pc = 0x239360u;
label_239360:
    // 0x239360: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239360u;
    {
        const bool branch_taken_0x239360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239360u;
            // 0x239364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239360) {
            ctx->pc = 0x239378u;
            goto label_239378;
        }
    }
    ctx->pc = 0x239368u;
    // 0x239368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23936c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x23936Cu;
    SET_GPR_U32(ctx, 31, 0x239374u);
    ctx->pc = 0x239370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23936Cu;
            // 0x239370: 0x26241801  addiu       $a0, $s1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239374u; }
        if (ctx->pc != 0x239374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239374u; }
        if (ctx->pc != 0x239374u) { return; }
    }
    ctx->pc = 0x239374u;
label_239374:
    // 0x239374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239378:
    // 0x239378: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x239378u;
    SET_GPR_U32(ctx, 31, 0x239380u);
    ctx->pc = 0x23937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239378u;
            // 0x23937c: 0x240500ae  addiu       $a1, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239380u; }
        if (ctx->pc != 0x239380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239380u; }
        if (ctx->pc != 0x239380u) { return; }
    }
    ctx->pc = 0x239380u;
label_239380:
    // 0x239380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239384: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x239384u;
    SET_GPR_U32(ctx, 31, 0x23938Cu);
    ctx->pc = 0x239388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239384u;
            // 0x239388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23938Cu; }
        if (ctx->pc != 0x23938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23938Cu; }
        if (ctx->pc != 0x23938Cu) { return; }
    }
    ctx->pc = 0x23938Cu;
label_23938c:
    // 0x23938c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23938Cu;
    SET_GPR_U32(ctx, 31, 0x239394u);
    ctx->pc = 0x239390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23938Cu;
            // 0x239390: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239394u; }
        if (ctx->pc != 0x239394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239394u; }
        if (ctx->pc != 0x239394u) { return; }
    }
    ctx->pc = 0x239394u;
label_239394:
    // 0x239394: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x239394u;
    {
        const bool branch_taken_0x239394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239394) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x23939Cu;
label_23939c:
    // 0x23939c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23939Cu;
    {
        const bool branch_taken_0x23939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23939c) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2393A4u;
    // 0x2393a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2393A4u;
    {
        const bool branch_taken_0x2393a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393A4u;
            // 0x2393a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393a4) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2393ACu;
label_2393ac:
    // 0x2393ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2393ACu;
    {
        const bool branch_taken_0x2393ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393ACu;
            // 0x2393b0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393ac) {
            ctx->pc = 0x2393FCu;
            goto label_2393fc;
        }
    }
    ctx->pc = 0x2393B4u;
label_2393b4:
    // 0x2393b4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2393B4u;
    {
        const bool branch_taken_0x2393b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393B4u;
            // 0x2393b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393b4) {
            ctx->pc = 0x2393F8u;
            goto label_2393f8;
        }
    }
    ctx->pc = 0x2393BCu;
    // 0x2393bc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2393c0: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x2393c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x2393c4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2393c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393c8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2393c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393cc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2393d0: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x2393d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2393d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2393D4u;
    {
        const bool branch_taken_0x2393d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393D4u;
            // 0x2393d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393d4) {
            ctx->pc = 0x2393E0u;
            goto label_2393e0;
        }
    }
    ctx->pc = 0x2393DCu;
    // 0x2393dc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x2393dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_2393e0:
    // 0x2393e0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2393e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2393e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2393e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2393e8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2393E8u;
    SET_GPR_U32(ctx, 31, 0x2393F0u);
    ctx->pc = 0x2393ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2393E8u;
            // 0x2393ec: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393F0u; }
        if (ctx->pc != 0x2393F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393F0u; }
        if (ctx->pc != 0x2393F0u) { return; }
    }
    ctx->pc = 0x2393F0u;
label_2393f0:
    // 0x2393f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2393f4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2393f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2393f8:
    // 0x2393f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2393f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2393fc:
    // 0x2393fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2393fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239400: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x239400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23940c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23940cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239414: 0x3e00008  jr          $ra
    ctx->pc = 0x239414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239414u;
            // 0x239418: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23941Cu;
}
