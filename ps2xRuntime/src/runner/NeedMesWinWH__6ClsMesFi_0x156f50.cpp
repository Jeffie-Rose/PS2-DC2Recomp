#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NeedMesWinWH__6ClsMesFi
// Address: 0x156f50 - 0x1579dc
void NeedMesWinWH__6ClsMesFi_0x156f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NeedMesWinWH__6ClsMesFi_0x156f50");
#endif

    switch (ctx->pc) {
        case 0x156f84u: goto label_156f84;
        case 0x156fa0u: goto label_156fa0;
        case 0x156fa4u: goto label_156fa4;
        case 0x157018u: goto label_157018;
        case 0x157034u: goto label_157034;
        case 0x157070u: goto label_157070;
        case 0x157190u: goto label_157190;
        case 0x157200u: goto label_157200;
        case 0x157228u: goto label_157228;
        case 0x157244u: goto label_157244;
        case 0x157278u: goto label_157278;
        case 0x15728cu: goto label_15728c;
        case 0x1573ccu: goto label_1573cc;
        case 0x15742cu: goto label_15742c;
        case 0x15748cu: goto label_15748c;
        case 0x1574acu: goto label_1574ac;
        case 0x1574b8u: goto label_1574b8;
        case 0x1574ecu: goto label_1574ec;
        case 0x15750cu: goto label_15750c;
        case 0x157578u: goto label_157578;
        case 0x15759cu: goto label_15759c;
        case 0x1575a8u: goto label_1575a8;
        case 0x1575dcu: goto label_1575dc;
        case 0x1575fcu: goto label_1575fc;
        case 0x157670u: goto label_157670;
        case 0x157694u: goto label_157694;
        case 0x1576a0u: goto label_1576a0;
        case 0x1576d4u: goto label_1576d4;
        case 0x1576f4u: goto label_1576f4;
        case 0x157790u: goto label_157790;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577e8u: goto label_1577e8;
        case 0x157818u: goto label_157818;
        case 0x157830u: goto label_157830;
        case 0x15785cu: goto label_15785c;
        case 0x157874u: goto label_157874;
        case 0x1578a4u: goto label_1578a4;
        case 0x1578b8u: goto label_1578b8;
        case 0x1578ccu: goto label_1578cc;
        case 0x1578dcu: goto label_1578dc;
        case 0x157904u: goto label_157904;
        case 0x157924u: goto label_157924;
        case 0x157934u: goto label_157934;
        case 0x15794cu: goto label_15794c;
        case 0x157964u: goto label_157964;
        case 0x15797cu: goto label_15797c;
        case 0x157994u: goto label_157994;
        case 0x1579b0u: goto label_1579b0;
        default: break;
    }

    ctx->pc = 0x156f50u;

    // 0x156f50: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x156f54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x156f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x156f58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x156f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x156f5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x156f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x156f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156f70: 0x8c8321d4  lw          $v1, 0x21D4($a0)
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8660)));
    // 0x156f74: 0x10600290  beqz        $v1, . + 4 + (0x290 << 2)
    ctx->pc = 0x156F74u;
    {
        const bool branch_taken_0x156f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F74u;
            // 0x156f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f74) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x156F7Cu;
    // 0x156f7c: 0xc0557b8  jal         func_155EE0
    ctx->pc = 0x156F7Cu;
    SET_GPR_U32(ctx, 31, 0x156F84u);
    ctx->pc = 0x155EE0u;
    if (runtime->hasFunction(0x155EE0u)) {
        auto targetFn = runtime->lookupFunction(0x155EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F84u; }
        if (ctx->pc != 0x156F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextLineDataTop__6ClsMesFi_0x155ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F84u; }
        if (ctx->pc != 0x156F84u) { return; }
    }
    ctx->pc = 0x156F84u;
label_156f84:
    // 0x156f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x156f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f88: 0x1220028b  beqz        $s1, . + 4 + (0x28B << 2)
    ctx->pc = 0x156F88u;
    {
        const bool branch_taken_0x156f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f88) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x156F90u;
    // 0x156f90: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x156f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x156f94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x156f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156fa0:
    // 0x156fa0: 0x96350000  lhu         $s5, 0x0($s1)
    ctx->pc = 0x156fa0u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_156fa4:
    // 0x156fa4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x156fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x156fa8: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156FA8u;
    {
        const bool branch_taken_0x156fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FA8u;
            // 0x156fac: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa8) {
            ctx->pc = 0x156FC4u;
            goto label_156fc4;
        }
    }
    ctx->pc = 0x156FB0u;
    // 0x156fb0: 0x3402ff03  ori         $v0, $zero, 0xFF03
    ctx->pc = 0x156fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
    // 0x156fb4: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156FB4u;
    {
        const bool branch_taken_0x156fb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x156FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FB4u;
            // 0x156fb8: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fb4) {
            ctx->pc = 0x156FC4u;
            goto label_156fc4;
        }
    }
    ctx->pc = 0x156FBCu;
    // 0x156fbc: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156FBCu;
    {
        const bool branch_taken_0x156fbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x156fbc) {
            ctx->pc = 0x156FD4u;
            goto label_156fd4;
        }
    }
    ctx->pc = 0x156FC4u;
label_156fc4:
    // 0x156fc4: 0x0  nop
    ctx->pc = 0x156fc4u;
    // NOP
    // 0x156fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156fcc: 0xae021adc  sw          $v0, 0x1ADC($s0)
    ctx->pc = 0x156fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6876), GPR_U32(ctx, 2));
    // 0x156fd0: 0xae021ae0  sw          $v0, 0x1AE0($s0)
    ctx->pc = 0x156fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6880), GPR_U32(ctx, 2));
label_156fd4:
    // 0x156fd4: 0x0  nop
    ctx->pc = 0x156fd4u;
    // NOP
    // 0x156fd8: 0x3402ff03  ori         $v0, $zero, 0xFF03
    ctx->pc = 0x156fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
    // 0x156fdc: 0x12a200a1  beq         $s5, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x156FDCu;
    {
        const bool branch_taken_0x156fdc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x156FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FDCu;
            // 0x156fe0: 0x3402ff00  ori         $v0, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fdc) {
            ctx->pc = 0x157264u;
            goto label_157264;
        }
    }
    ctx->pc = 0x156FE4u;
    // 0x156fe4: 0x12a20092  beq         $s5, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x156FE4u;
    {
        const bool branch_taken_0x156fe4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x156FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FE4u;
            // 0x156fe8: 0x3402ff02  ori         $v0, $zero, 0xFF02 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fe4) {
            ctx->pc = 0x157230u;
            goto label_157230;
        }
    }
    ctx->pc = 0x156FECu;
    // 0x156fec: 0x12a20079  beq         $s5, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x156FECu;
    {
        const bool branch_taken_0x156fec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x156FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FECu;
            // 0x156ff0: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fec) {
            ctx->pc = 0x1571D4u;
            goto label_1571d4;
        }
    }
    ctx->pc = 0x156FF4u;
    // 0x156ff4: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156FF4u;
    {
        const bool branch_taken_0x156ff4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x156ff4) {
            ctx->pc = 0x157004u;
            goto label_157004;
        }
    }
    ctx->pc = 0x156FFCu;
    // 0x156ffc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x156FFCu;
    {
        const bool branch_taken_0x156ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ffc) {
            ctx->pc = 0x157298u;
            goto label_157298;
        }
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0x0  nop
    ctx->pc = 0x157004u;
    // NOP
    // 0x157008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15700c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157010: 0xc055b90  jal         func_156E40
    ctx->pc = 0x157010u;
    SET_GPR_U32(ctx, 31, 0x157018u);
    ctx->pc = 0x157014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157010u;
            // 0x157014: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E40u;
    if (runtime->hasFunction(0x156E40u)) {
        auto targetFn = runtime->lookupFunction(0x156E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157018u; }
        if (ctx->pc != 0x157018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPage__6ClsMesFii_0x156e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157018u; }
        if (ctx->pc != 0x157018u) { return; }
    }
    ctx->pc = 0x157018u;
label_157018:
    // 0x157018: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15701c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15701cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157020: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x157020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x157024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157028: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15702c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x157030: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x157030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_157034:
    // 0x157034: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x157038: 0x8c641e14  lw          $a0, 0x1E14($v1)
    ctx->pc = 0x157038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7700)));
    // 0x15703c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15703Cu;
    {
        const bool branch_taken_0x15703c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15703c) {
            ctx->pc = 0x157058u;
            goto label_157058;
        }
    }
    ctx->pc = 0x157044u;
    // 0x157044: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x157044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157048: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x157048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15704c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15704Cu;
    {
        const bool branch_taken_0x15704c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15704c) {
            ctx->pc = 0x157058u;
            goto label_157058;
        }
    }
    ctx->pc = 0x157054u;
    // 0x157054: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x157054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
label_157058:
    // 0x157058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x157058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15705c: 0x28a30014  slti        $v1, $a1, 0x14
    ctx->pc = 0x15705cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x157060: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x157060u;
    {
        const bool branch_taken_0x157060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157060u;
            // 0x157064: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157060) {
            ctx->pc = 0x157034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157034;
        }
    }
    ctx->pc = 0x157068u;
    // 0x157068: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x157068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15706c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157070:
    // 0x157070: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x157074: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x157074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157078: 0x8ca61e14  lw          $a2, 0x1E14($a1)
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7700)));
    // 0x15707c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15707cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x157080: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157080u;
    {
        const bool branch_taken_0x157080 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x157084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157080u;
            // 0x157084: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157080) {
            ctx->pc = 0x157090u;
            goto label_157090;
        }
    }
    ctx->pc = 0x157088u;
    // 0x157088: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x157088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15708c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15708cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_157090:
    // 0x157090: 0xaca61b44  sw          $a2, 0x1B44($a1)
    ctx->pc = 0x157090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6980), GPR_U32(ctx, 6));
    // 0x157094: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157098: 0x8ca61e18  lw          $a2, 0x1E18($a1)
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7704)));
    // 0x15709c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1570a0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570A0u;
    {
        const bool branch_taken_0x1570a0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1570A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570A0u;
            // 0x1570a4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570a0) {
            ctx->pc = 0x1570B0u;
            goto label_1570b0;
        }
    }
    ctx->pc = 0x1570A8u;
    // 0x1570a8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1570ac: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1570b0:
    // 0x1570b0: 0xaca61b48  sw          $a2, 0x1B48($a1)
    ctx->pc = 0x1570b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6984), GPR_U32(ctx, 6));
    // 0x1570b4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1570b8: 0x8ca61e1c  lw          $a2, 0x1E1C($a1)
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7708)));
    // 0x1570bc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1570bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1570c0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570C0u;
    {
        const bool branch_taken_0x1570c0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1570C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570C0u;
            // 0x1570c4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570c0) {
            ctx->pc = 0x1570D0u;
            goto label_1570d0;
        }
    }
    ctx->pc = 0x1570C8u;
    // 0x1570c8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1570cc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1570d0:
    // 0x1570d0: 0xaca61b4c  sw          $a2, 0x1B4C($a1)
    ctx->pc = 0x1570d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6988), GPR_U32(ctx, 6));
    // 0x1570d4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1570d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1570d8: 0x8ca61e20  lw          $a2, 0x1E20($a1)
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7712)));
    // 0x1570dc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1570dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1570e0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570E0u;
    {
        const bool branch_taken_0x1570e0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1570E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570E0u;
            // 0x1570e4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570e0) {
            ctx->pc = 0x1570F0u;
            goto label_1570f0;
        }
    }
    ctx->pc = 0x1570E8u;
    // 0x1570e8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1570e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1570ec: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1570f0:
    // 0x1570f0: 0xaca61b50  sw          $a2, 0x1B50($a1)
    ctx->pc = 0x1570f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6992), GPR_U32(ctx, 6));
    // 0x1570f4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1570f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1570f8: 0x8ca61e24  lw          $a2, 0x1E24($a1)
    ctx->pc = 0x1570f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7716)));
    // 0x1570fc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1570fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x157100: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157100u;
    {
        const bool branch_taken_0x157100 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x157104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157100u;
            // 0x157104: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157100) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x157108u;
    // 0x157108: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15710c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_157110:
    // 0x157110: 0xaca61b54  sw          $a2, 0x1B54($a1)
    ctx->pc = 0x157110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6996), GPR_U32(ctx, 6));
    // 0x157114: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x157114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157118: 0x8ca61e28  lw          $a2, 0x1E28($a1)
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7720)));
    // 0x15711c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15711cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x157120: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157120u;
    {
        const bool branch_taken_0x157120 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x157124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157120u;
            // 0x157124: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157120) {
            ctx->pc = 0x157130u;
            goto label_157130;
        }
    }
    ctx->pc = 0x157128u;
    // 0x157128: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15712c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15712cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_157130:
    // 0x157130: 0xaca61b58  sw          $a2, 0x1B58($a1)
    ctx->pc = 0x157130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7000), GPR_U32(ctx, 6));
    // 0x157134: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157138: 0x8ca61e2c  lw          $a2, 0x1E2C($a1)
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7724)));
    // 0x15713c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15713cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x157140: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157140u;
            // 0x157144: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x157150u;
            goto label_157150;
        }
    }
    ctx->pc = 0x157148u;
    // 0x157148: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x157148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15714c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15714cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_157150:
    // 0x157150: 0xaca61b5c  sw          $a2, 0x1B5C($a1)
    ctx->pc = 0x157150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7004), GPR_U32(ctx, 6));
    // 0x157154: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x157154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157158: 0x8ca61e30  lw          $a2, 0x1E30($a1)
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7728)));
    // 0x15715c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15715cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x157160: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157160u;
    {
        const bool branch_taken_0x157160 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x157164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157160u;
            // 0x157164: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157160) {
            ctx->pc = 0x157170u;
            goto label_157170;
        }
    }
    ctx->pc = 0x157168u;
    // 0x157168: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x157168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15716c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_157170:
    // 0x157170: 0xaca61b60  sw          $a2, 0x1B60($a1)
    ctx->pc = 0x157170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 6));
    // 0x157174: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x157174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x157178: 0x2865000c  slti        $a1, $v1, 0xC
    ctx->pc = 0x157178u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x15717c: 0x14a0ffbc  bnez        $a1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x15717Cu;
    {
        const bool branch_taken_0x15717c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15717Cu;
            // 0x157180: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15717c) {
            ctx->pc = 0x157070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157070;
        }
    }
    ctx->pc = 0x157184u;
    // 0x157184: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x157184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x157188: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x157188u;
    {
        const bool branch_taken_0x157188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157188u;
            // 0x15718c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157188) {
            ctx->pc = 0x1571C4u;
            goto label_1571c4;
        }
    }
    ctx->pc = 0x157190u;
label_157190:
    // 0x157190: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x157194: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157198: 0x8ce41e14  lw          $a0, 0x1E14($a3)
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7700)));
    // 0x15719c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1571a0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1571A0u;
    {
        const bool branch_taken_0x1571a0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1571A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571A0u;
            // 0x1571a4: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571a0) {
            ctx->pc = 0x1571B0u;
            goto label_1571b0;
        }
    }
    ctx->pc = 0x1571A8u;
    // 0x1571a8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1571a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1571ac: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1571b0:
    // 0x1571b0: 0xace41b44  sw          $a0, 0x1B44($a3)
    ctx->pc = 0x1571b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 4));
    // 0x1571b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1571b8: 0x28640014  slti        $a0, $v1, 0x14
    ctx->pc = 0x1571b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1571bc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1571BCu;
    {
        const bool branch_taken_0x1571bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1571C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571BCu;
            // 0x1571c0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571bc) {
            ctx->pc = 0x157190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157190;
        }
    }
    ctx->pc = 0x1571C4u;
label_1571c4:
    // 0x1571c4: 0x0  nop
    ctx->pc = 0x1571c4u;
    // NOP
    // 0x1571c8: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1571c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1571cc: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x1571CCu;
    {
        const bool branch_taken_0x1571cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571CCu;
            // 0x1571d0: 0xae0300e4  sw          $v1, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571cc) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x1571D4u;
label_1571d4:
    // 0x1571d4: 0x8e021ae0  lw          $v0, 0x1AE0($s0)
    ctx->pc = 0x1571d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6880)));
    // 0x1571d8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1571D8u;
    {
        const bool branch_taken_0x1571d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1571d8) {
            ctx->pc = 0x1571ECu;
            goto label_1571ec;
        }
    }
    ctx->pc = 0x1571E0u;
    // 0x1571e0: 0x8e021adc  lw          $v0, 0x1ADC($s0)
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6876)));
    // 0x1571e4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1571E4u;
    {
        const bool branch_taken_0x1571e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1571e4) {
            ctx->pc = 0x157208u;
            goto label_157208;
        }
    }
    ctx->pc = 0x1571ECu;
label_1571ec:
    // 0x1571ec: 0x0  nop
    ctx->pc = 0x1571ecu;
    // NOP
    // 0x1571f0: 0x8e061adc  lw          $a2, 0x1ADC($s0)
    ctx->pc = 0x1571f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6876)));
    // 0x1571f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1571f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571f8: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1571F8u;
    SET_GPR_U32(ctx, 31, 0x157200u);
    ctx->pc = 0x1571FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1571F8u;
            // 0x1571fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157200u; }
        if (ctx->pc != 0x157200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157200u; }
        if (ctx->pc != 0x157200u) { return; }
    }
    ctx->pc = 0x157200u;
label_157200:
    // 0x157200: 0x1000ff68  b           . + 4 + (-0x98 << 2)
    ctx->pc = 0x157200u;
    {
        const bool branch_taken_0x157200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157200u;
            // 0x157204: 0x96350000  lhu         $s5, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157200) {
            ctx->pc = 0x156FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa4;
        }
    }
    ctx->pc = 0x157208u;
label_157208:
    // 0x157208: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x15720c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15720Cu;
    {
        const bool branch_taken_0x15720c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15720Cu;
            // 0x157210: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15720c) {
            ctx->pc = 0x15721Cu;
            goto label_15721c;
        }
    }
    ctx->pc = 0x157214u;
    // 0x157214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157218: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x157218u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_15721c:
    // 0x15721c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157220: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157220u;
    SET_GPR_U32(ctx, 31, 0x157228u);
    ctx->pc = 0x157224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157220u;
            // 0x157224: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157228u; }
        if (ctx->pc != 0x157228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157228u; }
        if (ctx->pc != 0x157228u) { return; }
    }
    ctx->pc = 0x157228u;
label_157228:
    // 0x157228: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
    ctx->pc = 0x157228u;
    {
        const bool branch_taken_0x157228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157228) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157230u;
label_157230:
    // 0x157230: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x157234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15723c: 0xc055b88  jal         func_156E20
    ctx->pc = 0x15723Cu;
    SET_GPR_U32(ctx, 31, 0x157244u);
    ctx->pc = 0x157240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15723Cu;
            // 0x157240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (runtime->hasFunction(0x156E20u)) {
        auto targetFn = runtime->lookupFunction(0x156E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157244u; }
        if (ctx->pc != 0x157244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetYokoHaba__6ClsMesFii_0x156e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157244u; }
        if (ctx->pc != 0x157244u) { return; }
    }
    ctx->pc = 0x157244u;
label_157244:
    // 0x157244: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x157244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x157248: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x157248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15724c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x15724cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x157250: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x157250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x157254: 0x1020ff52  beqz        $at, . + 4 + (-0xAE << 2)
    ctx->pc = 0x157254u;
    {
        const bool branch_taken_0x157254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157254) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15725Cu;
    // 0x15725c: 0x1000ff50  b           . + 4 + (-0xB0 << 2)
    ctx->pc = 0x15725Cu;
    {
        const bool branch_taken_0x15725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15725Cu;
            // 0x157260: 0xae1200dc  sw          $s2, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15725c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157264u;
label_157264:
    // 0x157264: 0x0  nop
    ctx->pc = 0x157264u;
    // NOP
    // 0x157268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15726c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15726cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157270: 0xc055b90  jal         func_156E40
    ctx->pc = 0x157270u;
    SET_GPR_U32(ctx, 31, 0x157278u);
    ctx->pc = 0x157274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157270u;
            // 0x157274: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E40u;
    if (runtime->hasFunction(0x156E40u)) {
        auto targetFn = runtime->lookupFunction(0x156E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157278u; }
        if (ctx->pc != 0x157278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPage__6ClsMesFii_0x156e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157278u; }
        if (ctx->pc != 0x157278u) { return; }
    }
    ctx->pc = 0x157278u;
label_157278:
    // 0x157278: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15727c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157280: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157284: 0xc055b88  jal         func_156E20
    ctx->pc = 0x157284u;
    SET_GPR_U32(ctx, 31, 0x15728Cu);
    ctx->pc = 0x157288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157284u;
            // 0x157288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (runtime->hasFunction(0x156E20u)) {
        auto targetFn = runtime->lookupFunction(0x156E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15728Cu; }
        if (ctx->pc != 0x15728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetYokoHaba__6ClsMesFii_0x156e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15728Cu; }
        if (ctx->pc != 0x15728Cu) { return; }
    }
    ctx->pc = 0x15728Cu;
label_15728c:
    // 0x15728c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15728cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157290: 0x1000ff43  b           . + 4 + (-0xBD << 2)
    ctx->pc = 0x157290u;
    {
        const bool branch_taken_0x157290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157290u;
            // 0x157294: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157290) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157298u;
label_157298:
    // 0x157298: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x157298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x15729c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15729cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1572a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1572A0u;
    {
        const bool branch_taken_0x1572a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1572A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572A0u;
            // 0x1572a4: 0x3401ff00  ori         $at, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572a0) {
            ctx->pc = 0x1572B4u;
            goto label_1572b4;
        }
    }
    ctx->pc = 0x1572A8u;
    // 0x1572a8: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1572a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1572ac: 0x1420ff3c  bnez        $at, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1572ACu;
    {
        const bool branch_taken_0x1572ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572ac) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1572B4u;
label_1572b4:
    // 0x1572b4: 0x0  nop
    ctx->pc = 0x1572b4u;
    // NOP
    // 0x1572b8: 0x3402fc00  ori         $v0, $zero, 0xFC00
    ctx->pc = 0x1572b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x1572bc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1572bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1572c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1572C0u;
    {
        const bool branch_taken_0x1572c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1572C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572C0u;
            // 0x1572c4: 0x3401fd00  ori         $at, $zero, 0xFD00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572c0) {
            ctx->pc = 0x1572D4u;
            goto label_1572d4;
        }
    }
    ctx->pc = 0x1572C8u;
    // 0x1572c8: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1572c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1572cc: 0x1420ff34  bnez        $at, . + 4 + (-0xCC << 2)
    ctx->pc = 0x1572CCu;
    {
        const bool branch_taken_0x1572cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572cc) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1572D4u;
label_1572d4:
    // 0x1572d4: 0x0  nop
    ctx->pc = 0x1572d4u;
    // NOP
    // 0x1572d8: 0x3402f500  ori         $v0, $zero, 0xF500
    ctx->pc = 0x1572d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
    // 0x1572dc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1572dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1572e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1572E0u;
    {
        const bool branch_taken_0x1572e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1572E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572E0u;
            // 0x1572e4: 0x3401f600  ori         $at, $zero, 0xF600 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572e0) {
            ctx->pc = 0x1572F4u;
            goto label_1572f4;
        }
    }
    ctx->pc = 0x1572E8u;
    // 0x1572e8: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1572e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1572ec: 0x1420ff2c  bnez        $at, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x1572ECu;
    {
        const bool branch_taken_0x1572ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572ec) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1572F4u;
label_1572f4:
    // 0x1572f4: 0x0  nop
    ctx->pc = 0x1572f4u;
    // NOP
    // 0x1572f8: 0x3402f400  ori         $v0, $zero, 0xF400
    ctx->pc = 0x1572f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
    // 0x1572fc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1572fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157300: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157300u;
    {
        const bool branch_taken_0x157300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157300u;
            // 0x157304: 0x3401f500  ori         $at, $zero, 0xF500 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157300) {
            ctx->pc = 0x157314u;
            goto label_157314;
        }
    }
    ctx->pc = 0x157308u;
    // 0x157308: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15730c: 0x1420ff24  bnez        $at, . + 4 + (-0xDC << 2)
    ctx->pc = 0x15730Cu;
    {
        const bool branch_taken_0x15730c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15730c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157314u;
label_157314:
    // 0x157314: 0x0  nop
    ctx->pc = 0x157314u;
    // NOP
    // 0x157318: 0x3402f300  ori         $v0, $zero, 0xF300
    ctx->pc = 0x157318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
    // 0x15731c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15731cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157320: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157320u;
    {
        const bool branch_taken_0x157320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157320u;
            // 0x157324: 0x3401f400  ori         $at, $zero, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157320) {
            ctx->pc = 0x157334u;
            goto label_157334;
        }
    }
    ctx->pc = 0x157328u;
    // 0x157328: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15732c: 0x1420ff1c  bnez        $at, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15732c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157334u;
label_157334:
    // 0x157334: 0x0  nop
    ctx->pc = 0x157334u;
    // NOP
    // 0x157338: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x157338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x15733c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15733cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157340: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157340u;
    {
        const bool branch_taken_0x157340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157340u;
            // 0x157344: 0x3401f300  ori         $at, $zero, 0xF300 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157340) {
            ctx->pc = 0x157354u;
            goto label_157354;
        }
    }
    ctx->pc = 0x157348u;
    // 0x157348: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15734c: 0x1420ff14  bnez        $at, . + 4 + (-0xEC << 2)
    ctx->pc = 0x15734Cu;
    {
        const bool branch_taken_0x15734c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15734c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157354u;
label_157354:
    // 0x157354: 0x0  nop
    ctx->pc = 0x157354u;
    // NOP
    // 0x157358: 0x3402f600  ori         $v0, $zero, 0xF600
    ctx->pc = 0x157358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
    // 0x15735c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15735cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157360: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157360u;
    {
        const bool branch_taken_0x157360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157360u;
            // 0x157364: 0x3401f700  ori         $at, $zero, 0xF700 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157360) {
            ctx->pc = 0x157374u;
            goto label_157374;
        }
    }
    ctx->pc = 0x157368u;
    // 0x157368: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15736c: 0x1420ff0c  bnez        $at, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15736c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157374u;
label_157374:
    // 0x157374: 0x0  nop
    ctx->pc = 0x157374u;
    // NOP
    // 0x157378: 0x3402ff04  ori         $v0, $zero, 0xFF04
    ctx->pc = 0x157378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65284);
    // 0x15737c: 0x12a2ff08  beq         $s5, $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x15737Cu;
    {
        const bool branch_taken_0x15737c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15737Cu;
            // 0x157380: 0x3402ff05  ori         $v0, $zero, 0xFF05 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65285);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15737c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157384u;
    // 0x157384: 0x12a2ff06  beq         $s5, $v0, . + 4 + (-0xFA << 2)
    ctx->pc = 0x157384u;
    {
        const bool branch_taken_0x157384 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157384u;
            // 0x157388: 0x3402ff06  ori         $v0, $zero, 0xFF06 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65286);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157384) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15738Cu;
    // 0x15738c: 0x12a2ff04  beq         $s5, $v0, . + 4 + (-0xFC << 2)
    ctx->pc = 0x15738Cu;
    {
        const bool branch_taken_0x15738c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15738Cu;
            // 0x157390: 0x3402f700  ori         $v0, $zero, 0xF700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15738c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157394u;
    // 0x157394: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x157394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157398: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157398u;
    {
        const bool branch_taken_0x157398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157398u;
            // 0x15739c: 0x3401f800  ori         $at, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157398) {
            ctx->pc = 0x1573D4u;
            goto label_1573d4;
        }
    }
    ctx->pc = 0x1573A0u;
    // 0x1573a0: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1573a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1573a4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1573A4u;
    {
        const bool branch_taken_0x1573a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573A4u;
            // 0x1573a8: 0x26a28000  addiu       $v0, $s5, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573a4) {
            ctx->pc = 0x1573D4u;
            goto label_1573d4;
        }
    }
    ctx->pc = 0x1573ACu;
    // 0x1573ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1573acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573b0: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x1573b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1573b8: 0xae021ae0  sw          $v0, 0x1AE0($s0)
    ctx->pc = 0x1573b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6880), GPR_U32(ctx, 2));
    // 0x1573bc: 0x8e051ae0  lw          $a1, 0x1AE0($s0)
    ctx->pc = 0x1573bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6880)));
    // 0x1573c0: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x1573c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1573c4: 0xc0558c8  jal         func_156320
    ctx->pc = 0x1573C4u;
    SET_GPR_U32(ctx, 31, 0x1573CCu);
    ctx->pc = 0x1573C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573C4u;
            // 0x1573c8: 0x2627fffe  addiu       $a3, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156320u;
    if (runtime->hasFunction(0x156320u)) {
        auto targetFn = runtime->lookupFunction(0x156320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573CCu; }
        if (ctx->pc != 0x1573CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcSpaceW__6ClsMesFiiPUs_0x156320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573CCu; }
        if (ctx->pc != 0x1573CCu) { return; }
    }
    ctx->pc = 0x1573CCu;
label_1573cc:
    // 0x1573cc: 0x1000fef4  b           . + 4 + (-0x10C << 2)
    ctx->pc = 0x1573CCu;
    {
        const bool branch_taken_0x1573cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573CCu;
            // 0x1573d0: 0xae021adc  sw          $v0, 0x1ADC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573cc) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1573D4u;
label_1573d4:
    // 0x1573d4: 0x0  nop
    ctx->pc = 0x1573d4u;
    // NOP
    // 0x1573d8: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1573d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1573dc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1573dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1573e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1573E0u;
    {
        const bool branch_taken_0x1573e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1573E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573E0u;
            // 0x1573e4: 0x3401f900  ori         $at, $zero, 0xF900 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573e0) {
            ctx->pc = 0x157400u;
            goto label_157400;
        }
    }
    ctx->pc = 0x1573E8u;
    // 0x1573e8: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1573ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1573ECu;
    {
        const bool branch_taken_0x1573ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573ECu;
            // 0x1573f0: 0x26a28000  addiu       $v0, $s5, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573ec) {
            ctx->pc = 0x157400u;
            goto label_157400;
        }
    }
    ctx->pc = 0x1573F4u;
    // 0x1573f4: 0x24428800  addiu       $v0, $v0, -0x7800
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
    // 0x1573f8: 0x1000fee9  b           . + 4 + (-0x117 << 2)
    ctx->pc = 0x1573F8u;
    {
        const bool branch_taken_0x1573f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573F8u;
            // 0x1573fc: 0xae021adc  sw          $v0, 0x1ADC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573f8) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157400u;
label_157400:
    // 0x157400: 0x3402f900  ori         $v0, $zero, 0xF900
    ctx->pc = 0x157400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x157404: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x157404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157408: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157408u;
    {
        const bool branch_taken_0x157408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157408u;
            // 0x15740c: 0x3401fa00  ori         $at, $zero, 0xFA00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157408) {
            ctx->pc = 0x157434u;
            goto label_157434;
        }
    }
    ctx->pc = 0x157410u;
    // 0x157410: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x157414: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x157414u;
    {
        const bool branch_taken_0x157414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157414u;
            // 0x157418: 0x26a28000  addiu       $v0, $s5, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157414) {
            ctx->pc = 0x157434u;
            goto label_157434;
        }
    }
    ctx->pc = 0x15741Cu;
    // 0x15741c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157420: 0x24468700  addiu       $a2, $v0, -0x7900
    ctx->pc = 0x157420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x157424: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157424u;
    SET_GPR_U32(ctx, 31, 0x15742Cu);
    ctx->pc = 0x157428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157424u;
            // 0x157428: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15742Cu; }
        if (ctx->pc != 0x15742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15742Cu; }
        if (ctx->pc != 0x15742Cu) { return; }
    }
    ctx->pc = 0x15742Cu;
label_15742c:
    // 0x15742c: 0x1000fedc  b           . + 4 + (-0x124 << 2)
    ctx->pc = 0x15742Cu;
    {
        const bool branch_taken_0x15742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15742c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157434u;
label_157434:
    // 0x157434: 0x0  nop
    ctx->pc = 0x157434u;
    // NOP
    // 0x157438: 0x26a28000  addiu       $v0, $s5, -0x8000
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934528));
    // 0x15743c: 0x24448500  addiu       $a0, $v0, -0x7B00
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x157440: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x157440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x157444: 0x14820033  bne         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x157444u;
    {
        const bool branch_taken_0x157444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x157444) {
            ctx->pc = 0x157514u;
            goto label_157514;
        }
    }
    ctx->pc = 0x15744Cu;
    // 0x15744c: 0x8e021acc  lw          $v0, 0x1ACC($s0)
    ctx->pc = 0x15744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6860)));
    // 0x157450: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157450u;
    {
        const bool branch_taken_0x157450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157450) {
            ctx->pc = 0x157464u;
            goto label_157464;
        }
    }
    ctx->pc = 0x157458u;
    // 0x157458: 0x8e021ac4  lw          $v0, 0x1AC4($s0)
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6852)));
    // 0x15745c: 0x1040fed0  beqz        $v0, . + 4 + (-0x130 << 2)
    ctx->pc = 0x15745Cu;
    {
        const bool branch_taken_0x15745c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15745c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157464u;
label_157464:
    // 0x157464: 0x0  nop
    ctx->pc = 0x157464u;
    // NOP
    // 0x157468: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x157468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x15746c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15746Cu;
    {
        const bool branch_taken_0x15746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15746c) {
            ctx->pc = 0x157494u;
            goto label_157494;
        }
    }
    ctx->pc = 0x157474u;
    // 0x157474: 0x8e061ac4  lw          $a2, 0x1AC4($s0)
    ctx->pc = 0x157474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6852)));
    // 0x157478: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x157478u;
    {
        const bool branch_taken_0x157478 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x15747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157478u;
            // 0x15747c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157478) {
            ctx->pc = 0x157494u;
            goto label_157494;
        }
    }
    ctx->pc = 0x157480u;
    // 0x157480: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x157480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x157484: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157484u;
    SET_GPR_U32(ctx, 31, 0x15748Cu);
    ctx->pc = 0x157488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157484u;
            // 0x157488: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15748Cu; }
        if (ctx->pc != 0x15748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15748Cu; }
        if (ctx->pc != 0x15748Cu) { return; }
    }
    ctx->pc = 0x15748Cu;
label_15748c:
    // 0x15748c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15748Cu;
    {
        const bool branch_taken_0x15748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15748c) {
            ctx->pc = 0x1574ACu;
            goto label_1574ac;
        }
    }
    ctx->pc = 0x157494u;
label_157494:
    // 0x157494: 0x0  nop
    ctx->pc = 0x157494u;
    // NOP
    // 0x157498: 0x8e061ac4  lw          $a2, 0x1AC4($s0)
    ctx->pc = 0x157498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6852)));
    // 0x15749c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15749cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1574a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1574a4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1574A4u;
    SET_GPR_U32(ctx, 31, 0x1574ACu);
    ctx->pc = 0x1574A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574A4u;
            // 0x1574a8: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574ACu; }
        if (ctx->pc != 0x1574ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574ACu; }
        if (ctx->pc != 0x1574ACu) { return; }
    }
    ctx->pc = 0x1574ACu;
label_1574ac:
    // 0x1574ac: 0x0  nop
    ctx->pc = 0x1574acu;
    // NOP
    // 0x1574b0: 0xc04a422  jal         func_129088
    ctx->pc = 0x1574B0u;
    SET_GPR_U32(ctx, 31, 0x1574B8u);
    ctx->pc = 0x1574B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574B0u;
            // 0x1574b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574B8u; }
        if (ctx->pc != 0x1574B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574B8u; }
        if (ctx->pc != 0x1574B8u) { return; }
    }
    ctx->pc = 0x1574B8u;
label_1574b8:
    // 0x1574b8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1574bc: 0x8e021ad0  lw          $v0, 0x1AD0($s0)
    ctx->pc = 0x1574bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x1574c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1574C0u;
    {
        const bool branch_taken_0x1574c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1574c0) {
            ctx->pc = 0x1574F4u;
            goto label_1574f4;
        }
    }
    ctx->pc = 0x1574C8u;
    // 0x1574c8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1574c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1574cc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1574ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1574d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1574D0u;
    {
        const bool branch_taken_0x1574d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1574D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574D0u;
            // 0x1574d4: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574d0) {
            ctx->pc = 0x1574E0u;
            goto label_1574e0;
        }
    }
    ctx->pc = 0x1574D8u;
    // 0x1574d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1574d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1574dc: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1574e0:
    // 0x1574e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1574e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574e4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1574E4u;
    SET_GPR_U32(ctx, 31, 0x1574ECu);
    ctx->pc = 0x1574E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574E4u;
            // 0x1574e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574ECu; }
        if (ctx->pc != 0x1574ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574ECu; }
        if (ctx->pc != 0x1574ECu) { return; }
    }
    ctx->pc = 0x1574ECu;
label_1574ec:
    // 0x1574ec: 0x1000feac  b           . + 4 + (-0x154 << 2)
    ctx->pc = 0x1574ECu;
    {
        const bool branch_taken_0x1574ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1574ec) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1574F4u;
label_1574f4:
    // 0x1574f4: 0x0  nop
    ctx->pc = 0x1574f4u;
    // NOP
    // 0x1574f8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1574fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1574fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157504: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157504u;
    SET_GPR_U32(ctx, 31, 0x15750Cu);
    ctx->pc = 0x157508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157504u;
            // 0x157508: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15750Cu; }
        if (ctx->pc != 0x15750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15750Cu; }
        if (ctx->pc != 0x15750Cu) { return; }
    }
    ctx->pc = 0x15750Cu;
label_15750c:
    // 0x15750c: 0x1000fea4  b           . + 4 + (-0x15C << 2)
    ctx->pc = 0x15750Cu;
    {
        const bool branch_taken_0x15750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15750c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157514u;
label_157514:
    // 0x157514: 0x0  nop
    ctx->pc = 0x157514u;
    // NOP
    // 0x157518: 0x288200f3  slti        $v0, $a0, 0xF3
    ctx->pc = 0x157518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)243) ? 1 : 0);
    // 0x15751c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15751Cu;
    {
        const bool branch_taken_0x15751c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15751Cu;
            // 0x157520: 0x288100fb  slti        $at, $a0, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15751c) {
            ctx->pc = 0x157604u;
            goto label_157604;
        }
    }
    ctx->pc = 0x157524u;
    // 0x157524: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x157524u;
    {
        const bool branch_taken_0x157524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157524) {
            ctx->pc = 0x157604u;
            goto label_157604;
        }
    }
    ctx->pc = 0x15752Cu;
    // 0x15752c: 0x8e021acc  lw          $v0, 0x1ACC($s0)
    ctx->pc = 0x15752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6860)));
    // 0x157530: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x157530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x157534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157534u;
    {
        const bool branch_taken_0x157534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157534u;
            // 0x157538: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157534) {
            ctx->pc = 0x157550u;
            goto label_157550;
        }
    }
    ctx->pc = 0x15753Cu;
    // 0x15753c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157540: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157544: 0x8c421a44  lw          $v0, 0x1A44($v0)
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157548: 0x1040fe95  beqz        $v0, . + 4 + (-0x16B << 2)
    ctx->pc = 0x157548u;
    {
        const bool branch_taken_0x157548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157548) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157550u;
label_157550:
    // 0x157550: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x157550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x157554: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157554u;
    {
        const bool branch_taken_0x157554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157554u;
            // 0x157558: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157554) {
            ctx->pc = 0x157580u;
            goto label_157580;
        }
    }
    ctx->pc = 0x15755Cu;
    // 0x15755c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157560: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157564: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x157564u;
    {
        const bool branch_taken_0x157564 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x157568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157564u;
            // 0x157568: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157564) {
            ctx->pc = 0x157580u;
            goto label_157580;
        }
    }
    ctx->pc = 0x15756Cu;
    // 0x15756c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x157570: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157570u;
    SET_GPR_U32(ctx, 31, 0x157578u);
    ctx->pc = 0x157574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157570u;
            // 0x157574: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157578u; }
        if (ctx->pc != 0x157578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157578u; }
        if (ctx->pc != 0x157578u) { return; }
    }
    ctx->pc = 0x157578u;
label_157578:
    // 0x157578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157578u;
    {
        const bool branch_taken_0x157578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157578) {
            ctx->pc = 0x15759Cu;
            goto label_15759c;
        }
    }
    ctx->pc = 0x157580u;
label_157580:
    // 0x157580: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157584: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157588: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15758c: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157590: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x157594: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157594u;
    SET_GPR_U32(ctx, 31, 0x15759Cu);
    ctx->pc = 0x157598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157594u;
            // 0x157598: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15759Cu; }
        if (ctx->pc != 0x15759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15759Cu; }
        if (ctx->pc != 0x15759Cu) { return; }
    }
    ctx->pc = 0x15759Cu;
label_15759c:
    // 0x15759c: 0x0  nop
    ctx->pc = 0x15759cu;
    // NOP
    // 0x1575a0: 0xc04a422  jal         func_129088
    ctx->pc = 0x1575A0u;
    SET_GPR_U32(ctx, 31, 0x1575A8u);
    ctx->pc = 0x1575A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1575A0u;
            // 0x1575a4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575A8u; }
        if (ctx->pc != 0x1575A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575A8u; }
        if (ctx->pc != 0x1575A8u) { return; }
    }
    ctx->pc = 0x1575A8u;
label_1575a8:
    // 0x1575a8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1575ac: 0x8e021ad0  lw          $v0, 0x1AD0($s0)
    ctx->pc = 0x1575acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x1575b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1575B0u;
    {
        const bool branch_taken_0x1575b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575b0) {
            ctx->pc = 0x1575E4u;
            goto label_1575e4;
        }
    }
    ctx->pc = 0x1575B8u;
    // 0x1575b8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1575bc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1575bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1575c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1575C0u;
    {
        const bool branch_taken_0x1575c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1575C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575C0u;
            // 0x1575c4: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575c0) {
            ctx->pc = 0x1575D0u;
            goto label_1575d0;
        }
    }
    ctx->pc = 0x1575C8u;
    // 0x1575c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1575c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1575cc: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1575d0:
    // 0x1575d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575d4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1575D4u;
    SET_GPR_U32(ctx, 31, 0x1575DCu);
    ctx->pc = 0x1575D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1575D4u;
            // 0x1575d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575DCu; }
        if (ctx->pc != 0x1575DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575DCu; }
        if (ctx->pc != 0x1575DCu) { return; }
    }
    ctx->pc = 0x1575DCu;
label_1575dc:
    // 0x1575dc: 0x1000fe70  b           . + 4 + (-0x190 << 2)
    ctx->pc = 0x1575DCu;
    {
        const bool branch_taken_0x1575dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575dc) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1575E4u;
label_1575e4:
    // 0x1575e4: 0x0  nop
    ctx->pc = 0x1575e4u;
    // NOP
    // 0x1575e8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1575e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1575ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1575ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1575f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575f4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1575F4u;
    SET_GPR_U32(ctx, 31, 0x1575FCu);
    ctx->pc = 0x1575F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1575F4u;
            // 0x1575f8: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575FCu; }
        if (ctx->pc != 0x1575FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1575FCu; }
        if (ctx->pc != 0x1575FCu) { return; }
    }
    ctx->pc = 0x1575FCu;
label_1575fc:
    // 0x1575fc: 0x1000fe68  b           . + 4 + (-0x198 << 2)
    ctx->pc = 0x1575FCu;
    {
        const bool branch_taken_0x1575fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575fc) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157604u;
label_157604:
    // 0x157604: 0x0  nop
    ctx->pc = 0x157604u;
    // NOP
    // 0x157608: 0x3402fbdf  ori         $v0, $zero, 0xFBDF
    ctx->pc = 0x157608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64479);
    // 0x15760c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15760cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157610: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x157610u;
    {
        const bool branch_taken_0x157610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157610u;
            // 0x157614: 0x3401fbe7  ori         $at, $zero, 0xFBE7 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64487);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157610) {
            ctx->pc = 0x1576FCu;
            goto label_1576fc;
        }
    }
    ctx->pc = 0x157618u;
    // 0x157618: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15761c: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x15761Cu;
    {
        const bool branch_taken_0x15761c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15761c) {
            ctx->pc = 0x1576FCu;
            goto label_1576fc;
        }
    }
    ctx->pc = 0x157624u;
    // 0x157624: 0x8e021acc  lw          $v0, 0x1ACC($s0)
    ctx->pc = 0x157624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6860)));
    // 0x157628: 0x240300ee  addiu       $v1, $zero, 0xEE
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x15762c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15762Cu;
    {
        const bool branch_taken_0x15762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15762Cu;
            // 0x157630: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15762c) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x157634u;
    // 0x157634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x157634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157638: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15763c: 0x8c421a44  lw          $v0, 0x1A44($v0)
    ctx->pc = 0x15763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157640: 0x1040fe57  beqz        $v0, . + 4 + (-0x1A9 << 2)
    ctx->pc = 0x157640u;
    {
        const bool branch_taken_0x157640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157640) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157648u;
label_157648:
    // 0x157648: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x157648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x15764c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15764Cu;
    {
        const bool branch_taken_0x15764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15764Cu;
            // 0x157650: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15764c) {
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157654u;
    // 0x157654: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157658: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x15765c: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x15765Cu;
    {
        const bool branch_taken_0x15765c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x157660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15765Cu;
            // 0x157660: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15765c) {
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157664u;
    // 0x157664: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x157664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x157668: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157668u;
    SET_GPR_U32(ctx, 31, 0x157670u);
    ctx->pc = 0x15766Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157668u;
            // 0x15766c: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157670u; }
        if (ctx->pc != 0x157670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157670u; }
        if (ctx->pc != 0x157670u) { return; }
    }
    ctx->pc = 0x157670u;
label_157670:
    // 0x157670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157670u;
    {
        const bool branch_taken_0x157670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157670) {
            ctx->pc = 0x157694u;
            goto label_157694;
        }
    }
    ctx->pc = 0x157678u;
label_157678:
    // 0x157678: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x157678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15767c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157680: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157684: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157688: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x157688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x15768c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x15768Cu;
    SET_GPR_U32(ctx, 31, 0x157694u);
    ctx->pc = 0x157690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15768Cu;
            // 0x157690: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157694u; }
        if (ctx->pc != 0x157694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157694u; }
        if (ctx->pc != 0x157694u) { return; }
    }
    ctx->pc = 0x157694u;
label_157694:
    // 0x157694: 0x0  nop
    ctx->pc = 0x157694u;
    // NOP
    // 0x157698: 0xc04a422  jal         func_129088
    ctx->pc = 0x157698u;
    SET_GPR_U32(ctx, 31, 0x1576A0u);
    ctx->pc = 0x15769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157698u;
            // 0x15769c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576A0u; }
        if (ctx->pc != 0x1576A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576A0u; }
        if (ctx->pc != 0x1576A0u) { return; }
    }
    ctx->pc = 0x1576A0u;
label_1576a0:
    // 0x1576a0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1576a4: 0x8e021ad0  lw          $v0, 0x1AD0($s0)
    ctx->pc = 0x1576a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x1576a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1576A8u;
    {
        const bool branch_taken_0x1576a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576a8) {
            ctx->pc = 0x1576DCu;
            goto label_1576dc;
        }
    }
    ctx->pc = 0x1576B0u;
    // 0x1576b0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1576b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1576b4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1576b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1576b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1576B8u;
    {
        const bool branch_taken_0x1576b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1576BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576B8u;
            // 0x1576bc: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b8) {
            ctx->pc = 0x1576C8u;
            goto label_1576c8;
        }
    }
    ctx->pc = 0x1576C0u;
    // 0x1576c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1576c4: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1576c8:
    // 0x1576c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1576c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576cc: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1576CCu;
    SET_GPR_U32(ctx, 31, 0x1576D4u);
    ctx->pc = 0x1576D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576CCu;
            // 0x1576d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576D4u; }
        if (ctx->pc != 0x1576D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576D4u; }
        if (ctx->pc != 0x1576D4u) { return; }
    }
    ctx->pc = 0x1576D4u;
label_1576d4:
    // 0x1576d4: 0x1000fe32  b           . + 4 + (-0x1CE << 2)
    ctx->pc = 0x1576D4u;
    {
        const bool branch_taken_0x1576d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576d4) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1576DCu;
label_1576dc:
    // 0x1576dc: 0x0  nop
    ctx->pc = 0x1576dcu;
    // NOP
    // 0x1576e0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1576e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1576e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1576e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576ec: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1576ECu;
    SET_GPR_U32(ctx, 31, 0x1576F4u);
    ctx->pc = 0x1576F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576ECu;
            // 0x1576f0: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F4u; }
        if (ctx->pc != 0x1576F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F4u; }
        if (ctx->pc != 0x1576F4u) { return; }
    }
    ctx->pc = 0x1576F4u;
label_1576f4:
    // 0x1576f4: 0x1000fe2a  b           . + 4 + (-0x1D6 << 2)
    ctx->pc = 0x1576F4u;
    {
        const bool branch_taken_0x1576f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576f4) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1576FCu;
label_1576fc:
    // 0x1576fc: 0x0  nop
    ctx->pc = 0x1576fcu;
    // NOP
    // 0x157700: 0x3402fbe7  ori         $v0, $zero, 0xFBE7
    ctx->pc = 0x157700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64487);
    // 0x157704: 0x12a2001f  beq         $s5, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x157704u;
    {
        const bool branch_taken_0x157704 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157704u;
            // 0x157708: 0x3402fbe8  ori         $v0, $zero, 0xFBE8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157704) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15770Cu;
    // 0x15770c: 0x12a2001d  beq         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15770Cu;
    {
        const bool branch_taken_0x15770c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15770Cu;
            // 0x157710: 0x3402fbe9  ori         $v0, $zero, 0xFBE9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64489);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15770c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157714u;
    // 0x157714: 0x12a2001b  beq         $s5, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x157714u;
    {
        const bool branch_taken_0x157714 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157714u;
            // 0x157718: 0x3402fbea  ori         $v0, $zero, 0xFBEA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64490);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157714) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15771Cu;
    // 0x15771c: 0x12a20019  beq         $s5, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15771Cu;
    {
        const bool branch_taken_0x15771c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15771Cu;
            // 0x157720: 0x3402fbeb  ori         $v0, $zero, 0xFBEB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15771c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157724u;
    // 0x157724: 0x12a20017  beq         $s5, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x157724u;
    {
        const bool branch_taken_0x157724 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157724u;
            // 0x157728: 0x3402fbec  ori         $v0, $zero, 0xFBEC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64492);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157724) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15772Cu;
    // 0x15772c: 0x12a20015  beq         $s5, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15772Cu;
    {
        const bool branch_taken_0x15772c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15772Cu;
            // 0x157730: 0x3402fbed  ori         $v0, $zero, 0xFBED (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64493);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15772c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157734u;
    // 0x157734: 0x12a20013  beq         $s5, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x157734u;
    {
        const bool branch_taken_0x157734 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157734u;
            // 0x157738: 0x3402fbee  ori         $v0, $zero, 0xFBEE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64494);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157734) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15773Cu;
    // 0x15773c: 0x12a20011  beq         $s5, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15773Cu;
            // 0x157740: 0x3402fbef  ori         $v0, $zero, 0xFBEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64495);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15773c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157744u;
    // 0x157744: 0x12a2000f  beq         $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157744u;
    {
        const bool branch_taken_0x157744 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157744u;
            // 0x157748: 0x3402fbf0  ori         $v0, $zero, 0xFBF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64496);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157744) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15774Cu;
    // 0x15774c: 0x12a2000d  beq         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15774Cu;
    {
        const bool branch_taken_0x15774c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15774Cu;
            // 0x157750: 0x3402fbf1  ori         $v0, $zero, 0xFBF1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64497);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15774c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157754u;
    // 0x157754: 0x12a2000b  beq         $s5, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157754u;
    {
        const bool branch_taken_0x157754 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157754u;
            // 0x157758: 0x3402fbf2  ori         $v0, $zero, 0xFBF2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64498);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157754) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15775Cu;
    // 0x15775c: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15775Cu;
    {
        const bool branch_taken_0x15775c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15775Cu;
            // 0x157760: 0x3402fbfb  ori         $v0, $zero, 0xFBFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64507);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15775c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157764u;
    // 0x157764: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157764u;
    {
        const bool branch_taken_0x157764 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157764u;
            // 0x157768: 0x3402fbfc  ori         $v0, $zero, 0xFBFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64508);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157764) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15776Cu;
    // 0x15776c: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15776Cu;
    {
        const bool branch_taken_0x15776c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15776Cu;
            // 0x157770: 0x3402fbfd  ori         $v0, $zero, 0xFBFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64509);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15776c) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157774u;
    // 0x157774: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157774u;
    {
        const bool branch_taken_0x157774 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x157778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157774u;
            // 0x157778: 0x3402fbfe  ori         $v0, $zero, 0xFBFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64510);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157774) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x15777Cu;
    // 0x15777c: 0x16a2001c  bne         $s5, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15777Cu;
    {
        const bool branch_taken_0x15777c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x15777c) {
            ctx->pc = 0x1577F0u;
            goto label_1577f0;
        }
    }
    ctx->pc = 0x157784u;
label_157784:
    // 0x157784: 0x0  nop
    ctx->pc = 0x157784u;
    // NOP
    // 0x157788: 0xc055b2c  jal         func_156CB0
    ctx->pc = 0x157788u;
    SET_GPR_U32(ctx, 31, 0x157790u);
    ctx->pc = 0x15778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157788u;
            // 0x15778c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156CB0u;
    if (runtime->hasFunction(0x156CB0u)) {
        auto targetFn = runtime->lookupFunction(0x156CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157790u; }
        if (ctx->pc != 0x157790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNoFromFontNo__Fi_0x156cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157790u; }
        if (ctx->pc != 0x157790u) { return; }
    }
    ctx->pc = 0x157790u;
label_157790:
    // 0x157790: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157790u;
    {
        const bool branch_taken_0x157790 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x157794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157790u;
            // 0x157794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157790) {
            ctx->pc = 0x1577A0u;
            goto label_1577a0;
        }
    }
    ctx->pc = 0x157798u;
    // 0x157798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157798u;
    {
        const bool branch_taken_0x157798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157798) {
            ctx->pc = 0x1577C8u;
            goto label_1577c8;
        }
    }
    ctx->pc = 0x1577A0u;
label_1577a0:
    // 0x1577a0: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1577a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1577A4u;
    {
        const bool branch_taken_0x1577a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577A4u;
            // 0x1577a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577a4) {
            ctx->pc = 0x1577B4u;
            goto label_1577b4;
        }
    }
    ctx->pc = 0x1577ACu;
    // 0x1577ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1577ACu;
    {
        const bool branch_taken_0x1577ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577ac) {
            ctx->pc = 0x1577C8u;
            goto label_1577c8;
        }
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x0  nop
    ctx->pc = 0x1577b4u;
    // NOP
    // 0x1577b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1577bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1577c0: 0x8c451a00  lw          $a1, 0x1A00($v0)
    ctx->pc = 0x1577c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x1577c4: 0x0  nop
    ctx->pc = 0x1577c4u;
    // NOP
label_1577c8:
    // 0x1577c8: 0xc05571c  jal         func_155C70
    ctx->pc = 0x1577C8u;
    SET_GPR_U32(ctx, 31, 0x1577D0u);
    ctx->pc = 0x1577CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577C8u;
            // 0x1577cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155C70u;
    if (runtime->hasFunction(0x155C70u)) {
        auto targetFn = runtime->lookupFunction(0x155C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577D0u; }
        if (ctx->pc != 0x1577D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesWidth_system__6ClsMesFi_0x155c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577D0u; }
        if (ctx->pc != 0x1577D0u) { return; }
    }
    ctx->pc = 0x1577D0u;
label_1577d0:
    // 0x1577d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1577d4: 0x1043fdf2  beq         $v0, $v1, . + 4 + (-0x20E << 2)
    ctx->pc = 0x1577D4u;
    {
        const bool branch_taken_0x1577d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1577D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577D4u;
            // 0x1577d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d4) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1577DCu;
    // 0x1577dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1577dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577e0: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1577E0u;
    SET_GPR_U32(ctx, 31, 0x1577E8u);
    ctx->pc = 0x1577E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577E0u;
            // 0x1577e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    }
    ctx->pc = 0x1577E8u;
label_1577e8:
    // 0x1577e8: 0x1000fded  b           . + 4 + (-0x213 << 2)
    ctx->pc = 0x1577E8u;
    {
        const bool branch_taken_0x1577e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577e8) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1577F0u;
label_1577f0:
    // 0x1577f0: 0x3402fafa  ori         $v0, $zero, 0xFAFA
    ctx->pc = 0x1577f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64250);
    // 0x1577f4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1577f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1577f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1577F8u;
    {
        const bool branch_taken_0x1577f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577F8u;
            // 0x1577fc: 0x3401fb00  ori         $at, $zero, 0xFB00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577f8) {
            ctx->pc = 0x157838u;
            goto label_157838;
        }
    }
    ctx->pc = 0x157800u;
    // 0x157800: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x157804: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x157804u;
    {
        const bool branch_taken_0x157804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157804u;
            // 0x157808: 0x26a28000  addiu       $v0, $s5, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157804) {
            ctx->pc = 0x157838u;
            goto label_157838;
        }
    }
    ctx->pc = 0x15780Cu;
    // 0x15780c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157810: 0xc054848  jal         func_152120
    ctx->pc = 0x157810u;
    SET_GPR_U32(ctx, 31, 0x157818u);
    ctx->pc = 0x157814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157810u;
            // 0x157814: 0x24458506  addiu       $a1, $v0, -0x7AFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935814));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152120u;
    if (runtime->hasFunction(0x152120u)) {
        auto targetFn = runtime->lookupFunction(0x152120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157818u; }
        if (ctx->pc != 0x157818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameWidth__6ClsMesFi_0x152120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157818u; }
        if (ctx->pc != 0x157818u) { return; }
    }
    ctx->pc = 0x157818u;
label_157818:
    // 0x157818: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15781c: 0x1043fde0  beq         $v0, $v1, . + 4 + (-0x220 << 2)
    ctx->pc = 0x15781Cu;
    {
        const bool branch_taken_0x15781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x157820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15781Cu;
            // 0x157820: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15781c) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157824u;
    // 0x157824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157828: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157828u;
    SET_GPR_U32(ctx, 31, 0x157830u);
    ctx->pc = 0x15782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157828u;
            // 0x15782c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157830u; }
        if (ctx->pc != 0x157830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157830u; }
        if (ctx->pc != 0x157830u) { return; }
    }
    ctx->pc = 0x157830u;
label_157830:
    // 0x157830: 0x1000fddb  b           . + 4 + (-0x225 << 2)
    ctx->pc = 0x157830u;
    {
        const bool branch_taken_0x157830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157830) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157838u;
label_157838:
    // 0x157838: 0x3402faea  ori         $v0, $zero, 0xFAEA
    ctx->pc = 0x157838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64234);
    // 0x15783c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x15783cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157840: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157840u;
    {
        const bool branch_taken_0x157840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157840u;
            // 0x157844: 0x3402faf9  ori         $v0, $zero, 0xFAF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64249);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157840) {
            ctx->pc = 0x15787Cu;
            goto label_15787c;
        }
    }
    ctx->pc = 0x157848u;
    // 0x157848: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x157848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x15784c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15784Cu;
    {
        const bool branch_taken_0x15784c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x157850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15784Cu;
            // 0x157850: 0x552823  subu        $a1, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15784c) {
            ctx->pc = 0x15787Cu;
            goto label_15787c;
        }
    }
    ctx->pc = 0x157854u;
    // 0x157854: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x157854u;
    SET_GPR_U32(ctx, 31, 0x15785Cu);
    ctx->pc = 0x157858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157854u;
            // 0x157858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (runtime->hasFunction(0x1522C0u)) {
        auto targetFn = runtime->lookupFunction(0x1522C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15785Cu; }
        if (ctx->pc != 0x15785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFi_0x1522c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15785Cu; }
        if (ctx->pc != 0x15785Cu) { return; }
    }
    ctx->pc = 0x15785Cu;
label_15785c:
    // 0x15785c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157860: 0x1043fdcf  beq         $v0, $v1, . + 4 + (-0x231 << 2)
    ctx->pc = 0x157860u;
    {
        const bool branch_taken_0x157860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x157864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157860u;
            // 0x157864: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157860) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157868u;
    // 0x157868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15786c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15786Cu;
    SET_GPR_U32(ctx, 31, 0x157874u);
    ctx->pc = 0x157870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15786Cu;
            // 0x157870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157874u; }
        if (ctx->pc != 0x157874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157874u; }
        if (ctx->pc != 0x157874u) { return; }
    }
    ctx->pc = 0x157874u;
label_157874:
    // 0x157874: 0x1000fdca  b           . + 4 + (-0x236 << 2)
    ctx->pc = 0x157874u;
    {
        const bool branch_taken_0x157874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157874) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15787Cu;
label_15787c:
    // 0x15787c: 0x0  nop
    ctx->pc = 0x15787cu;
    // NOP
    // 0x157880: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x157880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x157884: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x157884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157888: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x157888u;
    {
        const bool branch_taken_0x157888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157888u;
            // 0x15788c: 0x3401fd32  ori         $at, $zero, 0xFD32 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157888) {
            ctx->pc = 0x1578C0u;
            goto label_1578c0;
        }
    }
    ctx->pc = 0x157890u;
    // 0x157890: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x157890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x157894: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x157894u;
    {
        const bool branch_taken_0x157894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157894u;
            // 0x157898: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157894) {
            ctx->pc = 0x1578C0u;
            goto label_1578c0;
        }
    }
    ctx->pc = 0x15789Cu;
    // 0x15789c: 0xc054834  jal         func_1520D0
    ctx->pc = 0x15789Cu;
    SET_GPR_U32(ctx, 31, 0x1578A4u);
    ctx->pc = 0x1578A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15789Cu;
            // 0x1578a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578A4u; }
        if (ctx->pc != 0x1578A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578A4u; }
        if (ctx->pc != 0x1578A4u) { return; }
    }
    ctx->pc = 0x1578A4u;
label_1578a4:
    // 0x1578a4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1578a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1578a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1578a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578ac: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1578acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1578b0: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1578B0u;
    SET_GPR_U32(ctx, 31, 0x1578B8u);
    ctx->pc = 0x1578B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578B0u;
            // 0x1578b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B8u; }
        if (ctx->pc != 0x1578B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B8u; }
        if (ctx->pc != 0x1578B8u) { return; }
    }
    ctx->pc = 0x1578B8u;
label_1578b8:
    // 0x1578b8: 0x1000fdb9  b           . + 4 + (-0x247 << 2)
    ctx->pc = 0x1578B8u;
    {
        const bool branch_taken_0x1578b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578b8) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1578C0u;
label_1578c0:
    // 0x1578c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1578c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578c4: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x1578C4u;
    SET_GPR_U32(ctx, 31, 0x1578CCu);
    ctx->pc = 0x1578C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578C4u;
            // 0x1578c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578CCu; }
        if (ctx->pc != 0x1578CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578CCu; }
        if (ctx->pc != 0x1578CCu) { return; }
    }
    ctx->pc = 0x1578CCu;
label_1578cc:
    // 0x1578cc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1578CCu;
    {
        const bool branch_taken_0x1578cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578CCu;
            // 0x1578d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578cc) {
            ctx->pc = 0x15793Cu;
            goto label_15793c;
        }
    }
    ctx->pc = 0x1578D4u;
    // 0x1578d4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1578D4u;
    SET_GPR_U32(ctx, 31, 0x1578DCu);
    ctx->pc = 0x1578D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578D4u;
            // 0x1578d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578DCu; }
        if (ctx->pc != 0x1578DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578DCu; }
        if (ctx->pc != 0x1578DCu) { return; }
    }
    ctx->pc = 0x1578DCu;
label_1578dc:
    // 0x1578dc: 0x16a2000b  bne         $s5, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1578DCu;
    {
        const bool branch_taken_0x1578dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1578dc) {
            ctx->pc = 0x15790Cu;
            goto label_15790c;
        }
    }
    ctx->pc = 0x1578E4u;
    // 0x1578e4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1578e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1578E8u;
    {
        const bool branch_taken_0x1578e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1578ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578E8u;
            // 0x1578ec: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e8) {
            ctx->pc = 0x1578F8u;
            goto label_1578f8;
        }
    }
    ctx->pc = 0x1578F0u;
    // 0x1578f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1578f4: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1578f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1578f8:
    // 0x1578f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1578f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578fc: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1578FCu;
    SET_GPR_U32(ctx, 31, 0x157904u);
    ctx->pc = 0x157900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578FCu;
            // 0x157900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157904u; }
        if (ctx->pc != 0x157904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157904u; }
        if (ctx->pc != 0x157904u) { return; }
    }
    ctx->pc = 0x157904u;
label_157904:
    // 0x157904: 0x1000fda6  b           . + 4 + (-0x25A << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157904) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15790Cu;
label_15790c:
    // 0x15790c: 0x0  nop
    ctx->pc = 0x15790cu;
    // NOP
    // 0x157910: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x157910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157914: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x157914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157918: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x157918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15791c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15791Cu;
    SET_GPR_U32(ctx, 31, 0x157924u);
    ctx->pc = 0x157920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15791Cu;
            // 0x157920: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157924u; }
        if (ctx->pc != 0x157924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157924u; }
        if (ctx->pc != 0x157924u) { return; }
    }
    ctx->pc = 0x157924u;
label_157924:
    // 0x157924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x157924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15792c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15792Cu;
    SET_GPR_U32(ctx, 31, 0x157934u);
    ctx->pc = 0x157930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15792Cu;
            // 0x157930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    }
    ctx->pc = 0x157934u;
label_157934:
    // 0x157934: 0x1000fd9a  b           . + 4 + (-0x266 << 2)
    ctx->pc = 0x157934u;
    {
        const bool branch_taken_0x157934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157934) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15793Cu;
label_15793c:
    // 0x15793c: 0x0  nop
    ctx->pc = 0x15793cu;
    // NOP
    // 0x157940: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x157940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157944: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x157944u;
    SET_GPR_U32(ctx, 31, 0x15794Cu);
    ctx->pc = 0x157948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157944u;
            // 0x157948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15794Cu; }
        if (ctx->pc != 0x15794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15794Cu; }
        if (ctx->pc != 0x15794Cu) { return; }
    }
    ctx->pc = 0x15794Cu;
label_15794c:
    // 0x15794c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15794Cu;
    {
        const bool branch_taken_0x15794c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15794c) {
            ctx->pc = 0x15796Cu;
            goto label_15796c;
        }
    }
    ctx->pc = 0x157954u;
    // 0x157954: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x157954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15795c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15795Cu;
    SET_GPR_U32(ctx, 31, 0x157964u);
    ctx->pc = 0x157960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15795Cu;
            // 0x157960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157964u; }
        if (ctx->pc != 0x157964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157964u; }
        if (ctx->pc != 0x157964u) { return; }
    }
    ctx->pc = 0x157964u;
label_157964:
    // 0x157964: 0x1000fd8e  b           . + 4 + (-0x272 << 2)
    ctx->pc = 0x157964u;
    {
        const bool branch_taken_0x157964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157964) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15796Cu;
label_15796c:
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
    // 0x157970: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x157970u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157974: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x157974u;
    SET_GPR_U32(ctx, 31, 0x15797Cu);
    ctx->pc = 0x157978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157974u;
            // 0x157978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15797Cu; }
        if (ctx->pc != 0x15797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15797Cu; }
        if (ctx->pc != 0x15797Cu) { return; }
    }
    ctx->pc = 0x15797Cu;
label_15797c:
    // 0x15797c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15797Cu;
    {
        const bool branch_taken_0x15797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15797c) {
            ctx->pc = 0x15799Cu;
            goto label_15799c;
        }
    }
    ctx->pc = 0x157984u;
    // 0x157984: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x157984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15798c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15798Cu;
    SET_GPR_U32(ctx, 31, 0x157994u);
    ctx->pc = 0x157990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15798Cu;
            // 0x157990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157994u; }
        if (ctx->pc != 0x157994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157994u; }
        if (ctx->pc != 0x157994u) { return; }
    }
    ctx->pc = 0x157994u;
label_157994:
    // 0x157994: 0x1000fd82  b           . + 4 + (-0x27E << 2)
    ctx->pc = 0x157994u;
    {
        const bool branch_taken_0x157994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157994) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x15799Cu;
label_15799c:
    // 0x15799c: 0x0  nop
    ctx->pc = 0x15799cu;
    // NOP
    // 0x1579a0: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1579a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1579a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1579a8: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1579A8u;
    SET_GPR_U32(ctx, 31, 0x1579B0u);
    ctx->pc = 0x1579ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579A8u;
            // 0x1579ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579B0u; }
        if (ctx->pc != 0x1579B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579B0u; }
        if (ctx->pc != 0x1579B0u) { return; }
    }
    ctx->pc = 0x1579B0u;
label_1579b0:
    // 0x1579b0: 0x1000fd7b  b           . + 4 + (-0x285 << 2)
    ctx->pc = 0x1579B0u;
    {
        const bool branch_taken_0x1579b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579b0) {
            ctx->pc = 0x156FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156fa0;
        }
    }
    ctx->pc = 0x1579B8u;
label_1579b8:
    // 0x1579b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1579b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1579bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1579bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1579c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1579c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1579c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1579c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1579c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1579c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1579cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1579ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1579d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1579d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1579d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1579D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1579D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579D4u;
            // 0x1579d8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1579DCu;
}
