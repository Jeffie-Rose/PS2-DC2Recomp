#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawPushButton__6ClsMesFP11mgCDrawPrimii
// Address: 0x15ad00 - 0x15afe8
void DrawPushButton__6ClsMesFP11mgCDrawPrimii_0x15ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawPushButton__6ClsMesFP11mgCDrawPrimii_0x15ad00");
#endif

    switch (ctx->pc) {
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad50u: goto label_15ad50;
        case 0x15adb0u: goto label_15adb0;
        case 0x15af90u: goto label_15af90;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afc4u: goto label_15afc4;
        default: break;
    }

    ctx->pc = 0x15ad00u;

    // 0x15ad00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15ad04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15ad08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15ad0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15ad10: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15ad10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ad18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ad20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ad28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ad2c: 0x8c8317f4  lw          $v1, 0x17F4($a0)
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6132)));
    // 0x15ad30: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x15AD30u;
    {
        const bool branch_taken_0x15ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD30u;
            // 0x15ad34: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad30) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15AD38u;
    // 0x15ad38: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15AD38u;
    SET_GPR_U32(ctx, 31, 0x15AD40u);
    ctx->pc = 0x15AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD38u;
            // 0x15ad3c: 0xc68c0188  lwc1        $f12, 0x188($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD40u; }
        if (ctx->pc != 0x15AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD40u; }
        if (ctx->pc != 0x15AD40u) { return; }
    }
    ctx->pc = 0x15AD40u;
label_15ad40:
    // 0x15ad40: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x15ad44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad48: 0xc04003c  jal         func_1000F0
    ctx->pc = 0x15AD48u;
    SET_GPR_U32(ctx, 31, 0x15AD50u);
    ctx->pc = 0x15AD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD48u;
            // 0x15ad4c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD50u; }
        if (ctx->pc != 0x15AD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD50u; }
        if (ctx->pc != 0x15AD50u) { return; }
    }
    ctx->pc = 0x15AD50u;
label_15ad50:
    // 0x15ad50: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x15AD50u;
    {
        const bool branch_taken_0x15ad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ad50) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15AD58u;
    // 0x15ad58: 0x8e850130  lw          $a1, 0x130($s4)
    ctx->pc = 0x15ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x15ad5c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ad60: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AD60u;
    {
        const bool branch_taken_0x15ad60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ad60) {
            ctx->pc = 0x15AD74u;
            goto label_15ad74;
        }
    }
    ctx->pc = 0x15AD68u;
    // 0x15ad68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15ad6c: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15AD6Cu;
    {
        const bool branch_taken_0x15ad6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD6Cu;
            // 0x15ad70: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad6c) {
            ctx->pc = 0x15AD90u;
            goto label_15ad90;
        }
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x8e8400e0  lw          $a0, 0xE0($s4)
    ctx->pc = 0x15ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x15ad78: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x15ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x15ad7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ad80: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x15ad80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15ad84: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
    ctx->pc = 0x15AD84u;
    {
        const bool branch_taken_0x15ad84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad84) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15AD8Cu;
    // 0x15ad8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15ad90:
    // 0x15ad90: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AD90u;
    {
        const bool branch_taken_0x15ad90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD90u;
            // 0x15ad94: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad90) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD98u;
    // 0x15ad98: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15ad9c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AD9Cu;
    {
        const bool branch_taken_0x15ad9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ad9c) {
            ctx->pc = 0x15ADB8u;
            goto label_15adb8;
        }
    }
    ctx->pc = 0x15ADA4u;
    // 0x15ada4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x15ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_15ada8:
    // 0x15ada8: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x15ADA8u;
    SET_GPR_U32(ctx, 31, 0x15ADB0u);
    ctx->pc = 0x15ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADA8u;
            // 0x15adac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADB0u; }
        if (ctx->pc != 0x15ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADB0u; }
        if (ctx->pc != 0x15ADB0u) { return; }
    }
    ctx->pc = 0x15ADB0u;
label_15adb0:
    // 0x15adb0: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x15ADB0u;
    {
        const bool branch_taken_0x15adb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15adb0) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15ADB8u;
label_15adb8:
    // 0x15adb8: 0x8e8401d4  lw          $a0, 0x1D4($s4)
    ctx->pc = 0x15adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x15adbc: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x15adc0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15adc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ADC4u;
    {
        const bool branch_taken_0x15adc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15adc4) {
            ctx->pc = 0x15ADD8u;
            goto label_15add8;
        }
    }
    ctx->pc = 0x15ADCCu;
    // 0x15adcc: 0x8e831ae4  lw          $v1, 0x1AE4($s4)
    ctx->pc = 0x15adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6884)));
    // 0x15add0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ADD0u;
    {
        const bool branch_taken_0x15add0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15add0) {
            ctx->pc = 0x15ADE4u;
            goto label_15ade4;
        }
    }
    ctx->pc = 0x15ADD8u;
label_15add8:
    // 0x15add8: 0x8e8301c0  lw          $v1, 0x1C0($s4)
    ctx->pc = 0x15add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x15addc: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x15ADDCu;
    {
        const bool branch_taken_0x15addc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15addc) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15ADE4u;
label_15ade4:
    // 0x15ade4: 0x8e8617dc  lw          $a2, 0x17DC($s4)
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6108)));
    // 0x15ade8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ADE8u;
    {
        const bool branch_taken_0x15ade8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADE8u;
            // 0x15adec: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ade8) {
            ctx->pc = 0x15ADF8u;
            goto label_15adf8;
        }
    }
    ctx->pc = 0x15ADF0u;
    // 0x15adf0: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x15adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x15adf4: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_15adf8:
    // 0x15adf8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ADF8u;
    {
        const bool branch_taken_0x15adf8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADF8u;
            // 0x15adfc: 0x30830003  andi        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adf8) {
            ctx->pc = 0x15AE0Cu;
            goto label_15ae0c;
        }
    }
    ctx->pc = 0x15AE00u;
    // 0x15ae00: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15AE00u;
    {
        const bool branch_taken_0x15ae00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae00) {
            ctx->pc = 0x15AE0Cu;
            goto label_15ae0c;
        }
    }
    ctx->pc = 0x15AE08u;
    // 0x15ae08: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x15ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_15ae0c:
    // 0x15ae0c: 0x8e840130  lw          $a0, 0x130($s4)
    ctx->pc = 0x15ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x15ae10: 0x8e91012c  lw          $s1, 0x12C($s4)
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x15ae14: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x15ae14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x15ae18: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x15AE18u;
    {
        const bool branch_taken_0x15ae18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE18u;
            // 0x15ae1c: 0x8e900128  lw          $s0, 0x128($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae18) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15AE20u;
    // 0x15ae20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15ae24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ae28: 0x24a52b10  addiu       $a1, $a1, 0x2B10
    ctx->pc = 0x15ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
    // 0x15ae2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ae30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ae34: 0x800008  jr          $a0
    ctx->pc = 0x15AE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AF0Cu: goto label_15af0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15AE3Cu;
label_15ae3c:
    // 0x15ae3c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x15AE3Cu;
    {
        const bool branch_taken_0x15ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE3Cu;
            // 0x15ae40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae3c) {
            ctx->pc = 0x15AF14u;
            goto label_15af14;
        }
    }
    ctx->pc = 0x15AE44u;
label_15ae44:
    // 0x15ae44: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE44u;
    {
        const bool branch_taken_0x15ae44 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE44u;
            // 0x15ae48: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae44) {
            ctx->pc = 0x15AE54u;
            goto label_15ae54;
        }
    }
    ctx->pc = 0x15AE4Cu;
    // 0x15ae4c: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x15ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x15ae50: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_15ae54:
    // 0x15ae54: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AE54u;
    {
        const bool branch_taken_0x15ae54 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE54u;
            // 0x15ae58: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae54) {
            ctx->pc = 0x15AE68u;
            goto label_15ae68;
        }
    }
    ctx->pc = 0x15AE5Cu;
    // 0x15ae5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15AE5Cu;
    {
        const bool branch_taken_0x15ae5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae5c) {
            ctx->pc = 0x15AE68u;
            goto label_15ae68;
        }
    }
    ctx->pc = 0x15AE64u;
    // 0x15ae64: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x15ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_15ae68:
    // 0x15ae68: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15AE68u;
    {
        const bool branch_taken_0x15ae68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ae68) {
            ctx->pc = 0x15AFC4u;
            goto label_15afc4;
        }
    }
    ctx->pc = 0x15AE70u;
    // 0x15ae70: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x15ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x15ae74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE74u;
    {
        const bool branch_taken_0x15ae74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE74u;
            // 0x15ae78: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae74) {
            ctx->pc = 0x15AE84u;
            goto label_15ae84;
        }
    }
    ctx->pc = 0x15AE7Cu;
    // 0x15ae7c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ae80: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15ae80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15ae84:
    // 0x15ae84: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x15ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x15ae88: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x15ae8c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x15ae8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15ae90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ae94: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AE94u;
    {
        const bool branch_taken_0x15ae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ae94) {
            ctx->pc = 0x15AEB4u;
            goto label_15aeb4;
        }
    }
    ctx->pc = 0x15AE9Cu;
    // 0x15ae9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15aea0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AEA0u;
    {
        const bool branch_taken_0x15aea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15aea0) {
            ctx->pc = 0x15AEB4u;
            goto label_15aeb4;
        }
    }
    ctx->pc = 0x15AEA8u;
    // 0x15aea8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15aeac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AEACu;
    {
        const bool branch_taken_0x15aeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEACu;
            // 0x15aeb0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeac) {
            ctx->pc = 0x15AEC0u;
            goto label_15aec0;
        }
    }
    ctx->pc = 0x15AEB4u;
label_15aeb4:
    // 0x15aeb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15AEB4u;
    {
        const bool branch_taken_0x15aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEB4u;
            // 0x15aeb8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeb4) {
            ctx->pc = 0x15AF14u;
            goto label_15af14;
        }
    }
    ctx->pc = 0x15AEBCu;
    // 0x15aebc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15aec0:
    // 0x15aec0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15AEC0u;
    {
        const bool branch_taken_0x15aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEC0u;
            // 0x15aec4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aec0) {
            ctx->pc = 0x15AF18u;
            goto label_15af18;
        }
    }
    ctx->pc = 0x15AEC8u;
label_15aec8:
    // 0x15aec8: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x15aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x15aecc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15AECCu;
    {
        const bool branch_taken_0x15aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AECCu;
            // 0x15aed0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aecc) {
            ctx->pc = 0x15AF14u;
            goto label_15af14;
        }
    }
    ctx->pc = 0x15AED4u;
label_15aed4:
    // 0x15aed4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15aed8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15aedc: 0x244245f8  addiu       $v0, $v0, 0x45F8
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17912));
    // 0x15aee0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x15aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15aee4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15aee8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15aeec: 0x244245fc  addiu       $v0, $v0, 0x45FC
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17916));
    // 0x15aef0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15aef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aef8: 0x2442023  subu        $a0, $s2, $a0
    ctx->pc = 0x15aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x15aefc: 0x2490fff0  addiu       $s0, $a0, -0x10
    ctx->pc = 0x15aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x15af00: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15af04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15AF04u;
    {
        const bool branch_taken_0x15af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF04u;
            // 0x15af08: 0x2451fff4  addiu       $s1, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af04) {
            ctx->pc = 0x15AF14u;
            goto label_15af14;
        }
    }
    ctx->pc = 0x15AF0Cu;
label_15af0c:
    // 0x15af0c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15AF0Cu;
    {
        const bool branch_taken_0x15af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF0Cu;
            // 0x15af10: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af0c) {
            ctx->pc = 0x15AFC8u;
            goto label_15afc8;
        }
    }
    ctx->pc = 0x15AF14u;
label_15af14:
    // 0x15af14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15af18:
    // 0x15af18: 0xa3a2009a  sb          $v0, 0x9A($sp)
    ctx->pc = 0x15af18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 154), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af1c: 0xa3a20099  sb          $v0, 0x99($sp)
    ctx->pc = 0x15af1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 153), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af20: 0xa3a20098  sb          $v0, 0x98($sp)
    ctx->pc = 0x15af20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af24: 0x92821800  lbu         $v0, 0x1800($s4)
    ctx->pc = 0x15af24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6144)));
    // 0x15af28: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x15af28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x15af2c: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x15af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x15af30: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AF30u;
    {
        const bool branch_taken_0x15af30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF30u;
            // 0x15af34: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af30) {
            ctx->pc = 0x15AF40u;
            goto label_15af40;
        }
    }
    ctx->pc = 0x15AF38u;
    // 0x15af38: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x15af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x15af3c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15af3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15af40:
    // 0x15af40: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15af44: 0xa3a2009b  sb          $v0, 0x9B($sp)
    ctx->pc = 0x15af44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15af4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15af50: 0x246345f0  addiu       $v1, $v1, 0x45F0
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17904));
    // 0x15af54: 0x244245f4  addiu       $v0, $v0, 0x45F4
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17908));
    // 0x15af58: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x15af58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15af5c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x15af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15af60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15af60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15af64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15af68: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15af6c: 0x244245f8  addiu       $v0, $v0, 0x45F8
    ctx->pc = 0x15af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17912));
    // 0x15af70: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15af74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15af78: 0x244245fc  addiu       $v0, $v0, 0x45FC
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17916));
    // 0x15af7c: 0x47a021  addu        $s4, $v0, $a3
    ctx->pc = 0x15af7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15af80: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x15af80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15af84: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x15af84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15af88: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15AF88u;
    SET_GPR_U32(ctx, 31, 0x15AF90u);
    ctx->pc = 0x15AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF88u;
            // 0x15af8c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF90u; }
        if (ctx->pc != 0x15AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF90u; }
        if (ctx->pc != 0x15AF90u) { return; }
    }
    ctx->pc = 0x15AF90u;
label_15af90:
    // 0x15af90: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15af94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af98: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15af9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15af9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afa0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15AFA0u;
    SET_GPR_U32(ctx, 31, 0x15AFA8u);
    ctx->pc = 0x15AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFA0u;
            // 0x15afa4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFA8u; }
        if (ctx->pc != 0x15AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFA8u; }
        if (ctx->pc != 0x15AFA8u) { return; }
    }
    ctx->pc = 0x15AFA8u;
label_15afa8:
    // 0x15afa8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15afac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15afacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb0: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x15afb4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15afb8: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15afbc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x15AFBCu;
    SET_GPR_U32(ctx, 31, 0x15AFC4u);
    ctx->pc = 0x15AFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFBCu;
            // 0x15afc0: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFC4u; }
        if (ctx->pc != 0x15AFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFC4u; }
        if (ctx->pc != 0x15AFC4u) { return; }
    }
    ctx->pc = 0x15AFC4u;
label_15afc4:
    // 0x15afc4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15afc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15afc8:
    // 0x15afc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15afc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15afcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15afccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15afd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15afd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15afd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15afd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15afd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15afd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15afdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15afdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15afe0: 0x3e00008  jr          $ra
    ctx->pc = 0x15AFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFE0u;
            // 0x15afe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AFE8u;
}
