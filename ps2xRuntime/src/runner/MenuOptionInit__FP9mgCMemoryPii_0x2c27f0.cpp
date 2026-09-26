#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuOptionInit__FP9mgCMemoryPii
// Address: 0x2c27f0 - 0x2c2da4
void MenuOptionInit__FP9mgCMemoryPii_0x2c27f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuOptionInit__FP9mgCMemoryPii_0x2c27f0");
#endif

    switch (ctx->pc) {
        case 0x2c2838u: goto label_2c2838;
        case 0x2c2848u: goto label_2c2848;
        case 0x2c2854u: goto label_2c2854;
        case 0x2c2864u: goto label_2c2864;
        case 0x2c2880u: goto label_2c2880;
        case 0x2c2978u: goto label_2c2978;
        case 0x2c29d4u: goto label_2c29d4;
        case 0x2c2a24u: goto label_2c2a24;
        case 0x2c2a38u: goto label_2c2a38;
        case 0x2c2a50u: goto label_2c2a50;
        case 0x2c2a64u: goto label_2c2a64;
        case 0x2c2a7cu: goto label_2c2a7c;
        case 0x2c2a98u: goto label_2c2a98;
        case 0x2c2ab0u: goto label_2c2ab0;
        case 0x2c2ac4u: goto label_2c2ac4;
        case 0x2c2ae0u: goto label_2c2ae0;
        case 0x2c2ae8u: goto label_2c2ae8;
        case 0x2c2af8u: goto label_2c2af8;
        case 0x2c2b0cu: goto label_2c2b0c;
        case 0x2c2b20u: goto label_2c2b20;
        case 0x2c2b2cu: goto label_2c2b2c;
        case 0x2c2b48u: goto label_2c2b48;
        case 0x2c2b64u: goto label_2c2b64;
        case 0x2c2b70u: goto label_2c2b70;
        case 0x2c2b94u: goto label_2c2b94;
        case 0x2c2ba4u: goto label_2c2ba4;
        case 0x2c2bb4u: goto label_2c2bb4;
        case 0x2c2bc0u: goto label_2c2bc0;
        case 0x2c2c04u: goto label_2c2c04;
        case 0x2c2c18u: goto label_2c2c18;
        case 0x2c2c30u: goto label_2c2c30;
        case 0x2c2cd8u: goto label_2c2cd8;
        case 0x2c2d20u: goto label_2c2d20;
        case 0x2c2d28u: goto label_2c2d28;
        case 0x2c2d4cu: goto label_2c2d4c;
        case 0x2c2d6cu: goto label_2c2d6c;
        case 0x2c2d78u: goto label_2c2d78;
        case 0x2c2d84u: goto label_2c2d84;
        default: break;
    }

    ctx->pc = 0x2c27f0u;

    // 0x2c27f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c27f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c27f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c27fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c2800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2808: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c2808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c280c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2810: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c2810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2814: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2c2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c2818: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2c2818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2c281c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2c281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c2820: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c2820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2824: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c2824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c2828: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c2828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c282c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2c282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2830: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2C2830u;
    SET_GPR_U32(ctx, 31, 0x2C2838u);
    ctx->pc = 0x2C2834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2830u;
            // 0x2c2834: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2838u; }
        if (ctx->pc != 0x2C2838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2838u; }
        if (ctx->pc != 0x2C2838u) { return; }
    }
    ctx->pc = 0x2C2838u;
label_2c2838:
    // 0x2c2838: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c2838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c283c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2c283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2c2840: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C2840u;
    SET_GPR_U32(ctx, 31, 0x2C2848u);
    ctx->pc = 0x2C2844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2840u;
            // 0x2c2844: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2848u; }
        if (ctx->pc != 0x2C2848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2848u; }
        if (ctx->pc != 0x2C2848u) { return; }
    }
    ctx->pc = 0x2C2848u;
label_2c2848:
    // 0x2c2848: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x2c2848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x2c284c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C284Cu;
    SET_GPR_U32(ctx, 31, 0x2C2854u);
    ctx->pc = 0x2C2850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C284Cu;
            // 0x2c2850: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2854u; }
        if (ctx->pc != 0x2C2854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2854u; }
        if (ctx->pc != 0x2C2854u) { return; }
    }
    ctx->pc = 0x2C2854u;
label_2c2854:
    // 0x2c2854: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C2854u;
    {
        const bool branch_taken_0x2c2854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2854u;
            // 0x2c2858: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2854) {
            ctx->pc = 0x2C29C4u;
            goto label_2c29c4;
        }
    }
    ctx->pc = 0x2C285Cu;
    // 0x2c285c: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2C285Cu;
    SET_GPR_U32(ctx, 31, 0x2C2864u);
    ctx->pc = 0x2C2860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C285Cu;
            // 0x2c2860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2864u; }
        if (ctx->pc != 0x2C2864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2864u; }
        if (ctx->pc != 0x2C2864u) { return; }
    }
    ctx->pc = 0x2C2864u;
label_2c2864:
    // 0x2c2864: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2c2864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2c2868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c2868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c286c: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x2c286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x2c2870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2874: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x2c2874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x2c2878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c2878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c287c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2880:
    // 0x2c2880: 0x2054021  addu        $t0, $s0, $a1
    ctx->pc = 0x2c2880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2c2884: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x2c2884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c2888: 0xad030114  sw          $v1, 0x114($t0)
    ctx->pc = 0x2c2888u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 3));
    // 0x2c288c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c2890: 0xace00164  sw          $zero, 0x164($a3)
    ctx->pc = 0x2c2890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 356), GPR_U32(ctx, 0));
    // 0x2c2894: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x2c2894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2c2898: 0xace00168  sw          $zero, 0x168($a3)
    ctx->pc = 0x2c2898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 360), GPR_U32(ctx, 0));
    // 0x2c289c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c28a0: 0xace0016c  sw          $zero, 0x16C($a3)
    ctx->pc = 0x2c28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 364), GPR_U32(ctx, 0));
    // 0x2c28a4: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x2c28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2c28a8: 0xad000254  sw          $zero, 0x254($t0)
    ctx->pc = 0x2c28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 596), GPR_U32(ctx, 0));
    // 0x2c28ac: 0xad0002a4  sw          $zero, 0x2A4($t0)
    ctx->pc = 0x2c28acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 0));
    // 0x2c28b0: 0xad030118  sw          $v1, 0x118($t0)
    ctx->pc = 0x2c28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 280), GPR_U32(ctx, 3));
    // 0x2c28b4: 0xace00170  sw          $zero, 0x170($a3)
    ctx->pc = 0x2c28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 368), GPR_U32(ctx, 0));
    // 0x2c28b8: 0xace00174  sw          $zero, 0x174($a3)
    ctx->pc = 0x2c28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 0));
    // 0x2c28bc: 0xace00178  sw          $zero, 0x178($a3)
    ctx->pc = 0x2c28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 376), GPR_U32(ctx, 0));
    // 0x2c28c0: 0xad000258  sw          $zero, 0x258($t0)
    ctx->pc = 0x2c28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 600), GPR_U32(ctx, 0));
    // 0x2c28c4: 0xad0002a8  sw          $zero, 0x2A8($t0)
    ctx->pc = 0x2c28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 680), GPR_U32(ctx, 0));
    // 0x2c28c8: 0xad03011c  sw          $v1, 0x11C($t0)
    ctx->pc = 0x2c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 284), GPR_U32(ctx, 3));
    // 0x2c28cc: 0xace0017c  sw          $zero, 0x17C($a3)
    ctx->pc = 0x2c28ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 380), GPR_U32(ctx, 0));
    // 0x2c28d0: 0xace00180  sw          $zero, 0x180($a3)
    ctx->pc = 0x2c28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 384), GPR_U32(ctx, 0));
    // 0x2c28d4: 0xace00184  sw          $zero, 0x184($a3)
    ctx->pc = 0x2c28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 388), GPR_U32(ctx, 0));
    // 0x2c28d8: 0xad00025c  sw          $zero, 0x25C($t0)
    ctx->pc = 0x2c28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 604), GPR_U32(ctx, 0));
    // 0x2c28dc: 0xad0002ac  sw          $zero, 0x2AC($t0)
    ctx->pc = 0x2c28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 684), GPR_U32(ctx, 0));
    // 0x2c28e0: 0xad030120  sw          $v1, 0x120($t0)
    ctx->pc = 0x2c28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 3));
    // 0x2c28e4: 0xace00188  sw          $zero, 0x188($a3)
    ctx->pc = 0x2c28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 392), GPR_U32(ctx, 0));
    // 0x2c28e8: 0xace0018c  sw          $zero, 0x18C($a3)
    ctx->pc = 0x2c28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 396), GPR_U32(ctx, 0));
    // 0x2c28ec: 0xace00190  sw          $zero, 0x190($a3)
    ctx->pc = 0x2c28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 400), GPR_U32(ctx, 0));
    // 0x2c28f0: 0xad000260  sw          $zero, 0x260($t0)
    ctx->pc = 0x2c28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 608), GPR_U32(ctx, 0));
    // 0x2c28f4: 0xad0002b0  sw          $zero, 0x2B0($t0)
    ctx->pc = 0x2c28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 688), GPR_U32(ctx, 0));
    // 0x2c28f8: 0xad030124  sw          $v1, 0x124($t0)
    ctx->pc = 0x2c28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 292), GPR_U32(ctx, 3));
    // 0x2c28fc: 0xace00194  sw          $zero, 0x194($a3)
    ctx->pc = 0x2c28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 404), GPR_U32(ctx, 0));
    // 0x2c2900: 0xace00198  sw          $zero, 0x198($a3)
    ctx->pc = 0x2c2900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 408), GPR_U32(ctx, 0));
    // 0x2c2904: 0xace0019c  sw          $zero, 0x19C($a3)
    ctx->pc = 0x2c2904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 412), GPR_U32(ctx, 0));
    // 0x2c2908: 0xad000264  sw          $zero, 0x264($t0)
    ctx->pc = 0x2c2908u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 612), GPR_U32(ctx, 0));
    // 0x2c290c: 0xad0002b4  sw          $zero, 0x2B4($t0)
    ctx->pc = 0x2c290cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 692), GPR_U32(ctx, 0));
    // 0x2c2910: 0xad030128  sw          $v1, 0x128($t0)
    ctx->pc = 0x2c2910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 296), GPR_U32(ctx, 3));
    // 0x2c2914: 0xace001a0  sw          $zero, 0x1A0($a3)
    ctx->pc = 0x2c2914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 416), GPR_U32(ctx, 0));
    // 0x2c2918: 0xace001a4  sw          $zero, 0x1A4($a3)
    ctx->pc = 0x2c2918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 420), GPR_U32(ctx, 0));
    // 0x2c291c: 0xace001a8  sw          $zero, 0x1A8($a3)
    ctx->pc = 0x2c291cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
    // 0x2c2920: 0xad000268  sw          $zero, 0x268($t0)
    ctx->pc = 0x2c2920u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 616), GPR_U32(ctx, 0));
    // 0x2c2924: 0xad0002b8  sw          $zero, 0x2B8($t0)
    ctx->pc = 0x2c2924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 696), GPR_U32(ctx, 0));
    // 0x2c2928: 0xad03012c  sw          $v1, 0x12C($t0)
    ctx->pc = 0x2c2928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 300), GPR_U32(ctx, 3));
    // 0x2c292c: 0xace001ac  sw          $zero, 0x1AC($a3)
    ctx->pc = 0x2c292cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 428), GPR_U32(ctx, 0));
    // 0x2c2930: 0xace001b0  sw          $zero, 0x1B0($a3)
    ctx->pc = 0x2c2930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 0));
    // 0x2c2934: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x2c2934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
    // 0x2c2938: 0xad00026c  sw          $zero, 0x26C($t0)
    ctx->pc = 0x2c2938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 620), GPR_U32(ctx, 0));
    // 0x2c293c: 0xad0002bc  sw          $zero, 0x2BC($t0)
    ctx->pc = 0x2c293cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 700), GPR_U32(ctx, 0));
    // 0x2c2940: 0xad030130  sw          $v1, 0x130($t0)
    ctx->pc = 0x2c2940u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 3));
    // 0x2c2944: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x2c2944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x2c2948: 0xace001bc  sw          $zero, 0x1BC($a3)
    ctx->pc = 0x2c2948u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 0));
    // 0x2c294c: 0xace001c0  sw          $zero, 0x1C0($a3)
    ctx->pc = 0x2c294cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 0));
    // 0x2c2950: 0xad000270  sw          $zero, 0x270($t0)
    ctx->pc = 0x2c2950u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 624), GPR_U32(ctx, 0));
    // 0x2c2954: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2C2954u;
    {
        const bool branch_taken_0x2c2954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2954u;
            // 0x2c2958: 0xad0002c0  sw          $zero, 0x2C0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2954) {
            ctx->pc = 0x2C2880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2880;
        }
    }
    ctx->pc = 0x2C295Cu;
    // 0x2c295c: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x2c295cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c2960: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C2960u;
    {
        const bool branch_taken_0x2c2960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2960u;
            // 0x2c2964: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2960) {
            ctx->pc = 0x2C29ACu;
            goto label_2c29ac;
        }
    }
    ctx->pc = 0x2C2968u;
    // 0x2c2968: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2c2968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c296c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2970: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2c2970u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2978:
    // 0x2c2978: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2c297c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2c297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c2980: 0xace30114  sw          $v1, 0x114($a3)
    ctx->pc = 0x2c2980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 276), GPR_U32(ctx, 3));
    // 0x2c2984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c2984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c2988: 0xac400164  sw          $zero, 0x164($v0)
    ctx->pc = 0x2c2988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 0));
    // 0x2c298c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c2990: 0xac400168  sw          $zero, 0x168($v0)
    ctx->pc = 0x2c2990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 0));
    // 0x2c2994: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2c2994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2c2998: 0xac40016c  sw          $zero, 0x16C($v0)
    ctx->pc = 0x2c2998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
    // 0x2c299c: 0xace00254  sw          $zero, 0x254($a3)
    ctx->pc = 0x2c299cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 596), GPR_U32(ctx, 0));
    // 0x2c29a0: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2c29a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c29a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C29A4u;
    {
        const bool branch_taken_0x2c29a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C29A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29A4u;
            // 0x2c29a8: 0xace002a4  sw          $zero, 0x2A4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29a4) {
            ctx->pc = 0x2C2978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2978;
        }
    }
    ctx->pc = 0x2C29ACu;
label_2c29ac:
    // 0x2c29ac: 0x0  nop
    ctx->pc = 0x2c29acu;
    // NOP
    // 0x2c29b0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2c29b4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x2c29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x2c29b8: 0xae000374  sw          $zero, 0x374($s0)
    ctx->pc = 0x2c29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 0));
    // 0x2c29bc: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x2c29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
    // 0x2c29c0: 0xae00037c  sw          $zero, 0x37C($s0)
    ctx->pc = 0x2c29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 0));
label_2c29c4:
    // 0x2c29c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c29c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c29c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29cc: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2C29CCu;
    SET_GPR_U32(ctx, 31, 0x2C29D4u);
    ctx->pc = 0x2C29D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29CCu;
            // 0x2c29d0: 0xaf909cc0  sw          $s0, -0x6340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941888), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29D4u; }
        if (ctx->pc != 0x2C29D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29D4u; }
        if (ctx->pc != 0x2C29D4u) { return; }
    }
    ctx->pc = 0x2C29D4u;
label_2c29d4:
    // 0x2c29d4: 0x8f839cc0  lw          $v1, -0x6340($gp)
    ctx->pc = 0x2c29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c29d8: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2c29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2c29dc: 0xac600374  sw          $zero, 0x374($v1)
    ctx->pc = 0x2c29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 884), GPR_U32(ctx, 0));
    // 0x2c29e0: 0x8f839cc0  lw          $v1, -0x6340($gp)
    ctx->pc = 0x2c29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c29e4: 0xac600378  sw          $zero, 0x378($v1)
    ctx->pc = 0x2c29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 888), GPR_U32(ctx, 0));
    // 0x2c29e8: 0xaf828508  sw          $v0, -0x7AF8($gp)
    ctx->pc = 0x2c29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 2));
    // 0x2c29ec: 0xaf82850c  sw          $v0, -0x7AF4($gp)
    ctx->pc = 0x2c29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 2));
    // 0x2c29f0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2c29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c29f4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29F4u;
    {
        const bool branch_taken_0x2c29f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C29F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29F4u;
            // 0x2c29f8: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29f4) {
            ctx->pc = 0x2C2A04u;
            goto label_2c2a04;
        }
    }
    ctx->pc = 0x2C29FCu;
    // 0x2c29fc: 0xaf828508  sw          $v0, -0x7AF8($gp)
    ctx->pc = 0x2c29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 2));
    // 0x2c2a00: 0xaf82850c  sw          $v0, -0x7AF4($gp)
    ctx->pc = 0x2c2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 2));
label_2c2a04:
    // 0x2c2a04: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x2c2a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c2a08: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2c2a0c: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2a10: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x2c2a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x2c2a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a18: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2c2a18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c2a1c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2C2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A24u);
    ctx->pc = 0x2C2A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A1Cu;
            // 0x2c2a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A24u; }
        if (ctx->pc != 0x2C2A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A24u; }
        if (ctx->pc != 0x2C2A24u) { return; }
    }
    ctx->pc = 0x2C2A24u;
label_2c2a24:
    // 0x2c2a24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a2c: 0x24a5f8c0  addiu       $a1, $a1, -0x740
    ctx->pc = 0x2c2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    // 0x2c2a30: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C2A30u;
    SET_GPR_U32(ctx, 31, 0x2C2A38u);
    ctx->pc = 0x2C2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A30u;
            // 0x2c2a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A38u; }
        if (ctx->pc != 0x2C2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A38u; }
        if (ctx->pc != 0x2C2A38u) { return; }
    }
    ctx->pc = 0x2C2A38u;
label_2c2a38:
    // 0x2c2a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c2a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a48: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C2A48u;
    SET_GPR_U32(ctx, 31, 0x2C2A50u);
    ctx->pc = 0x2C2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A48u;
            // 0x2c2a4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A50u; }
        if (ctx->pc != 0x2C2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A50u; }
        if (ctx->pc != 0x2C2A50u) { return; }
    }
    ctx->pc = 0x2C2A50u;
label_2c2a50:
    // 0x2c2a50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a58: 0x24a5fb00  addiu       $a1, $a1, -0x500
    ctx->pc = 0x2c2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966016));
    // 0x2c2a5c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A64u);
    ctx->pc = 0x2C2A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A5Cu;
            // 0x2c2a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A64u; }
        if (ctx->pc != 0x2C2A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A64u; }
        if (ctx->pc != 0x2C2A64u) { return; }
    }
    ctx->pc = 0x2C2A64u;
label_2c2a64:
    // 0x2c2a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c2a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a74: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C2A74u;
    SET_GPR_U32(ctx, 31, 0x2C2A7Cu);
    ctx->pc = 0x2C2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A74u;
            // 0x2c2a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A7Cu; }
        if (ctx->pc != 0x2C2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A7Cu; }
        if (ctx->pc != 0x2C2A7Cu) { return; }
    }
    ctx->pc = 0x2C2A7Cu;
label_2c2a7c:
    // 0x2c2a7c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2a80: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c2a84: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c2a88: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2A88u;
    {
        const bool branch_taken_0x2c2a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2a88) {
            ctx->pc = 0x2C2AB0u;
            goto label_2c2ab0;
        }
    }
    ctx->pc = 0x2C2A90u;
    // 0x2c2a90: 0xc08d1c8  jal         func_234720
    ctx->pc = 0x2C2A90u;
    SET_GPR_U32(ctx, 31, 0x2C2A98u);
    ctx->pc = 0x234720u;
    if (runtime->hasFunction(0x234720u)) {
        auto targetFn = runtime->lookupFunction(0x234720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A98u; }
        if (ctx->pc != 0x2C2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIMGPtr__Fv_0x234720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A98u; }
        if (ctx->pc != 0x2C2A98u) { return; }
    }
    ctx->pc = 0x2C2A98u;
label_2c2a98:
    // 0x2c2a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2aa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c2aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2aa8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C2AA8u;
    SET_GPR_U32(ctx, 31, 0x2C2AB0u);
    ctx->pc = 0x2C2AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2AA8u;
            // 0x2c2aac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AB0u; }
        if (ctx->pc != 0x2C2AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AB0u; }
        if (ctx->pc != 0x2C2AB0u) { return; }
    }
    ctx->pc = 0x2C2AB0u;
label_2c2ab0:
    // 0x2c2ab0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ab8: 0x24a5fb10  addiu       $a1, $a1, -0x4F0
    ctx->pc = 0x2c2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966032));
    // 0x2c2abc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C2ABCu;
    SET_GPR_U32(ctx, 31, 0x2C2AC4u);
    ctx->pc = 0x2C2AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2ABCu;
            // 0x2c2ac0: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AC4u; }
        if (ctx->pc != 0x2C2AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AC4u; }
        if (ctx->pc != 0x2C2AC4u) { return; }
    }
    ctx->pc = 0x2C2AC4u;
label_2c2ac4:
    // 0x2c2ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2AC4u;
    {
        const bool branch_taken_0x2c2ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ac4) {
            ctx->pc = 0x2C2AE0u;
            goto label_2c2ae0;
        }
    }
    ctx->pc = 0x2C2ACCu;
    // 0x2c2acc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2c2accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c2ad0: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c2ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ad8: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2C2AD8u;
    SET_GPR_U32(ctx, 31, 0x2C2AE0u);
    ctx->pc = 0x2C2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2AD8u;
            // 0x2c2adc: 0x24c6d200  addiu       $a2, $a2, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE0u; }
        if (ctx->pc != 0x2C2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE0u; }
        if (ctx->pc != 0x2C2AE0u) { return; }
    }
    ctx->pc = 0x2C2AE0u;
label_2c2ae0:
    // 0x2c2ae0: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2C2AE0u;
    SET_GPR_U32(ctx, 31, 0x2C2AE8u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE8u; }
        if (ctx->pc != 0x2C2AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE8u; }
        if (ctx->pc != 0x2C2AE8u) { return; }
    }
    ctx->pc = 0x2C2AE8u;
label_2c2ae8:
    // 0x2c2ae8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c2aec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2af0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C2AF0u;
    SET_GPR_U32(ctx, 31, 0x2C2AF8u);
    ctx->pc = 0x2C2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2AF0u;
            // 0x2c2af4: 0x24a5f8f0  addiu       $a1, $a1, -0x710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AF8u; }
        if (ctx->pc != 0x2C2AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AF8u; }
        if (ctx->pc != 0x2C2AF8u) { return; }
    }
    ctx->pc = 0x2C2AF8u;
label_2c2af8:
    // 0x2c2af8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c2afc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2b00: 0xaf829c54  sw          $v0, -0x63AC($gp)
    ctx->pc = 0x2c2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941780), GPR_U32(ctx, 2));
    // 0x2c2b04: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C2B04u;
    SET_GPR_U32(ctx, 31, 0x2C2B0Cu);
    ctx->pc = 0x2C2B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B04u;
            // 0x2c2b08: 0x24a5f8f8  addiu       $a1, $a1, -0x708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B0Cu; }
        if (ctx->pc != 0x2C2B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B0Cu; }
        if (ctx->pc != 0x2C2B0Cu) { return; }
    }
    ctx->pc = 0x2C2B0Cu;
label_2c2b0c:
    // 0x2c2b0c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c2b10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2b14: 0xaf829c58  sw          $v0, -0x63A8($gp)
    ctx->pc = 0x2c2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941784), GPR_U32(ctx, 2));
    // 0x2c2b18: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C2B18u;
    SET_GPR_U32(ctx, 31, 0x2C2B20u);
    ctx->pc = 0x2C2B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B18u;
            // 0x2c2b1c: 0x24a5fb20  addiu       $a1, $a1, -0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B20u; }
        if (ctx->pc != 0x2C2B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B20u; }
        if (ctx->pc != 0x2C2B20u) { return; }
    }
    ctx->pc = 0x2C2B20u;
label_2c2b20:
    // 0x2c2b20: 0xaf829ca8  sw          $v0, -0x6358($gp)
    ctx->pc = 0x2c2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941864), GPR_U32(ctx, 2));
    // 0x2c2b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c2b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c2b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b2c:
    // 0x2c2b2c: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x2c2b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c2b30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2B30u;
    {
        const bool branch_taken_0x2c2b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B30u;
            // 0x2c2b34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b30) {
            ctx->pc = 0x2C2B50u;
            goto label_2c2b50;
        }
    }
    ctx->pc = 0x2C2B38u;
    // 0x2c2b38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2b3c: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x2c2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x2c2b40: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C2B40u;
    SET_GPR_U32(ctx, 31, 0x2C2B48u);
    ctx->pc = 0x2C2B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B40u;
            // 0x2c2b44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B48u; }
        if (ctx->pc != 0x2C2B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B48u; }
        if (ctx->pc != 0x2C2B48u) { return; }
    }
    ctx->pc = 0x2C2B48u;
label_2c2b48:
    // 0x2c2b48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2B48u;
    {
        const bool branch_taken_0x2c2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b48) {
            ctx->pc = 0x2C2B64u;
            goto label_2c2b64;
        }
    }
    ctx->pc = 0x2C2B50u;
label_2c2b50:
    // 0x2c2b50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2b54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2b58: 0x24a5fb40  addiu       $a1, $a1, -0x4C0
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966080));
    // 0x2c2b5c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C2B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B64u);
    ctx->pc = 0x2C2B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B5Cu;
            // 0x2c2b60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B64u; }
        if (ctx->pc != 0x2C2B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B64u; }
        if (ctx->pc != 0x2C2B64u) { return; }
    }
    ctx->pc = 0x2C2B64u;
label_2c2b64:
    // 0x2c2b64: 0x0  nop
    ctx->pc = 0x2c2b64u;
    // NOP
    // 0x2c2b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c2b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c2b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b70:
    // 0x2c2b70: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2b74: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c2b78: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c2b7c: 0xac400164  sw          $zero, 0x164($v0)
    ctx->pc = 0x2c2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 0));
    // 0x2c2b80: 0x8f829ca8  lw          $v0, -0x6358($gp)
    ctx->pc = 0x2c2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
    // 0x2c2b84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C2B84u;
    {
        const bool branch_taken_0x2c2b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B84u;
            // 0x2c2b88: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b84) {
            ctx->pc = 0x2C2BD0u;
            goto label_2c2bd0;
        }
    }
    ctx->pc = 0x2C2B8Cu;
    // 0x2c2b8c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2C2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B94u);
    ctx->pc = 0x2C2B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B8Cu;
            // 0x2c2b90: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B94u; }
        if (ctx->pc != 0x2C2B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B94u; }
        if (ctx->pc != 0x2C2B94u) { return; }
    }
    ctx->pc = 0x2C2B94u;
label_2c2b94:
    // 0x2c2b94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2b98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c2b9c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C2B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C2BA4u);
    ctx->pc = 0x2C2BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B9Cu;
            // 0x2c2ba0: 0x24a5fb48  addiu       $a1, $a1, -0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BA4u; }
        if (ctx->pc != 0x2C2BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BA4u; }
        if (ctx->pc != 0x2C2BA4u) { return; }
    }
    ctx->pc = 0x2C2BA4u;
label_2c2ba4:
    // 0x2c2ba4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c2ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c2ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C2BACu;
    SET_GPR_U32(ctx, 31, 0x2C2BB4u);
    ctx->pc = 0x2C2BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BACu;
            // 0x2c2bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BB4u; }
        if (ctx->pc != 0x2C2BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BB4u; }
        if (ctx->pc != 0x2C2BB4u) { return; }
    }
    ctx->pc = 0x2C2BB4u;
label_2c2bb4:
    // 0x2c2bb4: 0x8f849ca8  lw          $a0, -0x6358($gp)
    ctx->pc = 0x2c2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
    // 0x2c2bb8: 0xc089664  jal         func_225990
    ctx->pc = 0x2C2BB8u;
    SET_GPR_U32(ctx, 31, 0x2C2BC0u);
    ctx->pc = 0x2C2BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BB8u;
            // 0x2c2bbc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BC0u; }
        if (ctx->pc != 0x2C2BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BC0u; }
        if (ctx->pc != 0x2C2BC0u) { return; }
    }
    ctx->pc = 0x2C2BC0u;
label_2c2bc0:
    // 0x2c2bc0: 0x8f839cc0  lw          $v1, -0x6340($gp)
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2bc4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2c2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2c2bc8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2c2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2c2bcc: 0xac620164  sw          $v0, 0x164($v1)
    ctx->pc = 0x2c2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 2));
label_2c2bd0:
    // 0x2c2bd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c2bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c2bd4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2c2bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c2bd8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2C2BD8u;
    {
        const bool branch_taken_0x2c2bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BD8u;
            // 0x2c2bdc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bd8) {
            ctx->pc = 0x2C2B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2b70;
        }
    }
    ctx->pc = 0x2C2BE0u;
    // 0x2c2be0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c2be4: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x2c2be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c2be8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2C2BE8u;
    {
        const bool branch_taken_0x2c2be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BE8u;
            // 0x2c2bec: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2be8) {
            ctx->pc = 0x2C2B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2b2c;
        }
    }
    ctx->pc = 0x2C2BF0u;
    // 0x2c2bf0: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2bf4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2c2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c2bf8: 0x8f8594b4  lw          $a1, -0x6B4C($gp)
    ctx->pc = 0x2c2bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c2bfc: 0xc049c18  jal         func_127060
    ctx->pc = 0x2C2BFCu;
    SET_GPR_U32(ctx, 31, 0x2C2C04u);
    ctx->pc = 0x2C2C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BFCu;
            // 0x2c2c00: 0x244402f4  addiu       $a0, $v0, 0x2F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 756));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C04u; }
        if (ctx->pc != 0x2C2C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C04u; }
        if (ctx->pc != 0x2C2C04u) { return; }
    }
    ctx->pc = 0x2C2C04u;
label_2c2c04:
    // 0x2c2c04: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c08: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c2c0c: 0x8f8594b4  lw          $a1, -0x6B4C($gp)
    ctx->pc = 0x2c2c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c2c10: 0xc049c18  jal         func_127060
    ctx->pc = 0x2C2C10u;
    SET_GPR_U32(ctx, 31, 0x2C2C18u);
    ctx->pc = 0x2C2C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C10u;
            // 0x2c2c14: 0x24440334  addiu       $a0, $v0, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C18u; }
        if (ctx->pc != 0x2C2C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C18u; }
        if (ctx->pc != 0x2C2C18u) { return; }
    }
    ctx->pc = 0x2C2C18u;
label_2c2c18:
    // 0x2c2c18: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c24: 0x24a5fb50  addiu       $a1, $a1, -0x4B0
    ctx->pc = 0x2c2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966096));
    // 0x2c2c28: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C2C28u;
    SET_GPR_U32(ctx, 31, 0x2C2C30u);
    ctx->pc = 0x2C2C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C28u;
            // 0x2c2c2c: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C30u; }
        if (ctx->pc != 0x2C2C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C30u; }
        if (ctx->pc != 0x2C2C30u) { return; }
    }
    ctx->pc = 0x2C2C30u;
label_2c2c30:
    // 0x2c2c30: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c2c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2c40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c2c44: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c48: 0x248202f4  addiu       $v0, $a0, 0x2F4
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 756));
    // 0x2c2c4c: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x2c2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
    // 0x2c2c50: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c54: 0x248202f8  addiu       $v0, $a0, 0x2F8
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 760));
    // 0x2c2c58: 0xac820258  sw          $v0, 0x258($a0)
    ctx->pc = 0x2c2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 2));
    // 0x2c2c5c: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c60: 0x248202fc  addiu       $v0, $a0, 0x2FC
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 764));
    // 0x2c2c64: 0xac82025c  sw          $v0, 0x25C($a0)
    ctx->pc = 0x2c2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 2));
    // 0x2c2c68: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c6c: 0x24820300  addiu       $v0, $a0, 0x300
    ctx->pc = 0x2c2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x2c2c70: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x2c2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x2c2c74: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c78: 0x24820304  addiu       $v0, $a0, 0x304
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
    // 0x2c2c7c: 0xac820264  sw          $v0, 0x264($a0)
    ctx->pc = 0x2c2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 2));
    // 0x2c2c80: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c84: 0x24820308  addiu       $v0, $a0, 0x308
    ctx->pc = 0x2c2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 776));
    // 0x2c2c88: 0xac820268  sw          $v0, 0x268($a0)
    ctx->pc = 0x2c2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
    // 0x2c2c8c: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c90: 0x24820314  addiu       $v0, $a0, 0x314
    ctx->pc = 0x2c2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 788));
    // 0x2c2c94: 0xac82026c  sw          $v0, 0x26C($a0)
    ctx->pc = 0x2c2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
    // 0x2c2c98: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2c9c: 0x24820310  addiu       $v0, $a0, 0x310
    ctx->pc = 0x2c2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x2c2ca0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x2c2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x2c2ca4: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2ca8: 0x24820320  addiu       $v0, $a0, 0x320
    ctx->pc = 0x2c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x2c2cac: 0xac820274  sw          $v0, 0x274($a0)
    ctx->pc = 0x2c2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
    // 0x2c2cb0: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2cb4: 0x24820318  addiu       $v0, $a0, 0x318
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 792));
    // 0x2c2cb8: 0xac820278  sw          $v0, 0x278($a0)
    ctx->pc = 0x2c2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 2));
    // 0x2c2cbc: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2cc0: 0x2482031c  addiu       $v0, $a0, 0x31C
    ctx->pc = 0x2c2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 796));
    // 0x2c2cc4: 0xac82027c  sw          $v0, 0x27C($a0)
    ctx->pc = 0x2c2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 2));
    // 0x2c2cc8: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2ccc: 0x24820324  addiu       $v0, $a0, 0x324
    ctx->pc = 0x2c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 804));
    // 0x2c2cd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2CD0u;
    {
        const bool branch_taken_0x2c2cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CD0u;
            // 0x2c2cd4: 0xac820280  sw          $v0, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cd0) {
            ctx->pc = 0x2C2CECu;
            goto label_2c2cec;
        }
    }
    ctx->pc = 0x2C2CD8u;
label_2c2cd8:
    // 0x2c2cd8: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2cdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c2ce0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c2ce4: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x2c2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x2c2ce8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c2ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2c2cec:
    // 0x2c2cec: 0x0  nop
    ctx->pc = 0x2c2cecu;
    // NOP
    // 0x2c2cf0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2c2cf0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2cf4: 0xc7808508  lwc1        $f0, -0x7AF8($gp)
    ctx->pc = 0x2c2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2cf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2d00: 0x0  nop
    ctx->pc = 0x2c2d00u;
    // NOP
    // 0x2c2d04: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x2C2D04u;
    {
        const bool branch_taken_0x2c2d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2d04) {
            ctx->pc = 0x2C2CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2cd8;
        }
    }
    ctx->pc = 0x2C2D0Cu;
    // 0x2c2d0c: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x2c2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2d10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2d14: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x2c2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x2c2d18: 0xc0b0928  jal         func_2C24A0
    ctx->pc = 0x2C2D18u;
    SET_GPR_U32(ctx, 31, 0x2C2D20u);
    ctx->pc = 0x2C2D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D18u;
            // 0x2c2d1c: 0x8f849cc0  lw          $a0, -0x6340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24A0u;
    if (runtime->hasFunction(0x2C24A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D20u; }
        if (ctx->pc != 0x2C2D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateOptionForm__11CMenuOptionFv_0x2c24a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D20u; }
        if (ctx->pc != 0x2C2D20u) { return; }
    }
    ctx->pc = 0x2C2D20u;
label_2c2d20:
    // 0x2c2d20: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2C2D20u;
    SET_GPR_U32(ctx, 31, 0x2C2D28u);
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D28u; }
        if (ctx->pc != 0x2C2D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D28u; }
        if (ctx->pc != 0x2C2D28u) { return; }
    }
    ctx->pc = 0x2C2D28u;
label_2c2d28:
    // 0x2c2d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d2c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2d30: 0x8c22ca48  lw          $v0, -0x35B8($at)
    ctx->pc = 0x2c2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2c2d34: 0x8c4221d4  lw          $v0, 0x21D4($v0)
    ctx->pc = 0x2c2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8660)));
    // 0x2c2d38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2d3c: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x2c2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
    // 0x2c2d40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2d44: 0xc065a18  jal         func_196860
    ctx->pc = 0x2C2D44u;
    SET_GPR_U32(ctx, 31, 0x2C2D4Cu);
    ctx->pc = 0x2C2D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D44u;
            // 0x2c2d48: 0xac30e3bc  sw          $s0, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D4Cu; }
        if (ctx->pc != 0x2C2D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D4Cu; }
        if (ctx->pc != 0x2C2D4Cu) { return; }
    }
    ctx->pc = 0x2C2D4Cu;
label_2c2d4c:
    // 0x2c2d4c: 0x8f849cc0  lw          $a0, -0x6340($gp)
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x2c2d50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2d54: 0xac22e3a8  sw          $v0, -0x1C58($at)
    ctx->pc = 0x2c2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
    // 0x2c2d58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2d5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2d60: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x2c2d64: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C2D64u;
    SET_GPR_U32(ctx, 31, 0x2C2D6Cu);
    ctx->pc = 0x2C2D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D64u;
            // 0x2c2d68: 0xac30e3ac  sw          $s0, -0x1C54($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D6Cu; }
        if (ctx->pc != 0x2C2D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D6Cu; }
        if (ctx->pc != 0x2C2D6Cu) { return; }
    }
    ctx->pc = 0x2C2D6Cu;
label_2c2d6c:
    // 0x2c2d6c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c2d70: 0xc08900c  jal         func_224030
    ctx->pc = 0x2C2D70u;
    SET_GPR_U32(ctx, 31, 0x2C2D78u);
    ctx->pc = 0x2C2D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D70u;
            // 0x2c2d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D78u; }
        if (ctx->pc != 0x2C2D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D78u; }
        if (ctx->pc != 0x2C2D78u) { return; }
    }
    ctx->pc = 0x2C2D78u;
label_2c2d78:
    // 0x2c2d78: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c2d7c: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D84u);
    ctx->pc = 0x2C2D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D7Cu;
            // 0x2c2d80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D84u; }
        if (ctx->pc != 0x2C2D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D84u; }
        if (ctx->pc != 0x2C2D84u) { return; }
    }
    ctx->pc = 0x2C2D84u;
label_2c2d84:
    // 0x2c2d84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c2d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2d88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c2d88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2d8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c2d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D9Cu;
            // 0x2c2da0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2DA4u;
}
