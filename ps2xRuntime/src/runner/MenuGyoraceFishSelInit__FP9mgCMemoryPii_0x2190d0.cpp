#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGyoraceFishSelInit__FP9mgCMemoryPii
// Address: 0x2190d0 - 0x2191e0
void MenuGyoraceFishSelInit__FP9mgCMemoryPii_0x2190d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGyoraceFishSelInit__FP9mgCMemoryPii_0x2190d0");
#endif

    switch (ctx->pc) {
        case 0x219104u: goto label_219104;
        case 0x219130u: goto label_219130;
        case 0x219140u: goto label_219140;
        case 0x21914cu: goto label_21914c;
        case 0x219160u: goto label_219160;
        case 0x219170u: goto label_219170;
        case 0x219194u: goto label_219194;
        case 0x2191b8u: goto label_2191b8;
        default: break;
    }

    ctx->pc = 0x2190d0u;

    // 0x2190d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2190d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2190d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2190d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2190d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2190d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2190dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2190dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190e0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2190e4: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2190e8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2190ec: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2190f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2190f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2190f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2190f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2190fc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2190FCu;
    SET_GPR_U32(ctx, 31, 0x219104u);
    ctx->pc = 0x219100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190FCu;
            // 0x219100: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219104u; }
        if (ctx->pc != 0x219104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219104u; }
        if (ctx->pc != 0x219104u) { return; }
    }
    ctx->pc = 0x219104u;
label_219104:
    // 0x219104: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x219104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219108: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21910c: 0x24a5c900  addiu       $a1, $a1, -0x3700
    ctx->pc = 0x21910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953216));
    // 0x219110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219114: 0xa7829238  sh          $v0, -0x6DC8($gp)
    ctx->pc = 0x219114u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939192), (uint16_t)GPR_U32(ctx, 2));
    // 0x219118: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21911c: 0x87829238  lh          $v0, -0x6DC8($gp)
    ctx->pc = 0x21911cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939192)));
    // 0x219120: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x219120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x219124: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x219124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x219128: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x219128u;
    SET_GPR_U32(ctx, 31, 0x219130u);
    ctx->pc = 0x21912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219128u;
            // 0x21912c: 0xa7839234  sh          $v1, -0x6DCC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219130u; }
        if (ctx->pc != 0x219130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219130u; }
        if (ctx->pc != 0x219130u) { return; }
    }
    ctx->pc = 0x219130u;
label_219130:
    // 0x219130: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x219130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x219134: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x219134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x219138: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x219138u;
    SET_GPR_U32(ctx, 31, 0x219140u);
    ctx->pc = 0x21913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219138u;
            // 0x21913c: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219140u; }
        if (ctx->pc != 0x219140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219140u; }
        if (ctx->pc != 0x219140u) { return; }
    }
    ctx->pc = 0x219140u;
label_219140:
    // 0x219140: 0x24424958  addiu       $v0, $v0, 0x4958
    ctx->pc = 0x219140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
    // 0x219144: 0xc052330  jal         func_148CC0
    ctx->pc = 0x219144u;
    SET_GPR_U32(ctx, 31, 0x21914Cu);
    ctx->pc = 0x219148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219144u;
            // 0x219148: 0xaf82920c  sw          $v0, -0x6DF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21914Cu; }
        if (ctx->pc != 0x21914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21914Cu; }
        if (ctx->pc != 0x21914Cu) { return; }
    }
    ctx->pc = 0x21914Cu;
label_21914c:
    // 0x21914c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x21914cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x219150: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x219154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219158: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x219158u;
    SET_GPR_U32(ctx, 31, 0x219160u);
    ctx->pc = 0x21915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219158u;
            // 0x21915c: 0x24a59f40  addiu       $a1, $a1, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219160u; }
        if (ctx->pc != 0x219160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219160u; }
        if (ctx->pc != 0x219160u) { return; }
    }
    ctx->pc = 0x219160u;
label_219160:
    // 0x219160: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x219160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x219164: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x219164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x219168: 0xc04e780  jal         func_139E00
    ctx->pc = 0x219168u;
    SET_GPR_U32(ctx, 31, 0x219170u);
    ctx->pc = 0x21916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219168u;
            // 0x21916c: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219170u; }
        if (ctx->pc != 0x219170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219170u; }
        if (ctx->pc != 0x219170u) { return; }
    }
    ctx->pc = 0x219170u;
label_219170:
    // 0x219170: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219174: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219178: 0x8c23c924  lw          $v1, -0x36DC($at)
    ctx->pc = 0x219178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953252)));
    // 0x21917c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x219180: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x219184: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x219184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x219188: 0x8c22c920  lw          $v0, -0x36E0($at)
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953248)));
    // 0x21918c: 0xc05224c  jal         func_148930
    ctx->pc = 0x21918Cu;
    SET_GPR_U32(ctx, 31, 0x219194u);
    ctx->pc = 0x219190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21918Cu;
            // 0x219190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219194u; }
        if (ctx->pc != 0x219194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219194u; }
        if (ctx->pc != 0x219194u) { return; }
    }
    ctx->pc = 0x219194u;
label_219194:
    // 0x219194: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x219194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x219198: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x219198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x21919c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21919Cu;
    {
        const bool branch_taken_0x21919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21919Cu;
            // 0x2191a0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21919c) {
            ctx->pc = 0x2191ACu;
            goto label_2191ac;
        }
    }
    ctx->pc = 0x2191A4u;
    // 0x2191a4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2191a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2191a8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2191a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2191ac:
    // 0x2191ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2191acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2191b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2191B0u;
    SET_GPR_U32(ctx, 31, 0x2191B8u);
    ctx->pc = 0x2191B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191B0u;
            // 0x2191b4: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191B8u; }
        if (ctx->pc != 0x2191B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191B8u; }
        if (ctx->pc != 0x2191B8u) { return; }
    }
    ctx->pc = 0x2191B8u;
label_2191b8:
    // 0x2191b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2191bc: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x2191bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x2191c0: 0xa3839248  sb          $v1, -0x6DB8($gp)
    ctx->pc = 0x2191c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939208), (uint8_t)GPR_U32(ctx, 3));
    // 0x2191c4: 0xa380922c  sb          $zero, -0x6DD4($gp)
    ctx->pc = 0x2191c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939180), (uint8_t)GPR_U32(ctx, 0));
    // 0x2191c8: 0xa380923c  sb          $zero, -0x6DC4($gp)
    ctx->pc = 0x2191c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939196), (uint8_t)GPR_U32(ctx, 0));
    // 0x2191cc: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x2191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
    // 0x2191d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2191d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2191d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2191d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2191d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2191D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2191DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191D8u;
            // 0x2191dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2191E0u;
}
