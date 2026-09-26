#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnemyCatch__12CActionCharaFPc
// Address: 0x16ad30 - 0x16af40
void CheckEnemyCatch__12CActionCharaFPc_0x16ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnemyCatch__12CActionCharaFPc_0x16ad30");
#endif

    switch (ctx->pc) {
        case 0x16ad30u: goto label_16ad30;
        case 0x16ad34u: goto label_16ad34;
        case 0x16ad38u: goto label_16ad38;
        case 0x16ad3cu: goto label_16ad3c;
        case 0x16ad40u: goto label_16ad40;
        case 0x16ad44u: goto label_16ad44;
        case 0x16ad48u: goto label_16ad48;
        case 0x16ad4cu: goto label_16ad4c;
        case 0x16ad50u: goto label_16ad50;
        case 0x16ad54u: goto label_16ad54;
        case 0x16ad58u: goto label_16ad58;
        case 0x16ad5cu: goto label_16ad5c;
        case 0x16ad60u: goto label_16ad60;
        case 0x16ad64u: goto label_16ad64;
        case 0x16ad68u: goto label_16ad68;
        case 0x16ad6cu: goto label_16ad6c;
        case 0x16ad70u: goto label_16ad70;
        case 0x16ad74u: goto label_16ad74;
        case 0x16ad78u: goto label_16ad78;
        case 0x16ad7cu: goto label_16ad7c;
        case 0x16ad80u: goto label_16ad80;
        case 0x16ad84u: goto label_16ad84;
        case 0x16ad88u: goto label_16ad88;
        case 0x16ad8cu: goto label_16ad8c;
        case 0x16ad90u: goto label_16ad90;
        case 0x16ad94u: goto label_16ad94;
        case 0x16ad98u: goto label_16ad98;
        case 0x16ad9cu: goto label_16ad9c;
        case 0x16ada0u: goto label_16ada0;
        case 0x16ada4u: goto label_16ada4;
        case 0x16ada8u: goto label_16ada8;
        case 0x16adacu: goto label_16adac;
        case 0x16adb0u: goto label_16adb0;
        case 0x16adb4u: goto label_16adb4;
        case 0x16adb8u: goto label_16adb8;
        case 0x16adbcu: goto label_16adbc;
        case 0x16adc0u: goto label_16adc0;
        case 0x16adc4u: goto label_16adc4;
        case 0x16adc8u: goto label_16adc8;
        case 0x16adccu: goto label_16adcc;
        case 0x16add0u: goto label_16add0;
        case 0x16add4u: goto label_16add4;
        case 0x16add8u: goto label_16add8;
        case 0x16addcu: goto label_16addc;
        case 0x16ade0u: goto label_16ade0;
        case 0x16ade4u: goto label_16ade4;
        case 0x16ade8u: goto label_16ade8;
        case 0x16adecu: goto label_16adec;
        case 0x16adf0u: goto label_16adf0;
        case 0x16adf4u: goto label_16adf4;
        case 0x16adf8u: goto label_16adf8;
        case 0x16adfcu: goto label_16adfc;
        case 0x16ae00u: goto label_16ae00;
        case 0x16ae04u: goto label_16ae04;
        case 0x16ae08u: goto label_16ae08;
        case 0x16ae0cu: goto label_16ae0c;
        case 0x16ae10u: goto label_16ae10;
        case 0x16ae14u: goto label_16ae14;
        case 0x16ae18u: goto label_16ae18;
        case 0x16ae1cu: goto label_16ae1c;
        case 0x16ae20u: goto label_16ae20;
        case 0x16ae24u: goto label_16ae24;
        case 0x16ae28u: goto label_16ae28;
        case 0x16ae2cu: goto label_16ae2c;
        case 0x16ae30u: goto label_16ae30;
        case 0x16ae34u: goto label_16ae34;
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae3cu: goto label_16ae3c;
        case 0x16ae40u: goto label_16ae40;
        case 0x16ae44u: goto label_16ae44;
        case 0x16ae48u: goto label_16ae48;
        case 0x16ae4cu: goto label_16ae4c;
        case 0x16ae50u: goto label_16ae50;
        case 0x16ae54u: goto label_16ae54;
        case 0x16ae58u: goto label_16ae58;
        case 0x16ae5cu: goto label_16ae5c;
        case 0x16ae60u: goto label_16ae60;
        case 0x16ae64u: goto label_16ae64;
        case 0x16ae68u: goto label_16ae68;
        case 0x16ae6cu: goto label_16ae6c;
        case 0x16ae70u: goto label_16ae70;
        case 0x16ae74u: goto label_16ae74;
        case 0x16ae78u: goto label_16ae78;
        case 0x16ae7cu: goto label_16ae7c;
        case 0x16ae80u: goto label_16ae80;
        case 0x16ae84u: goto label_16ae84;
        case 0x16ae88u: goto label_16ae88;
        case 0x16ae8cu: goto label_16ae8c;
        case 0x16ae90u: goto label_16ae90;
        case 0x16ae94u: goto label_16ae94;
        case 0x16ae98u: goto label_16ae98;
        case 0x16ae9cu: goto label_16ae9c;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aea4u: goto label_16aea4;
        case 0x16aea8u: goto label_16aea8;
        case 0x16aeacu: goto label_16aeac;
        case 0x16aeb0u: goto label_16aeb0;
        case 0x16aeb4u: goto label_16aeb4;
        case 0x16aeb8u: goto label_16aeb8;
        case 0x16aebcu: goto label_16aebc;
        case 0x16aec0u: goto label_16aec0;
        case 0x16aec4u: goto label_16aec4;
        case 0x16aec8u: goto label_16aec8;
        case 0x16aeccu: goto label_16aecc;
        case 0x16aed0u: goto label_16aed0;
        case 0x16aed4u: goto label_16aed4;
        case 0x16aed8u: goto label_16aed8;
        case 0x16aedcu: goto label_16aedc;
        case 0x16aee0u: goto label_16aee0;
        case 0x16aee4u: goto label_16aee4;
        case 0x16aee8u: goto label_16aee8;
        case 0x16aeecu: goto label_16aeec;
        case 0x16aef0u: goto label_16aef0;
        case 0x16aef4u: goto label_16aef4;
        case 0x16aef8u: goto label_16aef8;
        case 0x16aefcu: goto label_16aefc;
        case 0x16af00u: goto label_16af00;
        case 0x16af04u: goto label_16af04;
        case 0x16af08u: goto label_16af08;
        case 0x16af0cu: goto label_16af0c;
        case 0x16af10u: goto label_16af10;
        case 0x16af14u: goto label_16af14;
        case 0x16af18u: goto label_16af18;
        case 0x16af1cu: goto label_16af1c;
        case 0x16af20u: goto label_16af20;
        case 0x16af24u: goto label_16af24;
        case 0x16af28u: goto label_16af28;
        case 0x16af2cu: goto label_16af2c;
        case 0x16af30u: goto label_16af30;
        case 0x16af34u: goto label_16af34;
        case 0x16af38u: goto label_16af38;
        case 0x16af3cu: goto label_16af3c;
        default: break;
    }

    ctx->pc = 0x16ad30u;

label_16ad30:
    // 0x16ad30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16ad34:
    // 0x16ad34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16ad38:
    // 0x16ad38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16ad3c:
    // 0x16ad3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ad40:
    // 0x16ad40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ad40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ad44:
    // 0x16ad44: 0xc05af3c  jal         func_16BCF0
label_16ad48:
    if (ctx->pc == 0x16AD48u) {
        ctx->pc = 0x16AD48u;
            // 0x16ad48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x16AD4Cu;
        goto label_16ad4c;
    }
    ctx->pc = 0x16AD44u;
    SET_GPR_U32(ctx, 31, 0x16AD4Cu);
    ctx->pc = 0x16AD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD44u;
            // 0x16ad48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD4Cu; }
        if (ctx->pc != 0x16AD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD4Cu; }
        if (ctx->pc != 0x16AD4Cu) { return; }
    }
    ctx->pc = 0x16AD4Cu;
label_16ad4c:
    // 0x16ad4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ad4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ad50:
    // 0x16ad50: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_16ad54:
    if (ctx->pc == 0x16AD54u) {
        ctx->pc = 0x16AD54u;
            // 0x16ad54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD58u;
        goto label_16ad58;
    }
    ctx->pc = 0x16AD50u;
    {
        const bool branch_taken_0x16ad50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD50u;
            // 0x16ad54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad50) {
            ctx->pc = 0x16AD60u;
            goto label_16ad60;
        }
    }
    ctx->pc = 0x16AD58u;
label_16ad58:
    // 0x16ad58: 0x10000074  b           . + 4 + (0x74 << 2)
label_16ad5c:
    if (ctx->pc == 0x16AD5Cu) {
        ctx->pc = 0x16AD5Cu;
            // 0x16ad5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x16AD60u;
        goto label_16ad60;
    }
    ctx->pc = 0x16AD58u;
    {
        const bool branch_taken_0x16ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD58u;
            // 0x16ad5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad58) {
            ctx->pc = 0x16AF2Cu;
            goto label_16af2c;
        }
    }
    ctx->pc = 0x16AD60u;
label_16ad60:
    // 0x16ad60: 0x8622071c  lh          $v0, 0x71C($s1)
    ctx->pc = 0x16ad60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1820)));
label_16ad64:
    // 0x16ad64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16ad68:
    if (ctx->pc == 0x16AD68u) {
        ctx->pc = 0x16AD68u;
            // 0x16ad68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD6Cu;
        goto label_16ad6c;
    }
    ctx->pc = 0x16AD64u;
    {
        const bool branch_taken_0x16ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD64u;
            // 0x16ad68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad64) {
            ctx->pc = 0x16AD74u;
            goto label_16ad74;
        }
    }
    ctx->pc = 0x16AD6Cu;
label_16ad6c:
    // 0x16ad6c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_16ad70:
    if (ctx->pc == 0x16AD70u) {
        ctx->pc = 0x16AD74u;
        goto label_16ad74;
    }
    ctx->pc = 0x16AD6Cu;
    {
        const bool branch_taken_0x16ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad6c) {
            ctx->pc = 0x16AF28u;
            goto label_16af28;
        }
    }
    ctx->pc = 0x16AD74u;
label_16ad74:
    // 0x16ad74: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_16ad78:
    // 0x16ad78: 0xc076d44  jal         func_1DB510
label_16ad7c:
    if (ctx->pc == 0x16AD7Cu) {
        ctx->pc = 0x16AD7Cu;
            // 0x16ad7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD80u;
        goto label_16ad80;
    }
    ctx->pc = 0x16AD78u;
    SET_GPR_U32(ctx, 31, 0x16AD80u);
    ctx->pc = 0x16AD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD78u;
            // 0x16ad7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB510u;
    if (runtime->hasFunction(0x1DB510u)) {
        auto targetFn = runtime->lookupFunction(0x1DB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD80u; }
        if (ctx->pc != 0x16AD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckThrowTarget__11CMonsterManFP8mgCFrame_0x1db510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD80u; }
        if (ctx->pc != 0x16AD80u) { return; }
    }
    ctx->pc = 0x16AD80u;
label_16ad80:
    // 0x16ad80: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_16ad84:
    if (ctx->pc == 0x16AD84u) {
        ctx->pc = 0x16AD84u;
            // 0x16ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD88u;
        goto label_16ad88;
    }
    ctx->pc = 0x16AD80u;
    {
        const bool branch_taken_0x16ad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD80u;
            // 0x16ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad80) {
            ctx->pc = 0x16AE38u;
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16AD88u;
label_16ad88:
    // 0x16ad88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ad8c:
    // 0x16ad8c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ad90:
    // 0x16ad90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ad94:
    // 0x16ad94: 0xa623071c  sh          $v1, 0x71C($s1)
    ctx->pc = 0x16ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1820), (uint16_t)GPR_U32(ctx, 3));
label_16ad98:
    // 0x16ad98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ad9c:
    // 0x16ad9c: 0xa6220728  sh          $v0, 0x728($s1)
    ctx->pc = 0x16ad9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1832), (uint16_t)GPR_U32(ctx, 2));
label_16ada0:
    // 0x16ada0: 0xc05af24  jal         func_16BC90
label_16ada4:
    if (ctx->pc == 0x16ADA4u) {
        ctx->pc = 0x16ADA4u;
            // 0x16ada4: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
        ctx->pc = 0x16ADA8u;
        goto label_16ada8;
    }
    ctx->pc = 0x16ADA0u;
    SET_GPR_U32(ctx, 31, 0x16ADA8u);
    ctx->pc = 0x16ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADA0u;
            // 0x16ada4: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA8u; }
        if (ctx->pc != 0x16ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA8u; }
        if (ctx->pc != 0x16ADA8u) { return; }
    }
    ctx->pc = 0x16ADA8u;
label_16ada8:
    // 0x16ada8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16adac:
    if (ctx->pc == 0x16ADACu) {
        ctx->pc = 0x16ADB0u;
        goto label_16adb0;
    }
    ctx->pc = 0x16ADA8u;
    {
        const bool branch_taken_0x16ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ada8) {
            ctx->pc = 0x16ADC8u;
            goto label_16adc8;
        }
    }
    ctx->pc = 0x16ADB0u;
label_16adb0:
    // 0x16adb0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16adb4:
    // 0x16adb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16adb8:
    // 0x16adb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16adbc:
    // 0x16adbc: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_16adc0:
    // 0x16adc0: 0x320f809  jalr        $t9
label_16adc4:
    if (ctx->pc == 0x16ADC4u) {
        ctx->pc = 0x16ADC4u;
            // 0x16adc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ADC8u;
        goto label_16adc8;
    }
    ctx->pc = 0x16ADC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16ADC8u);
        ctx->pc = 0x16ADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADC0u;
            // 0x16adc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16ADC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16ADC8u; }
            if (ctx->pc != 0x16ADC8u) { return; }
        }
        }
    }
    ctx->pc = 0x16ADC8u;
label_16adc8:
    // 0x16adc8: 0xc0683a8  jal         func_1A0EA0
label_16adcc:
    if (ctx->pc == 0x16ADCCu) {
        ctx->pc = 0x16ADD0u;
        goto label_16add0;
    }
    ctx->pc = 0x16ADC8u;
    SET_GPR_U32(ctx, 31, 0x16ADD0u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    }
    ctx->pc = 0x16ADD0u;
label_16add0:
    // 0x16add0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16add0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16add4:
    // 0x16add4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16add8:
    // 0x16add8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_16addc:
    if (ctx->pc == 0x16ADDCu) {
        ctx->pc = 0x16ADDCu;
            // 0x16addc: 0x3c02bd4c  lui         $v0, 0xBD4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
        ctx->pc = 0x16ADE0u;
        goto label_16ade0;
    }
    ctx->pc = 0x16ADD8u;
    {
        const bool branch_taken_0x16add8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADD8u;
            // 0x16addc: 0x3c02bd4c  lui         $v0, 0xBD4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16add8) {
            ctx->pc = 0x16AE14u;
            goto label_16ae14;
        }
    }
    ctx->pc = 0x16ADE0u;
label_16ade0:
    // 0x16ade0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ade4:
    // 0x16ade4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ade8:
    // 0x16ade8: 0xc05af24  jal         func_16BC90
label_16adec:
    if (ctx->pc == 0x16ADECu) {
        ctx->pc = 0x16ADECu;
            // 0x16adec: 0x24a53538  addiu       $a1, $a1, 0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13624));
        ctx->pc = 0x16ADF0u;
        goto label_16adf0;
    }
    ctx->pc = 0x16ADE8u;
    SET_GPR_U32(ctx, 31, 0x16ADF0u);
    ctx->pc = 0x16ADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADE8u;
            // 0x16adec: 0x24a53538  addiu       $a1, $a1, 0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADF0u; }
        if (ctx->pc != 0x16ADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADF0u; }
        if (ctx->pc != 0x16ADF0u) { return; }
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16adf4:
    if (ctx->pc == 0x16ADF4u) {
        ctx->pc = 0x16ADF8u;
        goto label_16adf8;
    }
    ctx->pc = 0x16ADF0u;
    {
        const bool branch_taken_0x16adf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16adf0) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16ADF8u;
label_16adf8:
    // 0x16adf8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16adf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16adfc:
    // 0x16adfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16adfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ae00:
    // 0x16ae00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ae04:
    // 0x16ae04: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x16ae04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_16ae08:
    // 0x16ae08: 0x320f809  jalr        $t9
label_16ae0c:
    if (ctx->pc == 0x16AE0Cu) {
        ctx->pc = 0x16AE0Cu;
            // 0x16ae0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AE10u;
        goto label_16ae10;
    }
    ctx->pc = 0x16AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AE10u);
        ctx->pc = 0x16AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE08u;
            // 0x16ae0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AE10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AE10u; }
            if (ctx->pc != 0x16AE10u) { return; }
        }
        }
    }
    ctx->pc = 0x16AE10u;
label_16ae10:
    // 0x16ae10: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
label_16ae14:
    // 0x16ae14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ae18:
    // 0x16ae18: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x16ae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16ae1c:
    // 0x16ae1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16ae20:
    // 0x16ae20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16ae20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ae24:
    // 0x16ae24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16ae24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16ae28:
    // 0x16ae28: 0xc06806c  jal         func_1A01B0
label_16ae2c:
    if (ctx->pc == 0x16AE2Cu) {
        ctx->pc = 0x16AE2Cu;
            // 0x16ae2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x16AE30u;
        goto label_16ae30;
    }
    ctx->pc = 0x16AE28u;
    SET_GPR_U32(ctx, 31, 0x16AE30u);
    ctx->pc = 0x16AE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE28u;
            // 0x16ae2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A01B0u;
    if (runtime->hasFunction(0x1A01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE30u; }
        if (ctx->pc != 0x16AE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE30u; }
        if (ctx->pc != 0x16AE30u) { return; }
    }
    ctx->pc = 0x16AE30u;
label_16ae30:
    // 0x16ae30: 0x1000003d  b           . + 4 + (0x3D << 2)
label_16ae34:
    if (ctx->pc == 0x16AE34u) {
        ctx->pc = 0x16AE34u;
            // 0x16ae34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AE38u;
        goto label_16ae38;
    }
    ctx->pc = 0x16AE30u;
    {
        const bool branch_taken_0x16ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE30u;
            // 0x16ae34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae30) {
            ctx->pc = 0x16AF28u;
            goto label_16af28;
        }
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0xc04de0c  jal         func_137830
label_16ae3c:
    if (ctx->pc == 0x16AE3Cu) {
        ctx->pc = 0x16AE3Cu;
            // 0x16ae3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16AE40u;
        goto label_16ae40;
    }
    ctx->pc = 0x16AE38u;
    SET_GPR_U32(ctx, 31, 0x16AE40u);
    ctx->pc = 0x16AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE38u;
            // 0x16ae3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE40u; }
        if (ctx->pc != 0x16AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE40u; }
        if (ctx->pc != 0x16AE40u) { return; }
    }
    ctx->pc = 0x16AE40u;
label_16ae40:
    // 0x16ae40: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_16ae44:
    // 0x16ae44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16ae48:
    // 0x16ae48: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x16ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_16ae4c:
    // 0x16ae4c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x16ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_16ae50:
    // 0x16ae50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16ae50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ae54:
    // 0x16ae54: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x16ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_16ae58:
    // 0x16ae58: 0xc0764fc  jal         func_1D93F0
label_16ae5c:
    if (ctx->pc == 0x16AE5Cu) {
        ctx->pc = 0x16AE5Cu;
            // 0x16ae5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16AE60u;
        goto label_16ae60;
    }
    ctx->pc = 0x16AE58u;
    SET_GPR_U32(ctx, 31, 0x16AE60u);
    ctx->pc = 0x16AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE58u;
            // 0x16ae5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93F0u;
    if (runtime->hasFunction(0x1D93F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE60u; }
        if (ctx->pc != 0x16AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE60u; }
        if (ctx->pc != 0x16AE60u) { return; }
    }
    ctx->pc = 0x16AE60u;
label_16ae60:
    // 0x16ae60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16ae60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ae64:
    // 0x16ae64: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
label_16ae68:
    if (ctx->pc == 0x16AE68u) {
        ctx->pc = 0x16AE68u;
            // 0x16ae68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AE6Cu;
        goto label_16ae6c;
    }
    ctx->pc = 0x16AE64u;
    {
        const bool branch_taken_0x16ae64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE64u;
            // 0x16ae68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae64) {
            ctx->pc = 0x16AF28u;
            goto label_16af28;
        }
    }
    ctx->pc = 0x16AE6Cu;
label_16ae6c:
    // 0x16ae6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ae70:
    // 0x16ae70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ae74:
    // 0x16ae74: 0xc059924  jal         func_166490
label_16ae78:
    if (ctx->pc == 0x16AE78u) {
        ctx->pc = 0x16AE78u;
            // 0x16ae78: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
        ctx->pc = 0x16AE7Cu;
        goto label_16ae7c;
    }
    ctx->pc = 0x16AE74u;
    SET_GPR_U32(ctx, 31, 0x16AE7Cu);
    ctx->pc = 0x16AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE74u;
            // 0x16ae78: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE7Cu; }
        if (ctx->pc != 0x16AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE7Cu; }
        if (ctx->pc != 0x16AE7Cu) { return; }
    }
    ctx->pc = 0x16AE7Cu;
label_16ae7c:
    // 0x16ae7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16ae80:
    if (ctx->pc == 0x16AE80u) {
        ctx->pc = 0x16AE80u;
            // 0x16ae80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AE84u;
        goto label_16ae84;
    }
    ctx->pc = 0x16AE7Cu;
    {
        const bool branch_taken_0x16ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE7Cu;
            // 0x16ae80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae7c) {
            ctx->pc = 0x16AE9Cu;
            goto label_16ae9c;
        }
    }
    ctx->pc = 0x16AE84u;
label_16ae84:
    // 0x16ae84: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16ae84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ae88:
    // 0x16ae88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ae8c:
    // 0x16ae8c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16ae8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16ae90:
    // 0x16ae90: 0x320f809  jalr        $t9
label_16ae94:
    if (ctx->pc == 0x16AE94u) {
        ctx->pc = 0x16AE94u;
            // 0x16ae94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AE98u;
        goto label_16ae98;
    }
    ctx->pc = 0x16AE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AE98u);
        ctx->pc = 0x16AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE90u;
            // 0x16ae94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AE98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AE98u; }
            if (ctx->pc != 0x16AE98u) { return; }
        }
        }
    }
    ctx->pc = 0x16AE98u;
label_16ae98:
    // 0x16ae98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ae9c:
    // 0x16ae9c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16aea0:
    // 0x16aea0: 0xa6230728  sh          $v1, 0x728($s1)
    ctx->pc = 0x16aea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1832), (uint16_t)GPR_U32(ctx, 3));
label_16aea4:
    // 0x16aea4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16aea8:
    // 0x16aea8: 0xae300724  sw          $s0, 0x724($s1)
    ctx->pc = 0x16aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1828), GPR_U32(ctx, 16));
label_16aeac:
    // 0x16aeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aeb0:
    // 0x16aeb0: 0xae320720  sw          $s2, 0x720($s1)
    ctx->pc = 0x16aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 18));
label_16aeb4:
    // 0x16aeb4: 0x24a53530  addiu       $a1, $a1, 0x3530
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
label_16aeb8:
    // 0x16aeb8: 0xc05af24  jal         func_16BC90
label_16aebc:
    if (ctx->pc == 0x16AEBCu) {
        ctx->pc = 0x16AEBCu;
            // 0x16aebc: 0xa622071c  sh          $v0, 0x71C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1820), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16AEC0u;
        goto label_16aec0;
    }
    ctx->pc = 0x16AEB8u;
    SET_GPR_U32(ctx, 31, 0x16AEC0u);
    ctx->pc = 0x16AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEB8u;
            // 0x16aebc: 0xa622071c  sh          $v0, 0x71C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1820), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEC0u; }
        if (ctx->pc != 0x16AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEC0u; }
        if (ctx->pc != 0x16AEC0u) { return; }
    }
    ctx->pc = 0x16AEC0u;
label_16aec0:
    // 0x16aec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16aec4:
    if (ctx->pc == 0x16AEC4u) {
        ctx->pc = 0x16AEC8u;
        goto label_16aec8;
    }
    ctx->pc = 0x16AEC0u;
    {
        const bool branch_taken_0x16aec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aec0) {
            ctx->pc = 0x16AEE0u;
            goto label_16aee0;
        }
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16aec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16aecc:
    // 0x16aecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16aed0:
    // 0x16aed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16aed4:
    // 0x16aed4: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_16aed8:
    // 0x16aed8: 0x320f809  jalr        $t9
label_16aedc:
    if (ctx->pc == 0x16AEDCu) {
        ctx->pc = 0x16AEDCu;
            // 0x16aedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AEE0u;
        goto label_16aee0;
    }
    ctx->pc = 0x16AED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AEE0u);
        ctx->pc = 0x16AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AED8u;
            // 0x16aedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AEE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE0u; }
            if (ctx->pc != 0x16AEE0u) { return; }
        }
        }
    }
    ctx->pc = 0x16AEE0u;
label_16aee0:
    // 0x16aee0: 0xc0683a8  jal         func_1A0EA0
label_16aee4:
    if (ctx->pc == 0x16AEE4u) {
        ctx->pc = 0x16AEE8u;
        goto label_16aee8;
    }
    ctx->pc = 0x16AEE0u;
    SET_GPR_U32(ctx, 31, 0x16AEE8u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE8u; }
        if (ctx->pc != 0x16AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE8u; }
        if (ctx->pc != 0x16AEE8u) { return; }
    }
    ctx->pc = 0x16AEE8u;
label_16aee8:
    // 0x16aee8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16aee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16aeec:
    // 0x16aeec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_16aef0:
    if (ctx->pc == 0x16AEF0u) {
        ctx->pc = 0x16AEF0u;
            // 0x16aef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AEF4u;
        goto label_16aef4;
    }
    ctx->pc = 0x16AEECu;
    {
        const bool branch_taken_0x16aeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEECu;
            // 0x16aef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aeec) {
            ctx->pc = 0x16AF28u;
            goto label_16af28;
        }
    }
    ctx->pc = 0x16AEF4u;
label_16aef4:
    // 0x16aef4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16aef8:
    // 0x16aef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aefc:
    // 0x16aefc: 0xc05af24  jal         func_16BC90
label_16af00:
    if (ctx->pc == 0x16AF00u) {
        ctx->pc = 0x16AF00u;
            // 0x16af00: 0x24a53538  addiu       $a1, $a1, 0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13624));
        ctx->pc = 0x16AF04u;
        goto label_16af04;
    }
    ctx->pc = 0x16AEFCu;
    SET_GPR_U32(ctx, 31, 0x16AF04u);
    ctx->pc = 0x16AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEFCu;
            // 0x16af00: 0x24a53538  addiu       $a1, $a1, 0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF04u; }
        if (ctx->pc != 0x16AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF04u; }
        if (ctx->pc != 0x16AF04u) { return; }
    }
    ctx->pc = 0x16AF04u;
label_16af04:
    // 0x16af04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16af08:
    if (ctx->pc == 0x16AF08u) {
        ctx->pc = 0x16AF0Cu;
        goto label_16af0c;
    }
    ctx->pc = 0x16AF04u;
    {
        const bool branch_taken_0x16af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16af04) {
            ctx->pc = 0x16AF24u;
            goto label_16af24;
        }
    }
    ctx->pc = 0x16AF0Cu;
label_16af0c:
    // 0x16af0c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16af10:
    // 0x16af10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16af14:
    // 0x16af14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16af14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16af18:
    // 0x16af18: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_16af1c:
    // 0x16af1c: 0x320f809  jalr        $t9
label_16af20:
    if (ctx->pc == 0x16AF20u) {
        ctx->pc = 0x16AF20u;
            // 0x16af20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AF24u;
        goto label_16af24;
    }
    ctx->pc = 0x16AF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AF24u);
        ctx->pc = 0x16AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF1Cu;
            // 0x16af20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AF24u; }
            if (ctx->pc != 0x16AF24u) { return; }
        }
        }
    }
    ctx->pc = 0x16AF24u;
label_16af24:
    // 0x16af24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16af28:
    // 0x16af28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16af2c:
    // 0x16af2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16af2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16af30:
    // 0x16af30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16af34:
    // 0x16af34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16af34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16af38:
    // 0x16af38: 0x3e00008  jr          $ra
label_16af3c:
    if (ctx->pc == 0x16AF3Cu) {
        ctx->pc = 0x16AF3Cu;
            // 0x16af3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16AF40u;
        goto label_fallthrough_0x16af38;
    }
    ctx->pc = 0x16AF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF38u;
            // 0x16af3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16af38:
    ctx->pc = 0x16AF40u;
}
