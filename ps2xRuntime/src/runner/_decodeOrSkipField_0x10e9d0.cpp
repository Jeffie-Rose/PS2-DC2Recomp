#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decodeOrSkipField
// Address: 0x10e9d0 - 0x10eb2c
void _decodeOrSkipField_0x10e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipField_0x10e9d0");
#endif

    switch (ctx->pc) {
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea4cu: goto label_10ea4c;
        case 0x10ea5cu: goto label_10ea5c;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea9cu: goto label_10ea9c;
        case 0x10eabcu: goto label_10eabc;
        case 0x10ead0u: goto label_10ead0;
        case 0x10eb08u: goto label_10eb08;
        default: break;
    }

    ctx->pc = 0x10e9d0u;

    // 0x10e9d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e9d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e9d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10e9dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e9e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10e9e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10e9f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e9f8: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x10e9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10e9fc: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E9FCu;
    {
        const bool branch_taken_0x10e9fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9FCu;
            // 0x10ea00: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9fc) {
            ctx->pc = 0x10EA10u;
            goto label_10ea10;
        }
    }
    ctx->pc = 0x10EA04u;
    // 0x10ea04: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10ea08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA08u;
    {
        const bool branch_taken_0x10ea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea08) {
            ctx->pc = 0x10EA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA08u;
            // 0x10ea0c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EA18u;
            goto label_10ea18;
        }
    }
    ctx->pc = 0x10EA10u;
label_10ea10:
    // 0x10ea10: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ea14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ea18:
    // 0x10ea18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EA18u;
    {
        const bool branch_taken_0x10ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA18u;
            // 0x10ea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea18) {
            ctx->pc = 0x10EA2Cu;
            goto label_10ea2c;
        }
    }
    ctx->pc = 0x10EA20u;
    // 0x10ea20: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x10ea24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ea28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10ea2c:
    // 0x10ea2c: 0xc042f18  jal         func_10BC60
    ctx->pc = 0x10EA2Cu;
    SET_GPR_U32(ctx, 31, 0x10EA34u);
    ctx->pc = 0x10EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA2Cu;
            // 0x10ea30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BC60u;
    if (runtime->hasFunction(0x10BC60u)) {
        auto targetFn = runtime->lookupFunction(0x10BC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA34u; }
        if (ctx->pc != 0x10EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x10bc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA34u; }
        if (ctx->pc != 0x10EA34u) { return; }
    }
    ctx->pc = 0x10EA34u;
label_10ea34:
    // 0x10ea34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA34u;
    {
        const bool branch_taken_0x10ea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA34u;
            // 0x10ea38: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea34) {
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10EA3Cu;
    // 0x10ea3c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA3Cu;
    {
        const bool branch_taken_0x10ea3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA3Cu;
            // 0x10ea40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea3c) {
            ctx->pc = 0x10EA54u;
            goto label_10ea54;
        }
    }
    ctx->pc = 0x10EA44u;
    // 0x10ea44: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x10EA44u;
    SET_GPR_U32(ctx, 31, 0x10EA4Cu);
    ctx->pc = 0x10EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA44u;
            // 0x10ea48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (runtime->hasFunction(0x10BB00u)) {
        auto targetFn = runtime->lookupFunction(0x10BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA4Cu; }
        if (ctx->pc != 0x10EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x10bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA4Cu; }
        if (ctx->pc != 0x10EA4Cu) { return; }
    }
    ctx->pc = 0x10EA4Cu;
label_10ea4c:
    // 0x10ea4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ea50:
    // 0x10ea50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ea54:
    // 0x10ea54: 0xc042c98  jal         func_10B260
    ctx->pc = 0x10EA54u;
    SET_GPR_U32(ctx, 31, 0x10EA5Cu);
    ctx->pc = 0x10EA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA54u;
            // 0x10ea58: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B260u;
    if (runtime->hasFunction(0x10B260u)) {
        auto targetFn = runtime->lookupFunction(0x10B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA5Cu; }
        if (ctx->pc != 0x10EA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x10b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA5Cu; }
        if (ctx->pc != 0x10EA5Cu) { return; }
    }
    ctx->pc = 0x10EA5Cu;
label_10ea5c:
    // 0x10ea5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA5Cu;
            // 0x10ea60: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EA78u;
            goto label_10ea78;
        }
    }
    ctx->pc = 0x10EA64u;
    // 0x10ea64: 0xc043acc  jal         func_10EB30
    ctx->pc = 0x10EA64u;
    SET_GPR_U32(ctx, 31, 0x10EA6Cu);
    ctx->pc = 0x10EA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA64u;
            // 0x10ea68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB30u;
    if (runtime->hasFunction(0x10EB30u)) {
        auto targetFn = runtime->lookupFunction(0x10EB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA6Cu; }
        if (ctx->pc != 0x10EA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x10eb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA6Cu; }
        if (ctx->pc != 0x10EA6Cu) { return; }
    }
    ctx->pc = 0x10EA6Cu;
label_10ea6c:
    // 0x10ea6c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x10ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x10ea70: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10EA70u;
    {
        const bool branch_taken_0x10ea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA70u;
            // 0x10ea74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea70) {
            ctx->pc = 0x10EB0Cu;
            goto label_10eb0c;
        }
    }
    ctx->pc = 0x10EA78u;
label_10ea78:
    // 0x10ea78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ea7c: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x10ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10ea80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10ea84: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x10ea84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x10ea88: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10EA88u;
    {
        const bool branch_taken_0x10ea88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA88u;
            // 0x10ea8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea88) {
            ctx->pc = 0x10EB0Cu;
            goto label_10eb0c;
        }
    }
    ctx->pc = 0x10EA90u;
    // 0x10ea90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea94: 0xc042f18  jal         func_10BC60
    ctx->pc = 0x10EA94u;
    SET_GPR_U32(ctx, 31, 0x10EA9Cu);
    ctx->pc = 0x10EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA94u;
            // 0x10ea98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BC60u;
    if (runtime->hasFunction(0x10BC60u)) {
        auto targetFn = runtime->lookupFunction(0x10BC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA9Cu; }
        if (ctx->pc != 0x10EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x10bc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA9Cu; }
        if (ctx->pc != 0x10EA9Cu) { return; }
    }
    ctx->pc = 0x10EA9Cu;
label_10ea9c:
    // 0x10ea9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10ea9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eaa0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x10eaa0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x10eaa4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EAA4u;
    {
        const bool branch_taken_0x10eaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAA4u;
            // 0x10eaa8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaa4) {
            ctx->pc = 0x10EAC0u;
            goto label_10eac0;
        }
    }
    ctx->pc = 0x10EAACu;
    // 0x10eaac: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EAACu;
    {
        const bool branch_taken_0x10eaac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eaac) {
            ctx->pc = 0x10EAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAACu;
            // 0x10eab0: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EAC4u;
            goto label_10eac4;
        }
    }
    ctx->pc = 0x10EAB4u;
    // 0x10eab4: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x10EAB4u;
    SET_GPR_U32(ctx, 31, 0x10EABCu);
    ctx->pc = 0x10EAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAB4u;
            // 0x10eab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (runtime->hasFunction(0x10BB00u)) {
        auto targetFn = runtime->lookupFunction(0x10BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EABCu; }
        if (ctx->pc != 0x10EABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x10bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EABCu; }
        if (ctx->pc != 0x10EABCu) { return; }
    }
    ctx->pc = 0x10EABCu;
label_10eabc:
    // 0x10eabc: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x10eabcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17));
label_10eac0:
    // 0x10eac0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_10eac4:
    // 0x10eac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eac8: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10EAC8u;
    SET_GPR_U32(ctx, 31, 0x10EAD0u);
    ctx->pc = 0x10EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAC8u;
            // 0x10eacc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (runtime->hasFunction(0x10BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x10BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EAD0u; }
        if (ctx->pc != 0x10EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x10bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EAD0u; }
        if (ctx->pc != 0x10EAD0u) { return; }
    }
    ctx->pc = 0x10EAD0u;
label_10ead0:
    // 0x10ead0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10ead4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10ead8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x10ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x10eadc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10eae0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x10eae4: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x10eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10eae8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10eaec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10eaf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10eaf4: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x10eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x10eaf8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EAF8u;
    {
        const bool branch_taken_0x10eaf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAF8u;
            // 0x10eafc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaf8) {
            ctx->pc = 0x10EB08u;
            goto label_10eb08;
        }
    }
    ctx->pc = 0x10EB00u;
    // 0x10eb00: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10EB00u;
    SET_GPR_U32(ctx, 31, 0x10EB08u);
    ctx->pc = 0x10EB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB00u;
            // 0x10eb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB08u; }
        if (ctx->pc != 0x10EB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB08u; }
        if (ctx->pc != 0x10EB08u) { return; }
    }
    ctx->pc = 0x10EB08u;
label_10eb08:
    // 0x10eb08: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10eb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10eb0c:
    // 0x10eb0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10eb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10eb10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10eb10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10eb14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10eb14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10eb18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10eb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eb1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB24u;
            // 0x10eb28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EB2Cu;
}
