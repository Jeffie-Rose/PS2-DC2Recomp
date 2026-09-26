#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl__6ClsMesFi
// Address: 0x156570 - 0x156c24
void MakeMesWinTbl__6ClsMesFi_0x156570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl__6ClsMesFi_0x156570");
#endif

    switch (ctx->pc) {
        case 0x1565a4u: goto label_1565a4;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x15664cu: goto label_15664c;
        case 0x156668u: goto label_156668;
        case 0x156694u: goto label_156694;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566d4u: goto label_1566d4;
        case 0x156760u: goto label_156760;
        case 0x15676cu: goto label_15676c;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567f0u: goto label_1567f0;
        case 0x156828u: goto label_156828;
        case 0x156860u: goto label_156860;
        case 0x156898u: goto label_156898;
        case 0x1568dcu: goto label_1568dc;
        case 0x15696cu: goto label_15696c;
        case 0x156980u: goto label_156980;
        case 0x156994u: goto label_156994;
        case 0x1569a0u: goto label_1569a0;
        case 0x1569ccu: goto label_1569cc;
        case 0x156a54u: goto label_156a54;
        case 0x156a84u: goto label_156a84;
        case 0x156ac0u: goto label_156ac0;
        case 0x156af8u: goto label_156af8;
        case 0x156b14u: goto label_156b14;
        case 0x156b30u: goto label_156b30;
        case 0x156b3cu: goto label_156b3c;
        case 0x156b4cu: goto label_156b4c;
        case 0x156b8cu: goto label_156b8c;
        case 0x156bacu: goto label_156bac;
        case 0x156bd4u: goto label_156bd4;
        default: break;
    }

    ctx->pc = 0x156570u;

    // 0x156570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x156570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x156574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x156574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x156578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x156578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15657c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156588: 0x8c8221d4  lw          $v0, 0x21D4($a0)
    ctx->pc = 0x156588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8660)));
    // 0x15658c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15658Cu;
    {
        const bool branch_taken_0x15658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15658Cu;
            // 0x156590: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15658c) {
            ctx->pc = 0x15659Cu;
            goto label_15659c;
        }
    }
    ctx->pc = 0x156594u;
    // 0x156594: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x156594u;
    {
        const bool branch_taken_0x156594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156594u;
            // 0x156598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156594) {
            ctx->pc = 0x156C04u;
            goto label_156c04;
        }
    }
    ctx->pc = 0x15659Cu;
label_15659c:
    // 0x15659c: 0xc0557b8  jal         func_155EE0
    ctx->pc = 0x15659Cu;
    SET_GPR_U32(ctx, 31, 0x1565A4u);
    ctx->pc = 0x155EE0u;
    if (runtime->hasFunction(0x155EE0u)) {
        auto targetFn = runtime->lookupFunction(0x155EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565A4u; }
        if (ctx->pc != 0x1565A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextLineDataTop__6ClsMesFi_0x155ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565A4u; }
        if (ctx->pc != 0x1565A4u) { return; }
    }
    ctx->pc = 0x1565A4u;
label_1565a4:
    // 0x1565a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1565a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565a8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1565A8u;
    {
        const bool branch_taken_0x1565a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1565ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A8u;
            // 0x1565ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565a8) {
            ctx->pc = 0x1565B8u;
            goto label_1565b8;
        }
    }
    ctx->pc = 0x1565B0u;
    // 0x1565b0: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1565B0u;
    {
        const bool branch_taken_0x1565b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565B0u;
            // 0x1565b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565b0) {
            ctx->pc = 0x156C04u;
            goto label_156c04;
        }
    }
    ctx->pc = 0x1565B8u;
label_1565b8:
    // 0x1565b8: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x1565B8u;
    SET_GPR_U32(ctx, 31, 0x1565C0u);
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C0u; }
        if (ctx->pc != 0x1565C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C0u; }
        if (ctx->pc != 0x1565C0u) { return; }
    }
    ctx->pc = 0x1565C0u;
label_1565c0:
    // 0x1565c0: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1565C0u;
    SET_GPR_U32(ctx, 31, 0x1565C8u);
    ctx->pc = 0x1565C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565C0u;
            // 0x1565c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C8u; }
        if (ctx->pc != 0x1565C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C8u; }
        if (ctx->pc != 0x1565C8u) { return; }
    }
    ctx->pc = 0x1565C8u;
label_1565c8:
    // 0x1565c8: 0xe66001b8  swc1        $f0, 0x1B8($s3)
    ctx->pc = 0x1565c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 440), bits); }
    // 0x1565cc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1565ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1565d0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1565d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_1565d4:
    // 0x1565d4: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x1565d4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1565d8:
    // 0x1565d8: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1565d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1565dc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1565DCu;
    {
        const bool branch_taken_0x1565dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1565E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565DCu;
            // 0x1565e0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565dc) {
            ctx->pc = 0x1565F8u;
            goto label_1565f8;
        }
    }
    ctx->pc = 0x1565E4u;
    // 0x1565e4: 0x3402ff03  ori         $v0, $zero, 0xFF03
    ctx->pc = 0x1565e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
    // 0x1565e8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1565E8u;
    {
        const bool branch_taken_0x1565e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1565ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565E8u;
            // 0x1565ec: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565e8) {
            ctx->pc = 0x1565F8u;
            goto label_1565f8;
        }
    }
    ctx->pc = 0x1565F0u;
    // 0x1565f0: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1565F0u;
    {
        const bool branch_taken_0x1565f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1565f0) {
            ctx->pc = 0x156604u;
            goto label_156604;
        }
    }
    ctx->pc = 0x1565F8u;
label_1565f8:
    // 0x1565f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1565fc: 0xae621adc  sw          $v0, 0x1ADC($s3)
    ctx->pc = 0x1565fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6876), GPR_U32(ctx, 2));
    // 0x156600: 0xae621ae0  sw          $v0, 0x1AE0($s3)
    ctx->pc = 0x156600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6880), GPR_U32(ctx, 2));
label_156604:
    // 0x156604: 0x0  nop
    ctx->pc = 0x156604u;
    // NOP
    // 0x156608: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x15660c: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x15660cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x156610: 0x2211020  add         $v0, $s1, $at
    ctx->pc = 0x156610u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x156614: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x156614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x156618: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x156618u;
    {
        const bool branch_taken_0x156618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156618u;
            // 0x15661c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156618) {
            ctx->pc = 0x15672Cu;
            goto label_15672c;
        }
    }
    ctx->pc = 0x156620u;
    // 0x156620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156624: 0x24632ae0  addiu       $v1, $v1, 0x2AE0
    ctx->pc = 0x156624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10976));
    // 0x156628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15662c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156630: 0x400008  jr          $v0
    ctx->pc = 0x156630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156638u: goto label_156638;
            case 0x156654u: goto label_156654;
            case 0x156680u: goto label_156680;
            case 0x1566A0u: goto label_1566a0;
            case 0x1566BCu: goto label_1566bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156638u;
label_156638:
    // 0x156638: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156638u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15663c: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x15663cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156644: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156644u;
    SET_GPR_U32(ctx, 31, 0x15664Cu);
    ctx->pc = 0x156648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156644u;
            // 0x156648: 0x3405ff01  ori         $a1, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15664Cu; }
        if (ctx->pc != 0x15664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15664Cu; }
        if (ctx->pc != 0x15664Cu) { return; }
    }
    ctx->pc = 0x15664Cu;
label_15664c:
    // 0x15664c: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x15664Cu;
    {
        const bool branch_taken_0x15664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15664Cu;
            // 0x156650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15664c) {
            ctx->pc = 0x156C04u;
            goto label_156c04;
        }
    }
    ctx->pc = 0x156654u;
label_156654:
    // 0x156654: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156654u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15665c: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156660: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156660u;
    SET_GPR_U32(ctx, 31, 0x156668u);
    ctx->pc = 0x156664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156660u;
            // 0x156664: 0x3405ff00  ori         $a1, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156668u; }
        if (ctx->pc != 0x156668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156668u; }
        if (ctx->pc != 0x156668u) { return; }
    }
    ctx->pc = 0x156668u;
label_156668:
    // 0x156668: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x156668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x15666c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x15666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156670: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x156670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x156674: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156678: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x156678u;
    {
        const bool branch_taken_0x156678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156678u;
            // 0x15667c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156678) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156680u;
label_156680:
    // 0x156680: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156684: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15668c: 0xc055834  jal         func_1560D0
    ctx->pc = 0x15668Cu;
    SET_GPR_U32(ctx, 31, 0x156694u);
    ctx->pc = 0x156690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15668Cu;
            // 0x156690: 0x3405ff03  ori         $a1, $zero, 0xFF03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156694u; }
        if (ctx->pc != 0x156694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156694u; }
        if (ctx->pc != 0x156694u) { return; }
    }
    ctx->pc = 0x156694u;
label_156694:
    // 0x156694: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x156694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x156698: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x156698u;
    {
        const bool branch_taken_0x156698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156698u;
            // 0x15669c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156698) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x1566A0u;
label_1566a0:
    // 0x1566a0: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x1566a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1566a4: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x1566a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1566a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1566a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566ac: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1566ACu;
    SET_GPR_U32(ctx, 31, 0x1566B4u);
    ctx->pc = 0x1566B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566ACu;
            // 0x1566b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566B4u; }
        if (ctx->pc != 0x1566B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566B4u; }
        if (ctx->pc != 0x1566B4u) { return; }
    }
    ctx->pc = 0x1566B4u;
label_1566b4:
    // 0x1566b4: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1566B4u;
    {
        const bool branch_taken_0x1566b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566B4u;
            // 0x1566b8: 0x96110000  lhu         $s1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b4) {
            ctx->pc = 0x1565D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d8;
        }
    }
    ctx->pc = 0x1566BCu;
label_1566bc:
    // 0x1566bc: 0x0  nop
    ctx->pc = 0x1566bcu;
    // NOP
    // 0x1566c0: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1566c4: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1566c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1566c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566cc: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1566CCu;
    SET_GPR_U32(ctx, 31, 0x1566D4u);
    ctx->pc = 0x1566D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566CCu;
            // 0x1566d0: 0x3405ff02  ori         $a1, $zero, 0xFF02 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566D4u; }
        if (ctx->pc != 0x1566D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566D4u; }
        if (ctx->pc != 0x1566D4u) { return; }
    }
    ctx->pc = 0x1566D4u;
label_1566d4:
    // 0x1566d4: 0x8e621ae0  lw          $v0, 0x1AE0($s3)
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6880)));
    // 0x1566d8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1566D8u;
    {
        const bool branch_taken_0x1566d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1566d8) {
            ctx->pc = 0x1566ECu;
            goto label_1566ec;
        }
    }
    ctx->pc = 0x1566E0u;
    // 0x1566e0: 0x8e621adc  lw          $v0, 0x1ADC($s3)
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6876)));
    // 0x1566e4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1566E4u;
    {
        const bool branch_taken_0x1566e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1566e4) {
            ctx->pc = 0x156704u;
            goto label_156704;
        }
    }
    ctx->pc = 0x1566ECu;
label_1566ec:
    // 0x1566ec: 0x0  nop
    ctx->pc = 0x1566ecu;
    // NOP
    // 0x1566f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1566f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1566f4: 0x8e621adc  lw          $v0, 0x1ADC($s3)
    ctx->pc = 0x1566f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6876)));
    // 0x1566f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1566fc: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x1566FCu;
    {
        const bool branch_taken_0x1566fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566FCu;
            // 0x156700: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566fc) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156704u;
label_156704:
    // 0x156704: 0x0  nop
    ctx->pc = 0x156704u;
    // NOP
    // 0x156708: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x15670c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15670Cu;
    {
        const bool branch_taken_0x15670c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x156710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15670Cu;
            // 0x156710: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15670c) {
            ctx->pc = 0x15671Cu;
            goto label_15671c;
        }
    }
    ctx->pc = 0x156714u;
    // 0x156714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156718: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x156718u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15671c:
    // 0x15671c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156724: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x156724u;
    {
        const bool branch_taken_0x156724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156724u;
            // 0x156728: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156724) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x15672Cu;
label_15672c:
    // 0x15672c: 0x0  nop
    ctx->pc = 0x15672cu;
    // NOP
    // 0x156730: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x156730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x156734: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156738: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x156738u;
    {
        const bool branch_taken_0x156738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156738u;
            // 0x15673c: 0x3401fd33  ori         $at, $zero, 0xFD33 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64819);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156738) {
            ctx->pc = 0x156784u;
            goto label_156784;
        }
    }
    ctx->pc = 0x156740u;
    // 0x156740: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156744: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x156744u;
    {
        const bool branch_taken_0x156744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156744) {
            ctx->pc = 0x156784u;
            goto label_156784;
        }
    }
    ctx->pc = 0x15674Cu;
    // 0x15674c: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x15674cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156754: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156758: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156758u;
    SET_GPR_U32(ctx, 31, 0x156760u);
    ctx->pc = 0x15675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156758u;
            // 0x15675c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156760u; }
        if (ctx->pc != 0x156760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156760u; }
        if (ctx->pc != 0x156760u) { return; }
    }
    ctx->pc = 0x156760u;
label_156760:
    // 0x156760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156764: 0xc054834  jal         func_1520D0
    ctx->pc = 0x156764u;
    SET_GPR_U32(ctx, 31, 0x15676Cu);
    ctx->pc = 0x156768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156764u;
            // 0x156768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15676Cu; }
        if (ctx->pc != 0x15676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15676Cu; }
        if (ctx->pc != 0x15676Cu) { return; }
    }
    ctx->pc = 0x15676Cu;
label_15676c:
    // 0x15676c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x15676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156770: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x156770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156774: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x156774u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x156778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15677c: 0x1000ff95  b           . + 4 + (-0x6B << 2)
    ctx->pc = 0x15677Cu;
    {
        const bool branch_taken_0x15677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15677Cu;
            // 0x156780: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15677c) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156784u;
label_156784:
    // 0x156784: 0x0  nop
    ctx->pc = 0x156784u;
    // NOP
    // 0x156788: 0x3402fc00  ori         $v0, $zero, 0xFC00
    ctx->pc = 0x156788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x15678c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15678cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156790: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156790u;
    {
        const bool branch_taken_0x156790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156790u;
            // 0x156794: 0x3401fd00  ori         $at, $zero, 0xFD00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156790) {
            ctx->pc = 0x1567C0u;
            goto label_1567c0;
        }
    }
    ctx->pc = 0x156798u;
    // 0x156798: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15679c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15679Cu;
    {
        const bool branch_taken_0x15679c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15679c) {
            ctx->pc = 0x1567C0u;
            goto label_1567c0;
        }
    }
    ctx->pc = 0x1567A4u;
    // 0x1567a4: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x1567a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1567a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1567a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567ac: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1567b0: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1567B0u;
    SET_GPR_U32(ctx, 31, 0x1567B8u);
    ctx->pc = 0x1567B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567B0u;
            // 0x1567b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B8u; }
        if (ctx->pc != 0x1567B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B8u; }
        if (ctx->pc != 0x1567B8u) { return; }
    }
    ctx->pc = 0x1567B8u;
label_1567b8:
    // 0x1567b8: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x1567B8u;
    {
        const bool branch_taken_0x1567b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1567b8) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x1567C0u;
label_1567c0:
    // 0x1567c0: 0x3402f500  ori         $v0, $zero, 0xF500
    ctx->pc = 0x1567c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
    // 0x1567c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1567c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1567c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1567C8u;
    {
        const bool branch_taken_0x1567c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567C8u;
            // 0x1567cc: 0x3401f600  ori         $at, $zero, 0xF600 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567c8) {
            ctx->pc = 0x1567F8u;
            goto label_1567f8;
        }
    }
    ctx->pc = 0x1567D0u;
    // 0x1567d0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1567d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1567d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1567D4u;
    {
        const bool branch_taken_0x1567d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1567d4) {
            ctx->pc = 0x1567F8u;
            goto label_1567f8;
        }
    }
    ctx->pc = 0x1567DCu;
    // 0x1567dc: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1567e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1567e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567e4: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x1567e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1567e8: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1567E8u;
    SET_GPR_U32(ctx, 31, 0x1567F0u);
    ctx->pc = 0x1567ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567E8u;
            // 0x1567ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567F0u; }
        if (ctx->pc != 0x1567F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567F0u; }
        if (ctx->pc != 0x1567F0u) { return; }
    }
    ctx->pc = 0x1567F0u;
label_1567f0:
    // 0x1567f0: 0x1000ff78  b           . + 4 + (-0x88 << 2)
    ctx->pc = 0x1567F0u;
    {
        const bool branch_taken_0x1567f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1567f0) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x1567F8u;
label_1567f8:
    // 0x1567f8: 0x3402f400  ori         $v0, $zero, 0xF400
    ctx->pc = 0x1567f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
    // 0x1567fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1567fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156800: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156800u;
    {
        const bool branch_taken_0x156800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156800u;
            // 0x156804: 0x3401f500  ori         $at, $zero, 0xF500 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156800) {
            ctx->pc = 0x156830u;
            goto label_156830;
        }
    }
    ctx->pc = 0x156808u;
    // 0x156808: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15680c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15680Cu;
    {
        const bool branch_taken_0x15680c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15680c) {
            ctx->pc = 0x156830u;
            goto label_156830;
        }
    }
    ctx->pc = 0x156814u;
    // 0x156814: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156814u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15681c: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x15681cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156820: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156820u;
    SET_GPR_U32(ctx, 31, 0x156828u);
    ctx->pc = 0x156824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156820u;
            // 0x156824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156828u; }
        if (ctx->pc != 0x156828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156828u; }
        if (ctx->pc != 0x156828u) { return; }
    }
    ctx->pc = 0x156828u;
label_156828:
    // 0x156828: 0x1000ff6a  b           . + 4 + (-0x96 << 2)
    ctx->pc = 0x156828u;
    {
        const bool branch_taken_0x156828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156828) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156830u;
label_156830:
    // 0x156830: 0x3402f300  ori         $v0, $zero, 0xF300
    ctx->pc = 0x156830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
    // 0x156834: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156838: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156838u;
    {
        const bool branch_taken_0x156838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156838u;
            // 0x15683c: 0x3401f400  ori         $at, $zero, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156838) {
            ctx->pc = 0x156868u;
            goto label_156868;
        }
    }
    ctx->pc = 0x156840u;
    // 0x156840: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156844: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x156844u;
    {
        const bool branch_taken_0x156844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156844) {
            ctx->pc = 0x156868u;
            goto label_156868;
        }
    }
    ctx->pc = 0x15684Cu;
    // 0x15684c: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156850: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156854: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156858: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156858u;
    SET_GPR_U32(ctx, 31, 0x156860u);
    ctx->pc = 0x15685Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156858u;
            // 0x15685c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156860u; }
        if (ctx->pc != 0x156860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156860u; }
        if (ctx->pc != 0x156860u) { return; }
    }
    ctx->pc = 0x156860u;
label_156860:
    // 0x156860: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x156860u;
    {
        const bool branch_taken_0x156860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156860) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156868u;
label_156868:
    // 0x156868: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x156868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x15686c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15686cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156870: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156870u;
    {
        const bool branch_taken_0x156870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156870u;
            // 0x156874: 0x3401f300  ori         $at, $zero, 0xF300 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156870) {
            ctx->pc = 0x1568A0u;
            goto label_1568a0;
        }
    }
    ctx->pc = 0x156878u;
    // 0x156878: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15687c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15687Cu;
    {
        const bool branch_taken_0x15687c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15687c) {
            ctx->pc = 0x1568A0u;
            goto label_1568a0;
        }
    }
    ctx->pc = 0x156884u;
    // 0x156884: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15688c: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x15688cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156890: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156890u;
    SET_GPR_U32(ctx, 31, 0x156898u);
    ctx->pc = 0x156894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156890u;
            // 0x156894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156898u; }
        if (ctx->pc != 0x156898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156898u; }
        if (ctx->pc != 0x156898u) { return; }
    }
    ctx->pc = 0x156898u;
label_156898:
    // 0x156898: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x156898u;
    {
        const bool branch_taken_0x156898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156898) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x1568A0u;
label_1568a0:
    // 0x1568a0: 0x3402f700  ori         $v0, $zero, 0xF700
    ctx->pc = 0x1568a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
    // 0x1568a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1568a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1568a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1568A8u;
    {
        const bool branch_taken_0x1568a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1568ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568A8u;
            // 0x1568ac: 0x3401f800  ori         $at, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568a8) {
            ctx->pc = 0x1568E4u;
            goto label_1568e4;
        }
    }
    ctx->pc = 0x1568B0u;
    // 0x1568b0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1568b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1568b4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1568B4u;
    {
        const bool branch_taken_0x1568b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568B4u;
            // 0x1568b8: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568b4) {
            ctx->pc = 0x1568E4u;
            goto label_1568e4;
        }
    }
    ctx->pc = 0x1568BCu;
    // 0x1568bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1568bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568c0: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x1568c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1568c8: 0xae621ae0  sw          $v0, 0x1AE0($s3)
    ctx->pc = 0x1568c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6880), GPR_U32(ctx, 2));
    // 0x1568cc: 0x8e651ae0  lw          $a1, 0x1AE0($s3)
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6880)));
    // 0x1568d0: 0x8e6600c0  lw          $a2, 0xC0($s3)
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1568d4: 0xc0558c8  jal         func_156320
    ctx->pc = 0x1568D4u;
    SET_GPR_U32(ctx, 31, 0x1568DCu);
    ctx->pc = 0x1568D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1568D4u;
            // 0x1568d8: 0x2607fffe  addiu       $a3, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156320u;
    if (runtime->hasFunction(0x156320u)) {
        auto targetFn = runtime->lookupFunction(0x156320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568DCu; }
        if (ctx->pc != 0x1568DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcSpaceW__6ClsMesFiiPUs_0x156320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568DCu; }
        if (ctx->pc != 0x1568DCu) { return; }
    }
    ctx->pc = 0x1568DCu;
label_1568dc:
    // 0x1568dc: 0x1000ff3d  b           . + 4 + (-0xC3 << 2)
    ctx->pc = 0x1568DCu;
    {
        const bool branch_taken_0x1568dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568DCu;
            // 0x1568e0: 0xae621adc  sw          $v0, 0x1ADC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568dc) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x1568E4u;
label_1568e4:
    // 0x1568e4: 0x0  nop
    ctx->pc = 0x1568e4u;
    // NOP
    // 0x1568e8: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1568e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1568ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1568ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1568f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1568F0u;
    {
        const bool branch_taken_0x1568f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1568F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568F0u;
            // 0x1568f4: 0x3401f900  ori         $at, $zero, 0xF900 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568f0) {
            ctx->pc = 0x156910u;
            goto label_156910;
        }
    }
    ctx->pc = 0x1568F8u;
    // 0x1568f8: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1568f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1568fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1568FCu;
    {
        const bool branch_taken_0x1568fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568FCu;
            // 0x156900: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568fc) {
            ctx->pc = 0x156910u;
            goto label_156910;
        }
    }
    ctx->pc = 0x156904u;
    // 0x156904: 0x24428800  addiu       $v0, $v0, -0x7800
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
    // 0x156908: 0x1000ff32  b           . + 4 + (-0xCE << 2)
    ctx->pc = 0x156908u;
    {
        const bool branch_taken_0x156908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156908u;
            // 0x15690c: 0xae621adc  sw          $v0, 0x1ADC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156908) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156910u;
label_156910:
    // 0x156910: 0x3402f900  ori         $v0, $zero, 0xF900
    ctx->pc = 0x156910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x156914: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156918: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156918u;
    {
        const bool branch_taken_0x156918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156918u;
            // 0x15691c: 0x3401fa00  ori         $at, $zero, 0xFA00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156918) {
            ctx->pc = 0x156944u;
            goto label_156944;
        }
    }
    ctx->pc = 0x156920u;
    // 0x156920: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156924: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x156924u;
    {
        const bool branch_taken_0x156924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156924) {
            ctx->pc = 0x156944u;
            goto label_156944;
        }
    }
    ctx->pc = 0x15692Cu;
    // 0x15692c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156930: 0x26238000  addiu       $v1, $s1, -0x8000
    ctx->pc = 0x156930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x156934: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x156938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15693c: 0x1000ff25  b           . + 4 + (-0xDB << 2)
    ctx->pc = 0x15693Cu;
    {
        const bool branch_taken_0x15693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15693Cu;
            // 0x156940: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15693c) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156944u;
label_156944:
    // 0x156944: 0x0  nop
    ctx->pc = 0x156944u;
    // NOP
    // 0x156948: 0x3402fafa  ori         $v0, $zero, 0xFAFA
    ctx->pc = 0x156948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64250);
    // 0x15694c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15694cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156950: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x156950u;
    {
        const bool branch_taken_0x156950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156950u;
            // 0x156954: 0x3401fb00  ori         $at, $zero, 0xFB00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156950) {
            ctx->pc = 0x156A24u;
            goto label_156a24;
        }
    }
    ctx->pc = 0x156958u;
    // 0x156958: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15695c: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x15695Cu;
    {
        const bool branch_taken_0x15695c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15695Cu;
            // 0x156960: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15695c) {
            ctx->pc = 0x156A24u;
            goto label_156a24;
        }
    }
    ctx->pc = 0x156964u;
    // 0x156964: 0xc0550e0  jal         func_154380
    ctx->pc = 0x156964u;
    SET_GPR_U32(ctx, 31, 0x15696Cu);
    ctx->pc = 0x156968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156964u;
            // 0x156968: 0x24448506  addiu       $a0, $v0, -0x7AFA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935814));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154380u;
    if (runtime->hasFunction(0x154380u)) {
        auto targetFn = runtime->lookupFunction(0x154380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15696Cu; }
        if (ctx->pc != 0x15696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAndGetNameRegistTbl__Fi_0x154380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15696Cu; }
        if (ctx->pc != 0x15696Cu) { return; }
    }
    ctx->pc = 0x15696Cu;
label_15696c:
    // 0x15696c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15696cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156970: 0x1220ff18  beqz        $s1, . + 4 + (-0xE8 << 2)
    ctx->pc = 0x156970u;
    {
        const bool branch_taken_0x156970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x156970) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156978u;
    // 0x156978: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x156978u;
    {
        const bool branch_taken_0x156978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156978u;
            // 0x15697c: 0x86320000  lh          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156978) {
            ctx->pc = 0x156A04u;
            goto label_156a04;
        }
    }
    ctx->pc = 0x156980u;
label_156980:
    // 0x156980: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156980u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156984: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x156984u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15698c: 0xc055834  jal         func_1560D0
    ctx->pc = 0x15698Cu;
    SET_GPR_U32(ctx, 31, 0x156994u);
    ctx->pc = 0x156990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15698Cu;
            // 0x156990: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156994u; }
        if (ctx->pc != 0x156994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156994u; }
        if (ctx->pc != 0x156994u) { return; }
    }
    ctx->pc = 0x156994u;
label_156994:
    // 0x156994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x156994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156998: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x156998u;
    SET_GPR_U32(ctx, 31, 0x1569A0u);
    ctx->pc = 0x15699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156998u;
            // 0x15699c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569A0u; }
        if (ctx->pc != 0x1569A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569A0u; }
        if (ctx->pc != 0x1569A0u) { return; }
    }
    ctx->pc = 0x1569A0u;
label_1569a0:
    // 0x1569a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1569A0u;
    {
        const bool branch_taken_0x1569a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1569a0) {
            ctx->pc = 0x1569BCu;
            goto label_1569bc;
        }
    }
    ctx->pc = 0x1569A8u;
    // 0x1569a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1569ac: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1569b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1569b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1569b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1569B4u;
    {
        const bool branch_taken_0x1569b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569B4u;
            // 0x1569b8: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569b4) {
            ctx->pc = 0x1569F8u;
            goto label_1569f8;
        }
    }
    ctx->pc = 0x1569BCu;
label_1569bc:
    // 0x1569bc: 0x0  nop
    ctx->pc = 0x1569bcu;
    // NOP
    // 0x1569c0: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x1569c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1569c4: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x1569C4u;
    SET_GPR_U32(ctx, 31, 0x1569CCu);
    ctx->pc = 0x1569C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1569C4u;
            // 0x1569c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569CCu; }
        if (ctx->pc != 0x1569CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569CCu; }
        if (ctx->pc != 0x1569CCu) { return; }
    }
    ctx->pc = 0x1569CCu;
label_1569cc:
    // 0x1569cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1569CCu;
    {
        const bool branch_taken_0x1569cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1569cc) {
            ctx->pc = 0x1569E8u;
            goto label_1569e8;
        }
    }
    ctx->pc = 0x1569D4u;
    // 0x1569d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1569d8: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1569d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1569dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1569e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1569E0u;
    {
        const bool branch_taken_0x1569e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569E0u;
            // 0x1569e4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569e0) {
            ctx->pc = 0x1569F8u;
            goto label_1569f8;
        }
    }
    ctx->pc = 0x1569E8u;
label_1569e8:
    // 0x1569e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1569e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1569ec: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1569f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1569f4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1569f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1569f8:
    // 0x1569f8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1569f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1569fc: 0x86320000  lh          $s2, 0x0($s1)
    ctx->pc = 0x1569fcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156a00: 0x0  nop
    ctx->pc = 0x156a00u;
    // NOP
label_156a04:
    // 0x156a04: 0x0  nop
    ctx->pc = 0x156a04u;
    // NOP
    // 0x156a08: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x156a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x156a0c: 0x1242fef1  beq         $s2, $v0, . + 4 + (-0x10F << 2)
    ctx->pc = 0x156A0Cu;
    {
        const bool branch_taken_0x156a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x156A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A0Cu;
            // 0x156a10: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a0c) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156A14u;
    // 0x156a14: 0x1642ffda  bne         $s2, $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x156A14u;
    {
        const bool branch_taken_0x156a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x156a14) {
            ctx->pc = 0x156980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156980;
        }
    }
    ctx->pc = 0x156A1Cu;
    // 0x156a1c: 0x1000feed  b           . + 4 + (-0x113 << 2)
    ctx->pc = 0x156A1Cu;
    {
        const bool branch_taken_0x156a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a1c) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156A24u;
label_156a24:
    // 0x156a24: 0x0  nop
    ctx->pc = 0x156a24u;
    // NOP
    // 0x156a28: 0x3402faea  ori         $v0, $zero, 0xFAEA
    ctx->pc = 0x156a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64234);
    // 0x156a2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156a30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156A30u;
    {
        const bool branch_taken_0x156a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A30u;
            // 0x156a34: 0x3402faf9  ori         $v0, $zero, 0xFAF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64249);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a30) {
            ctx->pc = 0x156A5Cu;
            goto label_156a5c;
        }
    }
    ctx->pc = 0x156A38u;
    // 0x156a38: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x156a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x156a3c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x156A3Cu;
    {
        const bool branch_taken_0x156a3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A3Cu;
            // 0x156a40: 0x512823  subu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a3c) {
            ctx->pc = 0x156A5Cu;
            goto label_156a5c;
        }
    }
    ctx->pc = 0x156A44u;
    // 0x156a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a48: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x156a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x156a4c: 0xc0555ac  jal         func_1556B0
    ctx->pc = 0x156A4Cu;
    SET_GPR_U32(ctx, 31, 0x156A54u);
    ctx->pc = 0x156A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A4Cu;
            // 0x156a50: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556B0u;
    if (runtime->hasFunction(0x1556B0u)) {
        auto targetFn = runtime->lookupFunction(0x1556B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A54u; }
        if (ctx->pc != 0x156A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_str__6ClsMesFiPiPi_0x1556b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A54u; }
        if (ctx->pc != 0x156A54u) { return; }
    }
    ctx->pc = 0x156A54u;
label_156a54:
    // 0x156a54: 0x1000fedf  b           . + 4 + (-0x121 << 2)
    ctx->pc = 0x156A54u;
    {
        const bool branch_taken_0x156a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a54) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156A5Cu;
label_156a5c:
    // 0x156a5c: 0x0  nop
    ctx->pc = 0x156a5cu;
    // NOP
    // 0x156a60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x156a64: 0x34430500  ori         $v1, $v0, 0x500
    ctx->pc = 0x156a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x156a68: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x156a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x156a6c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x156a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x156a70: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156A70u;
    {
        const bool branch_taken_0x156a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A70u;
            // 0x156a74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a70) {
            ctx->pc = 0x156A8Cu;
            goto label_156a8c;
        }
    }
    ctx->pc = 0x156A78u;
    // 0x156a78: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x156a7c: 0xc055120  jal         func_154480
    ctx->pc = 0x156A7Cu;
    SET_GPR_U32(ctx, 31, 0x156A84u);
    ctx->pc = 0x156A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A7Cu;
            // 0x156a80: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154480u;
    if (runtime->hasFunction(0x154480u)) {
        auto targetFn = runtime->lookupFunction(0x154480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A84u; }
        if (ctx->pc != 0x156A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_value__6ClsMesFPiPi_0x154480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A84u; }
        if (ctx->pc != 0x156A84u) { return; }
    }
    ctx->pc = 0x156A84u;
label_156a84:
    // 0x156a84: 0x1000fed3  b           . + 4 + (-0x12D << 2)
    ctx->pc = 0x156A84u;
    {
        const bool branch_taken_0x156a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a84) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156A8Cu;
label_156a8c:
    // 0x156a8c: 0x0  nop
    ctx->pc = 0x156a8cu;
    // NOP
    // 0x156a90: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x156a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x156a94: 0x24438500  addiu       $v1, $v0, -0x7B00
    ctx->pc = 0x156a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x156a98: 0x286200f3  slti        $v0, $v1, 0xF3
    ctx->pc = 0x156a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)243) ? 1 : 0);
    // 0x156a9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156A9Cu;
    {
        const bool branch_taken_0x156a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A9Cu;
            // 0x156aa0: 0x286100fb  slti        $at, $v1, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a9c) {
            ctx->pc = 0x156AC8u;
            goto label_156ac8;
        }
    }
    ctx->pc = 0x156AA4u;
    // 0x156aa4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x156AA4u;
    {
        const bool branch_taken_0x156aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AA4u;
            // 0x156aa8: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aa4) {
            ctx->pc = 0x156AC8u;
            goto label_156ac8;
        }
    }
    ctx->pc = 0x156AACu;
    // 0x156aac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ab0: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ab4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x156ab8: 0xc0551dc  jal         func_154770
    ctx->pc = 0x156AB8u;
    SET_GPR_U32(ctx, 31, 0x156AC0u);
    ctx->pc = 0x156ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AB8u;
            // 0x156abc: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154770u;
    if (runtime->hasFunction(0x154770u)) {
        auto targetFn = runtime->lookupFunction(0x154770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AC0u; }
        if (ctx->pc != 0x156AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AC0u; }
        if (ctx->pc != 0x156AC0u) { return; }
    }
    ctx->pc = 0x156AC0u;
label_156ac0:
    // 0x156ac0: 0x1000fec4  b           . + 4 + (-0x13C << 2)
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156AC8u;
label_156ac8:
    // 0x156ac8: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x156acc: 0x24438500  addiu       $v1, $v0, -0x7B00
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x156ad0: 0x286200df  slti        $v0, $v1, 0xDF
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)223) ? 1 : 0);
    // 0x156ad4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156AD4u;
    {
        const bool branch_taken_0x156ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AD4u;
            // 0x156ad8: 0x286100e7  slti        $at, $v1, 0xE7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)231) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ad4) {
            ctx->pc = 0x156B00u;
            goto label_156b00;
        }
    }
    ctx->pc = 0x156ADCu;
    // 0x156adc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x156ADCu;
    {
        const bool branch_taken_0x156adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156ADCu;
            // 0x156ae0: 0x240200ee  addiu       $v0, $zero, 0xEE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156adc) {
            ctx->pc = 0x156B00u;
            goto label_156b00;
        }
    }
    ctx->pc = 0x156AE4u;
    // 0x156ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ae8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x156ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156aec: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x156aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x156af0: 0xc0551dc  jal         func_154770
    ctx->pc = 0x156AF0u;
    SET_GPR_U32(ctx, 31, 0x156AF8u);
    ctx->pc = 0x156AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AF0u;
            // 0x156af4: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154770u;
    if (runtime->hasFunction(0x154770u)) {
        auto targetFn = runtime->lookupFunction(0x154770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AF8u; }
        if (ctx->pc != 0x156AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AF8u; }
        if (ctx->pc != 0x156AF8u) { return; }
    }
    ctx->pc = 0x156AF8u;
label_156af8:
    // 0x156af8: 0x1000feb6  b           . + 4 + (-0x14A << 2)
    ctx->pc = 0x156AF8u;
    {
        const bool branch_taken_0x156af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156af8) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156B00u;
label_156b00:
    // 0x156b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b08: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x156b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x156b0c: 0xc0555b0  jal         func_1556C0
    ctx->pc = 0x156B0Cu;
    SET_GPR_U32(ctx, 31, 0x156B14u);
    ctx->pc = 0x156B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B0Cu;
            // 0x156b10: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1556C0u;
    if (runtime->hasFunction(0x1556C0u)) {
        auto targetFn = runtime->lookupFunction(0x1556C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B14u; }
        if (ctx->pc != 0x156B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B14u; }
        if (ctx->pc != 0x156B14u) { return; }
    }
    ctx->pc = 0x156B14u;
label_156b14:
    // 0x156b14: 0x1440feaf  bnez        $v0, . + 4 + (-0x151 << 2)
    ctx->pc = 0x156B14u;
    {
        const bool branch_taken_0x156b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156b14) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156B1Cu;
    // 0x156b1c: 0x87a60058  lh          $a2, 0x58($sp)
    ctx->pc = 0x156b1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b24: 0x87a7005c  lh          $a3, 0x5C($sp)
    ctx->pc = 0x156b24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x156b28: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156B28u;
    SET_GPR_U32(ctx, 31, 0x156B30u);
    ctx->pc = 0x156B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B28u;
            // 0x156b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B30u; }
        if (ctx->pc != 0x156B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B30u; }
        if (ctx->pc != 0x156B30u) { return; }
    }
    ctx->pc = 0x156B30u;
label_156b30:
    // 0x156b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b34: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x156B34u;
    SET_GPR_U32(ctx, 31, 0x156B3Cu);
    ctx->pc = 0x156B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B34u;
            // 0x156b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B3Cu; }
        if (ctx->pc != 0x156B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B3Cu; }
        if (ctx->pc != 0x156B3Cu) { return; }
    }
    ctx->pc = 0x156B3Cu;
label_156b3c:
    // 0x156b3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x156B3Cu;
    {
        const bool branch_taken_0x156b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B3Cu;
            // 0x156b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b3c) {
            ctx->pc = 0x156B9Cu;
            goto label_156b9c;
        }
    }
    ctx->pc = 0x156B44u;
    // 0x156b44: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x156B44u;
    SET_GPR_U32(ctx, 31, 0x156B4Cu);
    ctx->pc = 0x156B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B44u;
            // 0x156b48: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B4Cu; }
        if (ctx->pc != 0x156B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B4Cu; }
        if (ctx->pc != 0x156B4Cu) { return; }
    }
    ctx->pc = 0x156B4Cu;
label_156b4c:
    // 0x156b4c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156B4Cu;
    {
        const bool branch_taken_0x156b4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x156b4c) {
            ctx->pc = 0x156B78u;
            goto label_156b78;
        }
    }
    ctx->pc = 0x156B54u;
    // 0x156b54: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x156b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x156b58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B58u;
    {
        const bool branch_taken_0x156b58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x156B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B58u;
            // 0x156b5c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b58) {
            ctx->pc = 0x156B68u;
            goto label_156b68;
        }
    }
    ctx->pc = 0x156B60u;
    // 0x156b60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156b64: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x156b64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_156b68:
    // 0x156b68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x156b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156b70: 0x1000fe98  b           . + 4 + (-0x168 << 2)
    ctx->pc = 0x156B70u;
    {
        const bool branch_taken_0x156b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B70u;
            // 0x156b74: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b70) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156B78u;
label_156b78:
    // 0x156b78: 0xc66100c0  lwc1        $f1, 0xC0($s3)
    ctx->pc = 0x156b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156b7c: 0xc66000c8  lwc1        $f0, 0xC8($s3)
    ctx->pc = 0x156b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x156b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x156b84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x156B84u;
    SET_GPR_U32(ctx, 31, 0x156B8Cu);
    ctx->pc = 0x156B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B84u;
            // 0x156b88: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B8Cu; }
        if (ctx->pc != 0x156B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B8Cu; }
        if (ctx->pc != 0x156B8Cu) { return; }
    }
    ctx->pc = 0x156B8Cu;
label_156b8c:
    // 0x156b8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x156b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156b90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156b94: 0x1000fe8f  b           . + 4 + (-0x171 << 2)
    ctx->pc = 0x156B94u;
    {
        const bool branch_taken_0x156b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B94u;
            // 0x156b98: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b94) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156B9Cu;
label_156b9c:
    // 0x156b9c: 0x0  nop
    ctx->pc = 0x156b9cu;
    // NOP
    // 0x156ba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ba4: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x156BA4u;
    SET_GPR_U32(ctx, 31, 0x156BACu);
    ctx->pc = 0x156BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BA4u;
            // 0x156ba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BACu; }
        if (ctx->pc != 0x156BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BACu; }
        if (ctx->pc != 0x156BACu) { return; }
    }
    ctx->pc = 0x156BACu;
label_156bac:
    // 0x156bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156BACu;
    {
        const bool branch_taken_0x156bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bac) {
            ctx->pc = 0x156BC8u;
            goto label_156bc8;
        }
    }
    ctx->pc = 0x156BB4u;
    // 0x156bb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x156bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156bb8: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x156bbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156bc0: 0x1000fe84  b           . + 4 + (-0x17C << 2)
    ctx->pc = 0x156BC0u;
    {
        const bool branch_taken_0x156bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BC0u;
            // 0x156bc4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156bc0) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156BC8u;
label_156bc8:
    // 0x156bc8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x156bc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156bcc: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x156BCCu;
    SET_GPR_U32(ctx, 31, 0x156BD4u);
    ctx->pc = 0x156BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BCCu;
            // 0x156bd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BD4u; }
        if (ctx->pc != 0x156BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BD4u; }
        if (ctx->pc != 0x156BD4u) { return; }
    }
    ctx->pc = 0x156BD4u;
label_156bd4:
    // 0x156bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156BD4u;
    {
        const bool branch_taken_0x156bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bd4) {
            ctx->pc = 0x156BF0u;
            goto label_156bf0;
        }
    }
    ctx->pc = 0x156BDCu;
    // 0x156bdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156be0: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x156be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x156be4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156be8: 0x1000fe7a  b           . + 4 + (-0x186 << 2)
    ctx->pc = 0x156BE8u;
    {
        const bool branch_taken_0x156be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BE8u;
            // 0x156bec: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156be8) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156BF0u;
label_156bf0:
    // 0x156bf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x156bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x156bf4: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x156bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x156bf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156bfc: 0x1000fe75  b           . + 4 + (-0x18B << 2)
    ctx->pc = 0x156BFCu;
    {
        const bool branch_taken_0x156bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BFCu;
            // 0x156c00: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156bfc) {
            ctx->pc = 0x1565D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1565d4;
        }
    }
    ctx->pc = 0x156C04u;
label_156c04:
    // 0x156c04: 0x0  nop
    ctx->pc = 0x156c04u;
    // NOP
    // 0x156c08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x156c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156c0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156c0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156c10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x156C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C1Cu;
            // 0x156c20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156C24u;
}
