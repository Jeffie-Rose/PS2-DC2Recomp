#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAquaDraw__Fv
// Address: 0x219020 - 0x2190d0
void MenuAquaDraw__Fv_0x219020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAquaDraw__Fv_0x219020");
#endif

    switch (ctx->pc) {
        case 0x219020u: goto label_219020;
        case 0x219024u: goto label_219024;
        case 0x219028u: goto label_219028;
        case 0x21902cu: goto label_21902c;
        case 0x219030u: goto label_219030;
        case 0x219034u: goto label_219034;
        case 0x219038u: goto label_219038;
        case 0x21903cu: goto label_21903c;
        case 0x219040u: goto label_219040;
        case 0x219044u: goto label_219044;
        case 0x219048u: goto label_219048;
        case 0x21904cu: goto label_21904c;
        case 0x219050u: goto label_219050;
        case 0x219054u: goto label_219054;
        case 0x219058u: goto label_219058;
        case 0x21905cu: goto label_21905c;
        case 0x219060u: goto label_219060;
        case 0x219064u: goto label_219064;
        case 0x219068u: goto label_219068;
        case 0x21906cu: goto label_21906c;
        case 0x219070u: goto label_219070;
        case 0x219074u: goto label_219074;
        case 0x219078u: goto label_219078;
        case 0x21907cu: goto label_21907c;
        case 0x219080u: goto label_219080;
        case 0x219084u: goto label_219084;
        case 0x219088u: goto label_219088;
        case 0x21908cu: goto label_21908c;
        case 0x219090u: goto label_219090;
        case 0x219094u: goto label_219094;
        case 0x219098u: goto label_219098;
        case 0x21909cu: goto label_21909c;
        case 0x2190a0u: goto label_2190a0;
        case 0x2190a4u: goto label_2190a4;
        case 0x2190a8u: goto label_2190a8;
        case 0x2190acu: goto label_2190ac;
        case 0x2190b0u: goto label_2190b0;
        case 0x2190b4u: goto label_2190b4;
        case 0x2190b8u: goto label_2190b8;
        case 0x2190bcu: goto label_2190bc;
        case 0x2190c0u: goto label_2190c0;
        case 0x2190c4u: goto label_2190c4;
        case 0x2190c8u: goto label_2190c8;
        case 0x2190ccu: goto label_2190cc;
        default: break;
    }

    ctx->pc = 0x219020u;

label_219020:
    // 0x219020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_219024:
    // 0x219024: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219028:
    // 0x219028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21902c:
    // 0x21902c: 0x8f8491b4  lw          $a0, -0x6E4C($gp)
    ctx->pc = 0x21902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939060)));
label_219030:
    // 0x219030: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_219034:
    if (ctx->pc == 0x219034u) {
        ctx->pc = 0x219034u;
            // 0x219034: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x219038u;
        goto label_219038;
    }
    ctx->pc = 0x219030u;
    {
        const bool branch_taken_0x219030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219030u;
            // 0x219034: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219030) {
            ctx->pc = 0x2190C4u;
            goto label_2190c4;
        }
    }
    ctx->pc = 0x219038u;
label_219038:
    // 0x219038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21903c:
    // 0x21903c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21903cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219040:
    // 0x219040: 0xc0887b0  jal         func_221EC0
label_219044:
    if (ctx->pc == 0x219044u) {
        ctx->pc = 0x219044u;
            // 0x219044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219048u;
        goto label_219048;
    }
    ctx->pc = 0x219040u;
    SET_GPR_U32(ctx, 31, 0x219048u);
    ctx->pc = 0x219044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219040u;
            // 0x219044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219048u; }
        if (ctx->pc != 0x219048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219048u; }
        if (ctx->pc != 0x219048u) { return; }
    }
    ctx->pc = 0x219048u;
label_219048:
    // 0x219048: 0x8f8391b4  lw          $v1, -0x6E4C($gp)
    ctx->pc = 0x219048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939060)));
label_21904c:
    // 0x21904c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_219050:
    // 0x219050: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_219054:
    if (ctx->pc == 0x219054u) {
        ctx->pc = 0x219058u;
        goto label_219058;
    }
    ctx->pc = 0x219050u;
    {
        const bool branch_taken_0x219050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219050) {
            ctx->pc = 0x219068u;
            goto label_219068;
        }
    }
    ctx->pc = 0x219058u;
label_219058:
    // 0x219058: 0xc0c2d40  jal         func_30B500
label_21905c:
    if (ctx->pc == 0x21905Cu) {
        ctx->pc = 0x219060u;
        goto label_219060;
    }
    ctx->pc = 0x219058u;
    SET_GPR_U32(ctx, 31, 0x219060u);
    ctx->pc = 0x30B500u;
    if (runtime->hasFunction(0x30B500u)) {
        auto targetFn = runtime->lookupFunction(0x30B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219060u; }
        if (ctx->pc != 0x219060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistDraw__Fv_0x30b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219060u; }
        if (ctx->pc != 0x219060u) { return; }
    }
    ctx->pc = 0x219060u;
label_219060:
    // 0x219060: 0x10000019  b           . + 4 + (0x19 << 2)
label_219064:
    if (ctx->pc == 0x219064u) {
        ctx->pc = 0x219064u;
            // 0x219064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x219068u;
        goto label_219068;
    }
    ctx->pc = 0x219060u;
    {
        const bool branch_taken_0x219060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219060u;
            // 0x219064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219060) {
            ctx->pc = 0x2190C8u;
            goto label_2190c8;
        }
    }
    ctx->pc = 0x219068u;
label_219068:
    // 0x219068: 0x8f83920c  lw          $v1, -0x6DF4($gp)
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_21906c:
    // 0x21906c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_219070:
    // 0x219070: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x219070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_219074:
    // 0x219074: 0x2442f3f0  addiu       $v0, $v0, -0xC10
    ctx->pc = 0x219074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964208));
label_219078:
    // 0x219078: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x219078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
label_21907c:
    // 0x21907c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21907cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_219080:
    // 0x219080: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x219080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_219084:
    // 0x219084: 0xc050dd0  jal         func_143740
label_219088:
    if (ctx->pc == 0x219088u) {
        ctx->pc = 0x219088u;
            // 0x219088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x21908Cu;
        goto label_21908c;
    }
    ctx->pc = 0x219084u;
    SET_GPR_U32(ctx, 31, 0x21908Cu);
    ctx->pc = 0x219088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219084u;
            // 0x219088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21908Cu; }
        if (ctx->pc != 0x21908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21908Cu; }
        if (ctx->pc != 0x21908Cu) { return; }
    }
    ctx->pc = 0x21908Cu;
label_21908c:
    // 0x21908c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x21908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_219090:
    // 0x219090: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_219094:
    // 0x219094: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_219098:
    // 0x219098: 0x320f809  jalr        $t9
label_21909c:
    if (ctx->pc == 0x21909Cu) {
        ctx->pc = 0x21909Cu;
            // 0x21909c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2190A0u;
        goto label_2190a0;
    }
    ctx->pc = 0x219098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2190A0u);
        ctx->pc = 0x21909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219098u;
            // 0x21909c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2190A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2190A0u; }
            if (ctx->pc != 0x2190A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2190A0u;
label_2190a0:
    // 0x2190a0: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_2190a4:
    // 0x2190a4: 0xc04c574  jal         func_1315D0
label_2190a8:
    if (ctx->pc == 0x2190A8u) {
        ctx->pc = 0x2190A8u;
            // 0x2190a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2190ACu;
        goto label_2190ac;
    }
    ctx->pc = 0x2190A4u;
    SET_GPR_U32(ctx, 31, 0x2190ACu);
    ctx->pc = 0x2190A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190A4u;
            // 0x2190a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190ACu; }
        if (ctx->pc != 0x2190ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190ACu; }
        if (ctx->pc != 0x2190ACu) { return; }
    }
    ctx->pc = 0x2190ACu;
label_2190ac:
    // 0x2190ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2190acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2190b0:
    // 0x2190b0: 0xc050e28  jal         func_1438A0
label_2190b4:
    if (ctx->pc == 0x2190B4u) {
        ctx->pc = 0x2190B4u;
            // 0x2190b4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2190B8u;
        goto label_2190b8;
    }
    ctx->pc = 0x2190B0u;
    SET_GPR_U32(ctx, 31, 0x2190B8u);
    ctx->pc = 0x2190B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190B0u;
            // 0x2190b4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190B8u; }
        if (ctx->pc != 0x2190B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190B8u; }
        if (ctx->pc != 0x2190B8u) { return; }
    }
    ctx->pc = 0x2190B8u;
label_2190b8:
    // 0x2190b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2190b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2190bc:
    // 0x2190bc: 0xc085ec4  jal         func_217B10
label_2190c0:
    if (ctx->pc == 0x2190C0u) {
        ctx->pc = 0x2190C0u;
            // 0x2190c0: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x2190C4u;
        goto label_2190c4;
    }
    ctx->pc = 0x2190BCu;
    SET_GPR_U32(ctx, 31, 0x2190C4u);
    ctx->pc = 0x2190C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190BCu;
            // 0x2190c0: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217B10u;
    if (runtime->hasFunction(0x217B10u)) {
        auto targetFn = runtime->lookupFunction(0x217B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190C4u; }
        if (ctx->pc != 0x2190C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CAquariumFv_0x217b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190C4u; }
        if (ctx->pc != 0x2190C4u) { return; }
    }
    ctx->pc = 0x2190C4u;
label_2190c4:
    // 0x2190c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2190c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2190c8:
    // 0x2190c8: 0x3e00008  jr          $ra
label_2190cc:
    if (ctx->pc == 0x2190CCu) {
        ctx->pc = 0x2190CCu;
            // 0x2190cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2190D0u;
        goto label_fallthrough_0x2190c8;
    }
    ctx->pc = 0x2190C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2190CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190C8u;
            // 0x2190cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2190c8:
    ctx->pc = 0x2190D0u;
}
