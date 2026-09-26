#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadDngInfo__11CDngFreeMapFP9mgCMemoryiiii
// Address: 0x1ee870 - 0x1ef848
void LoadDngInfo__11CDngFreeMapFP9mgCMemoryiiii_0x1ee870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadDngInfo__11CDngFreeMapFP9mgCMemoryiiii_0x1ee870");
#endif

    switch (ctx->pc) {
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee91cu: goto label_1ee91c;
        case 0x1ee924u: goto label_1ee924;
        case 0x1ee938u: goto label_1ee938;
        case 0x1ee94cu: goto label_1ee94c;
        case 0x1ee964u: goto label_1ee964;
        case 0x1ee978u: goto label_1ee978;
        case 0x1ee984u: goto label_1ee984;
        case 0x1ee9b4u: goto label_1ee9b4;
        case 0x1ee9c4u: goto label_1ee9c4;
        case 0x1ee9e0u: goto label_1ee9e0;
        case 0x1ee9f4u: goto label_1ee9f4;
        case 0x1eea0cu: goto label_1eea0c;
        case 0x1eea28u: goto label_1eea28;
        case 0x1eea44u: goto label_1eea44;
        case 0x1eea84u: goto label_1eea84;
        case 0x1eea90u: goto label_1eea90;
        case 0x1eeaa0u: goto label_1eeaa0;
        case 0x1eeac4u: goto label_1eeac4;
        case 0x1eeb24u: goto label_1eeb24;
        case 0x1ef1f0u: goto label_1ef1f0;
        case 0x1ef224u: goto label_1ef224;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef340u: goto label_1ef340;
        case 0x1ef360u: goto label_1ef360;
        case 0x1ef39cu: goto label_1ef39c;
        case 0x1ef3ccu: goto label_1ef3cc;
        case 0x1ef3e4u: goto label_1ef3e4;
        case 0x1ef464u: goto label_1ef464;
        case 0x1ef470u: goto label_1ef470;
        case 0x1ef4dcu: goto label_1ef4dc;
        case 0x1ef4e8u: goto label_1ef4e8;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef5bcu: goto label_1ef5bc;
        case 0x1ef5ccu: goto label_1ef5cc;
        case 0x1ef634u: goto label_1ef634;
        case 0x1ef644u: goto label_1ef644;
        case 0x1ef6e4u: goto label_1ef6e4;
        case 0x1ef6f4u: goto label_1ef6f4;
        case 0x1ef75cu: goto label_1ef75c;
        case 0x1ef76cu: goto label_1ef76c;
        case 0x1ef7d4u: goto label_1ef7d4;
        default: break;
    }

    ctx->pc = 0x1ee870u;

    // 0x1ee870: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ee870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ee874: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ee874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ee878: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ee878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ee87c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ee87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ee880: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ee880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ee884: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ee884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ee888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ee88c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1ee88cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee894: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ee894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee89c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ee89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee8a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ee8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee8ac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ee8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8b0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE8B0u;
    {
        const bool branch_taken_0x1ee8b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8B0u;
            // 0x1ee8b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8b0) {
            ctx->pc = 0x1EE8CCu;
            goto label_1ee8cc;
        }
    }
    ctx->pc = 0x1EE8B8u;
    // 0x1ee8b8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1ee8bc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1ee8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ee8c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ee8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee8c4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE8C4u;
    {
        const bool branch_taken_0x1ee8c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ee8c4) {
            ctx->pc = 0x1EE8D4u;
            goto label_1ee8d4;
        }
    }
    ctx->pc = 0x1EE8CCu;
label_1ee8cc:
    // 0x1ee8cc: 0x100003d2  b           . + 4 + (0x3D2 << 2)
    ctx->pc = 0x1EE8CCu;
    {
        const bool branch_taken_0x1ee8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8CCu;
            // 0x1ee8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8cc) {
            ctx->pc = 0x1EF818u;
            goto label_1ef818;
        }
    }
    ctx->pc = 0x1EE8D4u;
label_1ee8d4:
    // 0x1ee8d4: 0xc064220  jal         func_190880
    ctx->pc = 0x1EE8D4u;
    SET_GPR_U32(ctx, 31, 0x1EE8DCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8DCu; }
        if (ctx->pc != 0x1EE8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8DCu; }
        if (ctx->pc != 0x1EE8DCu) { return; }
    }
    ctx->pc = 0x1EE8DCu;
label_1ee8dc:
    // 0x1ee8dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ee8e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ee8e4: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x1ee8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x1ee8e8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1ee8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ee8ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x1EE8ECu;
    SET_GPR_U32(ctx, 31, 0x1EE8F4u);
    ctx->pc = 0x1EE8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8ECu;
            // 0x1ee8f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8F4u; }
        if (ctx->pc != 0x1EE8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8F4u; }
        if (ctx->pc != 0x1EE8F4u) { return; }
    }
    ctx->pc = 0x1EE8F4u;
label_1ee8f4:
    // 0x1ee8f4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1ee8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1ee8f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ee8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ee8fc: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x1ee8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ee900: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1ee904: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1ee904u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee908: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1ee908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ee90c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1EE90Cu;
    SET_GPR_U32(ctx, 31, 0x1EE914u);
    ctx->pc = 0x1EE910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE90Cu;
            // 0x1ee910: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE914u; }
        if (ctx->pc != 0x1EE914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE914u; }
        if (ctx->pc != 0x1EE914u) { return; }
    }
    ctx->pc = 0x1EE914u;
label_1ee914:
    // 0x1ee914: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1EE914u;
    SET_GPR_U32(ctx, 31, 0x1EE91Cu);
    ctx->pc = 0x1EE918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE914u;
            // 0x1ee918: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE91Cu; }
        if (ctx->pc != 0x1EE91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE91Cu; }
        if (ctx->pc != 0x1EE91Cu) { return; }
    }
    ctx->pc = 0x1EE91Cu;
label_1ee91c:
    // 0x1ee91c: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x1EE91Cu;
    SET_GPR_U32(ctx, 31, 0x1EE924u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE924u; }
        if (ctx->pc != 0x1EE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE924u; }
        if (ctx->pc != 0x1EE924u) { return; }
    }
    ctx->pc = 0x1EE924u;
label_1ee924:
    // 0x1ee924: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1ee928: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ee928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ee92c: 0xa612000a  sh          $s2, 0xA($s0)
    ctx->pc = 0x1ee92cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x1ee930: 0xc0be7cc  jal         func_2F9F30
    ctx->pc = 0x1EE930u;
    SET_GPR_U32(ctx, 31, 0x1EE938u);
    ctx->pc = 0x1EE934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE930u;
            // 0x1ee934: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F30u;
    if (runtime->hasFunction(0x2F9F30u)) {
        auto targetFn = runtime->lookupFunction(0x2F9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE938u; }
        if (ctx->pc != 0x1EE938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE938u; }
        if (ctx->pc != 0x1EE938u) { return; }
    }
    ctx->pc = 0x1EE938u;
label_1ee938:
    // 0x1ee938: 0xa61100c0  sh          $s1, 0xC0($s0)
    ctx->pc = 0x1ee938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 17));
    // 0x1ee93c: 0xa61500c2  sh          $s5, 0xC2($s0)
    ctx->pc = 0x1ee93cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 21));
    // 0x1ee940: 0x860500c0  lh          $a1, 0xC0($s0)
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ee944: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EE944u;
    SET_GPR_U32(ctx, 31, 0x1EE94Cu);
    ctx->pc = 0x1EE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE944u;
            // 0x1ee948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE94Cu; }
        if (ctx->pc != 0x1EE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE94Cu; }
        if (ctx->pc != 0x1EE94Cu) { return; }
    }
    ctx->pc = 0x1EE94Cu;
label_1ee94c:
    // 0x1ee94c: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ee950: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1ee950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1ee954: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE954u;
    {
        const bool branch_taken_0x1ee954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE954u;
            // 0x1ee958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee954) {
            ctx->pc = 0x1EE964u;
            goto label_1ee964;
        }
    }
    ctx->pc = 0x1EE95Cu;
    // 0x1ee95c: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EE95Cu;
    SET_GPR_U32(ctx, 31, 0x1EE964u);
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE964u; }
        if (ctx->pc != 0x1EE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE964u; }
        if (ctx->pc != 0x1EE964u) { return; }
    }
    ctx->pc = 0x1EE964u;
label_1ee964:
    // 0x1ee964: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1ee964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1ee968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee96c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1ee96cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ee970: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1EE970u;
    SET_GPR_U32(ctx, 31, 0x1EE978u);
    ctx->pc = 0x1EE974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE970u;
            // 0x1ee974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA830u;
    if (runtime->hasFunction(0x1EA830u)) {
        auto targetFn = runtime->lookupFunction(0x1EA830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE978u; }
        if (ctx->pc != 0x1EE978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTexture__11CDngFreeMapFv_0x1ea830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE978u; }
        if (ctx->pc != 0x1EE978u) { return; }
    }
    ctx->pc = 0x1EE978u;
label_1ee978:
    // 0x1ee978: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ee97c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1EE97Cu;
    SET_GPR_U32(ctx, 31, 0x1EE984u);
    ctx->pc = 0x1EE980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE97Cu;
            // 0x1ee980: 0xa61300d0  sh          $s3, 0xD0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 208), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE984u; }
        if (ctx->pc != 0x1EE984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE984u; }
        if (ctx->pc != 0x1EE984u) { return; }
    }
    ctx->pc = 0x1EE984u;
label_1ee984:
    // 0x1ee984: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ee988: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1ee988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ee98c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee990: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ee994: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee998: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EE998u;
    {
        const bool branch_taken_0x1ee998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE998u;
            // 0x1ee99c: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee998) {
            ctx->pc = 0x1EEA4Cu;
            goto label_1eea4c;
        }
    }
    ctx->pc = 0x1EE9A0u;
    // 0x1ee9a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee9a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ee9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ee9ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EE9ACu;
    SET_GPR_U32(ctx, 31, 0x1EE9B4u);
    ctx->pc = 0x1EE9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9ACu;
            // 0x1ee9b0: 0x24a587b0  addiu       $a1, $a1, -0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9B4u; }
        if (ctx->pc != 0x1EE9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9B4u; }
        if (ctx->pc != 0x1EE9B4u) { return; }
    }
    ctx->pc = 0x1EE9B4u;
label_1ee9b4:
    // 0x1ee9b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ee9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ee9b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9bc: 0xc094440  jal         func_251100
    ctx->pc = 0x1EE9BCu;
    SET_GPR_U32(ctx, 31, 0x1EE9C4u);
    ctx->pc = 0x1EE9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9BCu;
            // 0x1ee9c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9C4u; }
        if (ctx->pc != 0x1EE9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9C4u; }
        if (ctx->pc != 0x1EE9C4u) { return; }
    }
    ctx->pc = 0x1EE9C4u;
label_1ee9c4:
    // 0x1ee9c4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1ee9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ee9c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE9C8u;
    {
        const bool branch_taken_0x1ee9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9C8u;
            // 0x1ee9cc: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9c8) {
            ctx->pc = 0x1EE9D8u;
            goto label_1ee9d8;
        }
    }
    ctx->pc = 0x1EE9D0u;
    // 0x1ee9d0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ee9d4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ee9d8:
    // 0x1ee9d8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EE9D8u;
    SET_GPR_U32(ctx, 31, 0x1EE9E0u);
    ctx->pc = 0x1EE9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9D8u;
            // 0x1ee9dc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9E0u; }
        if (ctx->pc != 0x1EE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9E0u; }
        if (ctx->pc != 0x1EE9E0u) { return; }
    }
    ctx->pc = 0x1EE9E0u;
label_1ee9e0:
    // 0x1ee9e0: 0x860400d0  lh          $a0, 0xD0($s0)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1ee9e4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1ee9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9ec: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x1EE9ECu;
    SET_GPR_U32(ctx, 31, 0x1EE9F4u);
    ctx->pc = 0x1EE9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9ECu;
            // 0x1ee9f0: 0x24c687c0  addiu       $a2, $a2, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9F4u; }
        if (ctx->pc != 0x1EE9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9F4u; }
        if (ctx->pc != 0x1EE9F4u) { return; }
    }
    ctx->pc = 0x1EE9F4u;
label_1ee9f4:
    // 0x1ee9f4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ee9f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee9fc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eea00: 0x24a587c8  addiu       $a1, $a1, -0x7838
    ctx->pc = 0x1eea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936520));
    // 0x1eea04: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EEA04u;
    SET_GPR_U32(ctx, 31, 0x1EEA0Cu);
    ctx->pc = 0x1EEA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA04u;
            // 0x1eea08: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA0Cu; }
        if (ctx->pc != 0x1EEA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA0Cu; }
        if (ctx->pc != 0x1EEA0Cu) { return; }
    }
    ctx->pc = 0x1EEA0Cu;
label_1eea0c:
    // 0x1eea0c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eea10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eea10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eea14: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1eea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1eea18: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eea1c: 0x24a587d8  addiu       $a1, $a1, -0x7828
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936536));
    // 0x1eea20: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EEA20u;
    SET_GPR_U32(ctx, 31, 0x1EEA28u);
    ctx->pc = 0x1EEA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA20u;
            // 0x1eea24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA28u; }
        if (ctx->pc != 0x1EEA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA28u; }
        if (ctx->pc != 0x1EEA28u) { return; }
    }
    ctx->pc = 0x1EEA28u;
label_1eea28:
    // 0x1eea28: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eea28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eea2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eea30: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1eea30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1eea34: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eea38: 0x24a587e0  addiu       $a1, $a1, -0x7820
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936544));
    // 0x1eea3c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EEA44u);
    ctx->pc = 0x1EEA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA3Cu;
            // 0x1eea40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA44u; }
        if (ctx->pc != 0x1EEA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA44u; }
        if (ctx->pc != 0x1EEA44u) { return; }
    }
    ctx->pc = 0x1EEA44u;
label_1eea44:
    // 0x1eea44: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1eea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1eea48: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1eea4c:
    // 0x1eea4c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1eea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1eea50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eea54: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1eea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1eea58: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1eea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1eea5c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1eea60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1eea60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eea64: 0x24a2ffd8  addiu       $v0, $a1, -0x28
    ctx->pc = 0x1eea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x1eea68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea6c: 0x2462ffd8  addiu       $v0, $v1, -0x28
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1eea70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eea74: 0x0  nop
    ctx->pc = 0x1eea74u;
    // NOP
    // 0x1eea78: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1eea78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1eea7c: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1EEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EEA84u);
    ctx->pc = 0x1EEA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA7Cu;
            // 0x1eea80: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA84u; }
        if (ctx->pc != 0x1EEA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA84u; }
        if (ctx->pc != 0x1EEA84u) { return; }
    }
    ctx->pc = 0x1EEA84u;
label_1eea84:
    // 0x1eea84: 0x860500c0  lh          $a1, 0xC0($s0)
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eea88: 0xc07aa14  jal         func_1EA850
    ctx->pc = 0x1EEA88u;
    SET_GPR_U32(ctx, 31, 0x1EEA90u);
    ctx->pc = 0x1EEA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA88u;
            // 0x1eea8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA850u;
    if (runtime->hasFunction(0x1EA850u)) {
        auto targetFn = runtime->lookupFunction(0x1EA850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA90u; }
        if (ctx->pc != 0x1EEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUserGlid__11CDngFreeMapFi_0x1ea850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA90u; }
        if (ctx->pc != 0x1EEA90u) { return; }
    }
    ctx->pc = 0x1EEA90u;
label_1eea90:
    // 0x1eea90: 0x860500c0  lh          $a1, 0xC0($s0)
    ctx->pc = 0x1eea90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea98: 0xc07ab1c  jal         func_1EAC70
    ctx->pc = 0x1EEA98u;
    SET_GPR_U32(ctx, 31, 0x1EEAA0u);
    ctx->pc = 0x1EEA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA98u;
            // 0x1eea9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC70u;
    if (runtime->hasFunction(0x1EAC70u)) {
        auto targetFn = runtime->lookupFunction(0x1EAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAA0u; }
        if (ctx->pc != 0x1EEAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDngMapPos__11CDngFreeMapFii_0x1eac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAA0u; }
        if (ctx->pc != 0x1EEAA0u) { return; }
    }
    ctx->pc = 0x1EEAA0u;
label_1eeaa0:
    // 0x1eeaa0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1eeaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1eeaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eeaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeaa8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1eeaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1eeaac: 0x27868150  addiu       $a2, $gp, -0x7EB0
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
    // 0x1eeab0: 0xa60000ec  sh          $zero, 0xEC($s0)
    ctx->pc = 0x1eeab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 236), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eeab4: 0x27878154  addiu       $a3, $gp, -0x7EAC
    ctx->pc = 0x1eeab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934868));
    // 0x1eeab8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1eeab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1eeabc: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EEABCu;
    SET_GPR_U32(ctx, 31, 0x1EEAC4u);
    ctx->pc = 0x1EEAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEABCu;
            // 0x1eeac0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAC4u; }
        if (ctx->pc != 0x1EEAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAC4u; }
        if (ctx->pc != 0x1EEAC4u) { return; }
    }
    ctx->pc = 0x1EEAC4u;
label_1eeac4:
    // 0x1eeac4: 0xc7828150  lwc1        $f2, -0x7EB0($gp)
    ctx->pc = 0x1eeac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eeac8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1eeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1eeacc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eeaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eead0: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1eead0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1eead4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eead4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eead8: 0x0  nop
    ctx->pc = 0x1eead8u;
    // NOP
    // 0x1eeadc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1eeadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1eeae0: 0xe7818150  swc1        $f1, -0x7EB0($gp)
    ctx->pc = 0x1eeae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), bits); }
    // 0x1eeae4: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x1eeae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeae8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eeae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eeaec: 0xe7808154  swc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x1eeaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), bits); }
    // 0x1eeaf0: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeaf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeaf4: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1eeaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1eeaf8: 0x14200345  bnez        $at, . + 4 + (0x345 << 2)
    ctx->pc = 0x1EEAF8u;
    {
        const bool branch_taken_0x1eeaf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAF8u;
            // 0x1eeafc: 0x27a200d4  addiu       $v0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeaf8) {
            ctx->pc = 0x1EF810u;
            goto label_1ef810;
        }
    }
    ctx->pc = 0x1EEB00u;
    // 0x1eeb00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eeb04: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1eeb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1eeb08: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1eeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1eeb0c: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x1eeb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x1eeb10: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x1eeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x1eeb14: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x1eeb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x1eeb18: 0x860500c0  lh          $a1, 0xC0($s0)
    ctx->pc = 0x1eeb18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeb1c: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEB24u);
    ctx->pc = 0x1EEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB1Cu;
            // 0x1eeb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB24u; }
        if (ctx->pc != 0x1EEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB24u; }
        if (ctx->pc != 0x1EEB24u) { return; }
    }
    ctx->pc = 0x1EEB24u;
label_1eeb24:
    // 0x1eeb24: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x1eeb24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eeb28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1eeb28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeb30: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EEB30u;
    {
        const bool branch_taken_0x1eeb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeb30) {
            ctx->pc = 0x1EEBD8u;
            goto label_1eebd8;
        }
    }
    ctx->pc = 0x1EEB38u;
    // 0x1eeb38: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeb38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeb3c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1eeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eeb40: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EEB40u;
    {
        const bool branch_taken_0x1eeb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeb40) {
            ctx->pc = 0x1EEB84u;
            goto label_1eeb84;
        }
    }
    ctx->pc = 0x1EEB48u;
    // 0x1eeb48: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeb4c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1eeb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eeb50: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1EEB50u;
    {
        const bool branch_taken_0x1eeb50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB50u;
            // 0x1eeb54: 0x28410008  slti        $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb50) {
            ctx->pc = 0x1EEB84u;
            goto label_1eeb84;
        }
    }
    ctx->pc = 0x1EEB58u;
    // 0x1eeb58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB58u;
    {
        const bool branch_taken_0x1eeb58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB58u;
            // 0x1eeb5c: 0x2841000d  slti        $at, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb58) {
            ctx->pc = 0x1EEB6Cu;
            goto label_1eeb6c;
        }
    }
    ctx->pc = 0x1EEB60u;
    // 0x1eeb60: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eeb64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEB64u;
    {
        const bool branch_taken_0x1eeb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB64u;
            // 0x1eeb68: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb64) {
            ctx->pc = 0x1EEB84u;
            goto label_1eeb84;
        }
    }
    ctx->pc = 0x1EEB6Cu;
label_1eeb6c:
    // 0x1eeb6c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB6Cu;
    {
        const bool branch_taken_0x1eeb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB6Cu;
            // 0x1eeb70: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb6c) {
            ctx->pc = 0x1EEB80u;
            goto label_1eeb80;
        }
    }
    ctx->pc = 0x1EEB74u;
    // 0x1eeb74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1eeb78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEB78u;
    {
        const bool branch_taken_0x1eeb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB78u;
            // 0x1eeb7c: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb78) {
            ctx->pc = 0x1EEB84u;
            goto label_1eeb84;
        }
    }
    ctx->pc = 0x1EEB80u;
label_1eeb80:
    // 0x1eeb80: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eeb84:
    // 0x1eeb84: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeb84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeb88: 0x2861000e  slti        $at, $v1, 0xE
    ctx->pc = 0x1eeb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1eeb8c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEB8Cu;
    {
        const bool branch_taken_0x1eeb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb8c) {
            ctx->pc = 0x1EEBA8u;
            goto label_1eeba8;
        }
    }
    ctx->pc = 0x1EEB94u;
    // 0x1eeb94: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeb98: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1eeb98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eeb9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEB9Cu;
    {
        const bool branch_taken_0x1eeb9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB9Cu;
            // 0x1eeba0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb9c) {
            ctx->pc = 0x1EEBA8u;
            goto label_1eeba8;
        }
    }
    ctx->pc = 0x1EEBA4u;
    // 0x1eeba4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eeba8:
    // 0x1eeba8: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eebac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1eebb0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEBB0u;
    {
        const bool branch_taken_0x1eebb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eebb0) {
            ctx->pc = 0x1EEBD8u;
            goto label_1eebd8;
        }
    }
    ctx->pc = 0x1EEBB8u;
    // 0x1eebb8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eebb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eebbc: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x1eebbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1eebc0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEBC0u;
    {
        const bool branch_taken_0x1eebc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBC0u;
            // 0x1eebc4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebc0) {
            ctx->pc = 0x1EEBD4u;
            goto label_1eebd4;
        }
    }
    ctx->pc = 0x1EEBC8u;
    // 0x1eebc8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eebcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEBCCu;
    {
        const bool branch_taken_0x1eebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBCCu;
            // 0x1eebd0: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebcc) {
            ctx->pc = 0x1EEBD8u;
            goto label_1eebd8;
        }
    }
    ctx->pc = 0x1EEBD4u;
label_1eebd4:
    // 0x1eebd4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eebd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eebd8:
    // 0x1eebd8: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x1eebd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eebdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eebe0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1EEBE0u;
    {
        const bool branch_taken_0x1eebe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eebe0) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EEBE8u;
    // 0x1eebe8: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eebec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eebf0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEBF0u;
    {
        const bool branch_taken_0x1eebf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eebf0) {
            ctx->pc = 0x1EEC14u;
            goto label_1eec14;
        }
    }
    ctx->pc = 0x1EEBF8u;
    // 0x1eebf8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eebf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eebfc: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1eebfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eec00: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEC00u;
    {
        const bool branch_taken_0x1eec00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC00u;
            // 0x1eec04: 0x28410009  slti        $at, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec00) {
            ctx->pc = 0x1EEC14u;
            goto label_1eec14;
        }
    }
    ctx->pc = 0x1EEC08u;
    // 0x1eec08: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEC08u;
    {
        const bool branch_taken_0x1eec08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC08u;
            // 0x1eec0c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec08) {
            ctx->pc = 0x1EEC14u;
            goto label_1eec14;
        }
    }
    ctx->pc = 0x1EEC10u;
    // 0x1eec10: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eec14:
    // 0x1eec14: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eec14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eec18: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1eec18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eec1c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEC1Cu;
    {
        const bool branch_taken_0x1eec1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC1Cu;
            // 0x1eec20: 0x28610009  slti        $at, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec1c) {
            ctx->pc = 0x1EEC40u;
            goto label_1eec40;
        }
    }
    ctx->pc = 0x1EEC24u;
    // 0x1eec24: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC24u;
    {
        const bool branch_taken_0x1eec24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec24) {
            ctx->pc = 0x1EEC40u;
            goto label_1eec40;
        }
    }
    ctx->pc = 0x1EEC2Cu;
    // 0x1eec2c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eec30: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1eec30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eec34: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEC34u;
    {
        const bool branch_taken_0x1eec34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC34u;
            // 0x1eec38: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec34) {
            ctx->pc = 0x1EEC40u;
            goto label_1eec40;
        }
    }
    ctx->pc = 0x1EEC3Cu;
    // 0x1eec3c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eec40:
    // 0x1eec40: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eec40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eec44: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x1eec44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eec48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEC48u;
    {
        const bool branch_taken_0x1eec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC48u;
            // 0x1eec4c: 0x2861000f  slti        $at, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec48) {
            ctx->pc = 0x1EEC6Cu;
            goto label_1eec6c;
        }
    }
    ctx->pc = 0x1EEC50u;
    // 0x1eec50: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC50u;
    {
        const bool branch_taken_0x1eec50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec50) {
            ctx->pc = 0x1EEC6Cu;
            goto label_1eec6c;
        }
    }
    ctx->pc = 0x1EEC58u;
    // 0x1eec58: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eec5c: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1eec5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eec60: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEC60u;
    {
        const bool branch_taken_0x1eec60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC60u;
            // 0x1eec64: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec60) {
            ctx->pc = 0x1EEC6Cu;
            goto label_1eec6c;
        }
    }
    ctx->pc = 0x1EEC68u;
    // 0x1eec68: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eec6c:
    // 0x1eec6c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eec70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1eec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eec74: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEC74u;
    {
        const bool branch_taken_0x1eec74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eec74) {
            ctx->pc = 0x1EEC9Cu;
            goto label_1eec9c;
        }
    }
    ctx->pc = 0x1EEC7Cu;
    // 0x1eec7c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eec80: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1eec80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eec84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEC84u;
    {
        const bool branch_taken_0x1eec84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC84u;
            // 0x1eec88: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec84) {
            ctx->pc = 0x1EEC98u;
            goto label_1eec98;
        }
    }
    ctx->pc = 0x1EEC8Cu;
    // 0x1eec8c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1eec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1eec90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEC90u;
    {
        const bool branch_taken_0x1eec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC90u;
            // 0x1eec94: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec90) {
            ctx->pc = 0x1EEC9Cu;
            goto label_1eec9c;
        }
    }
    ctx->pc = 0x1EEC98u;
label_1eec98:
    // 0x1eec98: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eec98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eec9c:
    // 0x1eec9c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeca0: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x1eeca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1eeca4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EECA4u;
    {
        const bool branch_taken_0x1eeca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeca4) {
            ctx->pc = 0x1EECC0u;
            goto label_1eecc0;
        }
    }
    ctx->pc = 0x1EECACu;
    // 0x1eecac: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eecacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eecb0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1eecb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eecb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EECB4u;
    {
        const bool branch_taken_0x1eecb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECB4u;
            // 0x1eecb8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecb4) {
            ctx->pc = 0x1EECC0u;
            goto label_1eecc0;
        }
    }
    ctx->pc = 0x1EECBCu;
    // 0x1eecbc: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eecbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eecc0:
    // 0x1eecc0: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eecc4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1eecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1eecc8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EECC8u;
    {
        const bool branch_taken_0x1eecc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eecc8) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EECD0u;
    // 0x1eecd0: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eecd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eecd4: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1eecd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1eecd8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EECD8u;
    {
        const bool branch_taken_0x1eecd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECD8u;
            // 0x1eecdc: 0x2841000c  slti        $at, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecd8) {
            ctx->pc = 0x1EECECu;
            goto label_1eecec;
        }
    }
    ctx->pc = 0x1EECE0u;
    // 0x1eece0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eece4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EECE4u;
    {
        const bool branch_taken_0x1eece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECE4u;
            // 0x1eece8: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eece4) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EECECu;
label_1eecec:
    // 0x1eecec: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EECECu;
    {
        const bool branch_taken_0x1eecec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECECu;
            // 0x1eecf0: 0x28410010  slti        $at, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecec) {
            ctx->pc = 0x1EED08u;
            goto label_1eed08;
        }
    }
    ctx->pc = 0x1EECF4u;
    // 0x1eecf4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EECF4u;
    {
        const bool branch_taken_0x1eecf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECF4u;
            // 0x1eecf8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecf4) {
            ctx->pc = 0x1EED0Cu;
            goto label_1eed0c;
        }
    }
    ctx->pc = 0x1EECFCu;
    // 0x1eecfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eed00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EED00u;
    {
        const bool branch_taken_0x1eed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED00u;
            // 0x1eed04: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed00) {
            ctx->pc = 0x1EED10u;
            goto label_1eed10;
        }
    }
    ctx->pc = 0x1EED08u;
label_1eed08:
    // 0x1eed08: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1eed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eed0c:
    // 0x1eed0c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eed10:
    // 0x1eed10: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x1eed10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eed14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eed18: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EED18u;
    {
        const bool branch_taken_0x1eed18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eed18) {
            ctx->pc = 0x1EEDCCu;
            goto label_1eedcc;
        }
    }
    ctx->pc = 0x1EED20u;
    // 0x1eed20: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eed24: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1eed24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1eed28: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EED28u;
    {
        const bool branch_taken_0x1eed28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED28u;
            // 0x1eed2c: 0x2861000e  slti        $at, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed28) {
            ctx->pc = 0x1EED4Cu;
            goto label_1eed4c;
        }
    }
    ctx->pc = 0x1EED30u;
    // 0x1eed30: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EED30u;
    {
        const bool branch_taken_0x1eed30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed30) {
            ctx->pc = 0x1EED4Cu;
            goto label_1eed4c;
        }
    }
    ctx->pc = 0x1EED38u;
    // 0x1eed38: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eed3c: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1eed3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eed40: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EED40u;
    {
        const bool branch_taken_0x1eed40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED40u;
            // 0x1eed44: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed40) {
            ctx->pc = 0x1EED4Cu;
            goto label_1eed4c;
        }
    }
    ctx->pc = 0x1EED48u;
    // 0x1eed48: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eed4c:
    // 0x1eed4c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eed4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eed50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eed54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EED54u;
    {
        const bool branch_taken_0x1eed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eed54) {
            ctx->pc = 0x1EED78u;
            goto label_1eed78;
        }
    }
    ctx->pc = 0x1EED5Cu;
    // 0x1eed5c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eed60: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1eed60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1eed64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EED64u;
    {
        const bool branch_taken_0x1eed64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED64u;
            // 0x1eed68: 0x2841000f  slti        $at, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed64) {
            ctx->pc = 0x1EED78u;
            goto label_1eed78;
        }
    }
    ctx->pc = 0x1EED6Cu;
    // 0x1eed6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EED6Cu;
    {
        const bool branch_taken_0x1eed6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED6Cu;
            // 0x1eed70: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed6c) {
            ctx->pc = 0x1EED78u;
            goto label_1eed78;
        }
    }
    ctx->pc = 0x1EED74u;
    // 0x1eed74: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eed78:
    // 0x1eed78: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eed78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eed7c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1eed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eed80: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EED80u;
    {
        const bool branch_taken_0x1eed80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eed80) {
            ctx->pc = 0x1EEDA8u;
            goto label_1eeda8;
        }
    }
    ctx->pc = 0x1EED88u;
    // 0x1eed88: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eed88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eed8c: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x1eed8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1eed90: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EED90u;
    {
        const bool branch_taken_0x1eed90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED90u;
            // 0x1eed94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed90) {
            ctx->pc = 0x1EEDA4u;
            goto label_1eeda4;
        }
    }
    ctx->pc = 0x1EED98u;
    // 0x1eed98: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eed9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EED9Cu;
    {
        const bool branch_taken_0x1eed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED9Cu;
            // 0x1eeda0: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed9c) {
            ctx->pc = 0x1EEDA8u;
            goto label_1eeda8;
        }
    }
    ctx->pc = 0x1EEDA4u;
label_1eeda4:
    // 0x1eeda4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeda4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eeda8:
    // 0x1eeda8: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eedac: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1eedacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eedb0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEDB0u;
    {
        const bool branch_taken_0x1eedb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eedb0) {
            ctx->pc = 0x1EEDCCu;
            goto label_1eedcc;
        }
    }
    ctx->pc = 0x1EEDB8u;
    // 0x1eedb8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eedb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eedbc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1eedbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eedc0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEDC0u;
    {
        const bool branch_taken_0x1eedc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDC0u;
            // 0x1eedc4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedc0) {
            ctx->pc = 0x1EEDCCu;
            goto label_1eedcc;
        }
    }
    ctx->pc = 0x1EEDC8u;
    // 0x1eedc8: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eedc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eedcc:
    // 0x1eedcc: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x1eedccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eedd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eedd4: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EEDD4u;
    {
        const bool branch_taken_0x1eedd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eedd4) {
            ctx->pc = 0x1EEE84u;
            goto label_1eee84;
        }
    }
    ctx->pc = 0x1EEDDCu;
    // 0x1eeddc: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eede0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEDE0u;
    {
        const bool branch_taken_0x1eede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eede0) {
            ctx->pc = 0x1EEE04u;
            goto label_1eee04;
        }
    }
    ctx->pc = 0x1EEDE8u;
    // 0x1eede8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eedec: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1eedecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eedf0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEDF0u;
    {
        const bool branch_taken_0x1eedf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDF0u;
            // 0x1eedf4: 0x28410009  slti        $at, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedf0) {
            ctx->pc = 0x1EEE04u;
            goto label_1eee04;
        }
    }
    ctx->pc = 0x1EEDF8u;
    // 0x1eedf8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEDF8u;
    {
        const bool branch_taken_0x1eedf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDF8u;
            // 0x1eedfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedf8) {
            ctx->pc = 0x1EEE04u;
            goto label_1eee04;
        }
    }
    ctx->pc = 0x1EEE00u;
    // 0x1eee00: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eee04:
    // 0x1eee04: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eee04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eee08: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1eee08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eee0c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEE0Cu;
    {
        const bool branch_taken_0x1eee0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE0Cu;
            // 0x1eee10: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee0c) {
            ctx->pc = 0x1EEE30u;
            goto label_1eee30;
        }
    }
    ctx->pc = 0x1EEE14u;
    // 0x1eee14: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEE14u;
    {
        const bool branch_taken_0x1eee14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee14) {
            ctx->pc = 0x1EEE30u;
            goto label_1eee30;
        }
    }
    ctx->pc = 0x1EEE1Cu;
    // 0x1eee1c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eee20: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1eee20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eee24: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEE24u;
    {
        const bool branch_taken_0x1eee24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE24u;
            // 0x1eee28: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee24) {
            ctx->pc = 0x1EEE30u;
            goto label_1eee30;
        }
    }
    ctx->pc = 0x1EEE2Cu;
    // 0x1eee2c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eee30:
    // 0x1eee30: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eee30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eee34: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1eee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1eee38: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEE38u;
    {
        const bool branch_taken_0x1eee38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eee38) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE40u;
    // 0x1eee40: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eee44: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1eee44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eee48: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEE48u;
    {
        const bool branch_taken_0x1eee48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE48u;
            // 0x1eee4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee48) {
            ctx->pc = 0x1EEE5Cu;
            goto label_1eee5c;
        }
    }
    ctx->pc = 0x1EEE50u;
    // 0x1eee50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eee54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEE54u;
    {
        const bool branch_taken_0x1eee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE54u;
            // 0x1eee58: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee54) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE5Cu;
label_1eee5c:
    // 0x1eee5c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eee60:
    // 0x1eee60: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eee64: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1eee64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1eee68: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEE68u;
    {
        const bool branch_taken_0x1eee68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eee68) {
            ctx->pc = 0x1EEE84u;
            goto label_1eee84;
        }
    }
    ctx->pc = 0x1EEE70u;
    // 0x1eee70: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eee74: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1eee74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eee78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEE78u;
    {
        const bool branch_taken_0x1eee78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE78u;
            // 0x1eee7c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee78) {
            ctx->pc = 0x1EEE84u;
            goto label_1eee84;
        }
    }
    ctx->pc = 0x1EEE80u;
    // 0x1eee80: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eee80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eee84:
    // 0x1eee84: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eee88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1eee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eee8c: 0x1444002c  bne         $v0, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EEE8Cu;
    {
        const bool branch_taken_0x1eee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eee8c) {
            ctx->pc = 0x1EEF40u;
            goto label_1eef40;
        }
    }
    ctx->pc = 0x1EEE94u;
    // 0x1eee94: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eee94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eee98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eee9c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEE9Cu;
    {
        const bool branch_taken_0x1eee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eee9c) {
            ctx->pc = 0x1EEEC0u;
            goto label_1eeec0;
        }
    }
    ctx->pc = 0x1EEEA4u;
    // 0x1eeea4: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeea8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1eeea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eeeac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEEACu;
    {
        const bool branch_taken_0x1eeeac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEACu;
            // 0x1eeeb0: 0x2841000c  slti        $at, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeeac) {
            ctx->pc = 0x1EEEC0u;
            goto label_1eeec0;
        }
    }
    ctx->pc = 0x1EEEB4u;
    // 0x1eeeb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEEB4u;
    {
        const bool branch_taken_0x1eeeb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeeb4) {
            ctx->pc = 0x1EEEC0u;
            goto label_1eeec0;
        }
    }
    ctx->pc = 0x1EEEBCu;
    // 0x1eeebc: 0xa60400c2  sh          $a0, 0xC2($s0)
    ctx->pc = 0x1eeebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 4));
label_1eeec0:
    // 0x1eeec0: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeec4: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1eeec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eeec8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEEC8u;
    {
        const bool branch_taken_0x1eeec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEC8u;
            // 0x1eeecc: 0x2861000b  slti        $at, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeec8) {
            ctx->pc = 0x1EEEECu;
            goto label_1eeeec;
        }
    }
    ctx->pc = 0x1EEED0u;
    // 0x1eeed0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEED0u;
    {
        const bool branch_taken_0x1eeed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeed0) {
            ctx->pc = 0x1EEEECu;
            goto label_1eeeec;
        }
    }
    ctx->pc = 0x1EEED8u;
    // 0x1eeed8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeedc: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1eeedcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eeee0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEEE0u;
    {
        const bool branch_taken_0x1eeee0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEE0u;
            // 0x1eeee4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeee0) {
            ctx->pc = 0x1EEEECu;
            goto label_1eeeec;
        }
    }
    ctx->pc = 0x1EEEE8u;
    // 0x1eeee8: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eeeec:
    // 0x1eeeec: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eeeecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eeef0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1eeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eeef4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEEF4u;
    {
        const bool branch_taken_0x1eeef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeef4) {
            ctx->pc = 0x1EEF1Cu;
            goto label_1eef1c;
        }
    }
    ctx->pc = 0x1EEEFCu;
    // 0x1eeefc: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeefcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eef00: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1eef00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eef04: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEF04u;
    {
        const bool branch_taken_0x1eef04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF04u;
            // 0x1eef08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef04) {
            ctx->pc = 0x1EEF18u;
            goto label_1eef18;
        }
    }
    ctx->pc = 0x1EEF0Cu;
    // 0x1eef0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eef10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEF10u;
    {
        const bool branch_taken_0x1eef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF10u;
            // 0x1eef14: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef10) {
            ctx->pc = 0x1EEF1Cu;
            goto label_1eef1c;
        }
    }
    ctx->pc = 0x1EEF18u;
label_1eef18:
    // 0x1eef18: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eef1c:
    // 0x1eef1c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eef1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eef20: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x1eef20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1eef24: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF24u;
    {
        const bool branch_taken_0x1eef24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef24) {
            ctx->pc = 0x1EEF40u;
            goto label_1eef40;
        }
    }
    ctx->pc = 0x1EEF2Cu;
    // 0x1eef2c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eef30: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1eef30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eef34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEF34u;
    {
        const bool branch_taken_0x1eef34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF34u;
            // 0x1eef38: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef34) {
            ctx->pc = 0x1EEF40u;
            goto label_1eef40;
        }
    }
    ctx->pc = 0x1EEF3Cu;
    // 0x1eef3c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eef40:
    // 0x1eef40: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x1eef40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1eef44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eef48: 0x146200a6  bne         $v1, $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1EEF48u;
    {
        const bool branch_taken_0x1eef48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eef48) {
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EEF50u;
    // 0x1eef50: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eef50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eef54: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1eef54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1eef58: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEF58u;
    {
        const bool branch_taken_0x1eef58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF58u;
            // 0x1eef5c: 0x2861000b  slti        $at, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef58) {
            ctx->pc = 0x1EEF7Cu;
            goto label_1eef7c;
        }
    }
    ctx->pc = 0x1EEF60u;
    // 0x1eef60: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF60u;
    {
        const bool branch_taken_0x1eef60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef60) {
            ctx->pc = 0x1EEF7Cu;
            goto label_1eef7c;
        }
    }
    ctx->pc = 0x1EEF68u;
    // 0x1eef68: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eef6c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1eef6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1eef70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEF70u;
    {
        const bool branch_taken_0x1eef70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF70u;
            // 0x1eef74: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef70) {
            ctx->pc = 0x1EEF7Cu;
            goto label_1eef7c;
        }
    }
    ctx->pc = 0x1EEF78u;
    // 0x1eef78: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eef7c:
    // 0x1eef7c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eef7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eef80: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x1eef80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1eef84: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEF84u;
    {
        const bool branch_taken_0x1eef84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF84u;
            // 0x1eef88: 0x28610011  slti        $at, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef84) {
            ctx->pc = 0x1EEFA8u;
            goto label_1eefa8;
        }
    }
    ctx->pc = 0x1EEF8Cu;
    // 0x1eef8c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF8Cu;
    {
        const bool branch_taken_0x1eef8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef8c) {
            ctx->pc = 0x1EEFA8u;
            goto label_1eefa8;
        }
    }
    ctx->pc = 0x1EEF94u;
    // 0x1eef94: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eef94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eef98: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1eef98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1eef9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEF9Cu;
    {
        const bool branch_taken_0x1eef9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF9Cu;
            // 0x1eefa0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef9c) {
            ctx->pc = 0x1EEFA8u;
            goto label_1eefa8;
        }
    }
    ctx->pc = 0x1EEFA4u;
    // 0x1eefa4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eefa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eefa8:
    // 0x1eefa8: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eefa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eefac: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1eefacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1eefb0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEFB0u;
    {
        const bool branch_taken_0x1eefb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFB0u;
            // 0x1eefb4: 0x28610015  slti        $at, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefb0) {
            ctx->pc = 0x1EEFD4u;
            goto label_1eefd4;
        }
    }
    ctx->pc = 0x1EEFB8u;
    // 0x1eefb8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EEFD4u;
            goto label_1eefd4;
        }
    }
    ctx->pc = 0x1EEFC0u;
    // 0x1eefc0: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eefc4: 0x28410016  slti        $at, $v0, 0x16
    ctx->pc = 0x1eefc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1eefc8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEFC8u;
    {
        const bool branch_taken_0x1eefc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFC8u;
            // 0x1eefcc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefc8) {
            ctx->pc = 0x1EEFD4u;
            goto label_1eefd4;
        }
    }
    ctx->pc = 0x1EEFD0u;
    // 0x1eefd0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eefd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1eefd4:
    // 0x1eefd4: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1eefd8: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x1eefd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1eefdc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEFDCu;
    {
        const bool branch_taken_0x1eefdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFDCu;
            // 0x1eefe0: 0x2861001b  slti        $at, $v1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefdc) {
            ctx->pc = 0x1EF000u;
            goto label_1ef000;
        }
    }
    ctx->pc = 0x1EEFE4u;
    // 0x1eefe4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEFE4u;
    {
        const bool branch_taken_0x1eefe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eefe4) {
            ctx->pc = 0x1EF000u;
            goto label_1ef000;
        }
    }
    ctx->pc = 0x1EEFECu;
    // 0x1eefec: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1eefecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1eeff0: 0x2841001b  slti        $at, $v0, 0x1B
    ctx->pc = 0x1eeff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1eeff4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEFF4u;
    {
        const bool branch_taken_0x1eeff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFF4u;
            // 0x1eeff8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeff4) {
            ctx->pc = 0x1EF000u;
            goto label_1ef000;
        }
    }
    ctx->pc = 0x1EEFFCu;
    // 0x1eeffc: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1eeffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef000:
    // 0x1ef000: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef004: 0x2862001d  slti        $v0, $v1, 0x1D
    ctx->pc = 0x1ef004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1ef008: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF008u;
    {
        const bool branch_taken_0x1ef008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF008u;
            // 0x1ef00c: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef008) {
            ctx->pc = 0x1EF038u;
            goto label_1ef038;
        }
    }
    ctx->pc = 0x1EF010u;
    // 0x1ef010: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF010u;
    {
        const bool branch_taken_0x1ef010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef010) {
            ctx->pc = 0x1EF038u;
            goto label_1ef038;
        }
    }
    ctx->pc = 0x1EF018u;
    // 0x1ef018: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef01c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1ef01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ef020: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF020u;
    {
        const bool branch_taken_0x1ef020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF020u;
            // 0x1ef024: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef020) {
            ctx->pc = 0x1EF034u;
            goto label_1ef034;
        }
    }
    ctx->pc = 0x1EF028u;
    // 0x1ef028: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ef02c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF02Cu;
    {
        const bool branch_taken_0x1ef02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF02Cu;
            // 0x1ef030: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef02c) {
            ctx->pc = 0x1EF038u;
            goto label_1ef038;
        }
    }
    ctx->pc = 0x1EF034u;
label_1ef034:
    // 0x1ef034: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef038:
    // 0x1ef038: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef03c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ef03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef040: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF040u;
    {
        const bool branch_taken_0x1ef040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef040) {
            ctx->pc = 0x1EF080u;
            goto label_1ef080;
        }
    }
    ctx->pc = 0x1EF048u;
    // 0x1ef048: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef04c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1ef04cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ef050: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF050u;
    {
        const bool branch_taken_0x1ef050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef050) {
            ctx->pc = 0x1EF064u;
            goto label_1ef064;
        }
    }
    ctx->pc = 0x1EF058u;
    // 0x1ef058: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ef058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ef05c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF05Cu;
    {
        const bool branch_taken_0x1ef05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF05Cu;
            // 0x1ef060: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef05c) {
            ctx->pc = 0x1EF080u;
            goto label_1ef080;
        }
    }
    ctx->pc = 0x1EF064u;
label_1ef064:
    // 0x1ef064: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x1ef064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1ef068: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF068u;
    {
        const bool branch_taken_0x1ef068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF068u;
            // 0x1ef06c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef068) {
            ctx->pc = 0x1EF07Cu;
            goto label_1ef07c;
        }
    }
    ctx->pc = 0x1EF070u;
    // 0x1ef070: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ef074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF074u;
    {
        const bool branch_taken_0x1ef074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF074u;
            // 0x1ef078: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef074) {
            ctx->pc = 0x1EF080u;
            goto label_1ef080;
        }
    }
    ctx->pc = 0x1EF07Cu;
label_1ef07c:
    // 0x1ef07c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef080:
    // 0x1ef080: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef084: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ef084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ef088: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF088u;
    {
        const bool branch_taken_0x1ef088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef088) {
            ctx->pc = 0x1EF0C8u;
            goto label_1ef0c8;
        }
    }
    ctx->pc = 0x1EF090u;
    // 0x1ef090: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef094: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1ef094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1ef098: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF098u;
    {
        const bool branch_taken_0x1ef098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef098) {
            ctx->pc = 0x1EF0ACu;
            goto label_1ef0ac;
        }
    }
    ctx->pc = 0x1EF0A0u;
    // 0x1ef0a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef0a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF0A4u;
    {
        const bool branch_taken_0x1ef0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0A4u;
            // 0x1ef0a8: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0a4) {
            ctx->pc = 0x1EF0C8u;
            goto label_1ef0c8;
        }
    }
    ctx->pc = 0x1EF0ACu;
label_1ef0ac:
    // 0x1ef0ac: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x1ef0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ef0b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF0B0u;
    {
        const bool branch_taken_0x1ef0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0B0u;
            // 0x1ef0b4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0b0) {
            ctx->pc = 0x1EF0C4u;
            goto label_1ef0c4;
        }
    }
    ctx->pc = 0x1EF0B8u;
    // 0x1ef0b8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ef0bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF0BCu;
    {
        const bool branch_taken_0x1ef0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0BCu;
            // 0x1ef0c0: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0bc) {
            ctx->pc = 0x1EF0C8u;
            goto label_1ef0c8;
        }
    }
    ctx->pc = 0x1EF0C4u;
label_1ef0c4:
    // 0x1ef0c4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef0c8:
    // 0x1ef0c8: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef0cc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1ef0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ef0d0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF0D0u;
    {
        const bool branch_taken_0x1ef0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef0d0) {
            ctx->pc = 0x1EF110u;
            goto label_1ef110;
        }
    }
    ctx->pc = 0x1EF0D8u;
    // 0x1ef0d8: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef0dc: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x1ef0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1ef0e0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF0E0u;
    {
        const bool branch_taken_0x1ef0e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0e0) {
            ctx->pc = 0x1EF0F4u;
            goto label_1ef0f4;
        }
    }
    ctx->pc = 0x1EF0E8u;
    // 0x1ef0e8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ef0ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0ECu;
            // 0x1ef0f0: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF110u;
            goto label_1ef110;
        }
    }
    ctx->pc = 0x1EF0F4u;
label_1ef0f4:
    // 0x1ef0f4: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1ef0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1ef0f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF0F8u;
    {
        const bool branch_taken_0x1ef0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0F8u;
            // 0x1ef0fc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0f8) {
            ctx->pc = 0x1EF10Cu;
            goto label_1ef10c;
        }
    }
    ctx->pc = 0x1EF100u;
    // 0x1ef100: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1ef100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ef104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF104u;
    {
        const bool branch_taken_0x1ef104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF104u;
            // 0x1ef108: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef104) {
            ctx->pc = 0x1EF110u;
            goto label_1ef110;
        }
    }
    ctx->pc = 0x1EF10Cu;
label_1ef10c:
    // 0x1ef10c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef10cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef110:
    // 0x1ef110: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef114: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ef118: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF118u;
    {
        const bool branch_taken_0x1ef118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef118) {
            ctx->pc = 0x1EF158u;
            goto label_1ef158;
        }
    }
    ctx->pc = 0x1EF120u;
    // 0x1ef120: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef124: 0x28410016  slti        $at, $v0, 0x16
    ctx->pc = 0x1ef124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1ef128: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF128u;
    {
        const bool branch_taken_0x1ef128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef128) {
            ctx->pc = 0x1EF13Cu;
            goto label_1ef13c;
        }
    }
    ctx->pc = 0x1EF130u;
    // 0x1ef130: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1ef130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ef134: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF134u;
    {
        const bool branch_taken_0x1ef134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF134u;
            // 0x1ef138: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef134) {
            ctx->pc = 0x1EF158u;
            goto label_1ef158;
        }
    }
    ctx->pc = 0x1EF13Cu;
label_1ef13c:
    // 0x1ef13c: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x1ef13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1ef140: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF140u;
    {
        const bool branch_taken_0x1ef140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF140u;
            // 0x1ef144: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef140) {
            ctx->pc = 0x1EF154u;
            goto label_1ef154;
        }
    }
    ctx->pc = 0x1EF148u;
    // 0x1ef148: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ef14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF14Cu;
    {
        const bool branch_taken_0x1ef14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF14Cu;
            // 0x1ef150: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef14c) {
            ctx->pc = 0x1EF158u;
            goto label_1ef158;
        }
    }
    ctx->pc = 0x1EF154u;
label_1ef154:
    // 0x1ef154: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef158:
    // 0x1ef158: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef15c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ef15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ef160: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF160u;
    {
        const bool branch_taken_0x1ef160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef160) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF168u;
    // 0x1ef168: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef16c: 0x2841001c  slti        $at, $v0, 0x1C
    ctx->pc = 0x1ef16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1ef170: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF170u;
    {
        const bool branch_taken_0x1ef170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef170) {
            ctx->pc = 0x1EF184u;
            goto label_1ef184;
        }
    }
    ctx->pc = 0x1EF178u;
    // 0x1ef178: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ef178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ef17c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF17Cu;
    {
        const bool branch_taken_0x1ef17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF17Cu;
            // 0x1ef180: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef17c) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF184u;
label_1ef184:
    // 0x1ef184: 0x28420022  slti        $v0, $v0, 0x22
    ctx->pc = 0x1ef184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1ef188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF188u;
    {
        const bool branch_taken_0x1ef188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF188u;
            // 0x1ef18c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef188) {
            ctx->pc = 0x1EF19Cu;
            goto label_1ef19c;
        }
    }
    ctx->pc = 0x1EF190u;
    // 0x1ef190: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ef194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF194u;
    {
        const bool branch_taken_0x1ef194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF194u;
            // 0x1ef198: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef194) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF19Cu;
label_1ef19c:
    // 0x1ef19c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef19cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef1a0:
    // 0x1ef1a0: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x1ef1a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef1a4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1ef1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ef1a8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF1A8u;
    {
        const bool branch_taken_0x1ef1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef1a8) {
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF1B0u;
    // 0x1ef1b0: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x1ef1b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef1b4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1ef1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ef1b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF1B8u;
    {
        const bool branch_taken_0x1ef1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef1b8) {
            ctx->pc = 0x1EF1C8u;
            goto label_1ef1c8;
        }
    }
    ctx->pc = 0x1EF1C0u;
    // 0x1ef1c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF1C0u;
    {
        const bool branch_taken_0x1ef1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1C0u;
            // 0x1ef1c4: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1c0) {
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF1C8u;
label_1ef1c8:
    // 0x1ef1c8: 0x28620024  slti        $v0, $v1, 0x24
    ctx->pc = 0x1ef1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x1ef1cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF1CCu;
    {
        const bool branch_taken_0x1ef1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1CCu;
            // 0x1ef1d0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1cc) {
            ctx->pc = 0x1EF1E0u;
            goto label_1ef1e0;
        }
    }
    ctx->pc = 0x1EF1D4u;
    // 0x1ef1d4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ef1d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF1D8u;
    {
        const bool branch_taken_0x1ef1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1D8u;
            // 0x1ef1dc: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1d8) {
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF1E0u;
label_1ef1e0:
    // 0x1ef1e0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x1ef1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_1ef1e4:
    // 0x1ef1e4: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x1ef1e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1ef1e8: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EF1E8u;
    SET_GPR_U32(ctx, 31, 0x1EF1F0u);
    ctx->pc = 0x1EF1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1E8u;
            // 0x1ef1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1F0u; }
        if (ctx->pc != 0x1EF1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1F0u; }
        if (ctx->pc != 0x1EF1F0u) { return; }
    }
    ctx->pc = 0x1EF1F0u;
label_1ef1f0:
    // 0x1ef1f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF1F4u;
    {
        const bool branch_taken_0x1ef1f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1F4u;
            // 0x1ef1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1f4) {
            ctx->pc = 0x1EF204u;
            goto label_1ef204;
        }
    }
    ctx->pc = 0x1EF1FCu;
    // 0x1ef1fc: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x1EF1FCu;
    {
        const bool branch_taken_0x1ef1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1FCu;
            // 0x1ef200: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1fc) {
            ctx->pc = 0x1EF81Cu;
            goto label_1ef81c;
        }
    }
    ctx->pc = 0x1EF204u;
label_1ef204:
    // 0x1ef204: 0x12c00062  beqz        $s6, . + 4 + (0x62 << 2)
    ctx->pc = 0x1EF204u;
    {
        const bool branch_taken_0x1ef204 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef204) {
            ctx->pc = 0x1EF390u;
            goto label_1ef390;
        }
    }
    ctx->pc = 0x1EF20Cu;
    // 0x1ef20c: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1EF20Cu;
    {
        const bool branch_taken_0x1ef20c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef20c) {
            ctx->pc = 0x1EF390u;
            goto label_1ef390;
        }
    }
    ctx->pc = 0x1EF214u;
    // 0x1ef214: 0x82c30029  lb          $v1, 0x29($s6)
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x1ef218: 0x82220029  lb          $v0, 0x29($s1)
    ctx->pc = 0x1ef218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x1ef21c: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1EF21Cu;
    SET_GPR_U32(ctx, 31, 0x1EF224u);
    ctx->pc = 0x1EF220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF21Cu;
            // 0x1ef220: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF224u; }
        if (ctx->pc != 0x1EF224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF224u; }
        if (ctx->pc != 0x1EF224u) { return; }
    }
    ctx->pc = 0x1EF224u;
label_1ef224:
    // 0x1ef224: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ef224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ef228: 0x14200059  bnez        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x1EF228u;
    {
        const bool branch_taken_0x1ef228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef228) {
            ctx->pc = 0x1EF390u;
            goto label_1ef390;
        }
    }
    ctx->pc = 0x1EF230u;
    // 0x1ef230: 0x82230029  lb          $v1, 0x29($s1)
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x1ef234: 0x82c20029  lb          $v0, 0x29($s6)
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x1ef238: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1ef238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ef23c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF23Cu;
    {
        const bool branch_taken_0x1ef23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF23Cu;
            // 0x1ef240: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef23c) {
            ctx->pc = 0x1EF248u;
            goto label_1ef248;
        }
    }
    ctx->pc = 0x1EF244u;
    // 0x1ef244: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ef244u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef248:
    // 0x1ef248: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ef248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef24c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1ef24cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef250: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ef250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef25c:
    // 0x1ef25c: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1ef25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1ef260: 0x2462004e  addiu       $v0, $v1, 0x4E
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 78));
    // 0x1ef264: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1ef264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1ef268: 0x8465004e  lh          $a1, 0x4E($v1)
    ctx->pc = 0x1ef268u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 78)));
    // 0x1ef26c: 0x4a00020  bltz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EF26Cu;
    {
        const bool branch_taken_0x1ef26c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF26Cu;
            // 0x1ef270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef26c) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF274u;
    // 0x1ef274: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EF274u;
    SET_GPR_U32(ctx, 31, 0x1EF27Cu);
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF27Cu; }
        if (ctx->pc != 0x1EF27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF27Cu; }
        if (ctx->pc != 0x1EF27Cu) { return; }
    }
    ctx->pc = 0x1EF27Cu;
label_1ef27c:
    // 0x1ef27c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF27Cu;
    {
        const bool branch_taken_0x1ef27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF27Cu;
            // 0x1ef280: 0x33c500ff  andi        $a1, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef27c) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF284u;
    // 0x1ef284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef288: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF288u;
    {
        const bool branch_taken_0x1ef288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef288) {
            ctx->pc = 0x1EF2A4u;
            goto label_1ef2a4;
        }
    }
    ctx->pc = 0x1EF290u;
    // 0x1ef290: 0x80440029  lb          $a0, 0x29($v0)
    ctx->pc = 0x1ef290u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x1ef294: 0x82c30029  lb          $v1, 0x29($s6)
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x1ef298: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1ef298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ef29c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF29Cu;
    {
        const bool branch_taken_0x1ef29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef29c) {
            ctx->pc = 0x1EF2C4u;
            goto label_1ef2c4;
        }
    }
    ctx->pc = 0x1EF2A4u;
label_1ef2a4:
    // 0x1ef2a4: 0x0  nop
    ctx->pc = 0x1ef2a4u;
    // NOP
    // 0x1ef2a8: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF2A8u;
    {
        const bool branch_taken_0x1ef2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2a8) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF2B0u;
    // 0x1ef2b0: 0x80440029  lb          $a0, 0x29($v0)
    ctx->pc = 0x1ef2b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x1ef2b4: 0x82c30029  lb          $v1, 0x29($s6)
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x1ef2b8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ef2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ef2bc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF2BCu;
    {
        const bool branch_taken_0x1ef2bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2bc) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF2C4u;
label_1ef2c4:
    // 0x1ef2c4: 0x0  nop
    ctx->pc = 0x1ef2c4u;
    // NOP
    // 0x1ef2c8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1ef2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef2cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1ef2ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef2d0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1ef2d4: 0x2a4082a  slt         $at, $s5, $a0
    ctx->pc = 0x1ef2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ef2d8: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x1ef2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x1ef2dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF2DCu;
    {
        const bool branch_taken_0x1ef2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2DCu;
            // 0x1ef2e0: 0xac640120  sw          $a0, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2dc) {
            ctx->pc = 0x1EF2E8u;
            goto label_1ef2e8;
        }
    }
    ctx->pc = 0x1EF2E4u;
    // 0x1ef2e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2e8:
    // 0x1ef2e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ef2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ef2ec: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1ef2ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1ef2f0:
    // 0x1ef2f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ef2f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ef2f4: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1ef2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef2f8: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1EF2F8u;
    {
        const bool branch_taken_0x1ef2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2F8u;
            // 0x1ef2fc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2f8) {
            ctx->pc = 0x1EF25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef25c;
        }
    }
    ctx->pc = 0x1EF300u;
    // 0x1ef300: 0x82320028  lb          $s2, 0x28($s1)
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ef304: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1ef304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1ef308: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EF308u;
    {
        const bool branch_taken_0x1ef308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF308u;
            // 0x1ef30c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef308) {
            ctx->pc = 0x1EF390u;
            goto label_1ef390;
        }
    }
    ctx->pc = 0x1EF310u;
    // 0x1ef310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef314:
    // 0x1ef314: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x1ef314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x1ef318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef31c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF31Cu;
    {
        const bool branch_taken_0x1ef31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ef31c) {
            ctx->pc = 0x1EF368u;
            goto label_1ef368;
        }
    }
    ctx->pc = 0x1EF324u;
    // 0x1ef324: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EF324u;
    {
        const bool branch_taken_0x1ef324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF324u;
            // 0x1ef328: 0x255082a  slt         $at, $s2, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef324) {
            ctx->pc = 0x1EF380u;
            goto label_1ef380;
        }
    }
    ctx->pc = 0x1EF32Cu;
    // 0x1ef32c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF32Cu;
    {
        const bool branch_taken_0x1ef32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF32Cu;
            // 0x1ef330: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef32c) {
            ctx->pc = 0x1EF348u;
            goto label_1ef348;
        }
    }
    ctx->pc = 0x1EF334u;
    // 0x1ef334: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x1ef334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1ef338: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1EF338u;
    SET_GPR_U32(ctx, 31, 0x1EF340u);
    ctx->pc = 0x1EF33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF338u;
            // 0x1ef33c: 0x2422023  subu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF340u; }
        if (ctx->pc != 0x1EF340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF340u; }
        if (ctx->pc != 0x1EF340u) { return; }
    }
    ctx->pc = 0x1EF340u;
label_1ef340:
    // 0x1ef340: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF340u;
    {
        const bool branch_taken_0x1ef340 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ef340) {
            ctx->pc = 0x1EF368u;
            goto label_1ef368;
        }
    }
    ctx->pc = 0x1EF348u;
label_1ef348:
    // 0x1ef348: 0x2b2082a  slt         $at, $s5, $s2
    ctx->pc = 0x1ef348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ef34c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF34Cu;
    {
        const bool branch_taken_0x1ef34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF34Cu;
            // 0x1ef350: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef34c) {
            ctx->pc = 0x1EF380u;
            goto label_1ef380;
        }
    }
    ctx->pc = 0x1EF354u;
    // 0x1ef354: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x1ef354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1ef358: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1EF358u;
    SET_GPR_U32(ctx, 31, 0x1EF360u);
    ctx->pc = 0x1EF35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF358u;
            // 0x1ef35c: 0x2422023  subu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF360u; }
        if (ctx->pc != 0x1EF360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF360u; }
        if (ctx->pc != 0x1EF360u) { return; }
    }
    ctx->pc = 0x1EF360u;
label_1ef360:
    // 0x1ef360: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF360u;
    {
        const bool branch_taken_0x1ef360 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ef360) {
            ctx->pc = 0x1EF380u;
            goto label_1ef380;
        }
    }
    ctx->pc = 0x1EF368u;
label_1ef368:
    // 0x1ef368: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ef368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ef36c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ef36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ef370: 0x8c510130  lw          $s1, 0x130($v0)
    ctx->pc = 0x1ef370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ef374: 0x84420120  lh          $v0, 0x120($v0)
    ctx->pc = 0x1ef374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1ef378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF378u;
    {
        const bool branch_taken_0x1ef378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF378u;
            // 0x1ef37c: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef378) {
            ctx->pc = 0x1EF390u;
            goto label_1ef390;
        }
    }
    ctx->pc = 0x1EF380u;
label_1ef380:
    // 0x1ef380: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ef380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ef384: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x1ef384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1ef388: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1EF388u;
    {
        const bool branch_taken_0x1ef388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF388u;
            // 0x1ef38c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef388) {
            ctx->pc = 0x1EF314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef314;
        }
    }
    ctx->pc = 0x1EF390u;
label_1ef390:
    // 0x1ef390: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef394: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF394u;
    SET_GPR_U32(ctx, 31, 0x1EF39Cu);
    ctx->pc = 0x1EF398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF394u;
            // 0x1ef398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF39Cu; }
        if (ctx->pc != 0x1EF39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF39Cu; }
        if (ctx->pc != 0x1EF39Cu) { return; }
    }
    ctx->pc = 0x1EF39Cu;
label_1ef39c:
    // 0x1ef39c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1ef39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1ef3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3a4: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1ef3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1ef3a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3ac: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1ef3b0: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x1ef3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x1ef3b4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1ef3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1ef3b8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ef3bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ef3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ef3c0: 0x8e1200e8  lw          $s2, 0xE8($s0)
    ctx->pc = 0x1ef3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ef3c4: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EF3C4u;
    SET_GPR_U32(ctx, 31, 0x1EF3CCu);
    ctx->pc = 0x1EF3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3C4u;
            // 0x1ef3c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3CCu; }
        if (ctx->pc != 0x1EF3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3CCu; }
        if (ctx->pc != 0x1EF3CCu) { return; }
    }
    ctx->pc = 0x1EF3CCu;
label_1ef3cc:
    // 0x1ef3cc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1ef3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3d8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1ef3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ef3dc: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x1ef3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef3e0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1ef3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1ef3e4:
    // 0x1ef3e4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF3E4u;
    {
        const bool branch_taken_0x1ef3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3E4u;
            // 0x1ef3e8: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3e4) {
            ctx->pc = 0x1EF414u;
            goto label_1ef414;
        }
    }
    ctx->pc = 0x1EF3ECu;
    // 0x1ef3ec: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x1ef3ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ef3f0: 0x8463004e  lh          $v1, 0x4E($v1)
    ctx->pc = 0x1ef3f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 78)));
    // 0x1ef3f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF3F4u;
    {
        const bool branch_taken_0x1ef3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef3f4) {
            ctx->pc = 0x1EF404u;
            goto label_1ef404;
        }
    }
    ctx->pc = 0x1EF3FCu;
    // 0x1ef3fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF3FCu;
    {
        const bool branch_taken_0x1ef3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3FCu;
            // 0x1ef400: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3fc) {
            ctx->pc = 0x1EF414u;
            goto label_1ef414;
        }
    }
    ctx->pc = 0x1EF404u;
label_1ef404:
    // 0x1ef404: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef408: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1ef408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef40c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1EF40Cu;
    {
        const bool branch_taken_0x1ef40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF40Cu;
            // 0x1ef410: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef40c) {
            ctx->pc = 0x1EF3E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef3e4;
        }
    }
    ctx->pc = 0x1EF414u;
label_1ef414:
    // 0x1ef414: 0x0  nop
    ctx->pc = 0x1ef414u;
    // NOP
    // 0x1ef418: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1ef41c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF41Cu;
    {
        const bool branch_taken_0x1ef41c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EF420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF41Cu;
            // 0x1ef420: 0x27828158  addiu       $v0, $gp, -0x7EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef41c) {
            ctx->pc = 0x1EF430u;
            goto label_1ef430;
        }
    }
    ctx->pc = 0x1EF424u;
    // 0x1ef424: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ef424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ef428: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1EF428u;
    {
        const bool branch_taken_0x1ef428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF428u;
            // 0x1ef42c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef428) {
            ctx->pc = 0x1EF818u;
            goto label_1ef818;
        }
    }
    ctx->pc = 0x1EF430u;
label_1ef430:
    // 0x1ef430: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ef430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ef434: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ef434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ef438: 0x2463e290  addiu       $v1, $v1, -0x1D70
    ctx->pc = 0x1ef438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959760));
    // 0x1ef43c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1ef43cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef440: 0x27828160  addiu       $v0, $gp, -0x7EA0
    ctx->pc = 0x1ef440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934880));
    // 0x1ef444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ef444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ef448: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ef448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ef44c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef450: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ef450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef454: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EF454u;
    {
        const bool branch_taken_0x1ef454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF454u;
            // 0x1ef458: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef454) {
            ctx->pc = 0x1EF4CCu;
            goto label_1ef4cc;
        }
    }
    ctx->pc = 0x1EF45Cu;
    // 0x1ef45c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef460: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ef460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef464:
    // 0x1ef464: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef468: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF468u;
    SET_GPR_U32(ctx, 31, 0x1EF470u);
    ctx->pc = 0x1EF46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF468u;
            // 0x1ef46c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF470u; }
        if (ctx->pc != 0x1EF470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF470u; }
        if (ctx->pc != 0x1EF470u) { return; }
    }
    ctx->pc = 0x1EF470u;
label_1ef470:
    // 0x1ef470: 0x2b42821  addu        $a1, $s5, $s4
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1ef474: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ef478: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1ef478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef47c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1ef47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef480: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x1ef480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ef484: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1ef484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1ef488: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef48c: 0x0  nop
    ctx->pc = 0x1ef48cu;
    // NOP
    // 0x1ef490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef498: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef49c: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ef4a0: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x1ef4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef4a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef4a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef4a8: 0x0  nop
    ctx->pc = 0x1ef4a8u;
    // NOP
    // 0x1ef4ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef4b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef4b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef4b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef4bc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EF4BCu;
    {
        const bool branch_taken_0x1ef4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4BCu;
            // 0x1ef4c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4bc) {
            ctx->pc = 0x1EF464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef464;
        }
    }
    ctx->pc = 0x1EF4C4u;
    // 0x1ef4c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF4C4u;
    {
        const bool branch_taken_0x1ef4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4c4) {
            ctx->pc = 0x1EF538u;
            goto label_1ef538;
        }
    }
    ctx->pc = 0x1EF4CCu;
label_1ef4cc:
    // 0x1ef4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef4d0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF4D0u;
    {
        const bool branch_taken_0x1ef4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4D0u;
            // 0x1ef4d4: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4d0) {
            ctx->pc = 0x1EF538u;
            goto label_1ef538;
        }
    }
    ctx->pc = 0x1EF4D8u;
    // 0x1ef4d8: 0x24140024  addiu       $s4, $zero, 0x24
    ctx->pc = 0x1ef4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ef4dc:
    // 0x1ef4dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef4e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF4E0u;
    SET_GPR_U32(ctx, 31, 0x1EF4E8u);
    ctx->pc = 0x1EF4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4E0u;
            // 0x1ef4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF4E8u; }
        if (ctx->pc != 0x1EF4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF4E8u; }
        if (ctx->pc != 0x1EF4E8u) { return; }
    }
    ctx->pc = 0x1EF4E8u;
label_1ef4e8:
    // 0x1ef4e8: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x1ef4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1ef4ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ef4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ef4f0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ef4f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef4f4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1ef4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef4f8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x1ef4f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1ef4fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef500: 0x0  nop
    ctx->pc = 0x1ef500u;
    // NOP
    // 0x1ef504: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef50c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef510: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ef514: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x1ef514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef518: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef51c: 0x0  nop
    ctx->pc = 0x1ef51cu;
    // NOP
    // 0x1ef520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef524: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef528: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef52c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef530: 0x661ffea  bgez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EF530u;
    {
        const bool branch_taken_0x1ef530 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1EF534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF530u;
            // 0x1ef534: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef530) {
            ctx->pc = 0x1EF4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef4dc;
        }
    }
    ctx->pc = 0x1EF538u;
label_1ef538:
    // 0x1ef538: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1ef53c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef540: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ef540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ef544: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x1ef544u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ef548: 0x12a000a7  beqz        $s5, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1EF548u;
    {
        const bool branch_taken_0x1ef548 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef548) {
            ctx->pc = 0x1EF7E8u;
            goto label_1ef7e8;
        }
    }
    ctx->pc = 0x1EF550u;
    // 0x1ef550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef554:
    // 0x1ef554: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ef554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef558: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1ef558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1ef55c: 0x27a70154  addiu       $a3, $sp, 0x154
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x1ef560: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EF560u;
    SET_GPR_U32(ctx, 31, 0x1EF568u);
    ctx->pc = 0x1EF564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF560u;
            // 0x1ef564: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF568u; }
        if (ctx->pc != 0x1EF568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF568u; }
        if (ctx->pc != 0x1EF568u) { return; }
    }
    ctx->pc = 0x1EF568u;
label_1ef568:
    // 0x1ef568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef56c: 0xa2a2001c  sb          $v0, 0x1C($s5)
    ctx->pc = 0x1ef56cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef570: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x1ef570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ef574: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EF574u;
    {
        const bool branch_taken_0x1ef574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef574) {
            ctx->pc = 0x1EF69Cu;
            goto label_1ef69c;
        }
    }
    ctx->pc = 0x1EF57Cu;
    // 0x1ef57c: 0x92a60021  lbu         $a2, 0x21($s5)
    ctx->pc = 0x1ef57cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
    // 0x1ef580: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1ef584: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1ef584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x1ef588: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1ef588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1ef58c: 0x2484e2b0  addiu       $a0, $a0, -0x1D50
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959792));
    // 0x1ef590: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x1ef590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x1ef594: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ef594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ef598: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ef598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ef59c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ef59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ef5a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ef5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef5a4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef5a8: 0x460008f  bltz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1EF5A8u;
    {
        const bool branch_taken_0x1ef5a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5A8u;
            // 0x1ef5ac: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5a8) {
            ctx->pc = 0x1EF7E8u;
            goto label_1ef7e8;
        }
    }
    ctx->pc = 0x1EF5B0u;
    // 0x1ef5b0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EF5B0u;
    {
        const bool branch_taken_0x1ef5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5B0u;
            // 0x1ef5b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5b0) {
            ctx->pc = 0x1EF628u;
            goto label_1ef628;
        }
    }
    ctx->pc = 0x1EF5B8u;
    // 0x1ef5b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5bc:
    // 0x1ef5bc: 0x0  nop
    ctx->pc = 0x1ef5bcu;
    // NOP
    // 0x1ef5c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef5c4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF5C4u;
    SET_GPR_U32(ctx, 31, 0x1EF5CCu);
    ctx->pc = 0x1EF5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5C4u;
            // 0x1ef5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF5CCu; }
        if (ctx->pc != 0x1EF5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF5CCu; }
        if (ctx->pc != 0x1EF5CCu) { return; }
    }
    ctx->pc = 0x1EF5CCu;
label_1ef5cc:
    // 0x1ef5cc: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ef5d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ef5d4: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1ef5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef5d8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1ef5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef5dc: 0x2a830014  slti        $v1, $s4, 0x14
    ctx->pc = 0x1ef5dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1ef5e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef5e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef5e4: 0x0  nop
    ctx->pc = 0x1ef5e4u;
    // NOP
    // 0x1ef5e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef5ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef5f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef5f4: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x1ef5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ef5f8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1ef5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef5fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef600: 0x0  nop
    ctx->pc = 0x1ef600u;
    // NOP
    // 0x1ef604: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef60c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef610: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef614: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x1ef614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ef618: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EF618u;
    {
        const bool branch_taken_0x1ef618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF618u;
            // 0x1ef61c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef618) {
            ctx->pc = 0x1EF5BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef5bc;
        }
    }
    ctx->pc = 0x1EF620u;
    // 0x1ef620: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1EF620u;
    {
        const bool branch_taken_0x1ef620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef620) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF628u;
label_1ef628:
    // 0x1ef628: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1EF628u;
    {
        const bool branch_taken_0x1ef628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF628u;
            // 0x1ef62c: 0x24140013  addiu       $s4, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef628) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF630u;
    // 0x1ef630: 0x2413004c  addiu       $s3, $zero, 0x4C
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1ef634:
    // 0x1ef634: 0x0  nop
    ctx->pc = 0x1ef634u;
    // NOP
    // 0x1ef638: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef63c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF63Cu;
    SET_GPR_U32(ctx, 31, 0x1EF644u);
    ctx->pc = 0x1EF640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF63Cu;
            // 0x1ef640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF644u; }
        if (ctx->pc != 0x1EF644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF644u; }
        if (ctx->pc != 0x1EF644u) { return; }
    }
    ctx->pc = 0x1EF644u;
label_1ef644:
    // 0x1ef644: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x1ef644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ef648: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1ef648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ef64c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ef64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef650: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1ef650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef654: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x1ef654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1ef658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef65c: 0x0  nop
    ctx->pc = 0x1ef65cu;
    // NOP
    // 0x1ef660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef668: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef66c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ef670: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1ef670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef678: 0x0  nop
    ctx->pc = 0x1ef678u;
    // NOP
    // 0x1ef67c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef684: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef688: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef68c: 0x681ffe9  bgez        $s4, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EF68Cu;
    {
        const bool branch_taken_0x1ef68c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1EF690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF68Cu;
            // 0x1ef690: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef68c) {
            ctx->pc = 0x1EF634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef634;
        }
    }
    ctx->pc = 0x1EF694u;
    // 0x1ef694: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1EF694u;
    {
        const bool branch_taken_0x1ef694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef694) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF69Cu;
label_1ef69c:
    // 0x1ef69c: 0x0  nop
    ctx->pc = 0x1ef69cu;
    // NOP
    // 0x1ef6a0: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EF6A0u;
    {
        const bool branch_taken_0x1ef6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef6a0) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF6A8u;
    // 0x1ef6a8: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1ef6ac: 0x27858158  addiu       $a1, $gp, -0x7EA8
    ctx->pc = 0x1ef6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934872));
    // 0x1ef6b0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1ef6b4: 0x27838160  addiu       $v1, $gp, -0x7EA0
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934880));
    // 0x1ef6b8: 0x2484e290  addiu       $a0, $a0, -0x1D70
    ctx->pc = 0x1ef6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959760));
    // 0x1ef6bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ef6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ef6c0: 0x80a50004  lb          $a1, 0x4($a1)
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ef6c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ef6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ef6c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ef6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ef6cc: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1ef6ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ef6d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ef6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ef6d4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EF6D4u;
    {
        const bool branch_taken_0x1ef6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6D4u;
            // 0x1ef6d8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6d4) {
            ctx->pc = 0x1EF750u;
            goto label_1ef750;
        }
    }
    ctx->pc = 0x1EF6DCu;
    // 0x1ef6dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ef6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef6e4:
    // 0x1ef6e4: 0x0  nop
    ctx->pc = 0x1ef6e4u;
    // NOP
    // 0x1ef6e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef6ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF6ECu;
    SET_GPR_U32(ctx, 31, 0x1EF6F4u);
    ctx->pc = 0x1EF6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6ECu;
            // 0x1ef6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6F4u; }
        if (ctx->pc != 0x1EF6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6F4u; }
        if (ctx->pc != 0x1EF6F4u) { return; }
    }
    ctx->pc = 0x1EF6F4u;
label_1ef6f4:
    // 0x1ef6f4: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1ef6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ef6f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ef6fc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef700: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1ef700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef704: 0x2a83000a  slti        $v1, $s4, 0xA
    ctx->pc = 0x1ef704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ef708: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ef70c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef70cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef710: 0x0  nop
    ctx->pc = 0x1ef710u;
    // NOP
    // 0x1ef714: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef71c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef720: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x1ef720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ef724: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1ef724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef728: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ef728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef72c: 0x0  nop
    ctx->pc = 0x1ef72cu;
    // NOP
    // 0x1ef730: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef738: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef73c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef73cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef740: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EF740u;
    {
        const bool branch_taken_0x1ef740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF740u;
            // 0x1ef744: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef740) {
            ctx->pc = 0x1EF6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef6e4;
        }
    }
    ctx->pc = 0x1EF748u;
    // 0x1ef748: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF748u;
    {
        const bool branch_taken_0x1ef748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef748) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF750u;
label_1ef750:
    // 0x1ef750: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EF750u;
    {
        const bool branch_taken_0x1ef750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF750u;
            // 0x1ef754: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef750) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
    ctx->pc = 0x1EF758u;
    // 0x1ef758: 0x24110024  addiu       $s1, $zero, 0x24
    ctx->pc = 0x1ef758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ef75c:
    // 0x1ef75c: 0x0  nop
    ctx->pc = 0x1ef75cu;
    // NOP
    // 0x1ef760: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ef760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef764: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1EF764u;
    SET_GPR_U32(ctx, 31, 0x1EF76Cu);
    ctx->pc = 0x1EF768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF764u;
            // 0x1ef768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF76Cu; }
        if (ctx->pc != 0x1EF76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF76Cu; }
        if (ctx->pc != 0x1EF76Cu) { return; }
    }
    ctx->pc = 0x1EF76Cu;
label_1ef76c:
    // 0x1ef76c: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ef770: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1ef770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ef774: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ef774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef778: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1ef778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef77c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1ef77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1ef780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef784: 0x0  nop
    ctx->pc = 0x1ef784u;
    // NOP
    // 0x1ef788: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef78c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef790: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef794: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1ef794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ef798: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1ef798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef79c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ef79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef7a0: 0x0  nop
    ctx->pc = 0x1ef7a0u;
    // NOP
    // 0x1ef7a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef7ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef7b0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ef7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ef7b4: 0x681ffe9  bgez        $s4, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EF7B4u;
    {
        const bool branch_taken_0x1ef7b4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1EF7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7B4u;
            // 0x1ef7b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7b4) {
            ctx->pc = 0x1EF75Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef75c;
        }
    }
    ctx->pc = 0x1EF7BCu;
label_1ef7bc:
    // 0x1ef7bc: 0x0  nop
    ctx->pc = 0x1ef7bcu;
    // NOP
    // 0x1ef7c0: 0x12b60009  beq         $s5, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF7C0u;
    {
        const bool branch_taken_0x1ef7c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x1EF7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7C0u;
            // 0x1ef7c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7c0) {
            ctx->pc = 0x1EF7E8u;
            goto label_1ef7e8;
        }
    }
    ctx->pc = 0x1EF7C8u;
    // 0x1ef7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7cc: 0xc07aabc  jal         func_1EAAF0
    ctx->pc = 0x1EF7CCu;
    SET_GPR_U32(ctx, 31, 0x1EF7D4u);
    ctx->pc = 0x1EF7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7CCu;
            // 0x1ef7d0: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAF0u;
    if (runtime->hasFunction(0x1EAAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EAAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7D4u; }
        if (ctx->pc != 0x1EF7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__11CDngFreeMapFP9GLID_INFOPi_0x1eaaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7D4u; }
        if (ctx->pc != 0x1EF7D4u) { return; }
    }
    ctx->pc = 0x1EF7D4u;
label_1ef7d4:
    // 0x1ef7d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ef7d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7d8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF7D8u;
    {
        const bool branch_taken_0x1ef7d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7d8) {
            ctx->pc = 0x1EF7E8u;
            goto label_1ef7e8;
        }
    }
    ctx->pc = 0x1EF7E0u;
    // 0x1ef7e0: 0x16a0ff5c  bnez        $s5, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x1EF7E0u;
    {
        const bool branch_taken_0x1ef7e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7E0u;
            // 0x1ef7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7e0) {
            ctx->pc = 0x1EF554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef554;
        }
    }
    ctx->pc = 0x1EF7E8u;
label_1ef7e8:
    // 0x1ef7e8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1ef7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1ef7ec: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ef7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ef7f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ef7f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF7F4u;
    {
        const bool branch_taken_0x1ef7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7f4) {
            ctx->pc = 0x1EF80Cu;
            goto label_1ef80c;
        }
    }
    ctx->pc = 0x1EF7FCu;
    // 0x1ef7fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef800: 0xe7808150  swc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x1ef800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), bits); }
    // 0x1ef804: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef808: 0xe7808154  swc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x1ef808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), bits); }
label_1ef80c:
    // 0x1ef80c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ef80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1ef810:
    // 0x1ef810: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ef810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef814: 0x0  nop
    ctx->pc = 0x1ef814u;
    // NOP
label_1ef818:
    // 0x1ef818: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ef818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ef81c:
    // 0x1ef81c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ef81cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ef820: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ef820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ef824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef82c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef840: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF840u;
            // 0x1ef844: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF848u;
}
