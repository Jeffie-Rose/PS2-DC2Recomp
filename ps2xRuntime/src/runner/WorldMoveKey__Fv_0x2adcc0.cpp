#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WorldMoveKey__Fv
// Address: 0x2adcc0 - 0x2addb8
void WorldMoveKey__Fv_0x2adcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldMoveKey__Fv_0x2adcc0");
#endif

    switch (ctx->pc) {
        case 0x2adcdcu: goto label_2adcdc;
        case 0x2adcf4u: goto label_2adcf4;
        case 0x2add3cu: goto label_2add3c;
        case 0x2add44u: goto label_2add44;
        case 0x2add98u: goto label_2add98;
        default: break;
    }

    ctx->pc = 0x2adcc0u;

    // 0x2adcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2adcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2adcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2adcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2adcc8: 0x83839ae4  lb          $v1, -0x651C($gp)
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941412)));
    // 0x2adccc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADCCCu;
    {
        const bool branch_taken_0x2adccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCCCu;
            // 0x2adcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adccc) {
            ctx->pc = 0x2ADCE4u;
            goto label_2adce4;
        }
    }
    ctx->pc = 0x2ADCD4u;
    // 0x2adcd4: 0xc0aae88  jal         func_2ABA20
    ctx->pc = 0x2ADCD4u;
    SET_GPR_U32(ctx, 31, 0x2ADCDCu);
    ctx->pc = 0x2ADCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCD4u;
            // 0x2adcd8: 0x8f849b00  lw          $a0, -0x6500($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA20u;
    if (runtime->hasFunction(0x2ABA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ABA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCDCu; }
        if (ctx->pc != 0x2ADCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyStep__13CWorldMapMenuFv_0x2aba20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCDCu; }
        if (ctx->pc != 0x2ADCDCu) { return; }
    }
    ctx->pc = 0x2ADCDCu;
label_2adcdc:
    // 0x2adcdc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2ADCDCu;
    {
        const bool branch_taken_0x2adcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCDCu;
            // 0x2adce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcdc) {
            ctx->pc = 0x2ADDB0u;
            goto label_2addb0;
        }
    }
    ctx->pc = 0x2ADCE4u;
label_2adce4:
    // 0x2adce4: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2ADCE4u;
    {
        const bool branch_taken_0x2adce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCE4u;
            // 0x2adce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adce4) {
            ctx->pc = 0x2ADDACu;
            goto label_2addac;
        }
    }
    ctx->pc = 0x2ADCECu;
    // 0x2adcec: 0xc07c8d0  jal         func_1F2340
    ctx->pc = 0x2ADCECu;
    SET_GPR_U32(ctx, 31, 0x2ADCF4u);
    ctx->pc = 0x1F2340u;
    if (runtime->hasFunction(0x1F2340u)) {
        auto targetFn = runtime->lookupFunction(0x1F2340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCF4u; }
        if (ctx->pc != 0x2ADCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngTreeMapKey__Fv_0x1f2340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCF4u; }
        if (ctx->pc != 0x2ADCF4u) { return; }
    }
    ctx->pc = 0x2ADCF4u;
label_2adcf4:
    // 0x2adcf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adcf8: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADCF8u;
    {
        const bool branch_taken_0x2adcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCF8u;
            // 0x2adcfc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcf8) {
            ctx->pc = 0x2ADD4Cu;
            goto label_2add4c;
        }
    }
    ctx->pc = 0x2ADD00u;
    // 0x2add00: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2add00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2add04: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x2add04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
    // 0x2add08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2add08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2add0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add10: 0xa3808f20  sb          $zero, -0x70E0($gp)
    ctx->pc = 0x2add10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938400), (uint8_t)GPR_U32(ctx, 0));
    // 0x2add14: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x2add14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
    // 0x2add18: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add1c: 0xa3809ae4  sb          $zero, -0x651C($gp)
    ctx->pc = 0x2add1cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941412), (uint8_t)GPR_U32(ctx, 0));
    // 0x2add20: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x2add20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
    // 0x2add24: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2add24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2add28: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2add28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2add2c: 0xa043018d  sb          $v1, 0x18D($v0)
    ctx->pc = 0x2add2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 397), (uint8_t)GPR_U32(ctx, 3));
    // 0x2add30: 0x8f849b00  lw          $a0, -0x6500($gp)
    ctx->pc = 0x2add30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2add34: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2ADD34u;
    SET_GPR_U32(ctx, 31, 0x2ADD3Cu);
    ctx->pc = 0x2ADD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD34u;
            // 0x2add38: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD3Cu; }
        if (ctx->pc != 0x2ADD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD3Cu; }
        if (ctx->pc != 0x2ADD3Cu) { return; }
    }
    ctx->pc = 0x2ADD3Cu;
label_2add3c:
    // 0x2add3c: 0xc0aae60  jal         func_2AB980
    ctx->pc = 0x2ADD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD44u);
    ctx->pc = 0x2ADD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD3Cu;
            // 0x2add40: 0x8f849b00  lw          $a0, -0x6500($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB980u;
    if (runtime->hasFunction(0x2AB980u)) {
        auto targetFn = runtime->lookupFunction(0x2AB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD44u; }
        if (ctx->pc != 0x2ADD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgBuffer__13CWorldMapMenuFv_0x2ab980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD44u; }
        if (ctx->pc != 0x2ADD44u) { return; }
    }
    ctx->pc = 0x2ADD44u;
label_2add44:
    // 0x2add44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2ADD44u;
    {
        const bool branch_taken_0x2add44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD44u;
            // 0x2add48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add44) {
            ctx->pc = 0x2ADDACu;
            goto label_2addac;
        }
    }
    ctx->pc = 0x2ADD4Cu;
label_2add4c:
    // 0x2add4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2add4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2add50: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ADD50u;
    {
        const bool branch_taken_0x2add50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD50u;
            // 0x2add54: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add50) {
            ctx->pc = 0x2ADDA8u;
            goto label_2adda8;
        }
    }
    ctx->pc = 0x2ADD58u;
    // 0x2add58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add5c: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2add5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x2add60: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2add60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2add64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add68: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x2add68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x2add6c: 0x8c25d638  lw          $a1, -0x29C8($at)
    ctx->pc = 0x2add6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
    // 0x2add70: 0x24c6d630  addiu       $a2, $a2, -0x29D0
    ctx->pc = 0x2add70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956592));
    // 0x2add74: 0x87829ae8  lh          $v0, -0x6518($gp)
    ctx->pc = 0x2add74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x2add78: 0x24e7d634  addiu       $a3, $a3, -0x29CC
    ctx->pc = 0x2add78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956596));
    // 0x2add7c: 0x87849aec  lh          $a0, -0x6514($gp)
    ctx->pc = 0x2add7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941420)));
    // 0x2add80: 0xa3808f20  sb          $zero, -0x70E0($gp)
    ctx->pc = 0x2add80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938400), (uint8_t)GPR_U32(ctx, 0));
    // 0x2add84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add88: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2add88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x2add8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add90: 0xc07be24  jal         func_1EF890
    ctx->pc = 0x2ADD90u;
    SET_GPR_U32(ctx, 31, 0x2ADD98u);
    ctx->pc = 0x2ADD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD90u;
            // 0x2add94: 0xac24d634  sw          $a0, -0x29CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF890u;
    if (runtime->hasFunction(0x1EF890u)) {
        auto targetFn = runtime->lookupFunction(0x1EF890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD98u; }
        if (ctx->pc != 0x2ADD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDngTreeMapJumpNo__FiiPiPi_0x1ef890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD98u; }
        if (ctx->pc != 0x2ADD98u) { return; }
    }
    ctx->pc = 0x2ADD98u;
label_2add98:
    // 0x2add98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2add9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2add9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adda0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADDA0u;
    {
        const bool branch_taken_0x2adda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDA0u;
            // 0x2adda4: 0xac20d63c  sw          $zero, -0x29C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adda0) {
            ctx->pc = 0x2ADDACu;
            goto label_2addac;
        }
    }
    ctx->pc = 0x2ADDA8u;
label_2adda8:
    // 0x2adda8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2adda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2addac:
    // 0x2addac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2addacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2addb0:
    // 0x2addb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDB0u;
            // 0x2addb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ADDB8u;
}
