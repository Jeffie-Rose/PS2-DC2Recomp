#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuShopInit__FP9mgCMemoryPii
// Address: 0x294750 - 0x294c24
void MenuShopInit__FP9mgCMemoryPii_0x294750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuShopInit__FP9mgCMemoryPii_0x294750");
#endif

    switch (ctx->pc) {
        case 0x294750u: goto label_294750;
        case 0x294754u: goto label_294754;
        case 0x294758u: goto label_294758;
        case 0x29475cu: goto label_29475c;
        case 0x294760u: goto label_294760;
        case 0x294764u: goto label_294764;
        case 0x294768u: goto label_294768;
        case 0x29476cu: goto label_29476c;
        case 0x294770u: goto label_294770;
        case 0x294774u: goto label_294774;
        case 0x294778u: goto label_294778;
        case 0x29477cu: goto label_29477c;
        case 0x294780u: goto label_294780;
        case 0x294784u: goto label_294784;
        case 0x294788u: goto label_294788;
        case 0x29478cu: goto label_29478c;
        case 0x294790u: goto label_294790;
        case 0x294794u: goto label_294794;
        case 0x294798u: goto label_294798;
        case 0x29479cu: goto label_29479c;
        case 0x2947a0u: goto label_2947a0;
        case 0x2947a4u: goto label_2947a4;
        case 0x2947a8u: goto label_2947a8;
        case 0x2947acu: goto label_2947ac;
        case 0x2947b0u: goto label_2947b0;
        case 0x2947b4u: goto label_2947b4;
        case 0x2947b8u: goto label_2947b8;
        case 0x2947bcu: goto label_2947bc;
        case 0x2947c0u: goto label_2947c0;
        case 0x2947c4u: goto label_2947c4;
        case 0x2947c8u: goto label_2947c8;
        case 0x2947ccu: goto label_2947cc;
        case 0x2947d0u: goto label_2947d0;
        case 0x2947d4u: goto label_2947d4;
        case 0x2947d8u: goto label_2947d8;
        case 0x2947dcu: goto label_2947dc;
        case 0x2947e0u: goto label_2947e0;
        case 0x2947e4u: goto label_2947e4;
        case 0x2947e8u: goto label_2947e8;
        case 0x2947ecu: goto label_2947ec;
        case 0x2947f0u: goto label_2947f0;
        case 0x2947f4u: goto label_2947f4;
        case 0x2947f8u: goto label_2947f8;
        case 0x2947fcu: goto label_2947fc;
        case 0x294800u: goto label_294800;
        case 0x294804u: goto label_294804;
        case 0x294808u: goto label_294808;
        case 0x29480cu: goto label_29480c;
        case 0x294810u: goto label_294810;
        case 0x294814u: goto label_294814;
        case 0x294818u: goto label_294818;
        case 0x29481cu: goto label_29481c;
        case 0x294820u: goto label_294820;
        case 0x294824u: goto label_294824;
        case 0x294828u: goto label_294828;
        case 0x29482cu: goto label_29482c;
        case 0x294830u: goto label_294830;
        case 0x294834u: goto label_294834;
        case 0x294838u: goto label_294838;
        case 0x29483cu: goto label_29483c;
        case 0x294840u: goto label_294840;
        case 0x294844u: goto label_294844;
        case 0x294848u: goto label_294848;
        case 0x29484cu: goto label_29484c;
        case 0x294850u: goto label_294850;
        case 0x294854u: goto label_294854;
        case 0x294858u: goto label_294858;
        case 0x29485cu: goto label_29485c;
        case 0x294860u: goto label_294860;
        case 0x294864u: goto label_294864;
        case 0x294868u: goto label_294868;
        case 0x29486cu: goto label_29486c;
        case 0x294870u: goto label_294870;
        case 0x294874u: goto label_294874;
        case 0x294878u: goto label_294878;
        case 0x29487cu: goto label_29487c;
        case 0x294880u: goto label_294880;
        case 0x294884u: goto label_294884;
        case 0x294888u: goto label_294888;
        case 0x29488cu: goto label_29488c;
        case 0x294890u: goto label_294890;
        case 0x294894u: goto label_294894;
        case 0x294898u: goto label_294898;
        case 0x29489cu: goto label_29489c;
        case 0x2948a0u: goto label_2948a0;
        case 0x2948a4u: goto label_2948a4;
        case 0x2948a8u: goto label_2948a8;
        case 0x2948acu: goto label_2948ac;
        case 0x2948b0u: goto label_2948b0;
        case 0x2948b4u: goto label_2948b4;
        case 0x2948b8u: goto label_2948b8;
        case 0x2948bcu: goto label_2948bc;
        case 0x2948c0u: goto label_2948c0;
        case 0x2948c4u: goto label_2948c4;
        case 0x2948c8u: goto label_2948c8;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948d0u: goto label_2948d0;
        case 0x2948d4u: goto label_2948d4;
        case 0x2948d8u: goto label_2948d8;
        case 0x2948dcu: goto label_2948dc;
        case 0x2948e0u: goto label_2948e0;
        case 0x2948e4u: goto label_2948e4;
        case 0x2948e8u: goto label_2948e8;
        case 0x2948ecu: goto label_2948ec;
        case 0x2948f0u: goto label_2948f0;
        case 0x2948f4u: goto label_2948f4;
        case 0x2948f8u: goto label_2948f8;
        case 0x2948fcu: goto label_2948fc;
        case 0x294900u: goto label_294900;
        case 0x294904u: goto label_294904;
        case 0x294908u: goto label_294908;
        case 0x29490cu: goto label_29490c;
        case 0x294910u: goto label_294910;
        case 0x294914u: goto label_294914;
        case 0x294918u: goto label_294918;
        case 0x29491cu: goto label_29491c;
        case 0x294920u: goto label_294920;
        case 0x294924u: goto label_294924;
        case 0x294928u: goto label_294928;
        case 0x29492cu: goto label_29492c;
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        case 0x294968u: goto label_294968;
        case 0x29496cu: goto label_29496c;
        case 0x294970u: goto label_294970;
        case 0x294974u: goto label_294974;
        case 0x294978u: goto label_294978;
        case 0x29497cu: goto label_29497c;
        case 0x294980u: goto label_294980;
        case 0x294984u: goto label_294984;
        case 0x294988u: goto label_294988;
        case 0x29498cu: goto label_29498c;
        case 0x294990u: goto label_294990;
        case 0x294994u: goto label_294994;
        case 0x294998u: goto label_294998;
        case 0x29499cu: goto label_29499c;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949a4u: goto label_2949a4;
        case 0x2949a8u: goto label_2949a8;
        case 0x2949acu: goto label_2949ac;
        case 0x2949b0u: goto label_2949b0;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949b8u: goto label_2949b8;
        case 0x2949bcu: goto label_2949bc;
        case 0x2949c0u: goto label_2949c0;
        case 0x2949c4u: goto label_2949c4;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949d0u: goto label_2949d0;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949d8u: goto label_2949d8;
        case 0x2949dcu: goto label_2949dc;
        case 0x2949e0u: goto label_2949e0;
        case 0x2949e4u: goto label_2949e4;
        case 0x2949e8u: goto label_2949e8;
        case 0x2949ecu: goto label_2949ec;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949f4u: goto label_2949f4;
        case 0x2949f8u: goto label_2949f8;
        case 0x2949fcu: goto label_2949fc;
        case 0x294a00u: goto label_294a00;
        case 0x294a04u: goto label_294a04;
        case 0x294a08u: goto label_294a08;
        case 0x294a0cu: goto label_294a0c;
        case 0x294a10u: goto label_294a10;
        case 0x294a14u: goto label_294a14;
        case 0x294a18u: goto label_294a18;
        case 0x294a1cu: goto label_294a1c;
        case 0x294a20u: goto label_294a20;
        case 0x294a24u: goto label_294a24;
        case 0x294a28u: goto label_294a28;
        case 0x294a2cu: goto label_294a2c;
        case 0x294a30u: goto label_294a30;
        case 0x294a34u: goto label_294a34;
        case 0x294a38u: goto label_294a38;
        case 0x294a3cu: goto label_294a3c;
        case 0x294a40u: goto label_294a40;
        case 0x294a44u: goto label_294a44;
        case 0x294a48u: goto label_294a48;
        case 0x294a4cu: goto label_294a4c;
        case 0x294a50u: goto label_294a50;
        case 0x294a54u: goto label_294a54;
        case 0x294a58u: goto label_294a58;
        case 0x294a5cu: goto label_294a5c;
        case 0x294a60u: goto label_294a60;
        case 0x294a64u: goto label_294a64;
        case 0x294a68u: goto label_294a68;
        case 0x294a6cu: goto label_294a6c;
        case 0x294a70u: goto label_294a70;
        case 0x294a74u: goto label_294a74;
        case 0x294a78u: goto label_294a78;
        case 0x294a7cu: goto label_294a7c;
        case 0x294a80u: goto label_294a80;
        case 0x294a84u: goto label_294a84;
        case 0x294a88u: goto label_294a88;
        case 0x294a8cu: goto label_294a8c;
        case 0x294a90u: goto label_294a90;
        case 0x294a94u: goto label_294a94;
        case 0x294a98u: goto label_294a98;
        case 0x294a9cu: goto label_294a9c;
        case 0x294aa0u: goto label_294aa0;
        case 0x294aa4u: goto label_294aa4;
        case 0x294aa8u: goto label_294aa8;
        case 0x294aacu: goto label_294aac;
        case 0x294ab0u: goto label_294ab0;
        case 0x294ab4u: goto label_294ab4;
        case 0x294ab8u: goto label_294ab8;
        case 0x294abcu: goto label_294abc;
        case 0x294ac0u: goto label_294ac0;
        case 0x294ac4u: goto label_294ac4;
        case 0x294ac8u: goto label_294ac8;
        case 0x294accu: goto label_294acc;
        case 0x294ad0u: goto label_294ad0;
        case 0x294ad4u: goto label_294ad4;
        case 0x294ad8u: goto label_294ad8;
        case 0x294adcu: goto label_294adc;
        case 0x294ae0u: goto label_294ae0;
        case 0x294ae4u: goto label_294ae4;
        case 0x294ae8u: goto label_294ae8;
        case 0x294aecu: goto label_294aec;
        case 0x294af0u: goto label_294af0;
        case 0x294af4u: goto label_294af4;
        case 0x294af8u: goto label_294af8;
        case 0x294afcu: goto label_294afc;
        case 0x294b00u: goto label_294b00;
        case 0x294b04u: goto label_294b04;
        case 0x294b08u: goto label_294b08;
        case 0x294b0cu: goto label_294b0c;
        case 0x294b10u: goto label_294b10;
        case 0x294b14u: goto label_294b14;
        case 0x294b18u: goto label_294b18;
        case 0x294b1cu: goto label_294b1c;
        case 0x294b20u: goto label_294b20;
        case 0x294b24u: goto label_294b24;
        case 0x294b28u: goto label_294b28;
        case 0x294b2cu: goto label_294b2c;
        case 0x294b30u: goto label_294b30;
        case 0x294b34u: goto label_294b34;
        case 0x294b38u: goto label_294b38;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        case 0x294b60u: goto label_294b60;
        case 0x294b64u: goto label_294b64;
        case 0x294b68u: goto label_294b68;
        case 0x294b6cu: goto label_294b6c;
        case 0x294b70u: goto label_294b70;
        case 0x294b74u: goto label_294b74;
        case 0x294b78u: goto label_294b78;
        case 0x294b7cu: goto label_294b7c;
        case 0x294b80u: goto label_294b80;
        case 0x294b84u: goto label_294b84;
        case 0x294b88u: goto label_294b88;
        case 0x294b8cu: goto label_294b8c;
        case 0x294b90u: goto label_294b90;
        case 0x294b94u: goto label_294b94;
        case 0x294b98u: goto label_294b98;
        case 0x294b9cu: goto label_294b9c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294ba4u: goto label_294ba4;
        case 0x294ba8u: goto label_294ba8;
        case 0x294bacu: goto label_294bac;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bb4u: goto label_294bb4;
        case 0x294bb8u: goto label_294bb8;
        case 0x294bbcu: goto label_294bbc;
        case 0x294bc0u: goto label_294bc0;
        case 0x294bc4u: goto label_294bc4;
        case 0x294bc8u: goto label_294bc8;
        case 0x294bccu: goto label_294bcc;
        case 0x294bd0u: goto label_294bd0;
        case 0x294bd4u: goto label_294bd4;
        case 0x294bd8u: goto label_294bd8;
        case 0x294bdcu: goto label_294bdc;
        case 0x294be0u: goto label_294be0;
        case 0x294be4u: goto label_294be4;
        case 0x294be8u: goto label_294be8;
        case 0x294becu: goto label_294bec;
        case 0x294bf0u: goto label_294bf0;
        case 0x294bf4u: goto label_294bf4;
        case 0x294bf8u: goto label_294bf8;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c00u: goto label_294c00;
        case 0x294c04u: goto label_294c04;
        case 0x294c08u: goto label_294c08;
        case 0x294c0cu: goto label_294c0c;
        case 0x294c10u: goto label_294c10;
        case 0x294c14u: goto label_294c14;
        case 0x294c18u: goto label_294c18;
        case 0x294c1cu: goto label_294c1c;
        case 0x294c20u: goto label_294c20;
        default: break;
    }

    ctx->pc = 0x294750u;

label_294750:
    // 0x294750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_294754:
    // 0x294754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_294758:
    // 0x294758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29475c:
    // 0x29475c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_294760:
    // 0x294760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_294764:
    // 0x294764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_294768:
    // 0x294768: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x294768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29476c:
    // 0x29476c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x29476cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_294770:
    // 0x294770: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x294770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_294774:
    // 0x294774: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x294774u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294778:
    // 0x294778: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x294778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_29477c:
    // 0x29477c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29477cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294780:
    // 0x294780: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x294780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294784:
    // 0x294784: 0xc04e79c  jal         func_139E70
label_294788:
    if (ctx->pc == 0x294788u) {
        ctx->pc = 0x294788u;
            // 0x294788: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x29478Cu;
        goto label_29478c;
    }
    ctx->pc = 0x294784u;
    SET_GPR_U32(ctx, 31, 0x29478Cu);
    ctx->pc = 0x294788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294784u;
            // 0x294788: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29478Cu; }
        if (ctx->pc != 0x29478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29478Cu; }
        if (ctx->pc != 0x29478Cu) { return; }
    }
    ctx->pc = 0x29478Cu;
label_29478c:
    // 0x29478c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29478cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294790:
    // 0x294790: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x294790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_294794:
    // 0x294794: 0xc04e748  jal         func_139D20
label_294798:
    if (ctx->pc == 0x294798u) {
        ctx->pc = 0x294798u;
            // 0x294798: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x29479Cu;
        goto label_29479c;
    }
    ctx->pc = 0x294794u;
    SET_GPR_U32(ctx, 31, 0x29479Cu);
    ctx->pc = 0x294798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294794u;
            // 0x294798: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29479Cu; }
        if (ctx->pc != 0x29479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29479Cu; }
        if (ctx->pc != 0x29479Cu) { return; }
    }
    ctx->pc = 0x29479Cu;
label_29479c:
    // 0x29479c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x29479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_2947a0:
    // 0x2947a0: 0xc04e638  jal         func_1398E0
label_2947a4:
    if (ctx->pc == 0x2947A4u) {
        ctx->pc = 0x2947A4u;
            // 0x2947a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947A8u;
        goto label_2947a8;
    }
    ctx->pc = 0x2947A0u;
    SET_GPR_U32(ctx, 31, 0x2947A8u);
    ctx->pc = 0x2947A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947A0u;
            // 0x2947a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947A8u; }
        if (ctx->pc != 0x2947A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947A8u; }
        if (ctx->pc != 0x2947A8u) { return; }
    }
    ctx->pc = 0x2947A8u;
label_2947a8:
    // 0x2947a8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2947ac:
    if (ctx->pc == 0x2947ACu) {
        ctx->pc = 0x2947ACu;
            // 0x2947ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947B0u;
        goto label_2947b0;
    }
    ctx->pc = 0x2947A8u;
    {
        const bool branch_taken_0x2947a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947A8u;
            // 0x2947ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947a8) {
            ctx->pc = 0x29485Cu;
            goto label_29485c;
        }
    }
    ctx->pc = 0x2947B0u;
label_2947b0:
    // 0x2947b0: 0xc08dc2c  jal         func_2370B0
label_2947b4:
    if (ctx->pc == 0x2947B4u) {
        ctx->pc = 0x2947B4u;
            // 0x2947b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947B8u;
        goto label_2947b8;
    }
    ctx->pc = 0x2947B0u;
    SET_GPR_U32(ctx, 31, 0x2947B8u);
    ctx->pc = 0x2947B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947B0u;
            // 0x2947b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B8u; }
        if (ctx->pc != 0x2947B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B8u; }
        if (ctx->pc != 0x2947B8u) { return; }
    }
    ctx->pc = 0x2947B8u;
label_2947b8:
    // 0x2947b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2947b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2947bc:
    // 0x2947bc: 0x26240148  addiu       $a0, $s1, 0x148
    ctx->pc = 0x2947bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
label_2947c0:
    // 0x2947c0: 0x244261f0  addiu       $v0, $v0, 0x61F0
    ctx->pc = 0x2947c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25072));
label_2947c4:
    // 0x2947c4: 0xc065c24  jal         func_197090
label_2947c8:
    if (ctx->pc == 0x2947C8u) {
        ctx->pc = 0x2947C8u;
            // 0x2947c8: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x2947CCu;
        goto label_2947cc;
    }
    ctx->pc = 0x2947C4u;
    SET_GPR_U32(ctx, 31, 0x2947CCu);
    ctx->pc = 0x2947C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947C4u;
            // 0x2947c8: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947CCu; }
        if (ctx->pc != 0x2947CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947CCu; }
        if (ctx->pc != 0x2947CCu) { return; }
    }
    ctx->pc = 0x2947CCu;
label_2947cc:
    // 0x2947cc: 0xae2001bc  sw          $zero, 0x1BC($s1)
    ctx->pc = 0x2947ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 0));
label_2947d0:
    // 0x2947d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2947d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2947d4:
    // 0x2947d4: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x2947d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
label_2947d8:
    // 0x2947d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2947d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2947dc:
    // 0x2947dc: 0xae2001b4  sw          $zero, 0x1B4($s1)
    ctx->pc = 0x2947dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
label_2947e0:
    // 0x2947e0: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x2947e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
label_2947e4:
    // 0x2947e4: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x2947e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_2947e8:
    // 0x2947e8: 0xa62001c8  sh          $zero, 0x1C8($s1)
    ctx->pc = 0x2947e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 456), (uint16_t)GPR_U32(ctx, 0));
label_2947ec:
    // 0x2947ec: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x2947ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
label_2947f0:
    // 0x2947f0: 0xa223020c  sb          $v1, 0x20C($s1)
    ctx->pc = 0x2947f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 524), (uint8_t)GPR_U32(ctx, 3));
label_2947f4:
    // 0x2947f4: 0xae220208  sw          $v0, 0x208($s1)
    ctx->pc = 0x2947f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 2));
label_2947f8:
    // 0x2947f8: 0xa62001ca  sh          $zero, 0x1CA($s1)
    ctx->pc = 0x2947f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 458), (uint16_t)GPR_U32(ctx, 0));
label_2947fc:
    // 0x2947fc: 0xa62001cc  sh          $zero, 0x1CC($s1)
    ctx->pc = 0x2947fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 460), (uint16_t)GPR_U32(ctx, 0));
label_294800:
    // 0x294800: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x294800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
label_294804:
    // 0x294804: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x294804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
label_294808:
    // 0x294808: 0xae2001d8  sw          $zero, 0x1D8($s1)
    ctx->pc = 0x294808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
label_29480c:
    // 0x29480c: 0xae2001dc  sw          $zero, 0x1DC($s1)
    ctx->pc = 0x29480cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
label_294810:
    // 0x294810: 0xa62001e0  sh          $zero, 0x1E0($s1)
    ctx->pc = 0x294810u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 480), (uint16_t)GPR_U32(ctx, 0));
label_294814:
    // 0x294814: 0xa62001e2  sh          $zero, 0x1E2($s1)
    ctx->pc = 0x294814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 482), (uint16_t)GPR_U32(ctx, 0));
label_294818:
    // 0x294818: 0xa62001e4  sh          $zero, 0x1E4($s1)
    ctx->pc = 0x294818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 484), (uint16_t)GPR_U32(ctx, 0));
label_29481c:
    // 0x29481c: 0xa62001e6  sh          $zero, 0x1E6($s1)
    ctx->pc = 0x29481cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 486), (uint16_t)GPR_U32(ctx, 0));
label_294820:
    // 0x294820: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x294820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
label_294824:
    // 0x294824: 0xa62001ea  sh          $zero, 0x1EA($s1)
    ctx->pc = 0x294824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 0));
label_294828:
    // 0x294828: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x294828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_29482c:
    // 0x29482c: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x29482cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
label_294830:
    // 0x294830: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x294830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
label_294834:
    // 0x294834: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x294834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
label_294838:
    // 0x294838: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x294838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_29483c:
    // 0x29483c: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x29483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_294840:
    // 0x294840: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x294840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_294844:
    // 0x294844: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x294844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
label_294848:
    // 0x294848: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x294848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_29484c:
    // 0x29484c: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x29484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_294850:
    // 0x294850: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x294850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_294854:
    // 0x294854: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x294854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_294858:
    // 0x294858: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x294858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
label_29485c:
    // 0x29485c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294860:
    // 0x294860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_294864:
    // 0x294864: 0xc08dc6c  jal         func_2371B0
label_294868:
    if (ctx->pc == 0x294868u) {
        ctx->pc = 0x294868u;
            // 0x294868: 0xaf919890  sw          $s1, -0x6770($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940816), GPR_U32(ctx, 17));
        ctx->pc = 0x29486Cu;
        goto label_29486c;
    }
    ctx->pc = 0x294864u;
    SET_GPR_U32(ctx, 31, 0x29486Cu);
    ctx->pc = 0x294868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294864u;
            // 0x294868: 0xaf919890  sw          $s1, -0x6770($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940816), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29486Cu; }
        if (ctx->pc != 0x29486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29486Cu; }
        if (ctx->pc != 0x29486Cu) { return; }
    }
    ctx->pc = 0x29486Cu;
label_29486c:
    // 0x29486c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29486cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294870:
    // 0x294870: 0x24050123  addiu       $a1, $zero, 0x123
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_294874:
    // 0x294874: 0xc04e748  jal         func_139D20
label_294878:
    if (ctx->pc == 0x294878u) {
        ctx->pc = 0x294878u;
            // 0x294878: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x29487Cu;
        goto label_29487c;
    }
    ctx->pc = 0x294874u;
    SET_GPR_U32(ctx, 31, 0x29487Cu);
    ctx->pc = 0x294878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294874u;
            // 0x294878: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29487Cu; }
        if (ctx->pc != 0x29487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29487Cu; }
        if (ctx->pc != 0x29487Cu) { return; }
    }
    ctx->pc = 0x29487Cu;
label_29487c:
    // 0x29487c: 0x2404120c  addiu       $a0, $zero, 0x120C
    ctx->pc = 0x29487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4620));
label_294880:
    // 0x294880: 0xc04e638  jal         func_1398E0
label_294884:
    if (ctx->pc == 0x294884u) {
        ctx->pc = 0x294884u;
            // 0x294884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294888u;
        goto label_294888;
    }
    ctx->pc = 0x294880u;
    SET_GPR_U32(ctx, 31, 0x294888u);
    ctx->pc = 0x294884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294880u;
            // 0x294884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294888u; }
        if (ctx->pc != 0x294888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294888u; }
        if (ctx->pc != 0x294888u) { return; }
    }
    ctx->pc = 0x294888u;
label_294888:
    // 0x294888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29488c:
    if (ctx->pc == 0x29488Cu) {
        ctx->pc = 0x29488Cu;
            // 0x29488c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294890u;
        goto label_294890;
    }
    ctx->pc = 0x294888u;
    {
        const bool branch_taken_0x294888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29488Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294888u;
            // 0x29488c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294888) {
            ctx->pc = 0x2948A0u;
            goto label_2948a0;
        }
    }
    ctx->pc = 0x294890u;
label_294890:
    // 0x294890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294894:
    // 0x294894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294898:
    // 0x294898: 0xc049c86  jal         func_127218
label_29489c:
    if (ctx->pc == 0x29489Cu) {
        ctx->pc = 0x29489Cu;
            // 0x29489c: 0x2406120c  addiu       $a2, $zero, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4620));
        ctx->pc = 0x2948A0u;
        goto label_2948a0;
    }
    ctx->pc = 0x294898u;
    SET_GPR_U32(ctx, 31, 0x2948A0u);
    ctx->pc = 0x29489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294898u;
            // 0x29489c: 0x2406120c  addiu       $a2, $zero, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948A0u; }
        if (ctx->pc != 0x2948A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948A0u; }
        if (ctx->pc != 0x2948A0u) { return; }
    }
    ctx->pc = 0x2948A0u;
label_2948a0:
    // 0x2948a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2948a4:
    // 0x2948a4: 0x8c22d648  lw          $v0, -0x29B8($at)
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
label_2948a8:
    // 0x2948a8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2948ac:
    if (ctx->pc == 0x2948ACu) {
        ctx->pc = 0x2948ACu;
            // 0x2948ac: 0xaf909840  sw          $s0, -0x67C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940736), GPR_U32(ctx, 16));
        ctx->pc = 0x2948B0u;
        goto label_2948b0;
    }
    ctx->pc = 0x2948A8u;
    {
        const bool branch_taken_0x2948a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2948ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2948A8u;
            // 0x2948ac: 0xaf909840  sw          $s0, -0x67C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940736), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948a8) {
            ctx->pc = 0x2948B4u;
            goto label_2948b4;
        }
    }
    ctx->pc = 0x2948B0u;
label_2948b0:
    // 0x2948b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2948b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2948b4:
    // 0x2948b4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2948b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2948b8:
    // 0x2948b8: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x2948b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_2948bc:
    // 0x2948bc: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2948bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2948c0:
    // 0x2948c0: 0xc0a9944  jal         func_2A6510
label_2948c4:
    if (ctx->pc == 0x2948C4u) {
        ctx->pc = 0x2948C4u;
            // 0x2948c4: 0x244501ec  addiu       $a1, $v0, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
        ctx->pc = 0x2948C8u;
        goto label_2948c8;
    }
    ctx->pc = 0x2948C0u;
    SET_GPR_U32(ctx, 31, 0x2948C8u);
    ctx->pc = 0x2948C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948C0u;
            // 0x2948c4: 0x244501ec  addiu       $a1, $v0, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948C8u; }
        if (ctx->pc != 0x2948C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948C8u; }
        if (ctx->pc != 0x2948C8u) { return; }
    }
    ctx->pc = 0x2948C8u;
label_2948c8:
    // 0x2948c8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2948c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2948cc:
    // 0x2948cc: 0xc0a98a0  jal         func_2A6280
label_2948d0:
    if (ctx->pc == 0x2948D0u) {
        ctx->pc = 0x2948D0u;
            // 0x2948d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2948D4u;
        goto label_2948d4;
    }
    ctx->pc = 0x2948CCu;
    SET_GPR_U32(ctx, 31, 0x2948D4u);
    ctx->pc = 0x2948D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948CCu;
            // 0x2948d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948D4u; }
        if (ctx->pc != 0x2948D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948D4u; }
        if (ctx->pc != 0x2948D4u) { return; }
    }
    ctx->pc = 0x2948D4u;
label_2948d4:
    // 0x2948d4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_2948d8:
    // 0x2948d8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2948dc:
    // 0x2948dc: 0xc04e748  jal         func_139D20
label_2948e0:
    if (ctx->pc == 0x2948E0u) {
        ctx->pc = 0x2948E0u;
            // 0x2948e0: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x2948E4u;
        goto label_2948e4;
    }
    ctx->pc = 0x2948DCu;
    SET_GPR_U32(ctx, 31, 0x2948E4u);
    ctx->pc = 0x2948E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948DCu;
            // 0x2948e0: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948E4u; }
        if (ctx->pc != 0x2948E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948E4u; }
        if (ctx->pc != 0x2948E4u) { return; }
    }
    ctx->pc = 0x2948E4u;
label_2948e4:
    // 0x2948e4: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x2948e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_2948e8:
    // 0x2948e8: 0xc04e638  jal         func_1398E0
label_2948ec:
    if (ctx->pc == 0x2948ECu) {
        ctx->pc = 0x2948ECu;
            // 0x2948ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2948F0u;
        goto label_2948f0;
    }
    ctx->pc = 0x2948E8u;
    SET_GPR_U32(ctx, 31, 0x2948F0u);
    ctx->pc = 0x2948ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948E8u;
            // 0x2948ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948F0u; }
        if (ctx->pc != 0x2948F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948F0u; }
        if (ctx->pc != 0x2948F0u) { return; }
    }
    ctx->pc = 0x2948F0u;
label_2948f0:
    // 0x2948f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2948f4:
    if (ctx->pc == 0x2948F4u) {
        ctx->pc = 0x2948F4u;
            // 0x2948f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2948F8u;
        goto label_2948f8;
    }
    ctx->pc = 0x2948F0u;
    {
        const bool branch_taken_0x2948f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2948F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2948F0u;
            // 0x2948f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948f0) {
            ctx->pc = 0x294924u;
            goto label_294924;
        }
    }
    ctx->pc = 0x2948F8u;
label_2948f8:
    // 0x2948f8: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2948fc:
    // 0x2948fc: 0xc065c24  jal         func_197090
label_294900:
    if (ctx->pc == 0x294900u) {
        ctx->pc = 0x294900u;
            // 0x294900: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x294904u;
        goto label_294904;
    }
    ctx->pc = 0x2948FCu;
    SET_GPR_U32(ctx, 31, 0x294904u);
    ctx->pc = 0x294900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948FCu;
            // 0x294900: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294904u; }
        if (ctx->pc != 0x294904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294904u; }
        if (ctx->pc != 0x294904u) { return; }
    }
    ctx->pc = 0x294904u;
label_294904:
    // 0x294904: 0x2631007c  addiu       $s1, $s1, 0x7C
    ctx->pc = 0x294904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_294908:
    // 0x294908: 0x26020104  addiu       $v0, $s0, 0x104
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_29490c:
    // 0x29490c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x29490cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_294910:
    // 0x294910: 0x0  nop
    ctx->pc = 0x294910u;
    // NOP
label_294914:
    // 0x294914: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_294918:
    if (ctx->pc == 0x294918u) {
        ctx->pc = 0x29491Cu;
        goto label_29491c;
    }
    ctx->pc = 0x294914u;
    {
        const bool branch_taken_0x294914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294914) {
            ctx->pc = 0x2948FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2948fc;
        }
    }
    ctx->pc = 0x29491Cu;
label_29491c:
    // 0x29491c: 0xc0878fc  jal         func_21E3F0
label_294920:
    if (ctx->pc == 0x294920u) {
        ctx->pc = 0x294920u;
            // 0x294920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294924u;
        goto label_294924;
    }
    ctx->pc = 0x29491Cu;
    SET_GPR_U32(ctx, 31, 0x294924u);
    ctx->pc = 0x294920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29491Cu;
            // 0x294920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3F0u;
    if (runtime->hasFunction(0x21E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294924u; }
        if (ctx->pc != 0x294924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CMenuMoveItemFv_0x21e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294924u; }
        if (ctx->pc != 0x294924u) { return; }
    }
    ctx->pc = 0x294924u;
label_294924:
    // 0x294924: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_294928:
    // 0x294928: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29492c:
    // 0x29492c: 0xaf909510  sw          $s0, -0x6AF0($gp)
    ctx->pc = 0x29492cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939920), GPR_U32(ctx, 16));
label_294930:
    // 0x294930: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x294930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_294934:
    // 0x294934: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x294934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294938:
    // 0x294938: 0xc08cb18  jal         func_232C60
label_29493c:
    if (ctx->pc == 0x29493Cu) {
        ctx->pc = 0x29493Cu;
            // 0x29493c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x294940u;
        goto label_294940;
    }
    ctx->pc = 0x294938u;
    SET_GPR_U32(ctx, 31, 0x294940u);
    ctx->pc = 0x29493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294938u;
            // 0x29493c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294940u; }
        if (ctx->pc != 0x294940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294940u; }
        if (ctx->pc != 0x294940u) { return; }
    }
    ctx->pc = 0x294940u;
label_294940:
    // 0x294940: 0xc065a18  jal         func_196860
label_294944:
    if (ctx->pc == 0x294944u) {
        ctx->pc = 0x294948u;
        goto label_294948;
    }
    ctx->pc = 0x294940u;
    SET_GPR_U32(ctx, 31, 0x294948u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294948u; }
        if (ctx->pc != 0x294948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294948u; }
        if (ctx->pc != 0x294948u) { return; }
    }
    ctx->pc = 0x294948u;
label_294948:
    // 0x294948: 0xc08d1bc  jal         func_2346F0
label_29494c:
    if (ctx->pc == 0x29494Cu) {
        ctx->pc = 0x29494Cu;
            // 0x29494c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294950u;
        goto label_294950;
    }
    ctx->pc = 0x294948u;
    SET_GPR_U32(ctx, 31, 0x294950u);
    ctx->pc = 0x29494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294948u;
            // 0x29494c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294950u; }
        if (ctx->pc != 0x294950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294950u; }
        if (ctx->pc != 0x294950u) { return; }
    }
    ctx->pc = 0x294950u;
label_294950:
    // 0x294950: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x294950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_294954:
    // 0x294954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294958:
    // 0x294958: 0xac30e3a8  sw          $s0, -0x1C58($at)
    ctx->pc = 0x294958u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 16));
label_29495c:
    // 0x29495c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29495cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294960:
    // 0x294960: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x294960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_294964:
    // 0x294964: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x294964u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
label_294968:
    // 0x294968: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29496c:
    // 0x29496c: 0xac22e3ac  sw          $v0, -0x1C54($at)
    ctx->pc = 0x29496cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 2));
label_294970:
    // 0x294970: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_294974:
    // 0x294974: 0x8c30ca48  lw          $s0, -0x35B8($at)
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_294978:
    // 0x294978: 0xc0874d8  jal         func_21D360
label_29497c:
    if (ctx->pc == 0x29497Cu) {
        ctx->pc = 0x29497Cu;
            // 0x29497c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294980u;
        goto label_294980;
    }
    ctx->pc = 0x294978u;
    SET_GPR_U32(ctx, 31, 0x294980u);
    ctx->pc = 0x29497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294978u;
            // 0x29497c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294980u; }
        if (ctx->pc != 0x294980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294980u; }
        if (ctx->pc != 0x294980u) { return; }
    }
    ctx->pc = 0x294980u;
label_294980:
    // 0x294980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294984:
    // 0x294984: 0xc0874e8  jal         func_21D3A0
label_294988:
    if (ctx->pc == 0x294988u) {
        ctx->pc = 0x294988u;
            // 0x294988: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x29498Cu;
        goto label_29498c;
    }
    ctx->pc = 0x294984u;
    SET_GPR_U32(ctx, 31, 0x29498Cu);
    ctx->pc = 0x294988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294984u;
            // 0x294988: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29498Cu; }
        if (ctx->pc != 0x29498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29498Cu; }
        if (ctx->pc != 0x29498Cu) { return; }
    }
    ctx->pc = 0x29498Cu;
label_29498c:
    // 0x29498c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_294990:
    // 0x294990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294994:
    // 0x294994: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x294994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_294998:
    // 0x294998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29499c:
    // 0x29499c: 0xae001ac8  sw          $zero, 0x1AC8($s0)
    ctx->pc = 0x29499cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6856), GPR_U32(ctx, 0));
label_2949a0:
    // 0x2949a0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2949a4:
    // 0x2949a4: 0xae021acc  sw          $v0, 0x1ACC($s0)
    ctx->pc = 0x2949a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6860), GPR_U32(ctx, 2));
label_2949a8:
    // 0x2949a8: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x2949a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2949ac:
    // 0x2949ac: 0xc0877e0  jal         func_21DF80
label_2949b0:
    if (ctx->pc == 0x2949B0u) {
        ctx->pc = 0x2949B0u;
            // 0x2949b0: 0xae0217fc  sw          $v0, 0x17FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6140), GPR_U32(ctx, 2));
        ctx->pc = 0x2949B4u;
        goto label_2949b4;
    }
    ctx->pc = 0x2949ACu;
    SET_GPR_U32(ctx, 31, 0x2949B4u);
    ctx->pc = 0x2949B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2949ACu;
            // 0x2949b0: 0xae0217fc  sw          $v0, 0x17FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949B4u; }
        if (ctx->pc != 0x2949B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949B4u; }
        if (ctx->pc != 0x2949B4u) { return; }
    }
    ctx->pc = 0x2949B4u;
label_2949b4:
    // 0x2949b4: 0xc087898  jal         func_21E260
label_2949b8:
    if (ctx->pc == 0x2949B8u) {
        ctx->pc = 0x2949B8u;
            // 0x2949b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2949BCu;
        goto label_2949bc;
    }
    ctx->pc = 0x2949B4u;
    SET_GPR_U32(ctx, 31, 0x2949BCu);
    ctx->pc = 0x2949B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2949B4u;
            // 0x2949b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949BCu; }
        if (ctx->pc != 0x2949BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949BCu; }
        if (ctx->pc != 0x2949BCu) { return; }
    }
    ctx->pc = 0x2949BCu;
label_2949bc:
    // 0x2949bc: 0x8e021e14  lw          $v0, 0x1E14($s0)
    ctx->pc = 0x2949bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
label_2949c0:
    // 0x2949c0: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x2949c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_2949c4:
    // 0x2949c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2949c8:
    if (ctx->pc == 0x2949C8u) {
        ctx->pc = 0x2949CCu;
        goto label_2949cc;
    }
    ctx->pc = 0x2949C4u;
    {
        const bool branch_taken_0x2949c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2949c4) {
            ctx->pc = 0x2949D0u;
            goto label_2949d0;
        }
    }
    ctx->pc = 0x2949CCu;
label_2949cc:
    // 0x2949cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2949ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2949d0:
    // 0x2949d0: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x2949d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_2949d4:
    // 0x2949d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2949d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2949d8:
    // 0x2949d8: 0x240503ea  addiu       $a1, $zero, 0x3EA
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
label_2949dc:
    // 0x2949dc: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x2949dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2949e0:
    // 0x2949e0: 0xc0877e0  jal         func_21DF80
label_2949e4:
    if (ctx->pc == 0x2949E4u) {
        ctx->pc = 0x2949E4u;
            // 0x2949e4: 0xa45101e4  sh          $s1, 0x1E4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 484), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x2949E8u;
        goto label_2949e8;
    }
    ctx->pc = 0x2949E0u;
    SET_GPR_U32(ctx, 31, 0x2949E8u);
    ctx->pc = 0x2949E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2949E0u;
            // 0x2949e4: 0xa45101e4  sh          $s1, 0x1E4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 484), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949E8u; }
        if (ctx->pc != 0x2949E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949E8u; }
        if (ctx->pc != 0x2949E8u) { return; }
    }
    ctx->pc = 0x2949E8u;
label_2949e8:
    // 0x2949e8: 0xc087898  jal         func_21E260
label_2949ec:
    if (ctx->pc == 0x2949ECu) {
        ctx->pc = 0x2949ECu;
            // 0x2949ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2949F0u;
        goto label_2949f0;
    }
    ctx->pc = 0x2949E8u;
    SET_GPR_U32(ctx, 31, 0x2949F0u);
    ctx->pc = 0x2949ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2949E8u;
            // 0x2949ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949F0u; }
        if (ctx->pc != 0x2949F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949F0u; }
        if (ctx->pc != 0x2949F0u) { return; }
    }
    ctx->pc = 0x2949F0u;
label_2949f0:
    // 0x2949f0: 0x8e021e14  lw          $v0, 0x1E14($s0)
    ctx->pc = 0x2949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
label_2949f4:
    // 0x2949f4: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x2949f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_2949f8:
    // 0x2949f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2949fc:
    if (ctx->pc == 0x2949FCu) {
        ctx->pc = 0x294A00u;
        goto label_294a00;
    }
    ctx->pc = 0x2949F8u;
    {
        const bool branch_taken_0x2949f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2949f8) {
            ctx->pc = 0x294A04u;
            goto label_294a04;
        }
    }
    ctx->pc = 0x294A00u;
label_294a00:
    // 0x294a00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x294a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294a04:
    // 0x294a04: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x294a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294a08:
    // 0x294a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294a0c:
    // 0x294a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294a10:
    // 0x294a10: 0xc0877e0  jal         func_21DF80
label_294a14:
    if (ctx->pc == 0x294A14u) {
        ctx->pc = 0x294A14u;
            // 0x294a14: 0xa45201e8  sh          $s2, 0x1E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x294A18u;
        goto label_294a18;
    }
    ctx->pc = 0x294A10u;
    SET_GPR_U32(ctx, 31, 0x294A18u);
    ctx->pc = 0x294A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A10u;
            // 0x294a14: 0xa45201e8  sh          $s2, 0x1E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A18u; }
        if (ctx->pc != 0x294A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A18u; }
        if (ctx->pc != 0x294A18u) { return; }
    }
    ctx->pc = 0x294A18u;
label_294a18:
    // 0x294a18: 0xc08d1d0  jal         func_234740
label_294a1c:
    if (ctx->pc == 0x294A1Cu) {
        ctx->pc = 0x294A1Cu;
            // 0x294a1c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->pc = 0x294A20u;
        goto label_294a20;
    }
    ctx->pc = 0x294A18u;
    SET_GPR_U32(ctx, 31, 0x294A20u);
    ctx->pc = 0x294A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A18u;
            // 0x294a1c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234740u;
    if (runtime->hasFunction(0x234740u)) {
        auto targetFn = runtime->lookupFunction(0x234740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A20u; }
        if (ctx->pc != 0x294A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainPosCfgBuffer__FPi_0x234740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A20u; }
        if (ctx->pc != 0x294A20u) { return; }
    }
    ctx->pc = 0x294A20u;
label_294a20:
    // 0x294a20: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x294a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_294a24:
    // 0x294a24: 0x3c0601f0  lui         $a2, 0x1F0
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)496 << 16));
label_294a28:
    // 0x294a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294a2c:
    // 0x294a2c: 0xc094f98  jal         func_253E60
label_294a30:
    if (ctx->pc == 0x294A30u) {
        ctx->pc = 0x294A30u;
            // 0x294a30: 0x24c652e0  addiu       $a2, $a2, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21216));
        ctx->pc = 0x294A34u;
        goto label_294a34;
    }
    ctx->pc = 0x294A2Cu;
    SET_GPR_U32(ctx, 31, 0x294A34u);
    ctx->pc = 0x294A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A2Cu;
            // 0x294a30: 0x24c652e0  addiu       $a2, $a2, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A34u; }
        if (ctx->pc != 0x294A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A34u; }
        if (ctx->pc != 0x294A34u) { return; }
    }
    ctx->pc = 0x294A34u;
label_294a34:
    // 0x294a34: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x294a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_294a38:
    // 0x294a38: 0xc08abbc  jal         func_22AEF0
label_294a3c:
    if (ctx->pc == 0x294A3Cu) {
        ctx->pc = 0x294A3Cu;
            // 0x294a3c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x294A40u;
        goto label_294a40;
    }
    ctx->pc = 0x294A38u;
    SET_GPR_U32(ctx, 31, 0x294A40u);
    ctx->pc = 0x294A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A38u;
            // 0x294a3c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A40u; }
        if (ctx->pc != 0x294A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A40u; }
        if (ctx->pc != 0x294A40u) { return; }
    }
    ctx->pc = 0x294A40u;
label_294a40:
    // 0x294a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294a44:
    // 0x294a44: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_294a48:
    // 0x294a48: 0x9452001c  lhu         $s2, 0x1C($v0)
    ctx->pc = 0x294a48u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_294a4c:
    // 0x294a4c: 0x2a410051  slti        $at, $s2, 0x51
    ctx->pc = 0x294a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)81) ? 1 : 0);
label_294a50:
    // 0x294a50: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
label_294a54:
    if (ctx->pc == 0x294A54u) {
        ctx->pc = 0x294A54u;
            // 0x294a54: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x294A58u;
        goto label_294a58;
    }
    ctx->pc = 0x294A50u;
    {
        const bool branch_taken_0x294a50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x294A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A50u;
            // 0x294a54: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a50) {
            ctx->pc = 0x294AF0u;
            goto label_294af0;
        }
    }
    ctx->pc = 0x294A58u;
label_294a58:
    // 0x294a58: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_294a5c:
    if (ctx->pc == 0x294A5Cu) {
        ctx->pc = 0x294A60u;
        goto label_294a60;
    }
    ctx->pc = 0x294A58u;
    {
        const bool branch_taken_0x294a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a58) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294A60u;
label_294a60:
    // 0x294a60: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_294a64:
    // 0x294a64: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_294a68:
    if (ctx->pc == 0x294A68u) {
        ctx->pc = 0x294A68u;
            // 0x294a68: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x294A6Cu;
        goto label_294a6c;
    }
    ctx->pc = 0x294A64u;
    {
        const bool branch_taken_0x294a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A64u;
            // 0x294a68: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a64) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294A6Cu;
label_294a6c:
    // 0x294a6c: 0xc04a38a  jal         func_128E28
label_294a70:
    if (ctx->pc == 0x294A70u) {
        ctx->pc = 0x294A70u;
            // 0x294a70: 0x24a5da78  addiu       $a1, $a1, -0x2588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
        ctx->pc = 0x294A74u;
        goto label_294a74;
    }
    ctx->pc = 0x294A6Cu;
    SET_GPR_U32(ctx, 31, 0x294A74u);
    ctx->pc = 0x294A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A6Cu;
            // 0x294a70: 0x24a5da78  addiu       $a1, $a1, -0x2588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A74u; }
        if (ctx->pc != 0x294A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A74u; }
        if (ctx->pc != 0x294A74u) { return; }
    }
    ctx->pc = 0x294A74u;
label_294a74:
    // 0x294a74: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_294a78:
    if (ctx->pc == 0x294A78u) {
        ctx->pc = 0x294A7Cu;
        goto label_294a7c;
    }
    ctx->pc = 0x294A74u;
    {
        const bool branch_taken_0x294a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a74) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294A7Cu;
label_294a7c:
    // 0x294a7c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_294a80:
    // 0x294a80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_294a84:
    // 0x294a84: 0xc04a38a  jal         func_128E28
label_294a88:
    if (ctx->pc == 0x294A88u) {
        ctx->pc = 0x294A88u;
            // 0x294a88: 0x24a5dce0  addiu       $a1, $a1, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
        ctx->pc = 0x294A8Cu;
        goto label_294a8c;
    }
    ctx->pc = 0x294A84u;
    SET_GPR_U32(ctx, 31, 0x294A8Cu);
    ctx->pc = 0x294A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A84u;
            // 0x294a88: 0x24a5dce0  addiu       $a1, $a1, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A8Cu; }
        if (ctx->pc != 0x294A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A8Cu; }
        if (ctx->pc != 0x294A8Cu) { return; }
    }
    ctx->pc = 0x294A8Cu;
label_294a8c:
    // 0x294a8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_294a90:
    if (ctx->pc == 0x294A90u) {
        ctx->pc = 0x294A94u;
        goto label_294a94;
    }
    ctx->pc = 0x294A8Cu;
    {
        const bool branch_taken_0x294a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a8c) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294A94u;
label_294a94:
    // 0x294a94: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_294a98:
    // 0x294a98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_294a9c:
    // 0x294a9c: 0xc04a38a  jal         func_128E28
label_294aa0:
    if (ctx->pc == 0x294AA0u) {
        ctx->pc = 0x294AA0u;
            // 0x294aa0: 0x24a5dce8  addiu       $a1, $a1, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958312));
        ctx->pc = 0x294AA4u;
        goto label_294aa4;
    }
    ctx->pc = 0x294A9Cu;
    SET_GPR_U32(ctx, 31, 0x294AA4u);
    ctx->pc = 0x294AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A9Cu;
            // 0x294aa0: 0x24a5dce8  addiu       $a1, $a1, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AA4u; }
        if (ctx->pc != 0x294AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AA4u; }
        if (ctx->pc != 0x294AA4u) { return; }
    }
    ctx->pc = 0x294AA4u;
label_294aa4:
    // 0x294aa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_294aa8:
    if (ctx->pc == 0x294AA8u) {
        ctx->pc = 0x294AACu;
        goto label_294aac;
    }
    ctx->pc = 0x294AA4u;
    {
        const bool branch_taken_0x294aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294aa4) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294AACu;
label_294aac:
    // 0x294aac: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_294ab0:
    // 0x294ab0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_294ab4:
    // 0x294ab4: 0xc04a38a  jal         func_128E28
label_294ab8:
    if (ctx->pc == 0x294AB8u) {
        ctx->pc = 0x294AB8u;
            // 0x294ab8: 0x24a5dcf8  addiu       $a1, $a1, -0x2308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958328));
        ctx->pc = 0x294ABCu;
        goto label_294abc;
    }
    ctx->pc = 0x294AB4u;
    SET_GPR_U32(ctx, 31, 0x294ABCu);
    ctx->pc = 0x294AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AB4u;
            // 0x294ab8: 0x24a5dcf8  addiu       $a1, $a1, -0x2308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ABCu; }
        if (ctx->pc != 0x294ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ABCu; }
        if (ctx->pc != 0x294ABCu) { return; }
    }
    ctx->pc = 0x294ABCu;
label_294abc:
    // 0x294abc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_294ac0:
    if (ctx->pc == 0x294AC0u) {
        ctx->pc = 0x294AC4u;
        goto label_294ac4;
    }
    ctx->pc = 0x294ABCu;
    {
        const bool branch_taken_0x294abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294abc) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294AC4u;
label_294ac4:
    // 0x294ac4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_294ac8:
    // 0x294ac8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_294acc:
    // 0x294acc: 0xc04a38a  jal         func_128E28
label_294ad0:
    if (ctx->pc == 0x294AD0u) {
        ctx->pc = 0x294AD0u;
            // 0x294ad0: 0x24a5dd00  addiu       $a1, $a1, -0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
        ctx->pc = 0x294AD4u;
        goto label_294ad4;
    }
    ctx->pc = 0x294ACCu;
    SET_GPR_U32(ctx, 31, 0x294AD4u);
    ctx->pc = 0x294AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294ACCu;
            // 0x294ad0: 0x24a5dd00  addiu       $a1, $a1, -0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AD4u; }
        if (ctx->pc != 0x294AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AD4u; }
        if (ctx->pc != 0x294AD4u) { return; }
    }
    ctx->pc = 0x294AD4u;
label_294ad4:
    // 0x294ad4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_294ad8:
    if (ctx->pc == 0x294AD8u) {
        ctx->pc = 0x294ADCu;
        goto label_294adc;
    }
    ctx->pc = 0x294AD4u;
    {
        const bool branch_taken_0x294ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ad4) {
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294ADCu;
label_294adc:
    // 0x294adc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x294adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_294ae0:
    // 0x294ae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_294ae4:
    // 0x294ae4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x294ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_294ae8:
    // 0x294ae8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_294aec:
    if (ctx->pc == 0x294AECu) {
        ctx->pc = 0x294AECu;
            // 0x294aec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x294AF0u;
        goto label_294af0;
    }
    ctx->pc = 0x294AE8u;
    {
        const bool branch_taken_0x294ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AE8u;
            // 0x294aec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ae8) {
            ctx->pc = 0x294A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294a58;
        }
    }
    ctx->pc = 0x294AF0u;
label_294af0:
    // 0x294af0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x294af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_294af4:
    // 0x294af4: 0xc08abbc  jal         func_22AEF0
label_294af8:
    if (ctx->pc == 0x294AF8u) {
        ctx->pc = 0x294AF8u;
            // 0x294af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x294AFCu;
        goto label_294afc;
    }
    ctx->pc = 0x294AF4u;
    SET_GPR_U32(ctx, 31, 0x294AFCu);
    ctx->pc = 0x294AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AF4u;
            // 0x294af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AFCu; }
        if (ctx->pc != 0x294AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AFCu; }
        if (ctx->pc != 0x294AFCu) { return; }
    }
    ctx->pc = 0x294AFCu;
label_294afc:
    // 0x294afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294b00:
    // 0x294b00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_294b04:
    if (ctx->pc == 0x294B04u) {
        ctx->pc = 0x294B08u;
        goto label_294b08;
    }
    ctx->pc = 0x294B00u;
    {
        const bool branch_taken_0x294b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b00) {
            ctx->pc = 0x294B18u;
            goto label_294b18;
        }
    }
    ctx->pc = 0x294B08u;
label_294b08:
    // 0x294b08: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x294b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_294b0c:
    // 0x294b0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_294b10:
    if (ctx->pc == 0x294B10u) {
        ctx->pc = 0x294B14u;
        goto label_294b14;
    }
    ctx->pc = 0x294B0Cu;
    {
        const bool branch_taken_0x294b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b0c) {
            ctx->pc = 0x294B18u;
            goto label_294b18;
        }
    }
    ctx->pc = 0x294B14u;
label_294b14:
    // 0x294b14: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x294b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_294b18:
    // 0x294b18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_294b1c:
    // 0x294b1c: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x294b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_294b20:
    // 0x294b20: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_294b24:
    if (ctx->pc == 0x294B24u) {
        ctx->pc = 0x294B24u;
            // 0x294b24: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x294B28u;
        goto label_294b28;
    }
    ctx->pc = 0x294B20u;
    {
        const bool branch_taken_0x294b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B20u;
            // 0x294b24: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b20) {
            ctx->pc = 0x294B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294b00;
        }
    }
    ctx->pc = 0x294B28u;
label_294b28:
    // 0x294b28: 0xc08ac10  jal         func_22B040
label_294b2c:
    if (ctx->pc == 0x294B2Cu) {
        ctx->pc = 0x294B2Cu;
            // 0x294b2c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x294B30u;
        goto label_294b30;
    }
    ctx->pc = 0x294B28u;
    SET_GPR_U32(ctx, 31, 0x294B30u);
    ctx->pc = 0x294B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B28u;
            // 0x294b2c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B30u; }
        if (ctx->pc != 0x294B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B30u; }
        if (ctx->pc != 0x294B30u) { return; }
    }
    ctx->pc = 0x294B30u;
label_294b30:
    // 0x294b30: 0xc08ad38  jal         func_22B4E0
label_294b34:
    if (ctx->pc == 0x294B34u) {
        ctx->pc = 0x294B34u;
            // 0x294b34: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x294B38u;
        goto label_294b38;
    }
    ctx->pc = 0x294B30u;
    SET_GPR_U32(ctx, 31, 0x294B38u);
    ctx->pc = 0x294B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B30u;
            // 0x294b34: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B38u; }
        if (ctx->pc != 0x294B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B38u; }
        if (ctx->pc != 0x294B38u) { return; }
    }
    ctx->pc = 0x294B38u;
label_294b38:
    // 0x294b38: 0xc08ef58  jal         func_23BD60
label_294b3c:
    if (ctx->pc == 0x294B3Cu) {
        ctx->pc = 0x294B3Cu;
            // 0x294b3c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x294B40u;
        goto label_294b40;
    }
    ctx->pc = 0x294B38u;
    SET_GPR_U32(ctx, 31, 0x294B40u);
    ctx->pc = 0x294B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B38u;
            // 0x294b3c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BD60u;
    if (runtime->hasFunction(0x23BD60u)) {
        auto targetFn = runtime->lookupFunction(0x23BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B40u; }
        if (ctx->pc != 0x294B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFuncData__12CMenuKeyFuncFv_0x23bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B40u; }
        if (ctx->pc != 0x294B40u) { return; }
    }
    ctx->pc = 0x294B40u;
label_294b40:
    // 0x294b40: 0xc087d68  jal         func_21F5A0
label_294b44:
    if (ctx->pc == 0x294B44u) {
        ctx->pc = 0x294B48u;
        goto label_294b48;
    }
    ctx->pc = 0x294B40u;
    SET_GPR_U32(ctx, 31, 0x294B48u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B48u; }
        if (ctx->pc != 0x294B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B48u; }
        if (ctx->pc != 0x294B48u) { return; }
    }
    ctx->pc = 0x294B48u;
label_294b48:
    // 0x294b48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294b4c:
    // 0x294b4c: 0xc08900c  jal         func_224030
label_294b50:
    if (ctx->pc == 0x294B50u) {
        ctx->pc = 0x294B50u;
            // 0x294b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x294B54u;
        goto label_294b54;
    }
    ctx->pc = 0x294B4Cu;
    SET_GPR_U32(ctx, 31, 0x294B54u);
    ctx->pc = 0x294B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B4Cu;
            // 0x294b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B54u; }
        if (ctx->pc != 0x294B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B54u; }
        if (ctx->pc != 0x294B54u) { return; }
    }
    ctx->pc = 0x294B54u;
label_294b54:
    // 0x294b54: 0xc0a4790  jal         func_291E40
label_294b58:
    if (ctx->pc == 0x294B58u) {
        ctx->pc = 0x294B58u;
            // 0x294b58: 0x8f849890  lw          $a0, -0x6770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
        ctx->pc = 0x294B5Cu;
        goto label_294b5c;
    }
    ctx->pc = 0x294B54u;
    SET_GPR_U32(ctx, 31, 0x294B5Cu);
    ctx->pc = 0x294B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B54u;
            // 0x294b58: 0x8f849890  lw          $a0, -0x6770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291E40u;
    if (runtime->hasFunction(0x291E40u)) {
        auto targetFn = runtime->lookupFunction(0x291E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B5Cu; }
        if (ctx->pc != 0x294B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__9CShopMenuFv_0x291e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B5Cu; }
        if (ctx->pc != 0x294B5Cu) { return; }
    }
    ctx->pc = 0x294B5Cu;
label_294b5c:
    // 0x294b5c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294b60:
    // 0x294b60: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_294b64:
    // 0x294b64: 0xc04e748  jal         func_139D20
label_294b68:
    if (ctx->pc == 0x294B68u) {
        ctx->pc = 0x294B68u;
            // 0x294b68: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x294B6Cu;
        goto label_294b6c;
    }
    ctx->pc = 0x294B64u;
    SET_GPR_U32(ctx, 31, 0x294B6Cu);
    ctx->pc = 0x294B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B64u;
            // 0x294b68: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B6Cu; }
        if (ctx->pc != 0x294B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B6Cu; }
        if (ctx->pc != 0x294B6Cu) { return; }
    }
    ctx->pc = 0x294B6Cu;
label_294b6c:
    // 0x294b6c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294b70:
    // 0x294b70: 0xc04e780  jal         func_139E00
label_294b74:
    if (ctx->pc == 0x294B74u) {
        ctx->pc = 0x294B74u;
            // 0x294b74: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x294B78u;
        goto label_294b78;
    }
    ctx->pc = 0x294B70u;
    SET_GPR_U32(ctx, 31, 0x294B78u);
    ctx->pc = 0x294B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B70u;
            // 0x294b74: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B78u; }
        if (ctx->pc != 0x294B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B78u; }
        if (ctx->pc != 0x294B78u) { return; }
    }
    ctx->pc = 0x294B78u;
label_294b78:
    // 0x294b78: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_294b7c:
    // 0x294b7c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x294b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_294b80:
    // 0x294b80: 0x8c255304  lw          $a1, 0x5304($at)
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
label_294b84:
    // 0x294b84: 0x2484dd10  addiu       $a0, $a0, -0x22F0
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958352));
label_294b88:
    // 0x294b88: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x294b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294b8c:
    // 0x294b8c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_294b90:
    // 0x294b90: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_294b94:
    // 0x294b94: 0x8c235300  lw          $v1, 0x5300($at)
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
label_294b98:
    // 0x294b98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x294b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294b9c:
    // 0x294b9c: 0xac43013c  sw          $v1, 0x13C($v0)
    ctx->pc = 0x294b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 3));
label_294ba0:
    // 0x294ba0: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x294ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294ba4:
    // 0x294ba4: 0x8c45013c  lw          $a1, 0x13C($v0)
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_294ba8:
    // 0x294ba8: 0xc094440  jal         func_251100
label_294bac:
    if (ctx->pc == 0x294BACu) {
        ctx->pc = 0x294BACu;
            // 0x294bac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x294BB0u;
        goto label_294bb0;
    }
    ctx->pc = 0x294BA8u;
    SET_GPR_U32(ctx, 31, 0x294BB0u);
    ctx->pc = 0x294BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294BA8u;
            // 0x294bac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BB0u; }
        if (ctx->pc != 0x294BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BB0u; }
        if (ctx->pc != 0x294BB0u) { return; }
    }
    ctx->pc = 0x294BB0u;
label_294bb0:
    // 0x294bb0: 0x8f839890  lw          $v1, -0x6770($gp)
    ctx->pc = 0x294bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294bb4:
    // 0x294bb4: 0xac620140  sw          $v0, 0x140($v1)
    ctx->pc = 0x294bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
label_294bb8:
    // 0x294bb8: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x294bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294bbc:
    // 0x294bbc: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x294bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_294bc0:
    // 0x294bc0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x294bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_294bc4:
    // 0x294bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_294bc8:
    if (ctx->pc == 0x294BC8u) {
        ctx->pc = 0x294BC8u;
            // 0x294bc8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x294BCCu;
        goto label_294bcc;
    }
    ctx->pc = 0x294BC4u;
    {
        const bool branch_taken_0x294bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294BC4u;
            // 0x294bc8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bc4) {
            ctx->pc = 0x294BD4u;
            goto label_294bd4;
        }
    }
    ctx->pc = 0x294BCCu;
label_294bcc:
    // 0x294bcc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x294bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_294bd0:
    // 0x294bd0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x294bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_294bd4:
    // 0x294bd4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294bd8:
    // 0x294bd8: 0xc04e748  jal         func_139D20
label_294bdc:
    if (ctx->pc == 0x294BDCu) {
        ctx->pc = 0x294BDCu;
            // 0x294bdc: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x294BE0u;
        goto label_294be0;
    }
    ctx->pc = 0x294BD8u;
    SET_GPR_U32(ctx, 31, 0x294BE0u);
    ctx->pc = 0x294BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294BD8u;
            // 0x294bdc: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BE0u; }
        if (ctx->pc != 0x294BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BE0u; }
        if (ctx->pc != 0x294BE0u) { return; }
    }
    ctx->pc = 0x294BE0u;
label_294be0:
    // 0x294be0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_294be4:
    // 0x294be4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x294be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_294be8:
    // 0x294be8: 0xc04e748  jal         func_139D20
label_294bec:
    if (ctx->pc == 0x294BECu) {
        ctx->pc = 0x294BECu;
            // 0x294bec: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x294BF0u;
        goto label_294bf0;
    }
    ctx->pc = 0x294BE8u;
    SET_GPR_U32(ctx, 31, 0x294BF0u);
    ctx->pc = 0x294BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294BE8u;
            // 0x294bec: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BF0u; }
        if (ctx->pc != 0x294BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BF0u; }
        if (ctx->pc != 0x294BF0u) { return; }
    }
    ctx->pc = 0x294BF0u;
label_294bf0:
    // 0x294bf0: 0xc08fc00  jal         func_23F000
label_294bf4:
    if (ctx->pc == 0x294BF4u) {
        ctx->pc = 0x294BF4u;
            // 0x294bf4: 0xaf809364  sw          $zero, -0x6C9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 0));
        ctx->pc = 0x294BF8u;
        goto label_294bf8;
    }
    ctx->pc = 0x294BF0u;
    SET_GPR_U32(ctx, 31, 0x294BF8u);
    ctx->pc = 0x294BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294BF0u;
            // 0x294bf4: 0xaf809364  sw          $zero, -0x6C9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BF8u; }
        if (ctx->pc != 0x294BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294BF8u; }
        if (ctx->pc != 0x294BF8u) { return; }
    }
    ctx->pc = 0x294BF8u;
label_294bf8:
    // 0x294bf8: 0x8f849890  lw          $a0, -0x6770($gp)
    ctx->pc = 0x294bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
label_294bfc:
    // 0x294bfc: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x294bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_294c00:
    // 0x294c00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x294c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_294c04:
    // 0x294c04: 0x320f809  jalr        $t9
label_294c08:
    if (ctx->pc == 0x294C08u) {
        ctx->pc = 0x294C0Cu;
        goto label_294c0c;
    }
    ctx->pc = 0x294C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294C0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x294C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294C0Cu; }
            if (ctx->pc != 0x294C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x294C0Cu;
label_294c0c:
    // 0x294c0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294c10:
    // 0x294c10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_294c14:
    // 0x294c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_294c18:
    // 0x294c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294c1c:
    // 0x294c1c: 0x3e00008  jr          $ra
label_294c20:
    if (ctx->pc == 0x294C20u) {
        ctx->pc = 0x294C20u;
            // 0x294c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x294C24u;
        goto label_fallthrough_0x294c1c;
    }
    ctx->pc = 0x294C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C1Cu;
            // 0x294c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x294c1c:
    ctx->pc = 0x294C24u;
}
