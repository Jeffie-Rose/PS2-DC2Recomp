#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_EFFECT_NAME__FP9SPI_STACKi
// Address: 0x164010 - 0x1640fc
void mapFUNC_EFFECT_NAME__FP9SPI_STACKi_0x164010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_EFFECT_NAME__FP9SPI_STACKi_0x164010");
#endif

    switch (ctx->pc) {
        case 0x16403cu: goto label_16403c;
        case 0x164058u: goto label_164058;
        case 0x164060u: goto label_164060;
        case 0x16406cu: goto label_16406c;
        case 0x164080u: goto label_164080;
        case 0x164094u: goto label_164094;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640d4u: goto label_1640d4;
        default: break;
    }

    ctx->pc = 0x164010u;

    // 0x164010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16401c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164020: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164024u;
    {
        const bool branch_taken_0x164024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164024u;
            // 0x164028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164024) {
            ctx->pc = 0x164034u;
            goto label_164034;
        }
    }
    ctx->pc = 0x16402Cu;
    // 0x16402c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16402Cu;
    {
        const bool branch_taken_0x16402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16402Cu;
            // 0x164030: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16402c) {
            ctx->pc = 0x1640ECu;
            goto label_1640ec;
        }
    }
    ctx->pc = 0x164034u;
label_164034:
    // 0x164034: 0xc05191c  jal         func_146470
    ctx->pc = 0x164034u;
    SET_GPR_U32(ctx, 31, 0x16403Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16403Cu; }
        if (ctx->pc != 0x16403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16403Cu; }
        if (ctx->pc != 0x16403Cu) { return; }
    }
    ctx->pc = 0x16403Cu;
label_16403c:
    // 0x16403c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164040: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164040u;
    {
        const bool branch_taken_0x164040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164040u;
            // 0x164044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164040) {
            ctx->pc = 0x164050u;
            goto label_164050;
        }
    }
    ctx->pc = 0x164048u;
    // 0x164048: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x164048u;
    {
        const bool branch_taken_0x164048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164048u;
            // 0x16404c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164048) {
            ctx->pc = 0x1640E8u;
            goto label_1640e8;
        }
    }
    ctx->pc = 0x164050u;
label_164050:
    // 0x164050: 0xc04a422  jal         func_129088
    ctx->pc = 0x164050u;
    SET_GPR_U32(ctx, 31, 0x164058u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164058u; }
        if (ctx->pc != 0x164058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164058u; }
        if (ctx->pc != 0x164058u) { return; }
    }
    ctx->pc = 0x164058u;
label_164058:
    // 0x164058: 0xc05878c  jal         func_161E30
    ctx->pc = 0x164058u;
    SET_GPR_U32(ctx, 31, 0x164060u);
    ctx->pc = 0x16405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164058u;
            // 0x16405c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164060u; }
        if (ctx->pc != 0x164060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164060u; }
        if (ctx->pc != 0x164060u) { return; }
    }
    ctx->pc = 0x164060u;
label_164060:
    // 0x164060: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x164060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x164064: 0xc04e748  jal         func_139D20
    ctx->pc = 0x164064u;
    SET_GPR_U32(ctx, 31, 0x16406Cu);
    ctx->pc = 0x164068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164064u;
            // 0x164068: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16406Cu; }
        if (ctx->pc != 0x16406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16406Cu; }
        if (ctx->pc != 0x16406Cu) { return; }
    }
    ctx->pc = 0x16406Cu;
label_16406c:
    // 0x16406c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16406cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164070: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164070u;
    {
        const bool branch_taken_0x164070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164070u;
            // 0x164074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164070) {
            ctx->pc = 0x164080u;
            goto label_164080;
        }
    }
    ctx->pc = 0x164078u;
    // 0x164078: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x164078u;
    SET_GPR_U32(ctx, 31, 0x164080u);
    ctx->pc = 0x16407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164078u;
            // 0x16407c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164080u; }
        if (ctx->pc != 0x164080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164080u; }
        if (ctx->pc != 0x164080u) { return; }
    }
    ctx->pc = 0x164080u;
label_164080:
    // 0x164080: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164084: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x164084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x164088: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16408c: 0xc057340  jal         func_15CD00
    ctx->pc = 0x16408Cu;
    SET_GPR_U32(ctx, 31, 0x164094u);
    ctx->pc = 0x164090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16408Cu;
            // 0x164090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD00u;
    if (runtime->hasFunction(0x15CD00u)) {
        auto targetFn = runtime->lookupFunction(0x15CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164094u; }
        if (ctx->pc != 0x164094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaerchEffectIndex__4CMapFPc_0x15cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164094u; }
        if (ctx->pc != 0x164094u) { return; }
    }
    ctx->pc = 0x164094u;
label_164094:
    // 0x164094: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x164094u;
    {
        const bool branch_taken_0x164094 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164094) {
            ctx->pc = 0x1640DCu;
            goto label_1640dc;
        }
    }
    ctx->pc = 0x16409Cu;
    // 0x16409c: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x16409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1640a0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1640a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1640a4: 0xc05878c  jal         func_161E30
    ctx->pc = 0x1640A4u;
    SET_GPR_U32(ctx, 31, 0x1640ACu);
    ctx->pc = 0x1640A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640A4u;
            // 0x1640a8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640ACu; }
        if (ctx->pc != 0x1640ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640ACu; }
        if (ctx->pc != 0x1640ACu) { return; }
    }
    ctx->pc = 0x1640ACu;
label_1640ac:
    // 0x1640ac: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x1640acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1640b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1640B0u;
    SET_GPR_U32(ctx, 31, 0x1640B8u);
    ctx->pc = 0x1640B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640B0u;
            // 0x1640b4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640B8u; }
        if (ctx->pc != 0x1640B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640B8u; }
        if (ctx->pc != 0x1640B8u) { return; }
    }
    ctx->pc = 0x1640B8u;
label_1640b8:
    // 0x1640b8: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1640bc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1640BCu;
    SET_GPR_U32(ctx, 31, 0x1640C4u);
    ctx->pc = 0x1640C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640BCu;
            // 0x1640c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640C4u; }
        if (ctx->pc != 0x1640C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640C4u; }
        if (ctx->pc != 0x1640C4u) { return; }
    }
    ctx->pc = 0x1640C4u;
label_1640c4:
    // 0x1640c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640c8: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1640c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1640cc: 0xc059040  jal         func_164100
    ctx->pc = 0x1640CCu;
    SET_GPR_U32(ctx, 31, 0x1640D4u);
    ctx->pc = 0x1640D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640CCu;
            // 0x1640d0: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164100u;
    if (runtime->hasFunction(0x164100u)) {
        auto targetFn = runtime->lookupFunction(0x164100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D4u; }
        if (ctx->pc != 0x1640D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBound__8mgCFrameFPQ28mgCFrame9BoundInfo_0x164100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D4u; }
        if (ctx->pc != 0x1640D4u) { return; }
    }
    ctx->pc = 0x1640D4u;
label_1640d4:
    // 0x1640d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1640D4u;
    {
        const bool branch_taken_0x1640d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640D4u;
            // 0x1640d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d4) {
            ctx->pc = 0x1640E8u;
            goto label_1640e8;
        }
    }
    ctx->pc = 0x1640DCu;
label_1640dc:
    // 0x1640dc: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1640e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1640e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1640e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1640e8:
    // 0x1640e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1640e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1640ec:
    // 0x1640ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1640ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1640f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1640f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1640f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1640F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1640F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640F4u;
            // 0x1640f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1640FCu;
}
