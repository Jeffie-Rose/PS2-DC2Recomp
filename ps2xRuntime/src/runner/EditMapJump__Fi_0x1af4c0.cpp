#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditMapJump__Fi
// Address: 0x1af4c0 - 0x1afbd0
void EditMapJump__Fi_0x1af4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditMapJump__Fi_0x1af4c0");
#endif

    switch (ctx->pc) {
        case 0x1af4ecu: goto label_1af4ec;
        case 0x1af4f4u: goto label_1af4f4;
        case 0x1af528u: goto label_1af528;
        case 0x1af534u: goto label_1af534;
        case 0x1af54cu: goto label_1af54c;
        case 0x1af55cu: goto label_1af55c;
        case 0x1af564u: goto label_1af564;
        case 0x1af56cu: goto label_1af56c;
        case 0x1af574u: goto label_1af574;
        case 0x1af57cu: goto label_1af57c;
        case 0x1af584u: goto label_1af584;
        case 0x1af598u: goto label_1af598;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5e4u: goto label_1af5e4;
        case 0x1af618u: goto label_1af618;
        case 0x1af620u: goto label_1af620;
        case 0x1af62cu: goto label_1af62c;
        case 0x1af644u: goto label_1af644;
        case 0x1af654u: goto label_1af654;
        case 0x1af660u: goto label_1af660;
        case 0x1af670u: goto label_1af670;
        case 0x1af684u: goto label_1af684;
        case 0x1af694u: goto label_1af694;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6acu: goto label_1af6ac;
        case 0x1af6b4u: goto label_1af6b4;
        case 0x1af6c4u: goto label_1af6c4;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af6dcu: goto label_1af6dc;
        case 0x1af6e8u: goto label_1af6e8;
        case 0x1af714u: goto label_1af714;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af724u: goto label_1af724;
        case 0x1af72cu: goto label_1af72c;
        case 0x1af73cu: goto label_1af73c;
        case 0x1af744u: goto label_1af744;
        case 0x1af74cu: goto label_1af74c;
        case 0x1af768u: goto label_1af768;
        case 0x1af780u: goto label_1af780;
        case 0x1af78cu: goto label_1af78c;
        case 0x1af7a0u: goto label_1af7a0;
        case 0x1af7acu: goto label_1af7ac;
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7d0u: goto label_1af7d0;
        case 0x1af7ecu: goto label_1af7ec;
        case 0x1af7f8u: goto label_1af7f8;
        case 0x1af808u: goto label_1af808;
        case 0x1af81cu: goto label_1af81c;
        case 0x1af838u: goto label_1af838;
        case 0x1af84cu: goto label_1af84c;
        case 0x1af874u: goto label_1af874;
        case 0x1af87cu: goto label_1af87c;
        case 0x1af890u: goto label_1af890;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8d0u: goto label_1af8d0;
        case 0x1af8e4u: goto label_1af8e4;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af90cu: goto label_1af90c;
        case 0x1af918u: goto label_1af918;
        case 0x1af928u: goto label_1af928;
        case 0x1af93cu: goto label_1af93c;
        case 0x1af948u: goto label_1af948;
        case 0x1af96cu: goto label_1af96c;
        case 0x1af974u: goto label_1af974;
        case 0x1af994u: goto label_1af994;
        case 0x1af9a8u: goto label_1af9a8;
        case 0x1af9b0u: goto label_1af9b0;
        case 0x1af9b8u: goto label_1af9b8;
        case 0x1af9c0u: goto label_1af9c0;
        case 0x1af9c8u: goto label_1af9c8;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9e0u: goto label_1af9e0;
        case 0x1af9e8u: goto label_1af9e8;
        case 0x1afa00u: goto label_1afa00;
        case 0x1afa08u: goto label_1afa08;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa38u: goto label_1afa38;
        case 0x1afa44u: goto label_1afa44;
        case 0x1afa50u: goto label_1afa50;
        case 0x1afa58u: goto label_1afa58;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa70u: goto label_1afa70;
        case 0x1afa80u: goto label_1afa80;
        case 0x1afa9cu: goto label_1afa9c;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afae8u: goto label_1afae8;
        case 0x1afaf4u: goto label_1afaf4;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb0cu: goto label_1afb0c;
        case 0x1afb18u: goto label_1afb18;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb94u: goto label_1afb94;
        case 0x1afba4u: goto label_1afba4;
        default: break;
    }

    ctx->pc = 0x1af4c0u;

    // 0x1af4c0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1af4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1af4c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1af4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1af4c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1af4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1af4cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1af4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1af4d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1af4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1af4d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af4d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1af4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af4e4: 0xc06b7f0  jal         func_1ADFC0
    ctx->pc = 0x1AF4E4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ECu);
    ctx->pc = 0x1AF4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4E4u;
            // 0x1af4e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADFC0u;
    if (runtime->hasFunction(0x1ADFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ECu; }
        if (ctx->pc != 0x1AF4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEditEvent__Fv_0x1adfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ECu; }
        if (ctx->pc != 0x1AF4ECu) { return; }
    }
    ctx->pc = 0x1AF4ECu;
label_1af4ec:
    // 0x1af4ec: 0xc052658  jal         func_149960
    ctx->pc = 0x1AF4ECu;
    SET_GPR_U32(ctx, 31, 0x1AF4F4u);
    ctx->pc = 0x149960u;
    if (runtime->hasFunction(0x149960u)) {
        auto targetFn = runtime->lookupFunction(0x149960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F4u; }
        if (ctx->pc != 0x1AF4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteFileCache__Fv_0x149960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F4u; }
        if (ctx->pc != 0x1AF4F4u) { return; }
    }
    ctx->pc = 0x1AF4F4u;
label_1af4f4:
    // 0x1af4f4: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x1af4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x1af4f8: 0x2a81000b  slti        $at, $s4, 0xB
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1af4fc: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0
    ctx->pc = 0x1af4fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
    // 0x1af500: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF500u;
    {
        const bool branch_taken_0x1af500 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF500u;
            // 0x1af504: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af500) {
            ctx->pc = 0x1AF51Cu;
            goto label_1af51c;
        }
    }
    ctx->pc = 0x1AF508u;
    // 0x1af508: 0x2a81000f  slti        $at, $s4, 0xF
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1af50c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF50Cu;
    {
        const bool branch_taken_0x1af50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af50c) {
            ctx->pc = 0x1AF51Cu;
            goto label_1af51c;
        }
    }
    ctx->pc = 0x1AF514u;
    // 0x1af514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF514u;
    {
        const bool branch_taken_0x1af514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF514u;
            // 0x1af518: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af514) {
            ctx->pc = 0x1AF520u;
            goto label_1af520;
        }
    }
    ctx->pc = 0x1AF51Cu;
label_1af51c:
    // 0x1af51c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1af51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af520:
    // 0x1af520: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x1AF520u;
    SET_GPR_U32(ctx, 31, 0x1AF528u);
    ctx->pc = 0x1ABC30u;
    if (runtime->hasFunction(0x1ABC30u)) {
        auto targetFn = runtime->lookupFunction(0x1ABC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF528u; }
        if (ctx->pc != 0x1AF528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSubMapLoadStep__Fv_0x1abc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF528u; }
        if (ctx->pc != 0x1AF528u) { return; }
    }
    ctx->pc = 0x1AF528u;
label_1af528:
    // 0x1af528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af52c: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x1AF52Cu;
    SET_GPR_U32(ctx, 31, 0x1AF534u);
    ctx->pc = 0x1AF530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF52Cu;
            // 0x1af530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF534u; }
        if (ctx->pc != 0x1AF534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF534u; }
        if (ctx->pc != 0x1AF534u) { return; }
    }
    ctx->pc = 0x1AF534u;
label_1af534:
    // 0x1af534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af538: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF538u;
    {
        const bool branch_taken_0x1af538 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF538u;
            // 0x1af53c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af538) {
            ctx->pc = 0x1AF554u;
            goto label_1af554;
        }
    }
    ctx->pc = 0x1AF540u;
    // 0x1af540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1af540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af544: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1AF544u;
    SET_GPR_U32(ctx, 31, 0x1AF54Cu);
    ctx->pc = 0x1AF548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF544u;
            // 0x1af548: 0x24846490  addiu       $a0, $a0, 0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF54Cu; }
        if (ctx->pc != 0x1AF54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF54Cu; }
        if (ctx->pc != 0x1AF54Cu) { return; }
    }
    ctx->pc = 0x1AF54Cu;
label_1af54c:
    // 0x1af54c: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x1AF54Cu;
    {
        const bool branch_taken_0x1af54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF54Cu;
            // 0x1af550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af54c) {
            ctx->pc = 0x1AFBA8u;
            goto label_1afba8;
        }
    }
    ctx->pc = 0x1AF554u;
label_1af554:
    // 0x1af554: 0xc0a97f8  jal         func_2A5FE0
    ctx->pc = 0x1AF554u;
    SET_GPR_U32(ctx, 31, 0x1AF55Cu);
    ctx->pc = 0x1AF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF554u;
            // 0x1af558: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FE0u;
    if (runtime->hasFunction(0x2A5FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF55Cu; }
        if (ctx->pc != 0x1AF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeAllStop__6CSceneFv_0x2a5fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF55Cu; }
        if (ctx->pc != 0x1AF55Cu) { return; }
    }
    ctx->pc = 0x1AF55Cu;
label_1af55c:
    // 0x1af55c: 0xc06bf8c  jal         func_1AFE30
    ctx->pc = 0x1AF55Cu;
    SET_GPR_U32(ctx, 31, 0x1AF564u);
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF564u; }
        if (ctx->pc != 0x1AF564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF564u; }
        if (ctx->pc != 0x1AF564u) { return; }
    }
    ctx->pc = 0x1AF564u;
label_1af564:
    // 0x1af564: 0xc0a12d0  jal         func_284B40
    ctx->pc = 0x1AF564u;
    SET_GPR_U32(ctx, 31, 0x1AF56Cu);
    ctx->pc = 0x1AF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF564u;
            // 0x1af568: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B40u;
    if (runtime->hasFunction(0x284B40u)) {
        auto targetFn = runtime->lookupFunction(0x284B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF56Cu; }
        if (ctx->pc != 0x1AF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetWind__6CSceneFv_0x284b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF56Cu; }
        if (ctx->pc != 0x1AF56Cu) { return; }
    }
    ctx->pc = 0x1AF56Cu;
label_1af56c:
    // 0x1af56c: 0xc0ba558  jal         func_2E9560
    ctx->pc = 0x1AF56Cu;
    SET_GPR_U32(ctx, 31, 0x1AF574u);
    ctx->pc = 0x2E9560u;
    if (runtime->hasFunction(0x2E9560u)) {
        auto targetFn = runtime->lookupFunction(0x2E9560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF574u; }
        if (ctx->pc != 0x1AF574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSphida__Fv_0x2e9560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF574u; }
        if (ctx->pc != 0x1AF574u) { return; }
    }
    ctx->pc = 0x1AF574u;
label_1af574:
    // 0x1af574: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x1AF574u;
    SET_GPR_U32(ctx, 31, 0x1AF57Cu);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF57Cu; }
        if (ctx->pc != 0x1AF57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF57Cu; }
        if (ctx->pc != 0x1AF57Cu) { return; }
    }
    ctx->pc = 0x1AF57Cu;
label_1af57c:
    // 0x1af57c: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x1AF57Cu;
    SET_GPR_U32(ctx, 31, 0x1AF584u);
    ctx->pc = 0x1AF580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF57Cu;
            // 0x1af580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF584u; }
        if (ctx->pc != 0x1AF584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF584u; }
        if (ctx->pc != 0x1AF584u) { return; }
    }
    ctx->pc = 0x1AF584u;
label_1af584:
    // 0x1af584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1af584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af588: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF588u;
    {
        const bool branch_taken_0x1af588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1af588) {
            ctx->pc = 0x1AF5A0u;
            goto label_1af5a0;
        }
    }
    ctx->pc = 0x1AF590u;
    // 0x1af590: 0xc06a724  jal         func_1A9C90
    ctx->pc = 0x1AF590u;
    SET_GPR_U32(ctx, 31, 0x1AF598u);
    ctx->pc = 0x1AF594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF590u;
            // 0x1af594: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C90u;
    if (runtime->hasFunction(0x1A9C90u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF598u; }
        if (ctx->pc != 0x1AF598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDataPacket__Fi_0x1a9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF598u; }
        if (ctx->pc != 0x1AF598u) { return; }
    }
    ctx->pc = 0x1AF598u;
label_1af598:
    // 0x1af598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF598u;
    {
        const bool branch_taken_0x1af598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af598) {
            ctx->pc = 0x1AF5A8u;
            goto label_1af5a8;
        }
    }
    ctx->pc = 0x1AF5A0u;
label_1af5a0:
    // 0x1af5a0: 0xc06a724  jal         func_1A9C90
    ctx->pc = 0x1AF5A0u;
    SET_GPR_U32(ctx, 31, 0x1AF5A8u);
    ctx->pc = 0x1A9C90u;
    if (runtime->hasFunction(0x1A9C90u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5A8u; }
        if (ctx->pc != 0x1AF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDataPacket__Fi_0x1a9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5A8u; }
        if (ctx->pc != 0x1AF5A8u) { return; }
    }
    ctx->pc = 0x1AF5A8u;
label_1af5a8:
    // 0x1af5a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5ac: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1af5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1af5b0: 0x8c23ea78  lw          $v1, -0x1588($at)
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961784)));
    // 0x1af5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af5b8: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x1af5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x1af5bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5c0: 0xac22ea6c  sw          $v0, -0x1594($at)
    ctx->pc = 0x1af5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 2));
    // 0x1af5c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5c8: 0x8c25ea74  lw          $a1, -0x158C($at)
    ctx->pc = 0x1af5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961780)));
    // 0x1af5cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5d0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1af5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af5d4: 0x8c22ea70  lw          $v0, -0x1590($at)
    ctx->pc = 0x1af5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961776)));
    // 0x1af5d8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1af5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1af5dc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1AF5DCu;
    SET_GPR_U32(ctx, 31, 0x1AF5E4u);
    ctx->pc = 0x1AF5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5DCu;
            // 0x1af5e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5E4u; }
        if (ctx->pc != 0x1AF5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5E4u; }
        if (ctx->pc != 0x1AF5E4u) { return; }
    }
    ctx->pc = 0x1AF5E4u;
label_1af5e4:
    // 0x1af5e4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1af5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1af5ec: 0xac20eaa4  sw          $zero, -0x155C($at)
    ctx->pc = 0x1af5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961828), GPR_U32(ctx, 0));
    // 0x1af5f0: 0x248464a8  addiu       $a0, $a0, 0x64A8
    ctx->pc = 0x1af5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25768));
    // 0x1af5f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af5f8: 0xac20ea9c  sw          $zero, -0x1564($at)
    ctx->pc = 0x1af5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961820), GPR_U32(ctx, 0));
    // 0x1af5fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af600: 0x8c23eaa4  lw          $v1, -0x155C($at)
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961828)));
    // 0x1af604: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1af604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1af608: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1af608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1af60c: 0x8c22eaa0  lw          $v0, -0x1560($at)
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961824)));
    // 0x1af610: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1AF610u;
    SET_GPR_U32(ctx, 31, 0x1AF618u);
    ctx->pc = 0x1AF614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF610u;
            // 0x1af614: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF618u; }
        if (ctx->pc != 0x1AF618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF618u; }
        if (ctx->pc != 0x1AF618u) { return; }
    }
    ctx->pc = 0x1AF618u;
label_1af618:
    // 0x1af618: 0xc0a1454  jal         func_285150
    ctx->pc = 0x1AF618u;
    SET_GPR_U32(ctx, 31, 0x1AF620u);
    ctx->pc = 0x1AF61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF618u;
            // 0x1af61c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF620u; }
        if (ctx->pc != 0x1AF620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF620u; }
        if (ctx->pc != 0x1AF620u) { return; }
    }
    ctx->pc = 0x1AF620u;
label_1af620:
    // 0x1af620: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1af624: 0xc0b7bd0  jal         func_2DEF40
    ctx->pc = 0x1AF624u;
    SET_GPR_U32(ctx, 31, 0x1AF62Cu);
    ctx->pc = 0x1AF628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF624u;
            // 0x1af628: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEF40u;
    if (runtime->hasFunction(0x2DEF40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF62Cu; }
        if (ctx->pc != 0x1AF62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i_0x2def40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF62Cu; }
        if (ctx->pc != 0x1AF62Cu) { return; }
    }
    ctx->pc = 0x1AF62Cu;
label_1af62c:
    // 0x1af62c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF62Cu;
    {
        const bool branch_taken_0x1af62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF62Cu;
            // 0x1af630: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af62c) {
            ctx->pc = 0x1AF63Cu;
            goto label_1af63c;
        }
    }
    ctx->pc = 0x1AF634u;
    // 0x1af634: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x1AF634u;
    {
        const bool branch_taken_0x1af634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF634u;
            // 0x1af638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af634) {
            ctx->pc = 0x1AFBA8u;
            goto label_1afba8;
        }
    }
    ctx->pc = 0x1AF63Cu;
label_1af63c:
    // 0x1af63c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF63Cu;
    SET_GPR_U32(ctx, 31, 0x1AF644u);
    ctx->pc = 0x1AF640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF63Cu;
            // 0x1af640: 0x248464b8  addiu       $a0, $a0, 0x64B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF644u; }
        if (ctx->pc != 0x1AF644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF644u; }
        if (ctx->pc != 0x1AF644u) { return; }
    }
    ctx->pc = 0x1AF644u;
label_1af644:
    // 0x1af644: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AF644u;
    {
        const bool branch_taken_0x1af644 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af644) {
            ctx->pc = 0x1AF6A4u;
            goto label_1af6a4;
        }
    }
    ctx->pc = 0x1AF64Cu;
    // 0x1af64c: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF64Cu;
    SET_GPR_U32(ctx, 31, 0x1AF654u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF654u; }
        if (ctx->pc != 0x1AF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF654u; }
        if (ctx->pc != 0x1AF654u) { return; }
    }
    ctx->pc = 0x1AF654u;
label_1af654:
    // 0x1af654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af658: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1AF658u;
    SET_GPR_U32(ctx, 31, 0x1AF660u);
    ctx->pc = 0x1AF65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF658u;
            // 0x1af65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF660u; }
        if (ctx->pc != 0x1AF660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF660u; }
        if (ctx->pc != 0x1AF660u) { return; }
    }
    ctx->pc = 0x1AF660u;
label_1af660:
    // 0x1af660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af668: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x1AF668u;
    SET_GPR_U32(ctx, 31, 0x1AF670u);
    ctx->pc = 0x1AF66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF668u;
            // 0x1af66c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF670u; }
        if (ctx->pc != 0x1AF670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF670u; }
        if (ctx->pc != 0x1AF670u) { return; }
    }
    ctx->pc = 0x1AF670u;
label_1af670:
    // 0x1af670: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF670u;
    {
        const bool branch_taken_0x1af670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF670u;
            // 0x1af674: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af670) {
            ctx->pc = 0x1AF6A4u;
            goto label_1af6a4;
        }
    }
    ctx->pc = 0x1AF678u;
    // 0x1af678: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1af678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1af67c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF67Cu;
    SET_GPR_U32(ctx, 31, 0x1AF684u);
    ctx->pc = 0x1AF680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF67Cu;
            // 0x1af680: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF684u; }
        if (ctx->pc != 0x1AF684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF684u; }
        if (ctx->pc != 0x1AF684u) { return; }
    }
    ctx->pc = 0x1AF684u;
label_1af684:
    // 0x1af684: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1af688: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1af688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1af68c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF68Cu;
    SET_GPR_U32(ctx, 31, 0x1AF694u);
    ctx->pc = 0x1AF690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF68Cu;
            // 0x1af690: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF694u; }
        if (ctx->pc != 0x1AF694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF694u; }
        if (ctx->pc != 0x1AF694u) { return; }
    }
    ctx->pc = 0x1AF694u;
label_1af694:
    // 0x1af694: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1af698: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1af698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1af69c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF69Cu;
    SET_GPR_U32(ctx, 31, 0x1AF6A4u);
    ctx->pc = 0x1AF6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF69Cu;
            // 0x1af6a0: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6A4u; }
        if (ctx->pc != 0x1AF6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6A4u; }
        if (ctx->pc != 0x1AF6A4u) { return; }
    }
    ctx->pc = 0x1AF6A4u;
label_1af6a4:
    // 0x1af6a4: 0xc0b25c4  jal         func_2C9710
    ctx->pc = 0x1AF6A4u;
    SET_GPR_U32(ctx, 31, 0x1AF6ACu);
    ctx->pc = 0x1AF6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6A4u;
            // 0x1af6a8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6ACu; }
        if (ctx->pc != 0x1AF6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6ACu; }
        if (ctx->pc != 0x1AF6ACu) { return; }
    }
    ctx->pc = 0x1AF6ACu;
label_1af6ac:
    // 0x1af6ac: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x1AF6ACu;
    SET_GPR_U32(ctx, 31, 0x1AF6B4u);
    ctx->pc = 0x1AF6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ACu;
            // 0x1af6b0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6B4u; }
        if (ctx->pc != 0x1AF6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6B4u; }
        if (ctx->pc != 0x1AF6B4u) { return; }
    }
    ctx->pc = 0x1AF6B4u;
label_1af6b4:
    // 0x1af6b4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af6b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1af6bc: 0xc0b7b54  jal         func_2DED50
    ctx->pc = 0x1AF6BCu;
    SET_GPR_U32(ctx, 31, 0x1AF6C4u);
    ctx->pc = 0x1AF6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6BCu;
            // 0x1af6c0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DED50u;
    if (runtime->hasFunction(0x2DED50u)) {
        auto targetFn = runtime->lookupFunction(0x2DED50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6C4u; }
        if (ctx->pc != 0x1AF6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapJump__FP6CSceneP17SCN_LOADMAP_INFO2i_0x2ded50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6C4u; }
        if (ctx->pc != 0x1AF6C4u) { return; }
    }
    ctx->pc = 0x1AF6C4u;
label_1af6c4:
    // 0x1af6c4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af6c8: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF6C8u;
    SET_GPR_U32(ctx, 31, 0x1AF6D0u);
    ctx->pc = 0x1AF6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6C8u;
            // 0x1af6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6D0u; }
        if (ctx->pc != 0x1AF6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6D0u; }
        if (ctx->pc != 0x1AF6D0u) { return; }
    }
    ctx->pc = 0x1AF6D0u;
label_1af6d0:
    // 0x1af6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1af6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6d4: 0xc0c638c  jal         func_318E30
    ctx->pc = 0x1AF6D4u;
    SET_GPR_U32(ctx, 31, 0x1AF6DCu);
    ctx->pc = 0x1AF6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6D4u;
            // 0x1af6d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318E30u;
    if (runtime->hasFunction(0x318E30u)) {
        auto targetFn = runtime->lookupFunction(0x318E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6DCu; }
        if (ctx->pc != 0x1AF6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapInitEvent__FiP8CEditMap_0x318e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6DCu; }
        if (ctx->pc != 0x1AF6DCu) { return; }
    }
    ctx->pc = 0x1AF6DCu;
label_1af6dc:
    // 0x1af6dc: 0x3c1201ea  lui         $s2, 0x1EA
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)490 << 16));
    // 0x1af6e0: 0xc0953d8  jal         func_254F60
    ctx->pc = 0x1AF6E0u;
    SET_GPR_U32(ctx, 31, 0x1AF6E8u);
    ctx->pc = 0x1AF6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6E0u;
            // 0x1af6e4: 0x2652ea80  addiu       $s2, $s2, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254F60u;
    if (runtime->hasFunction(0x254F60u)) {
        auto targetFn = runtime->lookupFunction(0x254F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6E8u; }
        if (ctx->pc != 0x1AF6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetNpcTalkMes__Fv_0x254f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6E8u; }
        if (ctx->pc != 0x1AF6E8u) { return; }
    }
    ctx->pc = 0x1AF6E8u;
label_1af6e8:
    // 0x1af6e8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1af6ec: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF6ECu;
    {
        const bool branch_taken_0x1af6ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ECu;
            // 0x1af6f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6ec) {
            ctx->pc = 0x1AF70Cu;
            goto label_1af70c;
        }
    }
    ctx->pc = 0x1AF6F4u;
    // 0x1af6f4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1af6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1af6f8: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF6F8u;
    {
        const bool branch_taken_0x1af6f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6F8u;
            // 0x1af6fc: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6f8) {
            ctx->pc = 0x1AF708u;
            goto label_1af708;
        }
    }
    ctx->pc = 0x1AF700u;
    // 0x1af700: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF700u;
    {
        const bool branch_taken_0x1af700 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af700) {
            ctx->pc = 0x1AF71Cu;
            goto label_1af71c;
        }
    }
    ctx->pc = 0x1AF708u;
label_1af708:
    // 0x1af708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1af708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1af70c:
    // 0x1af70c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1AF70Cu;
    SET_GPR_U32(ctx, 31, 0x1AF714u);
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF714u; }
        if (ctx->pc != 0x1AF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF714u; }
        if (ctx->pc != 0x1AF714u) { return; }
    }
    ctx->pc = 0x1AF714u;
label_1af714:
    // 0x1af714: 0xc095398  jal         func_254E60
    ctx->pc = 0x1AF714u;
    SET_GPR_U32(ctx, 31, 0x1AF71Cu);
    ctx->pc = 0x1AF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF714u;
            // 0x1af718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254E60u;
    if (runtime->hasFunction(0x254E60u)) {
        auto targetFn = runtime->lookupFunction(0x254E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF71Cu; }
        if (ctx->pc != 0x1AF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNpcTalkMes__FP9mgCMemory_0x254e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF71Cu; }
        if (ctx->pc != 0x1AF71Cu) { return; }
    }
    ctx->pc = 0x1AF71Cu;
label_1af71c:
    // 0x1af71c: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AF71Cu;
    SET_GPR_U32(ctx, 31, 0x1AF724u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF724u; }
        if (ctx->pc != 0x1AF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF724u; }
        if (ctx->pc != 0x1AF724u) { return; }
    }
    ctx->pc = 0x1AF724u;
label_1af724:
    // 0x1af724: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF724u;
    SET_GPR_U32(ctx, 31, 0x1AF72Cu);
    ctx->pc = 0x1AF728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF724u;
            // 0x1af728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF72Cu; }
        if (ctx->pc != 0x1AF72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF72Cu; }
        if (ctx->pc != 0x1AF72Cu) { return; }
    }
    ctx->pc = 0x1AF72Cu;
label_1af72c:
    // 0x1af72c: 0xaf828c58  sw          $v0, -0x73A8($gp)
    ctx->pc = 0x1af72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
    // 0x1af730: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1af730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1af734: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x1AF734u;
    SET_GPR_U32(ctx, 31, 0x1AF73Cu);
    ctx->pc = 0x1AF738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF734u;
            // 0x1af738: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF73Cu; }
        if (ctx->pc != 0x1AF73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF73Cu; }
        if (ctx->pc != 0x1AF73Cu) { return; }
    }
    ctx->pc = 0x1AF73Cu;
label_1af73c:
    // 0x1af73c: 0xc09897c  jal         func_2625F0
    ctx->pc = 0x1AF73Cu;
    SET_GPR_U32(ctx, 31, 0x1AF744u);
    ctx->pc = 0x2625F0u;
    if (runtime->hasFunction(0x2625F0u)) {
        auto targetFn = runtime->lookupFunction(0x2625F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF744u; }
        if (ctx->pc != 0x1AF744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventMapInit__Fv_0x2625f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF744u; }
        if (ctx->pc != 0x1AF744u) { return; }
    }
    ctx->pc = 0x1AF744u;
label_1af744:
    // 0x1af744: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x1AF744u;
    SET_GPR_U32(ctx, 31, 0x1AF74Cu);
    ctx->pc = 0x1AF748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF744u;
            // 0x1af748: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF74Cu; }
        if (ctx->pc != 0x1AF74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF74Cu; }
        if (ctx->pc != 0x1AF74Cu) { return; }
    }
    ctx->pc = 0x1AF74Cu;
label_1af74c:
    // 0x1af74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af750: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1AF750u;
    {
        const bool branch_taken_0x1af750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af750) {
            ctx->pc = 0x1AF888u;
            goto label_1af888;
        }
    }
    ctx->pc = 0x1AF758u;
    // 0x1af758: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af75c: 0x8e550024  lw          $s5, 0x24($s2)
    ctx->pc = 0x1af75cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1af760: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF760u;
    SET_GPR_U32(ctx, 31, 0x1AF768u);
    ctx->pc = 0x1AF764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF760u;
            // 0x1af764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF768u; }
        if (ctx->pc != 0x1AF768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF768u; }
        if (ctx->pc != 0x1AF768u) { return; }
    }
    ctx->pc = 0x1AF768u;
label_1af768:
    // 0x1af768: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1af768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af76c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1af76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af774: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1af778: 0xc06c258  jal         func_1B0960
    ctx->pc = 0x1AF778u;
    SET_GPR_U32(ctx, 31, 0x1AF780u);
    ctx->pc = 0x1AF77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF778u;
            // 0x1af77c: 0x3407a000  ori         $a3, $zero, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0960u;
    if (runtime->hasFunction(0x1B0960u)) {
        auto targetFn = runtime->lookupFunction(0x1B0960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF780u; }
        if (ctx->pc != 0x1AF780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTable__8CEditMapFP9mgCMemoryii_0x1b0960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF780u; }
        if (ctx->pc != 0x1AF780u) { return; }
    }
    ctx->pc = 0x1AF780u;
label_1af780:
    // 0x1af780: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af784: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x1AF784u;
    SET_GPR_U32(ctx, 31, 0x1AF78Cu);
    ctx->pc = 0x1AF788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF784u;
            // 0x1af788: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF78Cu; }
        if (ctx->pc != 0x1AF78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF78Cu; }
        if (ctx->pc != 0x1AF78Cu) { return; }
    }
    ctx->pc = 0x1AF78Cu;
label_1af78c:
    // 0x1af78c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1af78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1af790: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1af790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1af794: 0x27a402bc  addiu       $a0, $sp, 0x2BC
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x1af798: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1AF798u;
    SET_GPR_U32(ctx, 31, 0x1AF7A0u);
    ctx->pc = 0x1AF79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF798u;
            // 0x1af79c: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7A0u; }
        if (ctx->pc != 0x1AF7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7A0u; }
        if (ctx->pc != 0x1AF7A0u) { return; }
    }
    ctx->pc = 0x1AF7A0u;
label_1af7a0:
    // 0x1af7a0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af7a4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF7A4u;
    SET_GPR_U32(ctx, 31, 0x1AF7ACu);
    ctx->pc = 0x1AF7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7A4u;
            // 0x1af7a8: 0x27a502bc  addiu       $a1, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7ACu; }
        if (ctx->pc != 0x1AF7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7ACu; }
        if (ctx->pc != 0x1AF7ACu) { return; }
    }
    ctx->pc = 0x1AF7ACu;
label_1af7ac:
    // 0x1af7ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1af7b0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af7b4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF7B4u;
    SET_GPR_U32(ctx, 31, 0x1AF7BCu);
    ctx->pc = 0x1AF7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7B4u;
            // 0x1af7b8: 0x24a564d0  addiu       $a1, $a1, 0x64D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7BCu; }
        if (ctx->pc != 0x1AF7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7BCu; }
        if (ctx->pc != 0x1AF7BCu) { return; }
    }
    ctx->pc = 0x1AF7BCu;
label_1af7bc:
    // 0x1af7bc: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af7c0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af7c4: 0x27a602b8  addiu       $a2, $sp, 0x2B8
    ctx->pc = 0x1af7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x1af7c8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1AF7C8u;
    SET_GPR_U32(ctx, 31, 0x1AF7D0u);
    ctx->pc = 0x1AF7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7C8u;
            // 0x1af7cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7D0u; }
        if (ctx->pc != 0x1AF7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7D0u; }
        if (ctx->pc != 0x1AF7D0u) { return; }
    }
    ctx->pc = 0x1AF7D0u;
label_1af7d0:
    // 0x1af7d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF7D0u;
    {
        const bool branch_taken_0x1af7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7D0u;
            // 0x1af7d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7d0) {
            ctx->pc = 0x1AF7F0u;
            goto label_1af7f0;
        }
    }
    ctx->pc = 0x1AF7D8u;
    // 0x1af7d8: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af7dc: 0x26640f94  addiu       $a0, $s3, 0xF94
    ctx->pc = 0x1af7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3988));
    // 0x1af7e0: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x1af7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x1af7e4: 0xc0a9638  jal         func_2A58E0
    ctx->pc = 0x1AF7E4u;
    SET_GPR_U32(ctx, 31, 0x1AF7ECu);
    ctx->pc = 0x1AF7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7E4u;
            // 0x1af7e8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A58E0u;
    if (runtime->hasFunction(0x2A58E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A58E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7ECu; }
        if (ctx->pc != 0x1AF7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditInfo__13CEditInfoMngrFPciP9mgCMemory_0x2a58e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7ECu; }
        if (ctx->pc != 0x1AF7ECu) { return; }
    }
    ctx->pc = 0x1AF7ECu;
label_1af7ec:
    // 0x1af7ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af7f0:
    // 0x1af7f0: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x1AF7F0u;
    SET_GPR_U32(ctx, 31, 0x1AF7F8u);
    ctx->pc = 0x1AF7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7F0u;
            // 0x1af7f4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7F8u; }
        if (ctx->pc != 0x1AF7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7F8u; }
        if (ctx->pc != 0x1AF7F8u) { return; }
    }
    ctx->pc = 0x1AF7F8u;
label_1af7f8:
    // 0x1af7f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1af7fc: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af800: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1AF800u;
    SET_GPR_U32(ctx, 31, 0x1AF808u);
    ctx->pc = 0x1AF804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF800u;
            // 0x1af804: 0x24a564d8  addiu       $a1, $a1, 0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF808u; }
        if (ctx->pc != 0x1AF808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF808u; }
        if (ctx->pc != 0x1AF808u) { return; }
    }
    ctx->pc = 0x1AF808u;
label_1af808:
    // 0x1af808: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af80c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1af80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1af810: 0x27a602b8  addiu       $a2, $sp, 0x2B8
    ctx->pc = 0x1af810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x1af814: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1AF814u;
    SET_GPR_U32(ctx, 31, 0x1AF81Cu);
    ctx->pc = 0x1AF818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF814u;
            // 0x1af818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF81Cu; }
        if (ctx->pc != 0x1AF81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF81Cu; }
        if (ctx->pc != 0x1AF81Cu) { return; }
    }
    ctx->pc = 0x1AF81Cu;
label_1af81c:
    // 0x1af81c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF81Cu;
    {
        const bool branch_taken_0x1af81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af81c) {
            ctx->pc = 0x1AF838u;
            goto label_1af838;
        }
    }
    ctx->pc = 0x1AF824u;
    // 0x1af824: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1af824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af82c: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x1af830: 0xc06d2b0  jal         func_1B4AC0
    ctx->pc = 0x1AF830u;
    SET_GPR_U32(ctx, 31, 0x1AF838u);
    ctx->pc = 0x1AF834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF830u;
            // 0x1af834: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AC0u;
    if (runtime->hasFunction(0x1B4AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF838u; }
        if (ctx->pc != 0x1AF838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditInfo__8CEditMapFPciP9mgCMemory_0x1b4ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF838u; }
        if (ctx->pc != 0x1AF838u) { return; }
    }
    ctx->pc = 0x1AF838u;
label_1af838:
    // 0x1af838: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1af838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af840: 0x8c422e60  lw          $v0, 0x2E60($v0)
    ctx->pc = 0x1af840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
    // 0x1af844: 0xc06c118  jal         func_1B0460
    ctx->pc = 0x1AF844u;
    SET_GPR_U32(ctx, 31, 0x1AF84Cu);
    ctx->pc = 0x1AF848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF844u;
            // 0x1af848: 0xae620f80  sw          $v0, 0xF80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0460u;
    if (runtime->hasFunction(0x1B0460u)) {
        auto targetFn = runtime->lookupFunction(0x1B0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF84Cu; }
        if (ctx->pc != 0x1AF84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearAllParts__8CEditMapFv_0x1b0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF84Cu; }
        if (ctx->pc != 0x1AF84Cu) { return; }
    }
    ctx->pc = 0x1AF84Cu;
label_1af84c:
    // 0x1af84c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1af84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1af850: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1af854: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af858: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF858u;
            // 0x1af85c: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF868u;
            goto label_1af868;
        }
    }
    ctx->pc = 0x1AF860u;
    // 0x1af860: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1af864: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1af868:
    // 0x1af868: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1af86c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1AF86Cu;
    SET_GPR_U32(ctx, 31, 0x1AF874u);
    ctx->pc = 0x1AF870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF86Cu;
            // 0x1af870: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF874u; }
        if (ctx->pc != 0x1AF874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF874u; }
        if (ctx->pc != 0x1AF874u) { return; }
    }
    ctx->pc = 0x1AF874u;
label_1af874:
    // 0x1af874: 0xc06bfd4  jal         func_1AFF50
    ctx->pc = 0x1AF874u;
    SET_GPR_U32(ctx, 31, 0x1AF87Cu);
    ctx->pc = 0x1AFF50u;
    if (runtime->hasFunction(0x1AFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1AFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF87Cu; }
        if (ctx->pc != 0x1AF87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataLoad__Fv_0x1aff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF87Cu; }
        if (ctx->pc != 0x1AF87Cu) { return; }
    }
    ctx->pc = 0x1AF87Cu;
label_1af87c:
    // 0x1af87c: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF87Cu;
    {
        const bool branch_taken_0x1af87c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF87Cu;
            // 0x1af880: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af87c) {
            ctx->pc = 0x1AF888u;
            goto label_1af888;
        }
    }
    ctx->pc = 0x1AF884u;
    // 0x1af884: 0xae620ff8  sw          $v0, 0xFF8($s3)
    ctx->pc = 0x1af884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4088), GPR_U32(ctx, 2));
label_1af888:
    // 0x1af888: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AF888u;
    SET_GPR_U32(ctx, 31, 0x1AF890u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF890u; }
        if (ctx->pc != 0x1AF890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF890u; }
        if (ctx->pc != 0x1AF890u) { return; }
    }
    ctx->pc = 0x1AF890u;
label_1af890:
    // 0x1af890: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af894: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1af894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af898: 0x240600a3  addiu       $a2, $zero, 0xA3
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x1af89c: 0xc0b2d68  jal         func_2CB5A0
    ctx->pc = 0x1AF89Cu;
    SET_GPR_U32(ctx, 31, 0x1AF8A4u);
    ctx->pc = 0x1AF8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF89Cu;
            // 0x1af8a0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5A0u;
    if (runtime->hasFunction(0x2CB5A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8A4u; }
        if (ctx->pc != 0x1AF8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameObject__6CSceneFiiP9mgCMemory_0x2cb5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8A4u; }
        if (ctx->pc != 0x1AF8A4u) { return; }
    }
    ctx->pc = 0x1AF8A4u;
label_1af8a4:
    // 0x1af8a4: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x1AF8A4u;
    SET_GPR_U32(ctx, 31, 0x1AF8ACu);
    ctx->pc = 0x1AF8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8A4u;
            // 0x1af8a8: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8ACu; }
        if (ctx->pc != 0x1AF8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8ACu; }
        if (ctx->pc != 0x1AF8ACu) { return; }
    }
    ctx->pc = 0x1AF8ACu;
label_1af8ac:
    // 0x1af8ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af8b0: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AF8B0u;
    {
        const bool branch_taken_0x1af8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8B0u;
            // 0x1af8b4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8b0) {
            ctx->pc = 0x1AF93Cu;
            goto label_1af93c;
        }
    }
    ctx->pc = 0x1AF8B8u;
    // 0x1af8b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8bc: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF8BCu;
    SET_GPR_U32(ctx, 31, 0x1AF8C4u);
    ctx->pc = 0x1AF8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8BCu;
            // 0x1af8c0: 0x248464b8  addiu       $a0, $a0, 0x64B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8C4u; }
        if (ctx->pc != 0x1AF8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8C4u; }
        if (ctx->pc != 0x1AF8C4u) { return; }
    }
    ctx->pc = 0x1AF8C4u;
label_1af8c4:
    // 0x1af8c4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1af8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1af8c8: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF8C8u;
    SET_GPR_U32(ctx, 31, 0x1AF8D0u);
    ctx->pc = 0x1AF8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8C8u;
            // 0x1af8cc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8D0u; }
        if (ctx->pc != 0x1AF8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8D0u; }
        if (ctx->pc != 0x1AF8D0u) { return; }
    }
    ctx->pc = 0x1AF8D0u;
label_1af8d0:
    // 0x1af8d0: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF8D0u;
    {
        const bool branch_taken_0x1af8d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8D0u;
            // 0x1af8d4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8d0) {
            ctx->pc = 0x1AF8DCu;
            goto label_1af8dc;
        }
    }
    ctx->pc = 0x1AF8D8u;
    // 0x1af8d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af8dc:
    // 0x1af8dc: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF8DCu;
    SET_GPR_U32(ctx, 31, 0x1AF8E4u);
    ctx->pc = 0x1AF8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8DCu;
            // 0x1af8e0: 0x248464f8  addiu       $a0, $a0, 0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8E4u; }
        if (ctx->pc != 0x1AF8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8E4u; }
        if (ctx->pc != 0x1AF8E4u) { return; }
    }
    ctx->pc = 0x1AF8E4u;
label_1af8e4:
    // 0x1af8e4: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8E4u;
            // 0x1af8e8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF8F0u;
            goto label_1af8f0;
        }
    }
    ctx->pc = 0x1AF8ECu;
    // 0x1af8ec: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af8f0:
    // 0x1af8f0: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8F0u;
            // 0x1af8f4: 0x24846500  addiu       $a0, $a0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8F8u; }
        if (ctx->pc != 0x1AF8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8F8u; }
        if (ctx->pc != 0x1AF8F8u) { return; }
    }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF8F8u;
    {
        const bool branch_taken_0x1af8f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af8f8) {
            ctx->pc = 0x1AF904u;
            goto label_1af904;
        }
    }
    ctx->pc = 0x1AF900u;
    // 0x1af900: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1af904:
    // 0x1af904: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF904u;
    SET_GPR_U32(ctx, 31, 0x1AF90Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF90Cu; }
        if (ctx->pc != 0x1AF90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF90Cu; }
        if (ctx->pc != 0x1AF90Cu) { return; }
    }
    ctx->pc = 0x1AF90Cu;
label_1af90c:
    // 0x1af90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af910: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1AF910u;
    SET_GPR_U32(ctx, 31, 0x1AF918u);
    ctx->pc = 0x1AF914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF910u;
            // 0x1af914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF918u; }
        if (ctx->pc != 0x1AF918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF918u; }
        if (ctx->pc != 0x1AF918u) { return; }
    }
    ctx->pc = 0x1AF918u;
label_1af918:
    // 0x1af918: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af91c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1af91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x1af920: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF920u;
    SET_GPR_U32(ctx, 31, 0x1AF928u);
    ctx->pc = 0x1AF924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF920u;
            // 0x1af924: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF928u; }
        if (ctx->pc != 0x1AF928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF928u; }
        if (ctx->pc != 0x1AF928u) { return; }
    }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF928u;
    {
        const bool branch_taken_0x1af928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF928u;
            // 0x1af92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af928) {
            ctx->pc = 0x1AF93Cu;
            goto label_1af93c;
        }
    }
    ctx->pc = 0x1AF930u;
    // 0x1af930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af934: 0xc0aa718  jal         func_2A9C60
    ctx->pc = 0x1AF934u;
    SET_GPR_U32(ctx, 31, 0x1AF93Cu);
    ctx->pc = 0x1AF938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF934u;
            // 0x1af938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C60u;
    if (runtime->hasFunction(0x2A9C60u)) {
        auto targetFn = runtime->lookupFunction(0x2A9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF93Cu; }
        if (ctx->pc != 0x1AF93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PartsOnOff__8CEditMapFiP9CEditData_0x2a9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF93Cu; }
        if (ctx->pc != 0x1AF93Cu) { return; }
    }
    ctx->pc = 0x1AF93Cu;
label_1af93c:
    // 0x1af93c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af940: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF940u;
    SET_GPR_U32(ctx, 31, 0x1AF948u);
    ctx->pc = 0x1AF944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF940u;
            // 0x1af944: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF948u; }
        if (ctx->pc != 0x1AF948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF948u; }
        if (ctx->pc != 0x1AF948u) { return; }
    }
    ctx->pc = 0x1AF948u;
label_1af948:
    // 0x1af948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af94c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF94Cu;
    {
        const bool branch_taken_0x1af94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af94c) {
            ctx->pc = 0x1AF980u;
            goto label_1af980;
        }
    }
    ctx->pc = 0x1AF954u;
    // 0x1af954: 0x8f858c54  lw          $a1, -0x73AC($gp)
    ctx->pc = 0x1af954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x1af958: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF958u;
    {
        const bool branch_taken_0x1af958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF958u;
            // 0x1af95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af958) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF960u;
    // 0x1af960: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1af964: 0xc0580b0  jal         func_1602C0
    ctx->pc = 0x1AF964u;
    SET_GPR_U32(ctx, 31, 0x1AF96Cu);
    ctx->pc = 0x1AF968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF964u;
            // 0x1af968: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1602C0u;
    if (runtime->hasFunction(0x1602C0u)) {
        auto targetFn = runtime->lookupFunction(0x1602C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF96Cu; }
        if (ctx->pc != 0x1AF96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTrBox__4CMapFP15CMapTreasureBoxiP9mgCMemory_0x1602c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF96Cu; }
        if (ctx->pc != 0x1AF96Cu) { return; }
    }
    ctx->pc = 0x1AF96Cu;
label_1af96c:
    // 0x1af96c: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1AF96Cu;
    SET_GPR_U32(ctx, 31, 0x1AF974u);
    ctx->pc = 0x1AF970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF96Cu;
            // 0x1af970: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (runtime->hasFunction(0x1AF140u)) {
        auto targetFn = runtime->lookupFunction(0x1AF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF974u; }
        if (ctx->pc != 0x1AF974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateTrBoxFlag__Fi_0x1af140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF974u; }
        if (ctx->pc != 0x1AF974u) { return; }
    }
    ctx->pc = 0x1AF974u;
label_1af974:
    // 0x1af974: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1af974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af978: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x1af978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af97c: 0xe6200c88  swc1        $f0, 0xC88($s1)
    ctx->pc = 0x1af97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3208), bits); }
label_1af980:
    // 0x1af980: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af988: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x1af988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1af98c: 0xc0bde60  jal         func_2F7980
    ctx->pc = 0x1AF98Cu;
    SET_GPR_U32(ctx, 31, 0x1AF994u);
    ctx->pc = 0x1AF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF98Cu;
            // 0x1af990: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7980u;
    if (runtime->hasFunction(0x2F7980u)) {
        auto targetFn = runtime->lookupFunction(0x2F7980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF994u; }
        if (ctx->pc != 0x1AF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFirePowder__FiP6CSceneiP9mgCMemory_0x2f7980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF994u; }
        if (ctx->pc != 0x1AF994u) { return; }
    }
    ctx->pc = 0x1AF994u;
label_1af994:
    // 0x1af994: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1af994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af998: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1af998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af99c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9a0: 0xc0be208  jal         func_2F8820
    ctx->pc = 0x1AF9A0u;
    SET_GPR_U32(ctx, 31, 0x1AF9A8u);
    ctx->pc = 0x1AF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9A0u;
            // 0x1af9a4: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8820u;
    if (runtime->hasFunction(0x2F8820u)) {
        auto targetFn = runtime->lookupFunction(0x2F8820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A8u; }
        if (ctx->pc != 0x1AF9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitGeyserEffect__FiP6CSceneiP9mgCMemory_0x2f8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A8u; }
        if (ctx->pc != 0x1AF9A8u) { return; }
    }
    ctx->pc = 0x1AF9A8u;
label_1af9a8:
    // 0x1af9a8: 0xc06905c  jal         func_1A4170
    ctx->pc = 0x1AF9A8u;
    SET_GPR_U32(ctx, 31, 0x1AF9B0u);
    ctx->pc = 0x1AF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9A8u;
            // 0x1af9ac: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4170u;
    if (runtime->hasFunction(0x1A4170u)) {
        auto targetFn = runtime->lookupFunction(0x1A4170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B0u; }
        if (ctx->pc != 0x1AF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlInit__FP6CScene_0x1a4170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B0u; }
        if (ctx->pc != 0x1AF9B0u) { return; }
    }
    ctx->pc = 0x1AF9B0u;
label_1af9b0:
    // 0x1af9b0: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AF9B0u;
    SET_GPR_U32(ctx, 31, 0x1AF9B8u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B8u; }
        if (ctx->pc != 0x1AF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B8u; }
        if (ctx->pc != 0x1AF9B8u) { return; }
    }
    ctx->pc = 0x1AF9B8u;
label_1af9b8:
    // 0x1af9b8: 0xc06bce8  jal         func_1AF3A0
    ctx->pc = 0x1AF9B8u;
    SET_GPR_U32(ctx, 31, 0x1AF9C0u);
    ctx->pc = 0x1AF9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9B8u;
            // 0x1af9bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3A0u;
    if (runtime->hasFunction(0x1AF3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9C0u; }
        if (ctx->pc != 0x1AF9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        editLoadSound__Fi_0x1af3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9C0u; }
        if (ctx->pc != 0x1AF9C0u) { return; }
    }
    ctx->pc = 0x1AF9C0u;
label_1af9c0:
    // 0x1af9c0: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AF9C0u;
    SET_GPR_U32(ctx, 31, 0x1AF9C8u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9C8u; }
        if (ctx->pc != 0x1AF9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9C8u; }
        if (ctx->pc != 0x1AF9C8u) { return; }
    }
    ctx->pc = 0x1AF9C8u;
label_1af9c8:
    // 0x1af9c8: 0xc0b25c4  jal         func_2C9710
    ctx->pc = 0x1AF9C8u;
    SET_GPR_U32(ctx, 31, 0x1AF9D0u);
    ctx->pc = 0x1AF9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9C8u;
            // 0x1af9cc: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9D0u; }
        if (ctx->pc != 0x1AF9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9D0u; }
        if (ctx->pc != 0x1AF9D0u) { return; }
    }
    ctx->pc = 0x1AF9D0u;
label_1af9d0:
    // 0x1af9d0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af9d4: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1af9d8: 0xc0b2750  jal         func_2C9D40
    ctx->pc = 0x1AF9D8u;
    SET_GPR_U32(ctx, 31, 0x1AF9E0u);
    ctx->pc = 0x1AF9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9D8u;
            // 0x1af9dc: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D40u;
    if (runtime->hasFunction(0x2C9D40u)) {
        auto targetFn = runtime->lookupFunction(0x2C9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9E0u; }
        if (ctx->pc != 0x1AF9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadVillager__6CSceneFii_0x2c9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9E0u; }
        if (ctx->pc != 0x1AF9E0u) { return; }
    }
    ctx->pc = 0x1AF9E0u;
label_1af9e0:
    // 0x1af9e0: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AF9E0u;
    SET_GPR_U32(ctx, 31, 0x1AF9E8u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9E8u; }
        if (ctx->pc != 0x1AF9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9E8u; }
        if (ctx->pc != 0x1AF9E8u) { return; }
    }
    ctx->pc = 0x1AF9E8u;
label_1af9e8:
    // 0x1af9e8: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AF9E8u;
    {
        const bool branch_taken_0x1af9e8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1af9e8) {
            ctx->pc = 0x1AFA60u;
            goto label_1afa60;
        }
    }
    ctx->pc = 0x1AF9F0u;
    // 0x1af9f0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9f8: 0xc0b7c6c  jal         func_2DF1B0
    ctx->pc = 0x1AF9F8u;
    SET_GPR_U32(ctx, 31, 0x1AFA00u);
    ctx->pc = 0x1AF9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9F8u;
            // 0x1af9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1B0u;
    if (runtime->hasFunction(0x2DF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA00u; }
        if (ctx->pc != 0x1AFA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubMap__FP6CSceneii_0x2df1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA00u; }
        if (ctx->pc != 0x1AFA00u) { return; }
    }
    ctx->pc = 0x1AFA00u;
label_1afa00:
    // 0x1afa00: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AFA00u;
    SET_GPR_U32(ctx, 31, 0x1AFA08u);
    ctx->pc = 0x1AFA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA00u;
            // 0x1afa04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA08u; }
        if (ctx->pc != 0x1AFA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA08u; }
        if (ctx->pc != 0x1AFA08u) { return; }
    }
    ctx->pc = 0x1AFA08u;
label_1afa08:
    // 0x1afa08: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AFA08u;
    {
        const bool branch_taken_0x1afa08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa08) {
            ctx->pc = 0x1AFA50u;
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AFA10u;
    // 0x1afa10: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afa14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1afa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afa18: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x1AFA18u;
    SET_GPR_U32(ctx, 31, 0x1AFA20u);
    ctx->pc = 0x1AFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA18u;
            // 0x1afa1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA20u; }
        if (ctx->pc != 0x1AFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA20u; }
        if (ctx->pc != 0x1AFA20u) { return; }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x1AFA20u;
    SET_GPR_U32(ctx, 31, 0x1AFA28u);
    ctx->pc = 0x2DEC20u;
    if (runtime->hasFunction(0x2DEC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA28u; }
        if (ctx->pc != 0x1AFA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubMapNo__Fv_0x2dec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA28u; }
        if (ctx->pc != 0x1AFA28u) { return; }
    }
    ctx->pc = 0x1AFA28u;
label_1afa28:
    // 0x1afa28: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afa2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa30: 0xc0b2824  jal         func_2CA090
    ctx->pc = 0x1AFA30u;
    SET_GPR_U32(ctx, 31, 0x1AFA38u);
    ctx->pc = 0x1AFA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA30u;
            // 0x1afa34: 0x2406005e  addiu       $a2, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA090u;
    if (runtime->hasFunction(0x2CA090u)) {
        auto targetFn = runtime->lookupFunction(0x2CA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA38u; }
        if (ctx->pc != 0x1AFA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubVillager__6CSceneFii_0x2ca090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA38u; }
        if (ctx->pc != 0x1AFA38u) { return; }
    }
    ctx->pc = 0x1AFA38u;
label_1afa38:
    // 0x1afa38: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afa3c: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AFA3Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA44u);
    ctx->pc = 0x1AFA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA3Cu;
            // 0x1afa40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA44u; }
        if (ctx->pc != 0x1AFA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA44u; }
        if (ctx->pc != 0x1AFA44u) { return; }
    }
    ctx->pc = 0x1AFA44u;
label_1afa44:
    // 0x1afa44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa48: 0xc0c638c  jal         func_318E30
    ctx->pc = 0x1AFA48u;
    SET_GPR_U32(ctx, 31, 0x1AFA50u);
    ctx->pc = 0x1AFA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA48u;
            // 0x1afa4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318E30u;
    if (runtime->hasFunction(0x318E30u)) {
        auto targetFn = runtime->lookupFunction(0x318E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA50u; }
        if (ctx->pc != 0x1AFA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapInitEvent__FiP8CEditMap_0x318e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA50u; }
        if (ctx->pc != 0x1AFA50u) { return; }
    }
    ctx->pc = 0x1AFA50u;
label_1afa50:
    // 0x1afa50: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AFA50u;
    SET_GPR_U32(ctx, 31, 0x1AFA58u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA58u; }
        if (ctx->pc != 0x1AFA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA58u; }
        if (ctx->pc != 0x1AFA58u) { return; }
    }
    ctx->pc = 0x1AFA58u;
label_1afa58:
    // 0x1afa58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA58u;
    {
        const bool branch_taken_0x1afa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA58u;
            // 0x1afa5c: 0x8f918c58  lw          $s1, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa58) {
            ctx->pc = 0x1AFA74u;
            goto label_1afa74;
        }
    }
    ctx->pc = 0x1AFA60u;
label_1afa60:
    // 0x1afa60: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AFA60u;
    SET_GPR_U32(ctx, 31, 0x1AFA68u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA68u; }
        if (ctx->pc != 0x1AFA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA68u; }
        if (ctx->pc != 0x1AFA68u) { return; }
    }
    ctx->pc = 0x1AFA68u;
label_1afa68:
    // 0x1afa68: 0xc0c2678  jal         func_3099E0
    ctx->pc = 0x1AFA68u;
    SET_GPR_U32(ctx, 31, 0x1AFA70u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA70u; }
        if (ctx->pc != 0x1AFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA70u; }
        if (ctx->pc != 0x1AFA70u) { return; }
    }
    ctx->pc = 0x1AFA70u;
label_1afa70:
    // 0x1afa70: 0x8f918c58  lw          $s1, -0x73A8($gp)
    ctx->pc = 0x1afa70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1afa74:
    // 0x1afa74: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1afa74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1afa78: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AFA78u;
    SET_GPR_U32(ctx, 31, 0x1AFA80u);
    ctx->pc = 0x1AFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA78u;
            // 0x1afa7c: 0x248464b8  addiu       $a0, $a0, 0x64B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA80u; }
        if (ctx->pc != 0x1AFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA80u; }
        if (ctx->pc != 0x1AFA80u) { return; }
    }
    ctx->pc = 0x1AFA80u;
label_1afa80:
    // 0x1afa80: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFA80u;
    {
        const bool branch_taken_0x1afa80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa80) {
            ctx->pc = 0x1AFA8Cu;
            goto label_1afa8c;
        }
    }
    ctx->pc = 0x1AFA88u;
    // 0x1afa88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1afa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afa8c:
    // 0x1afa8c: 0x8f908c58  lw          $s0, -0x73A8($gp)
    ctx->pc = 0x1afa8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1afa90: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1afa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1afa94: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AFA94u;
    SET_GPR_U32(ctx, 31, 0x1AFA9Cu);
    ctx->pc = 0x1AFA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA94u;
            // 0x1afa98: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA9Cu; }
        if (ctx->pc != 0x1AFA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA9Cu; }
        if (ctx->pc != 0x1AFA9Cu) { return; }
    }
    ctx->pc = 0x1AFA9Cu;
label_1afa9c:
    // 0x1afa9c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFA9Cu;
    {
        const bool branch_taken_0x1afa9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa9c) {
            ctx->pc = 0x1AFAA8u;
            goto label_1afaa8;
        }
    }
    ctx->pc = 0x1AFAA4u;
    // 0x1afaa4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1afaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afaa8:
    // 0x1afaa8: 0x8f908c58  lw          $s0, -0x73A8($gp)
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1afaac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1afab0: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AFAB0u;
    SET_GPR_U32(ctx, 31, 0x1AFAB8u);
    ctx->pc = 0x1AFAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAB0u;
            // 0x1afab4: 0x248464f8  addiu       $a0, $a0, 0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAB8u; }
        if (ctx->pc != 0x1AFAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAB8u; }
        if (ctx->pc != 0x1AFAB8u) { return; }
    }
    ctx->pc = 0x1AFAB8u;
label_1afab8:
    // 0x1afab8: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFAB8u;
    {
        const bool branch_taken_0x1afab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afab8) {
            ctx->pc = 0x1AFAC4u;
            goto label_1afac4;
        }
    }
    ctx->pc = 0x1AFAC0u;
    // 0x1afac0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afac4:
    // 0x1afac4: 0x8f908c58  lw          $s0, -0x73A8($gp)
    ctx->pc = 0x1afac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1afac8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1afac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1afacc: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1AFACCu;
    SET_GPR_U32(ctx, 31, 0x1AFAD4u);
    ctx->pc = 0x1AFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFACCu;
            // 0x1afad0: 0x24846500  addiu       $a0, $a0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    }
    ctx->pc = 0x1AFAD4u;
label_1afad4:
    // 0x1afad4: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFAD4u;
    {
        const bool branch_taken_0x1afad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAD4u;
            // 0x1afad8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afad4) {
            ctx->pc = 0x1AFAE0u;
            goto label_1afae0;
        }
    }
    ctx->pc = 0x1AFADCu;
    // 0x1afadc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1afadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1afae0:
    // 0x1afae0: 0xc064220  jal         func_190880
    ctx->pc = 0x1AFAE0u;
    SET_GPR_U32(ctx, 31, 0x1AFAE8u);
    ctx->pc = 0x1AFAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAE0u;
            // 0x1afae4: 0xac31ef64  sw          $s1, -0x109C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963044), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE8u; }
        if (ctx->pc != 0x1AFAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE8u; }
        if (ctx->pc != 0x1AFAE8u) { return; }
    }
    ctx->pc = 0x1AFAE8u;
label_1afae8:
    // 0x1afae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1afae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaec: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1AFAECu;
    SET_GPR_U32(ctx, 31, 0x1AFAF4u);
    ctx->pc = 0x1AFAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAECu;
            // 0x1afaf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAF4u; }
        if (ctx->pc != 0x1AFAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAF4u; }
        if (ctx->pc != 0x1AFAF4u) { return; }
    }
    ctx->pc = 0x1AFAF4u;
label_1afaf4:
    // 0x1afaf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1afaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1afaf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afafc: 0xc050e40  jal         func_143900
    ctx->pc = 0x1AFAFCu;
    SET_GPR_U32(ctx, 31, 0x1AFB04u);
    ctx->pc = 0x1AFB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAFCu;
            // 0x1afb00: 0xac22ef60  sw          $v0, -0x10A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB04u; }
        if (ctx->pc != 0x1AFB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB04u; }
        if (ctx->pc != 0x1AFB04u) { return; }
    }
    ctx->pc = 0x1AFB04u;
label_1afb04:
    // 0x1afb04: 0xc0b1e7c  jal         func_2C79F0
    ctx->pc = 0x1AFB04u;
    SET_GPR_U32(ctx, 31, 0x1AFB0Cu);
    ctx->pc = 0x1AFB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB04u;
            // 0x1afb08: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79F0u;
    if (runtime->hasFunction(0x2C79F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB0Cu; }
        if (ctx->pc != 0x1AFB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateMapInfo__6CSceneFv_0x2c79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB0Cu; }
        if (ctx->pc != 0x1AFB0Cu) { return; }
    }
    ctx->pc = 0x1AFB0Cu;
label_1afb0c:
    // 0x1afb0c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afb10: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1AFB10u;
    SET_GPR_U32(ctx, 31, 0x1AFB18u);
    ctx->pc = 0x1AFB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB10u;
            // 0x1afb14: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB18u; }
        if (ctx->pc != 0x1AFB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB18u; }
        if (ctx->pc != 0x1AFB18u) { return; }
    }
    ctx->pc = 0x1AFB18u;
label_1afb18:
    // 0x1afb18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1afb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb1c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AFB1Cu;
    {
        const bool branch_taken_0x1afb1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB1Cu;
            // 0x1afb20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb1c) {
            ctx->pc = 0x1AFB88u;
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFB24u;
    // 0x1afb24: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x1AFB24u;
    SET_GPR_U32(ctx, 31, 0x1AFB2Cu);
    ctx->pc = 0x1AFB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB24u;
            // 0x1afb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB2Cu; }
        if (ctx->pc != 0x1AFB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB2Cu; }
        if (ctx->pc != 0x1AFB2Cu) { return; }
    }
    ctx->pc = 0x1AFB2Cu;
label_1afb2c:
    // 0x1afb2c: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x1afb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1afb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1afb34: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x1afb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1afb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1afb3c: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x1afb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1afb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1afb44: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1afb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1afb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1afb4c: 0xc60001b4  lwc1        $f0, 0x1B4($s0)
    ctx->pc = 0x1afb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb50: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1afb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1afb54: 0xc60001b8  lwc1        $f0, 0x1B8($s0)
    ctx->pc = 0x1afb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb58: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1afb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1afb5c: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1afb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1afb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1afb64: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x1afb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb68: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1afb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1afb6c: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x1afb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb70: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1afb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1afb74: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x1afb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afb78: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1afb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1afb7c: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1afb80: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1afb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1afb84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1afb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1afb88:
    // 0x1afb88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afb8c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1AFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB94u);
    ctx->pc = 0x1AFB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB8Cu;
            // 0x1afb90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB94u; }
        if (ctx->pc != 0x1AFB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB94u; }
        if (ctx->pc != 0x1AFB94u) { return; }
    }
    ctx->pc = 0x1AFB94u;
label_1afb94:
    // 0x1afb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afb98: 0xaf808c78  sw          $zero, -0x7388($gp)
    ctx->pc = 0x1afb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937720), GPR_U32(ctx, 0));
    // 0x1afb9c: 0xc0bddb4  jal         func_2F76D0
    ctx->pc = 0x1AFB9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFBA4u);
    ctx->pc = 0x1AFBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB9Cu;
            // 0x1afba0: 0xaf828c94  sw          $v0, -0x736C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F76D0u;
    if (runtime->hasFunction(0x2F76D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F76D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBA4u; }
        if (ctx->pc != 0x1AFBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitS51Thunder__Fv_0x2f76d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBA4u; }
        if (ctx->pc != 0x1AFBA4u) { return; }
    }
    ctx->pc = 0x1AFBA4u;
label_1afba4:
    // 0x1afba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afba8:
    // 0x1afba8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1afba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afbac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afbb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1afbb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afbb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1afbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afbb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1afbb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afbbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afbbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBC8u;
            // 0x1afbcc: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFBD0u;
}
