#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMenuData__15CMenuCostumeSelFP9mgCMemoryPi
// Address: 0x2bc8d0 - 0x2bcc5c
void LoadMenuData__15CMenuCostumeSelFP9mgCMemoryPi_0x2bc8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMenuData__15CMenuCostumeSelFP9mgCMemoryPi_0x2bc8d0");
#endif

    switch (ctx->pc) {
        case 0x2bc8d0u: goto label_2bc8d0;
        case 0x2bc8d4u: goto label_2bc8d4;
        case 0x2bc8d8u: goto label_2bc8d8;
        case 0x2bc8dcu: goto label_2bc8dc;
        case 0x2bc8e0u: goto label_2bc8e0;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc8e8u: goto label_2bc8e8;
        case 0x2bc8ecu: goto label_2bc8ec;
        case 0x2bc8f0u: goto label_2bc8f0;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc8f8u: goto label_2bc8f8;
        case 0x2bc8fcu: goto label_2bc8fc;
        case 0x2bc900u: goto label_2bc900;
        case 0x2bc904u: goto label_2bc904;
        case 0x2bc908u: goto label_2bc908;
        case 0x2bc90cu: goto label_2bc90c;
        case 0x2bc910u: goto label_2bc910;
        case 0x2bc914u: goto label_2bc914;
        case 0x2bc918u: goto label_2bc918;
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc920u: goto label_2bc920;
        case 0x2bc924u: goto label_2bc924;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc92cu: goto label_2bc92c;
        case 0x2bc930u: goto label_2bc930;
        case 0x2bc934u: goto label_2bc934;
        case 0x2bc938u: goto label_2bc938;
        case 0x2bc93cu: goto label_2bc93c;
        case 0x2bc940u: goto label_2bc940;
        case 0x2bc944u: goto label_2bc944;
        case 0x2bc948u: goto label_2bc948;
        case 0x2bc94cu: goto label_2bc94c;
        case 0x2bc950u: goto label_2bc950;
        case 0x2bc954u: goto label_2bc954;
        case 0x2bc958u: goto label_2bc958;
        case 0x2bc95cu: goto label_2bc95c;
        case 0x2bc960u: goto label_2bc960;
        case 0x2bc964u: goto label_2bc964;
        case 0x2bc968u: goto label_2bc968;
        case 0x2bc96cu: goto label_2bc96c;
        case 0x2bc970u: goto label_2bc970;
        case 0x2bc974u: goto label_2bc974;
        case 0x2bc978u: goto label_2bc978;
        case 0x2bc97cu: goto label_2bc97c;
        case 0x2bc980u: goto label_2bc980;
        case 0x2bc984u: goto label_2bc984;
        case 0x2bc988u: goto label_2bc988;
        case 0x2bc98cu: goto label_2bc98c;
        case 0x2bc990u: goto label_2bc990;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc998u: goto label_2bc998;
        case 0x2bc99cu: goto label_2bc99c;
        case 0x2bc9a0u: goto label_2bc9a0;
        case 0x2bc9a4u: goto label_2bc9a4;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9acu: goto label_2bc9ac;
        case 0x2bc9b0u: goto label_2bc9b0;
        case 0x2bc9b4u: goto label_2bc9b4;
        case 0x2bc9b8u: goto label_2bc9b8;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9c0u: goto label_2bc9c0;
        case 0x2bc9c4u: goto label_2bc9c4;
        case 0x2bc9c8u: goto label_2bc9c8;
        case 0x2bc9ccu: goto label_2bc9cc;
        case 0x2bc9d0u: goto label_2bc9d0;
        case 0x2bc9d4u: goto label_2bc9d4;
        case 0x2bc9d8u: goto label_2bc9d8;
        case 0x2bc9dcu: goto label_2bc9dc;
        case 0x2bc9e0u: goto label_2bc9e0;
        case 0x2bc9e4u: goto label_2bc9e4;
        case 0x2bc9e8u: goto label_2bc9e8;
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bc9f0u: goto label_2bc9f0;
        case 0x2bc9f4u: goto label_2bc9f4;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bc9fcu: goto label_2bc9fc;
        case 0x2bca00u: goto label_2bca00;
        case 0x2bca04u: goto label_2bca04;
        case 0x2bca08u: goto label_2bca08;
        case 0x2bca0cu: goto label_2bca0c;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca18u: goto label_2bca18;
        case 0x2bca1cu: goto label_2bca1c;
        case 0x2bca20u: goto label_2bca20;
        case 0x2bca24u: goto label_2bca24;
        case 0x2bca28u: goto label_2bca28;
        case 0x2bca2cu: goto label_2bca2c;
        case 0x2bca30u: goto label_2bca30;
        case 0x2bca34u: goto label_2bca34;
        case 0x2bca38u: goto label_2bca38;
        case 0x2bca3cu: goto label_2bca3c;
        case 0x2bca40u: goto label_2bca40;
        case 0x2bca44u: goto label_2bca44;
        case 0x2bca48u: goto label_2bca48;
        case 0x2bca4cu: goto label_2bca4c;
        case 0x2bca50u: goto label_2bca50;
        case 0x2bca54u: goto label_2bca54;
        case 0x2bca58u: goto label_2bca58;
        case 0x2bca5cu: goto label_2bca5c;
        case 0x2bca60u: goto label_2bca60;
        case 0x2bca64u: goto label_2bca64;
        case 0x2bca68u: goto label_2bca68;
        case 0x2bca6cu: goto label_2bca6c;
        case 0x2bca70u: goto label_2bca70;
        case 0x2bca74u: goto label_2bca74;
        case 0x2bca78u: goto label_2bca78;
        case 0x2bca7cu: goto label_2bca7c;
        case 0x2bca80u: goto label_2bca80;
        case 0x2bca84u: goto label_2bca84;
        case 0x2bca88u: goto label_2bca88;
        case 0x2bca8cu: goto label_2bca8c;
        case 0x2bca90u: goto label_2bca90;
        case 0x2bca94u: goto label_2bca94;
        case 0x2bca98u: goto label_2bca98;
        case 0x2bca9cu: goto label_2bca9c;
        case 0x2bcaa0u: goto label_2bcaa0;
        case 0x2bcaa4u: goto label_2bcaa4;
        case 0x2bcaa8u: goto label_2bcaa8;
        case 0x2bcaacu: goto label_2bcaac;
        case 0x2bcab0u: goto label_2bcab0;
        case 0x2bcab4u: goto label_2bcab4;
        case 0x2bcab8u: goto label_2bcab8;
        case 0x2bcabcu: goto label_2bcabc;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcac4u: goto label_2bcac4;
        case 0x2bcac8u: goto label_2bcac8;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad0u: goto label_2bcad0;
        case 0x2bcad4u: goto label_2bcad4;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcadcu: goto label_2bcadc;
        case 0x2bcae0u: goto label_2bcae0;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcae8u: goto label_2bcae8;
        case 0x2bcaecu: goto label_2bcaec;
        case 0x2bcaf0u: goto label_2bcaf0;
        case 0x2bcaf4u: goto label_2bcaf4;
        case 0x2bcaf8u: goto label_2bcaf8;
        case 0x2bcafcu: goto label_2bcafc;
        case 0x2bcb00u: goto label_2bcb00;
        case 0x2bcb04u: goto label_2bcb04;
        case 0x2bcb08u: goto label_2bcb08;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb10u: goto label_2bcb10;
        case 0x2bcb14u: goto label_2bcb14;
        case 0x2bcb18u: goto label_2bcb18;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb20u: goto label_2bcb20;
        case 0x2bcb24u: goto label_2bcb24;
        case 0x2bcb28u: goto label_2bcb28;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb30u: goto label_2bcb30;
        case 0x2bcb34u: goto label_2bcb34;
        case 0x2bcb38u: goto label_2bcb38;
        case 0x2bcb3cu: goto label_2bcb3c;
        case 0x2bcb40u: goto label_2bcb40;
        case 0x2bcb44u: goto label_2bcb44;
        case 0x2bcb48u: goto label_2bcb48;
        case 0x2bcb4cu: goto label_2bcb4c;
        case 0x2bcb50u: goto label_2bcb50;
        case 0x2bcb54u: goto label_2bcb54;
        case 0x2bcb58u: goto label_2bcb58;
        case 0x2bcb5cu: goto label_2bcb5c;
        case 0x2bcb60u: goto label_2bcb60;
        case 0x2bcb64u: goto label_2bcb64;
        case 0x2bcb68u: goto label_2bcb68;
        case 0x2bcb6cu: goto label_2bcb6c;
        case 0x2bcb70u: goto label_2bcb70;
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcb78u: goto label_2bcb78;
        case 0x2bcb7cu: goto label_2bcb7c;
        case 0x2bcb80u: goto label_2bcb80;
        case 0x2bcb84u: goto label_2bcb84;
        case 0x2bcb88u: goto label_2bcb88;
        case 0x2bcb8cu: goto label_2bcb8c;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb94u: goto label_2bcb94;
        case 0x2bcb98u: goto label_2bcb98;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcba4u: goto label_2bcba4;
        case 0x2bcba8u: goto label_2bcba8;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bcbb4u: goto label_2bcbb4;
        case 0x2bcbb8u: goto label_2bcbb8;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbc4u: goto label_2bcbc4;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd0u: goto label_2bcbd0;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbdcu: goto label_2bcbdc;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbecu: goto label_2bcbec;
        case 0x2bcbf0u: goto label_2bcbf0;
        case 0x2bcbf4u: goto label_2bcbf4;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcbfcu: goto label_2bcbfc;
        case 0x2bcc00u: goto label_2bcc00;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc0cu: goto label_2bcc0c;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc14u: goto label_2bcc14;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc1cu: goto label_2bcc1c;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc24u: goto label_2bcc24;
        case 0x2bcc28u: goto label_2bcc28;
        case 0x2bcc2cu: goto label_2bcc2c;
        case 0x2bcc30u: goto label_2bcc30;
        case 0x2bcc34u: goto label_2bcc34;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc3cu: goto label_2bcc3c;
        case 0x2bcc40u: goto label_2bcc40;
        case 0x2bcc44u: goto label_2bcc44;
        case 0x2bcc48u: goto label_2bcc48;
        case 0x2bcc4cu: goto label_2bcc4c;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc54u: goto label_2bcc54;
        case 0x2bcc58u: goto label_2bcc58;
        default: break;
    }

    ctx->pc = 0x2bc8d0u;

label_2bc8d0:
    // 0x2bc8d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bc8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2bc8d4:
    // 0x2bc8d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bc8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2bc8d8:
    // 0x2bc8d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2bc8dc:
    // 0x2bc8dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2bc8e0:
    // 0x2bc8e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bc8e4:
    // 0x2bc8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bc8e8:
    // 0x2bc8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bc8ec:
    // 0x2bc8ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bc8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8f0:
    // 0x2bc8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc8f4:
    // 0x2bc8f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bc8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8f8:
    // 0x2bc8f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bc8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8fc:
    // 0x2bc8fc: 0xc08dc6c  jal         func_2371B0
label_2bc900:
    if (ctx->pc == 0x2BC900u) {
        ctx->pc = 0x2BC900u;
            // 0x2bc900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC904u;
        goto label_2bc904;
    }
    ctx->pc = 0x2BC8FCu;
    SET_GPR_U32(ctx, 31, 0x2BC904u);
    ctx->pc = 0x2BC900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8FCu;
            // 0x2bc900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC904u; }
        if (ctx->pc != 0x2BC904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC904u; }
        if (ctx->pc != 0x2BC904u) { return; }
    }
    ctx->pc = 0x2BC904u;
label_2bc904:
    // 0x2bc904: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bc904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc908:
    // 0x2bc908: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bc908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc90c:
    // 0x2bc90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc910:
    // 0x2bc910: 0xc04e748  jal         func_139D20
label_2bc914:
    if (ctx->pc == 0x2BC914u) {
        ctx->pc = 0x2BC914u;
            // 0x2bc914: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x2BC918u;
        goto label_2bc918;
    }
    ctx->pc = 0x2BC910u;
    SET_GPR_U32(ctx, 31, 0x2BC918u);
    ctx->pc = 0x2BC914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC910u;
            // 0x2bc914: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC918u; }
        if (ctx->pc != 0x2BC918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC918u; }
        if (ctx->pc != 0x2BC918u) { return; }
    }
    ctx->pc = 0x2BC918u;
label_2bc918:
    // 0x2bc918: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2bc91c:
    // 0x2bc91c: 0xc04e638  jal         func_1398E0
label_2bc920:
    if (ctx->pc == 0x2BC920u) {
        ctx->pc = 0x2BC920u;
            // 0x2bc920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC924u;
        goto label_2bc924;
    }
    ctx->pc = 0x2BC91Cu;
    SET_GPR_U32(ctx, 31, 0x2BC924u);
    ctx->pc = 0x2BC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC91Cu;
            // 0x2bc920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC924u; }
        if (ctx->pc != 0x2BC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC924u; }
        if (ctx->pc != 0x2BC924u) { return; }
    }
    ctx->pc = 0x2BC924u;
label_2bc924:
    // 0x2bc924: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2bc928:
    if (ctx->pc == 0x2BC928u) {
        ctx->pc = 0x2BC928u;
            // 0x2bc928: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC92Cu;
        goto label_2bc92c;
    }
    ctx->pc = 0x2BC924u;
    {
        const bool branch_taken_0x2bc924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC924u;
            // 0x2bc928: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc924) {
            ctx->pc = 0x2BC9CCu;
            goto label_2bc9cc;
        }
    }
    ctx->pc = 0x2BC92Cu;
label_2bc92c:
    // 0x2bc92c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bc930:
    // 0x2bc930: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2bc930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2bc934:
    // 0x2bc934: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2bc934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2bc938:
    // 0x2bc938: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2bc938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bc93c:
    // 0x2bc93c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bc93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bc940:
    // 0x2bc940: 0x320f809  jalr        $t9
label_2bc944:
    if (ctx->pc == 0x2BC944u) {
        ctx->pc = 0x2BC944u;
            // 0x2bc944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC948u;
        goto label_2bc948;
    }
    ctx->pc = 0x2BC940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC948u);
        ctx->pc = 0x2BC944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC940u;
            // 0x2bc944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC948u; }
            if (ctx->pc != 0x2BC948u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC948u;
label_2bc948:
    // 0x2bc948: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bc948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bc94c:
    // 0x2bc94c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2bc950:
    // 0x2bc950: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2bc950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2bc954:
    // 0x2bc954: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2bc954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bc958:
    // 0x2bc958: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bc958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bc95c:
    // 0x2bc95c: 0x320f809  jalr        $t9
label_2bc960:
    if (ctx->pc == 0x2BC960u) {
        ctx->pc = 0x2BC960u;
            // 0x2bc960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC964u;
        goto label_2bc964;
    }
    ctx->pc = 0x2BC95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC964u);
        ctx->pc = 0x2BC960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC95Cu;
            // 0x2bc960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC964u; }
            if (ctx->pc != 0x2BC964u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC964u;
label_2bc964:
    // 0x2bc964: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bc964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bc968:
    // 0x2bc968: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2bc968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2bc96c:
    // 0x2bc96c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2bc96cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2bc970:
    // 0x2bc970: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2bc970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bc974:
    // 0x2bc974: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bc974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bc978:
    // 0x2bc978: 0x320f809  jalr        $t9
label_2bc97c:
    if (ctx->pc == 0x2BC97Cu) {
        ctx->pc = 0x2BC97Cu;
            // 0x2bc97c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC980u;
        goto label_2bc980;
    }
    ctx->pc = 0x2BC978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC980u);
        ctx->pc = 0x2BC97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC978u;
            // 0x2bc97c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC980u; }
            if (ctx->pc != 0x2BC980u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC980u;
label_2bc980:
    // 0x2bc980: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bc984:
    // 0x2bc984: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2bc988:
    // 0x2bc988: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2bc988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2bc98c:
    // 0x2bc98c: 0xae80035c  sw          $zero, 0x35C($s4)
    ctx->pc = 0x2bc98cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 860), GPR_U32(ctx, 0));
label_2bc990:
    // 0x2bc990: 0xae800364  sw          $zero, 0x364($s4)
    ctx->pc = 0x2bc990u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 868), GPR_U32(ctx, 0));
label_2bc994:
    // 0x2bc994: 0xae800360  sw          $zero, 0x360($s4)
    ctx->pc = 0x2bc994u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 0));
label_2bc998:
    // 0x2bc998: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2bc998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bc99c:
    // 0x2bc99c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bc9a0:
    // 0x2bc9a0: 0x320f809  jalr        $t9
label_2bc9a4:
    if (ctx->pc == 0x2BC9A4u) {
        ctx->pc = 0x2BC9A4u;
            // 0x2bc9a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC9A8u;
        goto label_2bc9a8;
    }
    ctx->pc = 0x2BC9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC9A8u);
        ctx->pc = 0x2BC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9A0u;
            // 0x2bc9a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC9A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9A8u; }
            if (ctx->pc != 0x2BC9A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bc9ac:
    // 0x2bc9ac: 0x268406bc  addiu       $a0, $s4, 0x6BC
    ctx->pc = 0x2bc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
label_2bc9b0:
    // 0x2bc9b0: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2bc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2bc9b4:
    // 0x2bc9b4: 0xc061b34  jal         func_186CD0
label_2bc9b8:
    if (ctx->pc == 0x2BC9B8u) {
        ctx->pc = 0x2BC9B8u;
            // 0x2bc9b8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BC9BCu;
        goto label_2bc9bc;
    }
    ctx->pc = 0x2BC9B4u;
    SET_GPR_U32(ctx, 31, 0x2BC9BCu);
    ctx->pc = 0x2BC9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9B4u;
            // 0x2bc9b8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9BCu; }
        if (ctx->pc != 0x2BC9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9BCu; }
        if (ctx->pc != 0x2BC9BCu) { return; }
    }
    ctx->pc = 0x2BC9BCu;
label_2bc9bc:
    // 0x2bc9bc: 0x26840910  addiu       $a0, $s4, 0x910
    ctx->pc = 0x2bc9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
label_2bc9c0:
    // 0x2bc9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc9c4:
    // 0x2bc9c4: 0xc049c86  jal         func_127218
label_2bc9c8:
    if (ctx->pc == 0x2BC9C8u) {
        ctx->pc = 0x2BC9C8u;
            // 0x2bc9c8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2BC9CCu;
        goto label_2bc9cc;
    }
    ctx->pc = 0x2BC9C4u;
    SET_GPR_U32(ctx, 31, 0x2BC9CCu);
    ctx->pc = 0x2BC9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9C4u;
            // 0x2bc9c8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9CCu; }
        if (ctx->pc != 0x2BC9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9CCu; }
        if (ctx->pc != 0x2BC9CCu) { return; }
    }
    ctx->pc = 0x2BC9CCu;
label_2bc9cc:
    // 0x2bc9cc: 0x0  nop
    ctx->pc = 0x2bc9ccu;
    // NOP
label_2bc9d0:
    // 0x2bc9d0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2bc9d4:
    // 0x2bc9d4: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x2bc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
label_2bc9d8:
    // 0x2bc9d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2bc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2bc9dc:
    // 0x2bc9dc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2bc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_2bc9e0:
    // 0x2bc9e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bc9e4:
    // 0x2bc9e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc9e8:
    // 0x2bc9e8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bc9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bc9ec:
    // 0x2bc9ec: 0x320f809  jalr        $t9
label_2bc9f0:
    if (ctx->pc == 0x2BC9F0u) {
        ctx->pc = 0x2BC9F0u;
            // 0x2bc9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC9F4u;
        goto label_2bc9f4;
    }
    ctx->pc = 0x2BC9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC9F4u);
        ctx->pc = 0x2BC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9ECu;
            // 0x2bc9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC9F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC9F4u; }
            if (ctx->pc != 0x2BC9F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC9F4u;
label_2bc9f4:
    // 0x2bc9f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bc9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bc9f8:
    // 0x2bc9f8: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
label_2bc9fc:
    // 0x2bc9fc: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_2bca00:
    if (ctx->pc == 0x2BCA00u) {
        ctx->pc = 0x2BCA00u;
            // 0x2bca00: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2BCA04u;
        goto label_2bca04;
    }
    ctx->pc = 0x2BC9FCu;
    {
        const bool branch_taken_0x2bc9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9FCu;
            // 0x2bca00: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9fc) {
            ctx->pc = 0x2BC90Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc90c;
        }
    }
    ctx->pc = 0x2BCA04u;
label_2bca04:
    // 0x2bca04: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2bca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2bca08:
    // 0x2bca08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2bca0c:
    // 0x2bca0c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2bca10:
    // 0x2bca10: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_2bca14:
    // 0x2bca14: 0x2484f5a8  addiu       $a0, $a0, -0xA58
    ctx->pc = 0x2bca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964648));
label_2bca18:
    // 0x2bca18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bca1c:
    // 0x2bca1c: 0x26731ef0  addiu       $s3, $s3, 0x1EF0
    ctx->pc = 0x2bca1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7920));
label_2bca20:
    // 0x2bca20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2bca24:
    // 0x2bca24: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2bca24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bca28:
    // 0x2bca28: 0xc094440  jal         func_251100
label_2bca2c:
    if (ctx->pc == 0x2BCA2Cu) {
        ctx->pc = 0x2BCA2Cu;
            // 0x2bca2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA30u;
        goto label_2bca30;
    }
    ctx->pc = 0x2BCA28u;
    SET_GPR_U32(ctx, 31, 0x2BCA30u);
    ctx->pc = 0x2BCA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA28u;
            // 0x2bca2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA30u; }
        if (ctx->pc != 0x2BCA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA30u; }
        if (ctx->pc != 0x2BCA30u) { return; }
    }
    ctx->pc = 0x2BCA30u;
label_2bca30:
    // 0x2bca30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2bca34:
    if (ctx->pc == 0x2BCA34u) {
        ctx->pc = 0x2BCA34u;
            // 0x2bca34: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x2BCA38u;
        goto label_2bca38;
    }
    ctx->pc = 0x2BCA30u;
    {
        const bool branch_taken_0x2bca30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BCA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA30u;
            // 0x2bca34: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca30) {
            ctx->pc = 0x2BCA40u;
            goto label_2bca40;
        }
    }
    ctx->pc = 0x2BCA38u;
label_2bca38:
    // 0x2bca38: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2bca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2bca3c:
    // 0x2bca3c: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2bca3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_2bca40:
    // 0x2bca40: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2bca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2bca44:
    // 0x2bca44: 0xc04e748  jal         func_139D20
label_2bca48:
    if (ctx->pc == 0x2BCA48u) {
        ctx->pc = 0x2BCA48u;
            // 0x2bca48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA4Cu;
        goto label_2bca4c;
    }
    ctx->pc = 0x2BCA44u;
    SET_GPR_U32(ctx, 31, 0x2BCA4Cu);
    ctx->pc = 0x2BCA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA44u;
            // 0x2bca48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA4Cu; }
        if (ctx->pc != 0x2BCA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA4Cu; }
        if (ctx->pc != 0x2BCA4Cu) { return; }
    }
    ctx->pc = 0x2BCA4Cu;
label_2bca4c:
    // 0x2bca4c: 0xc04e780  jal         func_139E00
label_2bca50:
    if (ctx->pc == 0x2BCA50u) {
        ctx->pc = 0x2BCA50u;
            // 0x2bca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA54u;
        goto label_2bca54;
    }
    ctx->pc = 0x2BCA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BCA54u);
    ctx->pc = 0x2BCA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA4Cu;
            // 0x2bca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA54u; }
        if (ctx->pc != 0x2BCA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA54u; }
        if (ctx->pc != 0x2BCA54u) { return; }
    }
    ctx->pc = 0x2BCA54u;
label_2bca54:
    // 0x2bca54: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2bca54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bca58:
    // 0x2bca58: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bca58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2bca5c:
    // 0x2bca5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bca60:
    // 0x2bca60: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2bca64:
    // 0x2bca64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bca64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bca68:
    // 0x2bca68: 0xc04b6a4  jal         func_12DA90
label_2bca6c:
    if (ctx->pc == 0x2BCA6Cu) {
        ctx->pc = 0x2BCA6Cu;
            // 0x2bca6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA70u;
        goto label_2bca70;
    }
    ctx->pc = 0x2BCA68u;
    SET_GPR_U32(ctx, 31, 0x2BCA70u);
    ctx->pc = 0x2BCA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA68u;
            // 0x2bca6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA70u; }
        if (ctx->pc != 0x2BCA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA70u; }
        if (ctx->pc != 0x2BCA70u) { return; }
    }
    ctx->pc = 0x2BCA70u;
label_2bca70:
    // 0x2bca70: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bca70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2bca74:
    // 0x2bca74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bca74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bca78:
    // 0x2bca78: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2bca7c:
    // 0x2bca7c: 0x24a5f5b8  addiu       $a1, $a1, -0xA48
    ctx->pc = 0x2bca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964664));
label_2bca80:
    // 0x2bca80: 0xc04b414  jal         func_12D050
label_2bca84:
    if (ctx->pc == 0x2BCA84u) {
        ctx->pc = 0x2BCA84u;
            // 0x2bca84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BCA88u;
        goto label_2bca88;
    }
    ctx->pc = 0x2BCA80u;
    SET_GPR_U32(ctx, 31, 0x2BCA88u);
    ctx->pc = 0x2BCA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA80u;
            // 0x2bca84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA88u; }
        if (ctx->pc != 0x2BCA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA88u; }
        if (ctx->pc != 0x2BCA88u) { return; }
    }
    ctx->pc = 0x2BCA88u;
label_2bca88:
    // 0x2bca88: 0xc08d1c8  jal         func_234720
label_2bca8c:
    if (ctx->pc == 0x2BCA8Cu) {
        ctx->pc = 0x2BCA8Cu;
            // 0x2bca8c: 0xae4202d4  sw          $v0, 0x2D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 2));
        ctx->pc = 0x2BCA90u;
        goto label_2bca90;
    }
    ctx->pc = 0x2BCA88u;
    SET_GPR_U32(ctx, 31, 0x2BCA90u);
    ctx->pc = 0x2BCA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA88u;
            // 0x2bca8c: 0xae4202d4  sw          $v0, 0x2D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234720u;
    if (runtime->hasFunction(0x234720u)) {
        auto targetFn = runtime->lookupFunction(0x234720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA90u; }
        if (ctx->pc != 0x2BCA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIMGPtr__Fv_0x234720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA90u; }
        if (ctx->pc != 0x2BCA90u) { return; }
    }
    ctx->pc = 0x2BCA90u;
label_2bca90:
    // 0x2bca90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2bca94:
    if (ctx->pc == 0x2BCA94u) {
        ctx->pc = 0x2BCA98u;
        goto label_2bca98;
    }
    ctx->pc = 0x2BCA90u;
    {
        const bool branch_taken_0x2bca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bca90) {
            ctx->pc = 0x2BCAB0u;
            goto label_2bcab0;
        }
    }
    ctx->pc = 0x2BCA98u;
label_2bca98:
    // 0x2bca98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2bca98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bca9c:
    // 0x2bca9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcaa0:
    // 0x2bcaa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bcaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bcaa4:
    // 0x2bcaa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bcaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcaa8:
    // 0x2bcaa8: 0xc04b6a4  jal         func_12DA90
label_2bcaac:
    if (ctx->pc == 0x2BCAACu) {
        ctx->pc = 0x2BCAACu;
            // 0x2bcaac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCAB0u;
        goto label_2bcab0;
    }
    ctx->pc = 0x2BCAA8u;
    SET_GPR_U32(ctx, 31, 0x2BCAB0u);
    ctx->pc = 0x2BCAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAA8u;
            // 0x2bcaac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAB0u; }
        if (ctx->pc != 0x2BCAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAB0u; }
        if (ctx->pc != 0x2BCAB0u) { return; }
    }
    ctx->pc = 0x2BCAB0u;
label_2bcab0:
    // 0x2bcab0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bcab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bcab4:
    // 0x2bcab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bcab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bcab8:
    // 0x2bcab8: 0x24a5f5c0  addiu       $a1, $a1, -0xA40
    ctx->pc = 0x2bcab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964672));
label_2bcabc:
    // 0x2bcabc: 0xc04b414  jal         func_12D050
label_2bcac0:
    if (ctx->pc == 0x2BCAC0u) {
        ctx->pc = 0x2BCAC0u;
            // 0x2bcac0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BCAC4u;
        goto label_2bcac4;
    }
    ctx->pc = 0x2BCABCu;
    SET_GPR_U32(ctx, 31, 0x2BCAC4u);
    ctx->pc = 0x2BCAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCABCu;
            // 0x2bcac0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAC4u; }
        if (ctx->pc != 0x2BCAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAC4u; }
        if (ctx->pc != 0x2BCAC4u) { return; }
    }
    ctx->pc = 0x2BCAC4u;
label_2bcac4:
    // 0x2bcac4: 0xae4202d8  sw          $v0, 0x2D8($s2)
    ctx->pc = 0x2bcac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
label_2bcac8:
    // 0x2bcac8: 0xae4002c0  sw          $zero, 0x2C0($s2)
    ctx->pc = 0x2bcac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 0));
label_2bcacc:
    // 0x2bcacc: 0xae4002c4  sw          $zero, 0x2C4($s2)
    ctx->pc = 0x2bcaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 708), GPR_U32(ctx, 0));
label_2bcad0:
    // 0x2bcad0: 0xae4002c8  sw          $zero, 0x2C8($s2)
    ctx->pc = 0x2bcad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 0));
label_2bcad4:
    // 0x2bcad4: 0xc087d68  jal         func_21F5A0
label_2bcad8:
    if (ctx->pc == 0x2BCAD8u) {
        ctx->pc = 0x2BCAD8u;
            // 0x2bcad8: 0xae4002cc  sw          $zero, 0x2CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 716), GPR_U32(ctx, 0));
        ctx->pc = 0x2BCADCu;
        goto label_2bcadc;
    }
    ctx->pc = 0x2BCAD4u;
    SET_GPR_U32(ctx, 31, 0x2BCADCu);
    ctx->pc = 0x2BCAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAD4u;
            // 0x2bcad8: 0xae4002cc  sw          $zero, 0x2CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCADCu; }
        if (ctx->pc != 0x2BCADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCADCu; }
        if (ctx->pc != 0x2BCADCu) { return; }
    }
    ctx->pc = 0x2BCADCu;
label_2bcadc:
    // 0x2bcadc: 0xc065a18  jal         func_196860
label_2bcae0:
    if (ctx->pc == 0x2BCAE0u) {
        ctx->pc = 0x2BCAE4u;
        goto label_2bcae4;
    }
    ctx->pc = 0x2BCADCu;
    SET_GPR_U32(ctx, 31, 0x2BCAE4u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAE4u; }
        if (ctx->pc != 0x2BCAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAE4u; }
        if (ctx->pc != 0x2BCAE4u) { return; }
    }
    ctx->pc = 0x2BCAE4u;
label_2bcae4:
    // 0x2bcae4: 0xc08d1bc  jal         func_2346F0
label_2bcae8:
    if (ctx->pc == 0x2BCAE8u) {
        ctx->pc = 0x2BCAE8u;
            // 0x2bcae8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCAECu;
        goto label_2bcaec;
    }
    ctx->pc = 0x2BCAE4u;
    SET_GPR_U32(ctx, 31, 0x2BCAECu);
    ctx->pc = 0x2BCAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAE4u;
            // 0x2bcae8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAECu; }
        if (ctx->pc != 0x2BCAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAECu; }
        if (ctx->pc != 0x2BCAECu) { return; }
    }
    ctx->pc = 0x2BCAECu;
label_2bcaec:
    // 0x2bcaec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcaf0:
    // 0x2bcaf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcaf4:
    // 0x2bcaf4: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bcaf8:
    // 0x2bcaf8: 0xc0874d8  jal         func_21D360
label_2bcafc:
    if (ctx->pc == 0x2BCAFCu) {
        ctx->pc = 0x2BCAFCu;
            // 0x2bcafc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB00u;
        goto label_2bcb00;
    }
    ctx->pc = 0x2BCAF8u;
    SET_GPR_U32(ctx, 31, 0x2BCB00u);
    ctx->pc = 0x2BCAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAF8u;
            // 0x2bcafc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB00u; }
        if (ctx->pc != 0x2BCB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB00u; }
        if (ctx->pc != 0x2BCB00u) { return; }
    }
    ctx->pc = 0x2BCB00u;
label_2bcb00:
    // 0x2bcb00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcb04:
    // 0x2bcb04: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bcb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bcb08:
    // 0x2bcb08: 0xc0874e8  jal         func_21D3A0
label_2bcb0c:
    if (ctx->pc == 0x2BCB0Cu) {
        ctx->pc = 0x2BCB0Cu;
            // 0x2bcb0c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2BCB10u;
        goto label_2bcb10;
    }
    ctx->pc = 0x2BCB08u;
    SET_GPR_U32(ctx, 31, 0x2BCB10u);
    ctx->pc = 0x2BCB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB08u;
            // 0x2bcb0c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB10u; }
        if (ctx->pc != 0x2BCB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB10u; }
        if (ctx->pc != 0x2BCB10u) { return; }
    }
    ctx->pc = 0x2BCB10u;
label_2bcb10:
    // 0x2bcb10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcb14:
    // 0x2bcb14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2bcb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bcb18:
    // 0x2bcb18: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2bcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bcb1c:
    // 0x2bcb1c: 0xc065a18  jal         func_196860
label_2bcb20:
    if (ctx->pc == 0x2BCB20u) {
        ctx->pc = 0x2BCB20u;
            // 0x2bcb20: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->pc = 0x2BCB24u;
        goto label_2bcb24;
    }
    ctx->pc = 0x2BCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB24u);
    ctx->pc = 0x2BCB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB1Cu;
            // 0x2bcb20: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB24u; }
        if (ctx->pc != 0x2BCB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB24u; }
        if (ctx->pc != 0x2BCB24u) { return; }
    }
    ctx->pc = 0x2BCB24u;
label_2bcb24:
    // 0x2bcb24: 0xc08d1bc  jal         func_2346F0
label_2bcb28:
    if (ctx->pc == 0x2BCB28u) {
        ctx->pc = 0x2BCB28u;
            // 0x2bcb28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB2Cu;
        goto label_2bcb2c;
    }
    ctx->pc = 0x2BCB24u;
    SET_GPR_U32(ctx, 31, 0x2BCB2Cu);
    ctx->pc = 0x2BCB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB24u;
            // 0x2bcb28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB2Cu; }
        if (ctx->pc != 0x2BCB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB2Cu; }
        if (ctx->pc != 0x2BCB2Cu) { return; }
    }
    ctx->pc = 0x2BCB2Cu;
label_2bcb2c:
    // 0x2bcb2c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcb30:
    // 0x2bcb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb34:
    // 0x2bcb34: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2bcb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2bcb38:
    // 0x2bcb38: 0xc0874d8  jal         func_21D360
label_2bcb3c:
    if (ctx->pc == 0x2BCB3Cu) {
        ctx->pc = 0x2BCB3Cu;
            // 0x2bcb3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB40u;
        goto label_2bcb40;
    }
    ctx->pc = 0x2BCB38u;
    SET_GPR_U32(ctx, 31, 0x2BCB40u);
    ctx->pc = 0x2BCB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB38u;
            // 0x2bcb3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB40u; }
        if (ctx->pc != 0x2BCB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB40u; }
        if (ctx->pc != 0x2BCB40u) { return; }
    }
    ctx->pc = 0x2BCB40u;
label_2bcb40:
    // 0x2bcb40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcb44:
    // 0x2bcb44: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2bcb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2bcb48:
    // 0x2bcb48: 0xc0874e8  jal         func_21D3A0
label_2bcb4c:
    if (ctx->pc == 0x2BCB4Cu) {
        ctx->pc = 0x2BCB4Cu;
            // 0x2bcb4c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2BCB50u;
        goto label_2bcb50;
    }
    ctx->pc = 0x2BCB48u;
    SET_GPR_U32(ctx, 31, 0x2BCB50u);
    ctx->pc = 0x2BCB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB48u;
            // 0x2bcb4c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB50u; }
        if (ctx->pc != 0x2BCB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB50u; }
        if (ctx->pc != 0x2BCB50u) { return; }
    }
    ctx->pc = 0x2BCB50u;
label_2bcb50:
    // 0x2bcb50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcb54:
    // 0x2bcb54: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2bcb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2bcb58:
    // 0x2bcb58: 0x8c22ca5c  lw          $v0, -0x35A4($at)
    ctx->pc = 0x2bcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2bcb5c:
    // 0x2bcb5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2bcb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bcb60:
    // 0x2bcb60: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bcb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2bcb64:
    // 0x2bcb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb68:
    // 0x2bcb68: 0x24a54ce0  addiu       $a1, $a1, 0x4CE0
    ctx->pc = 0x2bcb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19680));
label_2bcb6c:
    // 0x2bcb6c: 0xac46014c  sw          $a2, 0x14C($v0)
    ctx->pc = 0x2bcb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 6));
label_2bcb70:
    // 0x2bcb70: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2bcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2bcb74:
    // 0x2bcb74: 0xc0abf24  jal         func_2AFC90
label_2bcb78:
    if (ctx->pc == 0x2BCB78u) {
        ctx->pc = 0x2BCB78u;
            // 0x2bcb78: 0xac4300a0  sw          $v1, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x2BCB7Cu;
        goto label_2bcb7c;
    }
    ctx->pc = 0x2BCB74u;
    SET_GPR_U32(ctx, 31, 0x2BCB7Cu);
    ctx->pc = 0x2BCB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB74u;
            // 0x2bcb78: 0xac4300a0  sw          $v1, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB7Cu; }
        if (ctx->pc != 0x2BCB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB7Cu; }
        if (ctx->pc != 0x2BCB7Cu) { return; }
    }
    ctx->pc = 0x2BCB7Cu;
label_2bcb7c:
    // 0x2bcb7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bcb80:
    // 0x2bcb80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bcb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcb84:
    // 0x2bcb84: 0xa3829b70  sb          $v0, -0x6490($gp)
    ctx->pc = 0x2bcb84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 2));
label_2bcb88:
    // 0x2bcb88: 0x26440228  addiu       $a0, $s2, 0x228
    ctx->pc = 0x2bcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
label_2bcb8c:
    // 0x2bcb8c: 0xa3839b71  sb          $v1, -0x648F($gp)
    ctx->pc = 0x2bcb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 3));
label_2bcb90:
    // 0x2bcb90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bcb94:
    // 0x2bcb94: 0xa3839b72  sb          $v1, -0x648E($gp)
    ctx->pc = 0x2bcb94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 3));
label_2bcb98:
    // 0x2bcb98: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x2bcb98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_2bcb9c:
    // 0x2bcb9c: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2bcb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2bcba0:
    // 0x2bcba0: 0xa3809b73  sb          $zero, -0x648D($gp)
    ctx->pc = 0x2bcba0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 0));
label_2bcba4:
    // 0x2bcba4: 0xa3809b77  sb          $zero, -0x6489($gp)
    ctx->pc = 0x2bcba4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
label_2bcba8:
    // 0x2bcba8: 0xa3839b76  sb          $v1, -0x648A($gp)
    ctx->pc = 0x2bcba8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941558), (uint8_t)GPR_U32(ctx, 3));
label_2bcbac:
    // 0x2bcbac: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2bcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2bcbb0:
    // 0x2bcbb0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2bcbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2bcbb4:
    // 0x2bcbb4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2bcbb8:
    // 0x2bcbb8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bcbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bcbbc:
    // 0x2bcbbc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2bcbc0:
    // 0x2bcbc0: 0xc04e79c  jal         func_139E70
label_2bcbc4:
    if (ctx->pc == 0x2BCBC4u) {
        ctx->pc = 0x2BCBC4u;
            // 0x2bcbc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2BCBC8u;
        goto label_2bcbc8;
    }
    ctx->pc = 0x2BCBC0u;
    SET_GPR_U32(ctx, 31, 0x2BCBC8u);
    ctx->pc = 0x2BCBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBC0u;
            // 0x2bcbc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBC8u; }
        if (ctx->pc != 0x2BCBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBC8u; }
        if (ctx->pc != 0x2BCBC8u) { return; }
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2bcbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2bcbcc:
    // 0x2bcbcc: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bcbccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bcbd0:
    // 0x2bcbd0: 0x26440228  addiu       $a0, $s2, 0x228
    ctx->pc = 0x2bcbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
label_2bcbd4:
    // 0x2bcbd4: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2bcbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2bcbd8:
    // 0x2bcbd8: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x2bcbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
label_2bcbdc:
    // 0x2bcbdc: 0xc0ac028  jal         func_2B00A0
label_2bcbe0:
    if (ctx->pc == 0x2BCBE0u) {
        ctx->pc = 0x2BCBE0u;
            // 0x2bcbe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBE4u;
        goto label_2bcbe4;
    }
    ctx->pc = 0x2BCBDCu;
    SET_GPR_U32(ctx, 31, 0x2BCBE4u);
    ctx->pc = 0x2BCBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBDCu;
            // 0x2bcbe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBE4u; }
        if (ctx->pc != 0x2BCBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBE4u; }
        if (ctx->pc != 0x2BCBE4u) { return; }
    }
    ctx->pc = 0x2BCBE4u;
label_2bcbe4:
    // 0x2bcbe4: 0xc0abf6c  jal         func_2AFDB0
label_2bcbe8:
    if (ctx->pc == 0x2BCBE8u) {
        ctx->pc = 0x2BCBE8u;
            // 0x2bcbe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBECu;
        goto label_2bcbec;
    }
    ctx->pc = 0x2BCBE4u;
    SET_GPR_U32(ctx, 31, 0x2BCBECu);
    ctx->pc = 0x2BCBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBE4u;
            // 0x2bcbe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBECu; }
        if (ctx->pc != 0x2BCBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBECu; }
        if (ctx->pc != 0x2BCBECu) { return; }
    }
    ctx->pc = 0x2BCBECu;
label_2bcbec:
    // 0x2bcbec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bcbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bcbf0:
    // 0x2bcbf0: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bcbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bcbf4:
    // 0x2bcbf4: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bcbf8:
    // 0x2bcbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbfc:
    // 0x2bcbfc: 0x24c6ca80  addiu       $a2, $a2, -0x3580
    ctx->pc = 0x2bcbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
label_2bcc00:
    // 0x2bcc00: 0xc0ae434  jal         func_2B90D0
label_2bcc04:
    if (ctx->pc == 0x2BCC04u) {
        ctx->pc = 0x2BCC04u;
            // 0x2bcc04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BCC08u;
        goto label_2bcc08;
    }
    ctx->pc = 0x2BCC00u;
    SET_GPR_U32(ctx, 31, 0x2BCC08u);
    ctx->pc = 0x2BCC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC00u;
            // 0x2bcc04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC08u; }
        if (ctx->pc != 0x2BCC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC08u; }
        if (ctx->pc != 0x2BCC08u) { return; }
    }
    ctx->pc = 0x2BCC08u;
label_2bcc08:
    // 0x2bcc08: 0xc05239c  jal         func_148E70
label_2bcc0c:
    if (ctx->pc == 0x2BCC0Cu) {
        ctx->pc = 0x2BCC10u;
        goto label_2bcc10;
    }
    ctx->pc = 0x2BCC08u;
    SET_GPR_U32(ctx, 31, 0x2BCC10u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC10u; }
        if (ctx->pc != 0x2BCC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC10u; }
        if (ctx->pc != 0x2BCC10u) { return; }
    }
    ctx->pc = 0x2BCC10u;
label_2bcc10:
    // 0x2bcc10: 0x0  nop
    ctx->pc = 0x2bcc10u;
    // NOP
label_2bcc14:
    // 0x2bcc14: 0x0  nop
    ctx->pc = 0x2bcc14u;
    // NOP
label_2bcc18:
    // 0x2bcc18: 0x0  nop
    ctx->pc = 0x2bcc18u;
    // NOP
label_2bcc1c:
    // 0x2bcc1c: 0x0  nop
    ctx->pc = 0x2bcc1cu;
    // NOP
label_2bcc20:
    // 0x2bcc20: 0x0  nop
    ctx->pc = 0x2bcc20u;
    // NOP
label_2bcc24:
    // 0x2bcc24: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_2bcc28:
    if (ctx->pc == 0x2BCC28u) {
        ctx->pc = 0x2BCC2Cu;
        goto label_2bcc2c;
    }
    ctx->pc = 0x2BCC24u;
    {
        const bool branch_taken_0x2bcc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc24) {
            ctx->pc = 0x2BCC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bcc08;
        }
    }
    ctx->pc = 0x2BCC2Cu;
label_2bcc2c:
    // 0x2bcc2c: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x2bcc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
label_2bcc30:
    // 0x2bcc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bcc34:
    // 0x2bcc34: 0xa7839c24  sh          $v1, -0x63DC($gp)
    ctx->pc = 0x2bcc34u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 3));
label_2bcc38:
    // 0x2bcc38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bcc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bcc3c:
    // 0x2bcc3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bcc3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bcc40:
    // 0x2bcc40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bcc40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bcc44:
    // 0x2bcc44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bcc44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bcc48:
    // 0x2bcc48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bcc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcc4c:
    // 0x2bcc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcc50:
    // 0x2bcc50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcc54:
    // 0x2bcc54: 0x3e00008  jr          $ra
label_2bcc58:
    if (ctx->pc == 0x2BCC58u) {
        ctx->pc = 0x2BCC58u;
            // 0x2bcc58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BCC5Cu;
        goto label_fallthrough_0x2bcc54;
    }
    ctx->pc = 0x2BCC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC54u;
            // 0x2bcc58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bcc54:
    ctx->pc = 0x2BCC5Cu;
}
