#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SpectolFrameCalc__FP12CActionCharai
// Address: 0x23acd0 - 0x23af58
void SpectolFrameCalc__FP12CActionCharai_0x23acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpectolFrameCalc__FP12CActionCharai_0x23acd0");
#endif

    switch (ctx->pc) {
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        default: break;
    }

    ctx->pc = 0x23acd0u;

label_23acd0:
    // 0x23acd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23acd4:
    // 0x23acd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23acd8:
    // 0x23acd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_23acdc:
    // 0x23acdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_23ace0:
    // 0x23ace0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23ace0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ace4:
    // 0x23ace4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_23ace8:
    // 0x23ace8: 0x12400094  beqz        $s2, . + 4 + (0x94 << 2)
label_23acec:
    if (ctx->pc == 0x23ACECu) {
        ctx->pc = 0x23ACECu;
            // 0x23acec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x23ACF0u;
        goto label_23acf0;
    }
    ctx->pc = 0x23ACE8u;
    {
        const bool branch_taken_0x23ace8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACE8u;
            // 0x23acec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ace8) {
            ctx->pc = 0x23AF3Cu;
            goto label_23af3c;
        }
    }
    ctx->pc = 0x23ACF0u;
label_23acf0:
    // 0x23acf0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_23acf4:
    if (ctx->pc == 0x23ACF4u) {
        ctx->pc = 0x23ACF8u;
        goto label_23acf8;
    }
    ctx->pc = 0x23ACF0u;
    {
        const bool branch_taken_0x23acf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23acf0) {
            ctx->pc = 0x23AD28u;
            goto label_23ad28;
        }
    }
    ctx->pc = 0x23ACF8u;
label_23acf8:
    // 0x23acf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23acf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23acfc:
    // 0x23acfc: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x23acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_23ad00:
    // 0x23ad00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23ad00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23ad04:
    // 0x23ad04: 0x320f809  jalr        $t9
label_23ad08:
    if (ctx->pc == 0x23AD08u) {
        ctx->pc = 0x23AD08u;
            // 0x23ad08: 0x24a5de10  addiu       $a1, $a1, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958608));
        ctx->pc = 0x23AD0Cu;
        goto label_23ad0c;
    }
    ctx->pc = 0x23AD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AD0Cu);
        ctx->pc = 0x23AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD04u;
            // 0x23ad08: 0x24a5de10  addiu       $a1, $a1, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD0Cu; }
            if (ctx->pc != 0x23AD0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23AD0Cu;
label_23ad0c:
    // 0x23ad0c: 0x3c043fe6  lui         $a0, 0x3FE6
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16358 << 16));
label_23ad10:
    // 0x23ad10: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_23ad14:
    // 0x23ad14: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x23ad14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_23ad18:
    // 0x23ad18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x23ad18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_23ad1c:
    // 0x23ad1c: 0xaf848380  sw          $a0, -0x7C80($gp)
    ctx->pc = 0x23ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), GPR_U32(ctx, 4));
label_23ad20:
    // 0x23ad20: 0x10000086  b           . + 4 + (0x86 << 2)
label_23ad24:
    if (ctx->pc == 0x23AD24u) {
        ctx->pc = 0x23AD24u;
            // 0x23ad24: 0xaf83964c  sw          $v1, -0x69B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940236), GPR_U32(ctx, 3));
        ctx->pc = 0x23AD28u;
        goto label_23ad28;
    }
    ctx->pc = 0x23AD20u;
    {
        const bool branch_taken_0x23ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD20u;
            // 0x23ad24: 0xaf83964c  sw          $v1, -0x69B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad20) {
            ctx->pc = 0x23AF3Cu;
            goto label_23af3c;
        }
    }
    ctx->pc = 0x23AD28u;
label_23ad28:
    // 0x23ad28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ad2c:
    // 0x23ad2c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_23ad30:
    // 0x23ad30: 0x320f809  jalr        $t9
label_23ad34:
    if (ctx->pc == 0x23AD34u) {
        ctx->pc = 0x23AD34u;
            // 0x23ad34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23AD38u;
        goto label_23ad38;
    }
    ctx->pc = 0x23AD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AD38u);
        ctx->pc = 0x23AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD30u;
            // 0x23ad34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD38u; }
            if (ctx->pc != 0x23AD38u) { return; }
        }
        }
    }
    ctx->pc = 0x23AD38u;
label_23ad38:
    // 0x23ad38: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23ad3c:
    // 0x23ad3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ad3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ad40:
    // 0x23ad40: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x23ad40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_23ad44:
    // 0x23ad44: 0x320f809  jalr        $t9
label_23ad48:
    if (ctx->pc == 0x23AD48u) {
        ctx->pc = 0x23AD48u;
            // 0x23ad48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23AD4Cu;
        goto label_23ad4c;
    }
    ctx->pc = 0x23AD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AD4Cu);
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD44u;
            // 0x23ad48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD4Cu; }
            if (ctx->pc != 0x23AD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23AD4Cu;
label_23ad4c:
    // 0x23ad4c: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x23ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ad50:
    // 0x23ad50: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_23ad54:
    // 0x23ad54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23ad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23ad58:
    // 0x23ad58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23ad5c:
    // 0x23ad5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23ad60:
    // 0x23ad60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ad60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23ad64:
    // 0x23ad64: 0xc0941c0  jal         func_250700
label_23ad68:
    if (ctx->pc == 0x23AD68u) {
        ctx->pc = 0x23AD68u;
            // 0x23ad68: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x23AD6Cu;
        goto label_23ad6c;
    }
    ctx->pc = 0x23AD64u;
    SET_GPR_U32(ctx, 31, 0x23AD6Cu);
    ctx->pc = 0x23AD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD64u;
            // 0x23ad68: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD6Cu; }
        if (ctx->pc != 0x23AD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD6Cu; }
        if (ctx->pc != 0x23AD6Cu) { return; }
    }
    ctx->pc = 0x23AD6Cu;
label_23ad6c:
    // 0x23ad6c: 0xc047a42  jal         func_11E908
label_23ad70:
    if (ctx->pc == 0x23AD70u) {
        ctx->pc = 0x23AD70u;
            // 0x23ad70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23AD74u;
        goto label_23ad74;
    }
    ctx->pc = 0x23AD6Cu;
    SET_GPR_U32(ctx, 31, 0x23AD74u);
    ctx->pc = 0x23AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD6Cu;
            // 0x23ad70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD74u; }
        if (ctx->pc != 0x23AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD74u; }
        if (ctx->pc != 0x23AD74u) { return; }
    }
    ctx->pc = 0x23AD74u;
label_23ad74:
    // 0x23ad74: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x23ad74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_23ad78:
    // 0x23ad78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23ad7c:
    // 0x23ad7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23ad80:
    // 0x23ad80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23ad84:
    // 0x23ad84: 0xc420de10  lwc1        $f0, -0x21F0($at)
    ctx->pc = 0x23ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ad88:
    // 0x23ad88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ad88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23ad8c:
    // 0x23ad8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23ad8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23ad90:
    // 0x23ad90: 0xc0941c0  jal         func_250700
label_23ad94:
    if (ctx->pc == 0x23AD94u) {
        ctx->pc = 0x23AD94u;
            // 0x23ad94: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x23AD98u;
        goto label_23ad98;
    }
    ctx->pc = 0x23AD90u;
    SET_GPR_U32(ctx, 31, 0x23AD98u);
    ctx->pc = 0x23AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD90u;
            // 0x23ad94: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD98u; }
        if (ctx->pc != 0x23AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD98u; }
        if (ctx->pc != 0x23AD98u) { return; }
    }
    ctx->pc = 0x23AD98u;
label_23ad98:
    // 0x23ad98: 0xc047a42  jal         func_11E908
label_23ad9c:
    if (ctx->pc == 0x23AD9Cu) {
        ctx->pc = 0x23AD9Cu;
            // 0x23ad9c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23ADA0u;
        goto label_23ada0;
    }
    ctx->pc = 0x23AD98u;
    SET_GPR_U32(ctx, 31, 0x23ADA0u);
    ctx->pc = 0x23AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD98u;
            // 0x23ad9c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADA0u; }
        if (ctx->pc != 0x23ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADA0u; }
        if (ctx->pc != 0x23ADA0u) { return; }
    }
    ctx->pc = 0x23ADA0u;
label_23ada0:
    // 0x23ada0: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x23ada0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_23ada4:
    // 0x23ada4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ada4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23ada8:
    // 0x23ada8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23adac:
    // 0x23adac: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x23adacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_23adb0:
    // 0x23adb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23adb4:
    // 0x23adb4: 0xc420de14  lwc1        $f0, -0x21EC($at)
    ctx->pc = 0x23adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23adb8:
    // 0x23adb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23adb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23adbc:
    // 0x23adbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23adbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23adc0:
    // 0x23adc0: 0xc0941c0  jal         func_250700
label_23adc4:
    if (ctx->pc == 0x23ADC4u) {
        ctx->pc = 0x23ADC4u;
            // 0x23adc4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x23ADC8u;
        goto label_23adc8;
    }
    ctx->pc = 0x23ADC0u;
    SET_GPR_U32(ctx, 31, 0x23ADC8u);
    ctx->pc = 0x23ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADC0u;
            // 0x23adc4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADC8u; }
        if (ctx->pc != 0x23ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADC8u; }
        if (ctx->pc != 0x23ADC8u) { return; }
    }
    ctx->pc = 0x23ADC8u;
label_23adc8:
    // 0x23adc8: 0xc047a42  jal         func_11E908
label_23adcc:
    if (ctx->pc == 0x23ADCCu) {
        ctx->pc = 0x23ADCCu;
            // 0x23adcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23ADD0u;
        goto label_23add0;
    }
    ctx->pc = 0x23ADC8u;
    SET_GPR_U32(ctx, 31, 0x23ADD0u);
    ctx->pc = 0x23ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADC8u;
            // 0x23adcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADD0u; }
        if (ctx->pc != 0x23ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADD0u; }
        if (ctx->pc != 0x23ADD0u) { return; }
    }
    ctx->pc = 0x23ADD0u;
label_23add0:
    // 0x23add0: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x23add0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_23add4:
    // 0x23add4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23add4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23add8:
    // 0x23add8: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_23addc:
    // 0x23addc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23addcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ade0:
    // 0x23ade0: 0xc420de18  lwc1        $f0, -0x21E8($at)
    ctx->pc = 0x23ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ade4:
    // 0x23ade4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23ade4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23ade8:
    // 0x23ade8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x23ade8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_23adec:
    // 0x23adec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23adf0:
    // 0x23adf0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23adf4:
    // 0x23adf4: 0x320f809  jalr        $t9
label_23adf8:
    if (ctx->pc == 0x23ADF8u) {
        ctx->pc = 0x23ADF8u;
            // 0x23adf8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23ADFCu;
        goto label_23adfc;
    }
    ctx->pc = 0x23ADF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23ADFCu);
        ctx->pc = 0x23ADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADF4u;
            // 0x23adf8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23ADFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23ADFCu; }
            if (ctx->pc != 0x23ADFCu) { return; }
        }
        }
    }
    ctx->pc = 0x23ADFCu;
label_23adfc:
    // 0x23adfc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23ae00:
    // 0x23ae00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23ae04:
    // 0x23ae04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23ae08:
    // 0x23ae08: 0xc0941c0  jal         func_250700
label_23ae0c:
    if (ctx->pc == 0x23AE0Cu) {
        ctx->pc = 0x23AE10u;
        goto label_23ae10;
    }
    ctx->pc = 0x23AE08u;
    SET_GPR_U32(ctx, 31, 0x23AE10u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE10u; }
        if (ctx->pc != 0x23AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE10u; }
        if (ctx->pc != 0x23AE10u) { return; }
    }
    ctx->pc = 0x23AE10u;
label_23ae10:
    // 0x23ae10: 0xc047a42  jal         func_11E908
label_23ae14:
    if (ctx->pc == 0x23AE14u) {
        ctx->pc = 0x23AE14u;
            // 0x23ae14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23AE18u;
        goto label_23ae18;
    }
    ctx->pc = 0x23AE10u;
    SET_GPR_U32(ctx, 31, 0x23AE18u);
    ctx->pc = 0x23AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE10u;
            // 0x23ae14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE18u; }
        if (ctx->pc != 0x23AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE18u; }
        if (ctx->pc != 0x23AE18u) { return; }
    }
    ctx->pc = 0x23AE18u;
label_23ae18:
    // 0x23ae18: 0xc7828380  lwc1        $f2, -0x7C80($gp)
    ctx->pc = 0x23ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ae1c:
    // 0x23ae1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ae1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23ae20:
    // 0x23ae20: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23ae24:
    // 0x23ae24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23ae28:
    // 0x23ae28: 0xc421de10  lwc1        $f1, -0x21F0($at)
    ctx->pc = 0x23ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ae2c:
    // 0x23ae2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23ae30:
    // 0x23ae30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23ae30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_23ae34:
    // 0x23ae34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ae34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23ae38:
    // 0x23ae38: 0xc0941c0  jal         func_250700
label_23ae3c:
    if (ctx->pc == 0x23AE3Cu) {
        ctx->pc = 0x23AE3Cu;
            // 0x23ae3c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x23AE40u;
        goto label_23ae40;
    }
    ctx->pc = 0x23AE38u;
    SET_GPR_U32(ctx, 31, 0x23AE40u);
    ctx->pc = 0x23AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE38u;
            // 0x23ae3c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE40u; }
        if (ctx->pc != 0x23AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE40u; }
        if (ctx->pc != 0x23AE40u) { return; }
    }
    ctx->pc = 0x23AE40u;
label_23ae40:
    // 0x23ae40: 0xc047a42  jal         func_11E908
label_23ae44:
    if (ctx->pc == 0x23AE44u) {
        ctx->pc = 0x23AE44u;
            // 0x23ae44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23AE48u;
        goto label_23ae48;
    }
    ctx->pc = 0x23AE40u;
    SET_GPR_U32(ctx, 31, 0x23AE48u);
    ctx->pc = 0x23AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE40u;
            // 0x23ae44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE48u; }
        if (ctx->pc != 0x23AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE48u; }
        if (ctx->pc != 0x23AE48u) { return; }
    }
    ctx->pc = 0x23AE48u;
label_23ae48:
    // 0x23ae48: 0xc7828380  lwc1        $f2, -0x7C80($gp)
    ctx->pc = 0x23ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ae4c:
    // 0x23ae4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23ae50:
    // 0x23ae50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x23ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_23ae54:
    // 0x23ae54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23ae58:
    // 0x23ae58: 0xc421de14  lwc1        $f1, -0x21EC($at)
    ctx->pc = 0x23ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ae5c:
    // 0x23ae5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23ae60:
    // 0x23ae60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23ae60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_23ae64:
    // 0x23ae64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ae64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23ae68:
    // 0x23ae68: 0xc0941c0  jal         func_250700
label_23ae6c:
    if (ctx->pc == 0x23AE6Cu) {
        ctx->pc = 0x23AE6Cu;
            // 0x23ae6c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x23AE70u;
        goto label_23ae70;
    }
    ctx->pc = 0x23AE68u;
    SET_GPR_U32(ctx, 31, 0x23AE70u);
    ctx->pc = 0x23AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE68u;
            // 0x23ae6c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE70u; }
        if (ctx->pc != 0x23AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE70u; }
        if (ctx->pc != 0x23AE70u) { return; }
    }
    ctx->pc = 0x23AE70u;
label_23ae70:
    // 0x23ae70: 0xc047a42  jal         func_11E908
label_23ae74:
    if (ctx->pc == 0x23AE74u) {
        ctx->pc = 0x23AE74u;
            // 0x23ae74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x23AE78u;
        goto label_23ae78;
    }
    ctx->pc = 0x23AE70u;
    SET_GPR_U32(ctx, 31, 0x23AE78u);
    ctx->pc = 0x23AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE70u;
            // 0x23ae74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE78u; }
        if (ctx->pc != 0x23AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE78u; }
        if (ctx->pc != 0x23AE78u) { return; }
    }
    ctx->pc = 0x23AE78u;
label_23ae78:
    // 0x23ae78: 0xc7828380  lwc1        $f2, -0x7C80($gp)
    ctx->pc = 0x23ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ae7c:
    // 0x23ae7c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23ae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23ae80:
    // 0x23ae80: 0xc421de18  lwc1        $f1, -0x21E8($at)
    ctx->pc = 0x23ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ae84:
    // 0x23ae84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23ae84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_23ae88:
    // 0x23ae88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ae88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23ae8c:
    // 0x23ae8c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x23ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_23ae90:
    // 0x23ae90: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_23ae94:
    // 0x23ae94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ae94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ae98:
    // 0x23ae98: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23ae9c:
    // 0x23ae9c: 0x320f809  jalr        $t9
label_23aea0:
    if (ctx->pc == 0x23AEA0u) {
        ctx->pc = 0x23AEA0u;
            // 0x23aea0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23AEA4u;
        goto label_23aea4;
    }
    ctx->pc = 0x23AE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AEA4u);
        ctx->pc = 0x23AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE9Cu;
            // 0x23aea0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AEA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AEA4u; }
            if (ctx->pc != 0x23AEA4u) { return; }
        }
        }
    }
    ctx->pc = 0x23AEA4u;
label_23aea4:
    // 0x23aea4: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x23aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23aea8:
    // 0x23aea8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_23aeac:
    // 0x23aeac: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x23aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23aeb0:
    // 0x23aeb0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_23aeb4:
    // 0x23aeb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23aeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23aeb8:
    // 0x23aeb8: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_23aebc:
    // 0x23aebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23aebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_23aec0:
    // 0x23aec0: 0xe7808380  swc1        $f0, -0x7C80($gp)
    ctx->pc = 0x23aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), bits); }
label_23aec4:
    // 0x23aec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23aec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23aec8:
    // 0x23aec8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x23aec8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_23aecc:
    // 0x23aecc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x23aeccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_23aed0:
    // 0x23aed0: 0x320f809  jalr        $t9
label_23aed4:
    if (ctx->pc == 0x23AED4u) {
        ctx->pc = 0x23AED4u;
            // 0x23aed4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x23AED8u;
        goto label_23aed8;
    }
    ctx->pc = 0x23AED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AED8u);
        ctx->pc = 0x23AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AED0u;
            // 0x23aed4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AED8u; }
            if (ctx->pc != 0x23AED8u) { return; }
        }
        }
    }
    ctx->pc = 0x23AED8u;
label_23aed8:
    // 0x23aed8: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_23aedc:
    // 0x23aedc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23aedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23aee0:
    // 0x23aee0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23aee4:
    // 0x23aee4: 0x320f809  jalr        $t9
label_23aee8:
    if (ctx->pc == 0x23AEE8u) {
        ctx->pc = 0x23AEE8u;
            // 0x23aee8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23AEECu;
        goto label_23aeec;
    }
    ctx->pc = 0x23AEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AEECu);
        ctx->pc = 0x23AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEE4u;
            // 0x23aee8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AEECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AEECu; }
            if (ctx->pc != 0x23AEECu) { return; }
        }
        }
    }
    ctx->pc = 0x23AEECu;
label_23aeec:
    // 0x23aeec: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x23aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_23aef0:
    // 0x23aef0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23aef4:
    // 0x23aef4: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_23aef8:
    // 0x23aef8: 0x320f809  jalr        $t9
label_23aefc:
    if (ctx->pc == 0x23AEFCu) {
        ctx->pc = 0x23AEFCu;
            // 0x23aefc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23AF00u;
        goto label_23af00;
    }
    ctx->pc = 0x23AEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AF00u);
        ctx->pc = 0x23AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEF8u;
            // 0x23aefc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AF00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AF00u; }
            if (ctx->pc != 0x23AF00u) { return; }
        }
        }
    }
    ctx->pc = 0x23AF00u;
label_23af00:
    // 0x23af00: 0xc781964c  lwc1        $f1, -0x69B4($gp)
    ctx->pc = 0x23af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23af04:
    // 0x23af04: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_23af08:
    // 0x23af08: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
label_23af0c:
    // 0x23af0c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x23af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
label_23af10:
    // 0x23af10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x23af10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_23af14:
    // 0x23af14: 0x3c033ea0  lui         $v1, 0x3EA0
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16032 << 16));
label_23af18:
    // 0x23af18: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x23af18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_23af1c:
    // 0x23af1c: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x23af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
label_23af20:
    // 0x23af20: 0xc782964c  lwc1        $f2, -0x69B4($gp)
    ctx->pc = 0x23af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23af24:
    // 0x23af24: 0xc7819648  lwc1        $f1, -0x69B8($gp)
    ctx->pc = 0x23af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23af28:
    // 0x23af28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23af28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23af2c:
    // 0x23af2c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x23af2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_23af30:
    // 0x23af30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23af30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23af34:
    // 0x23af34: 0xe782964c  swc1        $f2, -0x69B4($gp)
    ctx->pc = 0x23af34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940236), bits); }
label_23af38:
    // 0x23af38: 0xe7809648  swc1        $f0, -0x69B8($gp)
    ctx->pc = 0x23af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940232), bits); }
label_23af3c:
    // 0x23af3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23af40:
    // 0x23af40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23af44:
    // 0x23af44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23af44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23af48:
    // 0x23af48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23af48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23af4c:
    // 0x23af4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23af4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23af50:
    // 0x23af50: 0x3e00008  jr          $ra
label_23af54:
    if (ctx->pc == 0x23AF54u) {
        ctx->pc = 0x23AF54u;
            // 0x23af54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23AF58u;
        goto label_fallthrough_0x23af50;
    }
    ctx->pc = 0x23AF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF50u;
            // 0x23af54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23af50:
    ctx->pc = 0x23AF58u;
}
