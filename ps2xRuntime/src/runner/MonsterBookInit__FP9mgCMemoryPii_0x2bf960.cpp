#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterBookInit__FP9mgCMemoryPii
// Address: 0x2bf960 - 0x2bfb38
void MonsterBookInit__FP9mgCMemoryPii_0x2bf960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterBookInit__FP9mgCMemoryPii_0x2bf960");
#endif

    switch (ctx->pc) {
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        case 0x2bfb1cu: goto label_2bfb1c;
        case 0x2bfb20u: goto label_2bfb20;
        case 0x2bfb24u: goto label_2bfb24;
        case 0x2bfb28u: goto label_2bfb28;
        case 0x2bfb2cu: goto label_2bfb2c;
        case 0x2bfb30u: goto label_2bfb30;
        case 0x2bfb34u: goto label_2bfb34;
        default: break;
    }

    ctx->pc = 0x2bf960u;

label_2bf960:
    // 0x2bf960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bf964:
    // 0x2bf964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bf964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bf968:
    // 0x2bf968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bf96c:
    // 0x2bf96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf970:
    // 0x2bf970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bf970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bf974:
    // 0x2bf974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf978:
    // 0x2bf978: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bf978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bf97c:
    // 0x2bf97c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2bf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2bf980:
    // 0x2bf980: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2bf984:
    // 0x2bf984: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2bf988:
    // 0x2bf988: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bf98c:
    // 0x2bf98c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bf98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2bf990:
    // 0x2bf990: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bf994:
    // 0x2bf994: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2bf994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf998:
    // 0x2bf998: 0xc04e79c  jal         func_139E70
label_2bf99c:
    if (ctx->pc == 0x2BF99Cu) {
        ctx->pc = 0x2BF99Cu;
            // 0x2bf99c: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->pc = 0x2BF9A0u;
        goto label_2bf9a0;
    }
    ctx->pc = 0x2BF998u;
    SET_GPR_U32(ctx, 31, 0x2BF9A0u);
    ctx->pc = 0x2BF99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF998u;
            // 0x2bf99c: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9A0u; }
        if (ctx->pc != 0x2BF9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9A0u; }
        if (ctx->pc != 0x2BF9A0u) { return; }
    }
    ctx->pc = 0x2BF9A0u;
label_2bf9a0:
    // 0x2bf9a0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bf9a4:
    // 0x2bf9a4: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x2bf9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2bf9a8:
    // 0x2bf9a8: 0xc04e748  jal         func_139D20
label_2bf9ac:
    if (ctx->pc == 0x2BF9ACu) {
        ctx->pc = 0x2BF9ACu;
            // 0x2bf9ac: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->pc = 0x2BF9B0u;
        goto label_2bf9b0;
    }
    ctx->pc = 0x2BF9A8u;
    SET_GPR_U32(ctx, 31, 0x2BF9B0u);
    ctx->pc = 0x2BF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9A8u;
            // 0x2bf9ac: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9B0u; }
        if (ctx->pc != 0x2BF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9B0u; }
        if (ctx->pc != 0x2BF9B0u) { return; }
    }
    ctx->pc = 0x2BF9B0u;
label_2bf9b0:
    // 0x2bf9b0: 0x24040980  addiu       $a0, $zero, 0x980
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
label_2bf9b4:
    // 0x2bf9b4: 0xc04e638  jal         func_1398E0
label_2bf9b8:
    if (ctx->pc == 0x2BF9B8u) {
        ctx->pc = 0x2BF9B8u;
            // 0x2bf9b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9BCu;
        goto label_2bf9bc;
    }
    ctx->pc = 0x2BF9B4u;
    SET_GPR_U32(ctx, 31, 0x2BF9BCu);
    ctx->pc = 0x2BF9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9B4u;
            // 0x2bf9b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9BCu; }
        if (ctx->pc != 0x2BF9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9BCu; }
        if (ctx->pc != 0x2BF9BCu) { return; }
    }
    ctx->pc = 0x2BF9BCu;
label_2bf9bc:
    // 0x2bf9bc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2bf9c0:
    if (ctx->pc == 0x2BF9C0u) {
        ctx->pc = 0x2BF9C0u;
            // 0x2bf9c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9C4u;
        goto label_2bf9c4;
    }
    ctx->pc = 0x2BF9BCu;
    {
        const bool branch_taken_0x2bf9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9BCu;
            // 0x2bf9c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9bc) {
            ctx->pc = 0x2BFA9Cu;
            goto label_2bfa9c;
        }
    }
    ctx->pc = 0x2BF9C4u;
label_2bf9c4:
    // 0x2bf9c4: 0xc08dc2c  jal         func_2370B0
label_2bf9c8:
    if (ctx->pc == 0x2BF9C8u) {
        ctx->pc = 0x2BF9C8u;
            // 0x2bf9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9CCu;
        goto label_2bf9cc;
    }
    ctx->pc = 0x2BF9C4u;
    SET_GPR_U32(ctx, 31, 0x2BF9CCu);
    ctx->pc = 0x2BF9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9C4u;
            // 0x2bf9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9CCu; }
        if (ctx->pc != 0x2BF9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9CCu; }
        if (ctx->pc != 0x2BF9CCu) { return; }
    }
    ctx->pc = 0x2BF9CCu;
label_2bf9cc:
    // 0x2bf9cc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2bf9d0:
    // 0x2bf9d0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2bf9d4:
    // 0x2bf9d4: 0x24636250  addiu       $v1, $v1, 0x6250
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25168));
label_2bf9d8:
    // 0x2bf9d8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bf9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bf9dc:
    // 0x2bf9dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bf9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf9e0:
    // 0x2bf9e0: 0xc04c58c  jal         func_131630
label_2bf9e4:
    if (ctx->pc == 0x2BF9E4u) {
        ctx->pc = 0x2BF9E4u;
            // 0x2bf9e4: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->pc = 0x2BF9E8u;
        goto label_2bf9e8;
    }
    ctx->pc = 0x2BF9E0u;
    SET_GPR_U32(ctx, 31, 0x2BF9E8u);
    ctx->pc = 0x2BF9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9E0u;
            // 0x2bf9e4: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131630u;
    if (runtime->hasFunction(0x131630u)) {
        auto targetFn = runtime->lookupFunction(0x131630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9E8u; }
        if (ctx->pc != 0x2BF9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCCameraFf_0x131630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9E8u; }
        if (ctx->pc != 0x2BF9E8u) { return; }
    }
    ctx->pc = 0x2BF9E8u;
label_2bf9e8:
    // 0x2bf9e8: 0xc04e640  jal         func_139900
label_2bf9ec:
    if (ctx->pc == 0x2BF9ECu) {
        ctx->pc = 0x2BF9ECu;
            // 0x2bf9ec: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->pc = 0x2BF9F0u;
        goto label_2bf9f0;
    }
    ctx->pc = 0x2BF9E8u;
    SET_GPR_U32(ctx, 31, 0x2BF9F0u);
    ctx->pc = 0x2BF9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9E8u;
            // 0x2bf9ec: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9F0u; }
        if (ctx->pc != 0x2BF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9F0u; }
        if (ctx->pc != 0x2BF9F0u) { return; }
    }
    ctx->pc = 0x2BF9F0u;
label_2bf9f0:
    // 0x2bf9f0: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x2bf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_2bf9f4:
    // 0x2bf9f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bf9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9f8:
    // 0x2bf9f8: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x2bf9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_2bf9fc:
    // 0x2bf9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa00:
    // 0x2bfa00: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x2bfa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
label_2bfa04:
    // 0x2bfa04: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x2bfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
label_2bfa08:
    // 0x2bfa08: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x2bfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
label_2bfa0c:
    // 0x2bfa0c: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x2bfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
label_2bfa10:
    // 0x2bfa10: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x2bfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
label_2bfa14:
    // 0x2bfa14: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x2bfa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_2bfa18:
    // 0x2bfa18: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x2bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_2bfa1c:
    // 0x2bfa1c: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x2bfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_2bfa20:
    // 0x2bfa20: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x2bfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_2bfa24:
    // 0x2bfa24: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x2bfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_2bfa28:
    // 0x2bfa28: 0xa20001dc  sb          $zero, 0x1DC($s0)
    ctx->pc = 0x2bfa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 476), (uint8_t)GPR_U32(ctx, 0));
label_2bfa2c:
    // 0x2bfa2c: 0xae0007e8  sw          $zero, 0x7E8($s0)
    ctx->pc = 0x2bfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 0));
label_2bfa30:
    // 0x2bfa30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bfa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bfa34:
    // 0x2bfa34: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x2bfa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2bfa38:
    // 0x2bfa38: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2bfa3c:
    // 0x2bfa3c: 0xacc301e8  sw          $v1, 0x1E8($a2)
    ctx->pc = 0x2bfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 488), GPR_U32(ctx, 3));
label_2bfa40:
    // 0x2bfa40: 0x28820180  slti        $v0, $a0, 0x180
    ctx->pc = 0x2bfa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)384) ? 1 : 0);
label_2bfa44:
    // 0x2bfa44: 0xacc301ec  sw          $v1, 0x1EC($a2)
    ctx->pc = 0x2bfa44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 492), GPR_U32(ctx, 3));
label_2bfa48:
    // 0x2bfa48: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2bfa4c:
    // 0x2bfa4c: 0xacc301f0  sw          $v1, 0x1F0($a2)
    ctx->pc = 0x2bfa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 496), GPR_U32(ctx, 3));
label_2bfa50:
    // 0x2bfa50: 0xacc301f4  sw          $v1, 0x1F4($a2)
    ctx->pc = 0x2bfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 500), GPR_U32(ctx, 3));
label_2bfa54:
    // 0x2bfa54: 0xacc301f8  sw          $v1, 0x1F8($a2)
    ctx->pc = 0x2bfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 504), GPR_U32(ctx, 3));
label_2bfa58:
    // 0x2bfa58: 0xacc301fc  sw          $v1, 0x1FC($a2)
    ctx->pc = 0x2bfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 508), GPR_U32(ctx, 3));
label_2bfa5c:
    // 0x2bfa5c: 0xacc30200  sw          $v1, 0x200($a2)
    ctx->pc = 0x2bfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 3));
label_2bfa60:
    // 0x2bfa60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2bfa64:
    if (ctx->pc == 0x2BFA64u) {
        ctx->pc = 0x2BFA64u;
            // 0x2bfa64: 0xacc30204  sw          $v1, 0x204($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 516), GPR_U32(ctx, 3));
        ctx->pc = 0x2BFA68u;
        goto label_2bfa68;
    }
    ctx->pc = 0x2BFA60u;
    {
        const bool branch_taken_0x2bfa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA60u;
            // 0x2bfa64: 0xacc30204  sw          $v1, 0x204($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa60) {
            ctx->pc = 0x2BFA34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfa34;
        }
    }
    ctx->pc = 0x2BFA68u;
label_2bfa68:
    // 0x2bfa68: 0xc0afed0  jal         func_2BFB40
label_2bfa6c:
    if (ctx->pc == 0x2BFA6Cu) {
        ctx->pc = 0x2BFA6Cu;
            // 0x2bfa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA70u;
        goto label_2bfa70;
    }
    ctx->pc = 0x2BFA68u;
    SET_GPR_U32(ctx, 31, 0x2BFA70u);
    ctx->pc = 0x2BFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA68u;
            // 0x2bfa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB40u;
    if (runtime->hasFunction(0x2BFB40u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA70u; }
        if (ctx->pc != 0x2BFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMonsterInfo__12CMosBookMenuFv_0x2bfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA70u; }
        if (ctx->pc != 0x2BFA70u) { return; }
    }
    ctx->pc = 0x2BFA70u;
label_2bfa70:
    // 0x2bfa70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2bfa74:
    // 0x2bfa74: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bfa78:
    // 0x2bfa78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bfa78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bfa7c:
    // 0x2bfa7c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2bfa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2bfa80:
    // 0x2bfa80: 0xc04c4f8  jal         func_1313E0
label_2bfa84:
    if (ctx->pc == 0x2BFA84u) {
        ctx->pc = 0x2BFA84u;
            // 0x2bfa84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BFA88u;
        goto label_2bfa88;
    }
    ctx->pc = 0x2BFA80u;
    SET_GPR_U32(ctx, 31, 0x2BFA88u);
    ctx->pc = 0x2BFA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA80u;
            // 0x2bfa84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA88u; }
        if (ctx->pc != 0x2BFA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA88u; }
        if (ctx->pc != 0x2BFA88u) { return; }
    }
    ctx->pc = 0x2BFA88u;
label_2bfa88:
    // 0x2bfa88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bfa88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bfa8c:
    // 0x2bfa8c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bfa90:
    // 0x2bfa90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bfa90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2bfa94:
    // 0x2bfa94: 0xc04c510  jal         func_131440
label_2bfa98:
    if (ctx->pc == 0x2BFA98u) {
        ctx->pc = 0x2BFA98u;
            // 0x2bfa98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BFA9Cu;
        goto label_2bfa9c;
    }
    ctx->pc = 0x2BFA94u;
    SET_GPR_U32(ctx, 31, 0x2BFA9Cu);
    ctx->pc = 0x2BFA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA94u;
            // 0x2bfa98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA9Cu; }
        if (ctx->pc != 0x2BFA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA9Cu; }
        if (ctx->pc != 0x2BFA9Cu) { return; }
    }
    ctx->pc = 0x2BFA9Cu;
label_2bfa9c:
    // 0x2bfa9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bfa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bfaa0:
    // 0x2bfaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfaa4:
    // 0x2bfaa4: 0xc08dc6c  jal         func_2371B0
label_2bfaa8:
    if (ctx->pc == 0x2BFAA8u) {
        ctx->pc = 0x2BFAA8u;
            // 0x2bfaa8: 0xaf909c48  sw          $s0, -0x63B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941768), GPR_U32(ctx, 16));
        ctx->pc = 0x2BFAACu;
        goto label_2bfaac;
    }
    ctx->pc = 0x2BFAA4u;
    SET_GPR_U32(ctx, 31, 0x2BFAACu);
    ctx->pc = 0x2BFAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFAA4u;
            // 0x2bfaa8: 0xaf909c48  sw          $s0, -0x63B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941768), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAACu; }
        if (ctx->pc != 0x2BFAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAACu; }
        if (ctx->pc != 0x2BFAACu) { return; }
    }
    ctx->pc = 0x2BFAACu;
label_2bfaac:
    // 0x2bfaac: 0xc064220  jal         func_190880
label_2bfab0:
    if (ctx->pc == 0x2BFAB0u) {
        ctx->pc = 0x2BFAB4u;
        goto label_2bfab4;
    }
    ctx->pc = 0x2BFAACu;
    SET_GPR_U32(ctx, 31, 0x2BFAB4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAB4u; }
        if (ctx->pc != 0x2BFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAB4u; }
        if (ctx->pc != 0x2BFAB4u) { return; }
    }
    ctx->pc = 0x2BFAB4u;
label_2bfab4:
    // 0x2bfab4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2bfab8:
    // 0x2bfab8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bfabc:
    // 0x2bfabc: 0x34212ec0  ori         $at, $at, 0x2EC0
    ctx->pc = 0x2bfabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11968);
label_2bfac0:
    // 0x2bfac0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2bfac4:
    // 0x2bfac4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2bfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2bfac8:
    // 0x2bfac8: 0x2484d170  addiu       $a0, $a0, -0x2E90
    ctx->pc = 0x2bfac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
label_2bfacc:
    // 0x2bfacc: 0xaf829c34  sw          $v0, -0x63CC($gp)
    ctx->pc = 0x2bfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941748), GPR_U32(ctx, 2));
label_2bfad0:
    // 0x2bfad0: 0x24a550f0  addiu       $a1, $a1, 0x50F0
    ctx->pc = 0x2bfad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20720));
label_2bfad4:
    // 0x2bfad4: 0xc0abf24  jal         func_2AFC90
label_2bfad8:
    if (ctx->pc == 0x2BFAD8u) {
        ctx->pc = 0x2BFAD8u;
            // 0x2bfad8: 0xa7919c44  sh          $s1, -0x63BC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941764), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x2BFADCu;
        goto label_2bfadc;
    }
    ctx->pc = 0x2BFAD4u;
    SET_GPR_U32(ctx, 31, 0x2BFADCu);
    ctx->pc = 0x2BFAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFAD4u;
            // 0x2bfad8: 0xa7919c44  sh          $s1, -0x63BC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941764), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFADCu; }
        if (ctx->pc != 0x2BFADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFADCu; }
        if (ctx->pc != 0x2BFADCu) { return; }
    }
    ctx->pc = 0x2BFADCu;
label_2bfadc:
    // 0x2bfadc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bfae0:
    // 0x2bfae0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bfae4:
    // 0x2bfae4: 0xa3829b70  sb          $v0, -0x6490($gp)
    ctx->pc = 0x2bfae4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 2));
label_2bfae8:
    // 0x2bfae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfaec:
    // 0x2bfaec: 0xa3839b72  sb          $v1, -0x648E($gp)
    ctx->pc = 0x2bfaecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 3));
label_2bfaf0:
    // 0x2bfaf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bfaf4:
    // 0x2bfaf4: 0xa3809b77  sb          $zero, -0x6489($gp)
    ctx->pc = 0x2bfaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
label_2bfaf8:
    // 0x2bfaf8: 0x2484d170  addiu       $a0, $a0, -0x2E90
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
label_2bfafc:
    // 0x2bfafc: 0xa3809b71  sb          $zero, -0x648F($gp)
    ctx->pc = 0x2bfafcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 0));
label_2bfb00:
    // 0x2bfb00: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2bfb00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2bfb04:
    // 0x2bfb04: 0xc04e780  jal         func_139E00
label_2bfb08:
    if (ctx->pc == 0x2BFB08u) {
        ctx->pc = 0x2BFB08u;
            // 0x2bfb08: 0xa3809b75  sb          $zero, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BFB0Cu;
        goto label_2bfb0c;
    }
    ctx->pc = 0x2BFB04u;
    SET_GPR_U32(ctx, 31, 0x2BFB0Cu);
    ctx->pc = 0x2BFB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB04u;
            // 0x2bfb08: 0xa3809b75  sb          $zero, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB0Cu; }
        if (ctx->pc != 0x2BFB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB0Cu; }
        if (ctx->pc != 0x2BFB0Cu) { return; }
    }
    ctx->pc = 0x2BFB0Cu;
label_2bfb0c:
    // 0x2bfb0c: 0x8f849c48  lw          $a0, -0x63B8($gp)
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941768)));
label_2bfb10:
    // 0x2bfb10: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_2bfb14:
    // 0x2bfb14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2bfb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2bfb18:
    // 0x2bfb18: 0x320f809  jalr        $t9
label_2bfb1c:
    if (ctx->pc == 0x2BFB1Cu) {
        ctx->pc = 0x2BFB20u;
        goto label_2bfb20;
    }
    ctx->pc = 0x2BFB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BFB20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BFB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB20u; }
            if (ctx->pc != 0x2BFB20u) { return; }
        }
        }
    }
    ctx->pc = 0x2BFB20u;
label_2bfb20:
    // 0x2bfb20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bfb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bfb24:
    // 0x2bfb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bfb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bfb28:
    // 0x2bfb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfb2c:
    // 0x2bfb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfb30:
    // 0x2bfb30: 0x3e00008  jr          $ra
label_2bfb34:
    if (ctx->pc == 0x2BFB34u) {
        ctx->pc = 0x2BFB34u;
            // 0x2bfb34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2BFB38u;
        goto label_fallthrough_0x2bfb30;
    }
    ctx->pc = 0x2BFB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB30u;
            // 0x2bfb34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bfb30:
    ctx->pc = 0x2BFB38u;
}
