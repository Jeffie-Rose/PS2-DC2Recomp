#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_CHARA__FP12RS_STACKDATAi
// Address: 0x262fc0 - 0x2631e0
void ps2__LOAD_CHARA__FP12RS_STACKDATAi_0x262fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_CHARA__FP12RS_STACKDATAi_0x262fc0");
#endif

    switch (ctx->pc) {
        case 0x262ff8u: goto label_262ff8;
        case 0x26301cu: goto label_26301c;
        case 0x263088u: goto label_263088;
        case 0x263098u: goto label_263098;
        case 0x2630a8u: goto label_2630a8;
        case 0x2630b4u: goto label_2630b4;
        case 0x2630c4u: goto label_2630c4;
        case 0x2630d4u: goto label_2630d4;
        case 0x2630e4u: goto label_2630e4;
        case 0x2630f0u: goto label_2630f0;
        case 0x26310cu: goto label_26310c;
        case 0x26312cu: goto label_26312c;
        case 0x263134u: goto label_263134;
        case 0x263144u: goto label_263144;
        case 0x263160u: goto label_263160;
        case 0x263174u: goto label_263174;
        case 0x263184u: goto label_263184;
        case 0x26319cu: goto label_26319c;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631c4u: goto label_2631c4;
        default: break;
    }

    ctx->pc = 0x262fc0u;

    // 0x262fc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x262fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x262fc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x262fc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262fd4: 0x10a20039  beq         $a1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x262FD4u;
    {
        const bool branch_taken_0x262fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x262FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262FD4u;
            // 0x262fd8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fd4) {
            ctx->pc = 0x2630BCu;
            goto label_2630bc;
        }
    }
    ctx->pc = 0x262FDCu;
    // 0x262fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262fe0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262FE0u;
    {
        const bool branch_taken_0x262fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x262fe0) {
            ctx->pc = 0x262FF0u;
            goto label_262ff0;
        }
    }
    ctx->pc = 0x262FE8u;
    // 0x262fe8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x262FE8u;
    {
        const bool branch_taken_0x262fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262FE8u;
            // 0x262fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fe8) {
            ctx->pc = 0x2630F8u;
            goto label_2630f8;
        }
    }
    ctx->pc = 0x262FF0u;
label_262ff0:
    // 0x262ff0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262FF0u;
    SET_GPR_U32(ctx, 31, 0x262FF8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FF8u; }
        if (ctx->pc != 0x262FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FF8u; }
        if (ctx->pc != 0x262FF8u) { return; }
    }
    ctx->pc = 0x262FF8u;
label_262ff8:
    // 0x262ff8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x262ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x262ffc: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x262ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x263000: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263000u;
    {
        const bool branch_taken_0x263000 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263000u;
            // 0x263004: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263000) {
            ctx->pc = 0x263010u;
            goto label_263010;
        }
    }
    ctx->pc = 0x263008u;
    // 0x263008: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x263008u;
    {
        const bool branch_taken_0x263008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263008u;
            // 0x26300c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263008) {
            ctx->pc = 0x263070u;
            goto label_263070;
        }
    }
    ctx->pc = 0x263010u;
label_263010:
    // 0x263010: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x263010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x263014: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263014u;
    {
        const bool branch_taken_0x263014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263014u;
            // 0x263018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263014) {
            ctx->pc = 0x263048u;
            goto label_263048;
        }
    }
    ctx->pc = 0x26301Cu;
label_26301c:
    // 0x26301c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x263020: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x263020u;
    {
        const bool branch_taken_0x263020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263020) {
            ctx->pc = 0x263054u;
            goto label_263054;
        }
    }
    ctx->pc = 0x263028u;
    // 0x263028: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x263028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26302c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26302Cu;
    {
        const bool branch_taken_0x26302c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26302c) {
            ctx->pc = 0x26303Cu;
            goto label_26303c;
        }
    }
    ctx->pc = 0x263034u;
    // 0x263034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263034u;
    {
        const bool branch_taken_0x263034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263034u;
            // 0x263038: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263034) {
            ctx->pc = 0x263048u;
            goto label_263048;
        }
    }
    ctx->pc = 0x26303Cu;
label_26303c:
    // 0x26303c: 0x0  nop
    ctx->pc = 0x26303cu;
    // NOP
    // 0x263040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x263040u;
    {
        const bool branch_taken_0x263040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263040u;
            // 0x263044: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263040) {
            ctx->pc = 0x263070u;
            goto label_263070;
        }
    }
    ctx->pc = 0x263048u;
label_263048:
    // 0x263048: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x263048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26304c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26304Cu;
    {
        const bool branch_taken_0x26304c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26304c) {
            ctx->pc = 0x26301Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26301c;
        }
    }
    ctx->pc = 0x263054u;
label_263054:
    // 0x263054: 0x0  nop
    ctx->pc = 0x263054u;
    // NOP
    // 0x263058: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263058u;
    {
        const bool branch_taken_0x263058 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263058u;
            // 0x26305c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263058) {
            ctx->pc = 0x263068u;
            goto label_263068;
        }
    }
    ctx->pc = 0x263060u;
    // 0x263060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263060u;
    {
        const bool branch_taken_0x263060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263060) {
            ctx->pc = 0x263070u;
            goto label_263070;
        }
    }
    ctx->pc = 0x263068u;
label_263068:
    // 0x263068: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x263068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26306c: 0x0  nop
    ctx->pc = 0x26306cu;
    // NOP
label_263070:
    // 0x263070: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263070u;
    {
        const bool branch_taken_0x263070 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x263074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263070u;
            // 0x263074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263070) {
            ctx->pc = 0x263080u;
            goto label_263080;
        }
    }
    ctx->pc = 0x263078u;
    // 0x263078: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x263078u;
    {
        const bool branch_taken_0x263078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263078u;
            // 0x26307c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263078) {
            ctx->pc = 0x2631C8u;
            goto label_2631c8;
        }
    }
    ctx->pc = 0x263080u;
label_263080:
    // 0x263080: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263080u;
    SET_GPR_U32(ctx, 31, 0x263088u);
    ctx->pc = 0x263084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263080u;
            // 0x263084: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263088u; }
        if (ctx->pc != 0x263088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263088u; }
        if (ctx->pc != 0x263088u) { return; }
    }
    ctx->pc = 0x263088u;
label_263088:
    // 0x263088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26308c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263090: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x263090u;
    SET_GPR_U32(ctx, 31, 0x263098u);
    ctx->pc = 0x263094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263090u;
            // 0x263094: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263098u; }
        if (ctx->pc != 0x263098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263098u; }
        if (ctx->pc != 0x263098u) { return; }
    }
    ctx->pc = 0x263098u;
label_263098:
    // 0x263098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26309c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630a0: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x2630A0u;
    SET_GPR_U32(ctx, 31, 0x2630A8u);
    ctx->pc = 0x2630A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630A0u;
            // 0x2630a4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630A8u; }
        if (ctx->pc != 0x2630A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630A8u; }
        if (ctx->pc != 0x2630A8u) { return; }
    }
    ctx->pc = 0x2630A8u;
label_2630a8:
    // 0x2630a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2630a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630ac: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x2630ACu;
    SET_GPR_U32(ctx, 31, 0x2630B4u);
    ctx->pc = 0x2630B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630ACu;
            // 0x2630b0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B4u; }
        if (ctx->pc != 0x2630B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B4u; }
        if (ctx->pc != 0x2630B4u) { return; }
    }
    ctx->pc = 0x2630B4u;
label_2630b4:
    // 0x2630b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2630B4u;
    {
        const bool branch_taken_0x2630b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2630B4u;
            // 0x2630b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630b4) {
            ctx->pc = 0x263100u;
            goto label_263100;
        }
    }
    ctx->pc = 0x2630BCu;
label_2630bc:
    // 0x2630bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2630BCu;
    SET_GPR_U32(ctx, 31, 0x2630C4u);
    ctx->pc = 0x2630C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630BCu;
            // 0x2630c0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630C4u; }
        if (ctx->pc != 0x2630C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630C4u; }
        if (ctx->pc != 0x2630C4u) { return; }
    }
    ctx->pc = 0x2630C4u;
label_2630c4:
    // 0x2630c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2630c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2630c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630cc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2630CCu;
    SET_GPR_U32(ctx, 31, 0x2630D4u);
    ctx->pc = 0x2630D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630CCu;
            // 0x2630d0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630D4u; }
        if (ctx->pc != 0x2630D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630D4u; }
        if (ctx->pc != 0x2630D4u) { return; }
    }
    ctx->pc = 0x2630D4u;
label_2630d4:
    // 0x2630d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2630d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2630d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630dc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2630DCu;
    SET_GPR_U32(ctx, 31, 0x2630E4u);
    ctx->pc = 0x2630E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630DCu;
            // 0x2630e0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630E4u; }
        if (ctx->pc != 0x2630E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630E4u; }
        if (ctx->pc != 0x2630E4u) { return; }
    }
    ctx->pc = 0x2630E4u;
label_2630e4:
    // 0x2630e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2630e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2630E8u;
    SET_GPR_U32(ctx, 31, 0x2630F0u);
    ctx->pc = 0x2630ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630E8u;
            // 0x2630ec: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630F0u; }
        if (ctx->pc != 0x2630F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630F0u; }
        if (ctx->pc != 0x2630F0u) { return; }
    }
    ctx->pc = 0x2630F0u;
label_2630f0:
    // 0x2630f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2630F0u;
    {
        const bool branch_taken_0x2630f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2630F0u;
            // 0x2630f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f0) {
            ctx->pc = 0x263100u;
            goto label_263100;
        }
    }
    ctx->pc = 0x2630F8u;
label_2630f8:
    // 0x2630f8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2630F8u;
    {
        const bool branch_taken_0x2630f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2630F8u;
            // 0x2630fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f8) {
            ctx->pc = 0x2631CCu;
            goto label_2631cc;
        }
    }
    ctx->pc = 0x263100u;
label_263100:
    // 0x263100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263104: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x263104u;
    SET_GPR_U32(ctx, 31, 0x26310Cu);
    ctx->pc = 0x263108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263104u;
            // 0x263108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26310Cu; }
        if (ctx->pc != 0x26310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26310Cu; }
        if (ctx->pc != 0x26310Cu) { return; }
    }
    ctx->pc = 0x26310Cu;
label_26310c:
    // 0x26310c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26310Cu;
    {
        const bool branch_taken_0x26310c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26310Cu;
            // 0x263110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26310c) {
            ctx->pc = 0x26311Cu;
            goto label_26311c;
        }
    }
    ctx->pc = 0x263114u;
    // 0x263114: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x263114u;
    {
        const bool branch_taken_0x263114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263114u;
            // 0x263118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263114) {
            ctx->pc = 0x2631C8u;
            goto label_2631c8;
        }
    }
    ctx->pc = 0x26311Cu;
label_26311c:
    // 0x26311c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x263120: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263124: 0xc098b9c  jal         func_262E70
    ctx->pc = 0x263124u;
    SET_GPR_U32(ctx, 31, 0x26312Cu);
    ctx->pc = 0x263128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263124u;
            // 0x263128: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262E70u;
    if (runtime->hasFunction(0x262E70u)) {
        auto targetFn = runtime->lookupFunction(0x262E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26312Cu; }
        if (ctx->pc != 0x26312Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26312Cu; }
        if (ctx->pc != 0x26312Cu) { return; }
    }
    ctx->pc = 0x26312Cu;
label_26312c:
    // 0x26312c: 0xc064220  jal         func_190880
    ctx->pc = 0x26312Cu;
    SET_GPR_U32(ctx, 31, 0x263134u);
    ctx->pc = 0x263130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26312Cu;
            // 0x263130: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263134u; }
        if (ctx->pc != 0x263134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263134u; }
        if (ctx->pc != 0x263134u) { return; }
    }
    ctx->pc = 0x263134u;
label_263134:
    // 0x263134: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x263134u;
    {
        const bool branch_taken_0x263134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263134u;
            // 0x263138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263134) {
            ctx->pc = 0x2631C4u;
            goto label_2631c4;
        }
    }
    ctx->pc = 0x26313Cu;
    // 0x26313c: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x26313Cu;
    SET_GPR_U32(ctx, 31, 0x263144u);
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263144u; }
        if (ctx->pc != 0x263144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263144u; }
        if (ctx->pc != 0x263144u) { return; }
    }
    ctx->pc = 0x263144u;
label_263144:
    // 0x263144: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x263144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x263148: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x263148u;
    {
        const bool branch_taken_0x263148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263148u;
            // 0x26314c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263148) {
            ctx->pc = 0x2631C8u;
            goto label_2631c8;
        }
    }
    ctx->pc = 0x263150u;
    // 0x263150: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x263150u;
    {
        const bool branch_taken_0x263150 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x263154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263150u;
            // 0x263154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263150) {
            ctx->pc = 0x2631C4u;
            goto label_2631c4;
        }
    }
    ctx->pc = 0x263158u;
    // 0x263158: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x263158u;
    SET_GPR_U32(ctx, 31, 0x263160u);
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263160u; }
        if (ctx->pc != 0x263160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263160u; }
        if (ctx->pc != 0x263160u) { return; }
    }
    ctx->pc = 0x263160u;
label_263160:
    // 0x263160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263168: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x263168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26316c: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x26316Cu;
    SET_GPR_U32(ctx, 31, 0x263174u);
    ctx->pc = 0x263170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26316Cu;
            // 0x263170: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263174u; }
        if (ctx->pc != 0x263174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263174u; }
        if (ctx->pc != 0x263174u) { return; }
    }
    ctx->pc = 0x263174u;
label_263174:
    // 0x263174: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x263174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x263178: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26317c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x26317Cu;
    SET_GPR_U32(ctx, 31, 0x263184u);
    ctx->pc = 0x263180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26317Cu;
            // 0x263180: 0x24a5c6e0  addiu       $a1, $a1, -0x3920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263184u; }
        if (ctx->pc != 0x263184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263184u; }
        if (ctx->pc != 0x263184u) { return; }
    }
    ctx->pc = 0x263184u;
label_263184:
    // 0x263184: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263184u;
    {
        const bool branch_taken_0x263184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263184u;
            // 0x263188: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263184) {
            ctx->pc = 0x2631A4u;
            goto label_2631a4;
        }
    }
    ctx->pc = 0x26318Cu;
    // 0x26318c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26318cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x263190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263194: 0xc0b4ff0  jal         func_2D3FC0
    ctx->pc = 0x263194u;
    SET_GPR_U32(ctx, 31, 0x26319Cu);
    ctx->pc = 0x263198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263194u;
            // 0x263198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3FC0u;
    if (runtime->hasFunction(0x2D3FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26319Cu; }
        if (ctx->pc != 0x26319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26319Cu; }
        if (ctx->pc != 0x26319Cu) { return; }
    }
    ctx->pc = 0x26319Cu;
label_26319c:
    // 0x26319c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26319Cu;
    {
        const bool branch_taken_0x26319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26319c) {
            ctx->pc = 0x2631C4u;
            goto label_2631c4;
        }
    }
    ctx->pc = 0x2631A4u;
label_2631a4:
    // 0x2631a4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2631a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2631a8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2631A8u;
    SET_GPR_U32(ctx, 31, 0x2631B0u);
    ctx->pc = 0x2631ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2631A8u;
            // 0x2631ac: 0x24a5c6f0  addiu       $a1, $a1, -0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631B0u; }
        if (ctx->pc != 0x2631B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631B0u; }
        if (ctx->pc != 0x2631B0u) { return; }
    }
    ctx->pc = 0x2631B0u;
label_2631b0:
    // 0x2631b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2631B0u;
    {
        const bool branch_taken_0x2631b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2631B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631B0u;
            // 0x2631b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631b0) {
            ctx->pc = 0x2631C4u;
            goto label_2631c4;
        }
    }
    ctx->pc = 0x2631B8u;
    // 0x2631b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2631bc: 0xc0b4ff0  jal         func_2D3FC0
    ctx->pc = 0x2631BCu;
    SET_GPR_U32(ctx, 31, 0x2631C4u);
    ctx->pc = 0x2631C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2631BCu;
            // 0x2631c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3FC0u;
    if (runtime->hasFunction(0x2D3FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631C4u; }
        if (ctx->pc != 0x2631C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631C4u; }
        if (ctx->pc != 0x2631C4u) { return; }
    }
    ctx->pc = 0x2631C4u;
label_2631c4:
    // 0x2631c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2631c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2631c8:
    // 0x2631c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2631c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2631cc:
    // 0x2631cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2631ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2631d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2631d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2631d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2631d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2631d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2631D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2631DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631D8u;
            // 0x2631dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2631E0u;
}
