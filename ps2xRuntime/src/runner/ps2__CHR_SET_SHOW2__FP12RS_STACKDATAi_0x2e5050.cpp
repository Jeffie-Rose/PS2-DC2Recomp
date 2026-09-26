#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_SHOW2__FP12RS_STACKDATAi
// Address: 0x2e5050 - 0x2e5190
void ps2__CHR_SET_SHOW2__FP12RS_STACKDATAi_0x2e5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_SHOW2__FP12RS_STACKDATAi_0x2e5050");
#endif

    switch (ctx->pc) {
        case 0x2e5050u: goto label_2e5050;
        case 0x2e5054u: goto label_2e5054;
        case 0x2e5058u: goto label_2e5058;
        case 0x2e505cu: goto label_2e505c;
        case 0x2e5060u: goto label_2e5060;
        case 0x2e5064u: goto label_2e5064;
        case 0x2e5068u: goto label_2e5068;
        case 0x2e506cu: goto label_2e506c;
        case 0x2e5070u: goto label_2e5070;
        case 0x2e5074u: goto label_2e5074;
        case 0x2e5078u: goto label_2e5078;
        case 0x2e507cu: goto label_2e507c;
        case 0x2e5080u: goto label_2e5080;
        case 0x2e5084u: goto label_2e5084;
        case 0x2e5088u: goto label_2e5088;
        case 0x2e508cu: goto label_2e508c;
        case 0x2e5090u: goto label_2e5090;
        case 0x2e5094u: goto label_2e5094;
        case 0x2e5098u: goto label_2e5098;
        case 0x2e509cu: goto label_2e509c;
        case 0x2e50a0u: goto label_2e50a0;
        case 0x2e50a4u: goto label_2e50a4;
        case 0x2e50a8u: goto label_2e50a8;
        case 0x2e50acu: goto label_2e50ac;
        case 0x2e50b0u: goto label_2e50b0;
        case 0x2e50b4u: goto label_2e50b4;
        case 0x2e50b8u: goto label_2e50b8;
        case 0x2e50bcu: goto label_2e50bc;
        case 0x2e50c0u: goto label_2e50c0;
        case 0x2e50c4u: goto label_2e50c4;
        case 0x2e50c8u: goto label_2e50c8;
        case 0x2e50ccu: goto label_2e50cc;
        case 0x2e50d0u: goto label_2e50d0;
        case 0x2e50d4u: goto label_2e50d4;
        case 0x2e50d8u: goto label_2e50d8;
        case 0x2e50dcu: goto label_2e50dc;
        case 0x2e50e0u: goto label_2e50e0;
        case 0x2e50e4u: goto label_2e50e4;
        case 0x2e50e8u: goto label_2e50e8;
        case 0x2e50ecu: goto label_2e50ec;
        case 0x2e50f0u: goto label_2e50f0;
        case 0x2e50f4u: goto label_2e50f4;
        case 0x2e50f8u: goto label_2e50f8;
        case 0x2e50fcu: goto label_2e50fc;
        case 0x2e5100u: goto label_2e5100;
        case 0x2e5104u: goto label_2e5104;
        case 0x2e5108u: goto label_2e5108;
        case 0x2e510cu: goto label_2e510c;
        case 0x2e5110u: goto label_2e5110;
        case 0x2e5114u: goto label_2e5114;
        case 0x2e5118u: goto label_2e5118;
        case 0x2e511cu: goto label_2e511c;
        case 0x2e5120u: goto label_2e5120;
        case 0x2e5124u: goto label_2e5124;
        case 0x2e5128u: goto label_2e5128;
        case 0x2e512cu: goto label_2e512c;
        case 0x2e5130u: goto label_2e5130;
        case 0x2e5134u: goto label_2e5134;
        case 0x2e5138u: goto label_2e5138;
        case 0x2e513cu: goto label_2e513c;
        case 0x2e5140u: goto label_2e5140;
        case 0x2e5144u: goto label_2e5144;
        case 0x2e5148u: goto label_2e5148;
        case 0x2e514cu: goto label_2e514c;
        case 0x2e5150u: goto label_2e5150;
        case 0x2e5154u: goto label_2e5154;
        case 0x2e5158u: goto label_2e5158;
        case 0x2e515cu: goto label_2e515c;
        case 0x2e5160u: goto label_2e5160;
        case 0x2e5164u: goto label_2e5164;
        case 0x2e5168u: goto label_2e5168;
        case 0x2e516cu: goto label_2e516c;
        case 0x2e5170u: goto label_2e5170;
        case 0x2e5174u: goto label_2e5174;
        case 0x2e5178u: goto label_2e5178;
        case 0x2e517cu: goto label_2e517c;
        case 0x2e5180u: goto label_2e5180;
        case 0x2e5184u: goto label_2e5184;
        case 0x2e5188u: goto label_2e5188;
        case 0x2e518cu: goto label_2e518c;
        default: break;
    }

    ctx->pc = 0x2e5050u;

label_2e5050:
    // 0x2e5050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e5054:
    // 0x2e5054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e5058:
    // 0x2e5058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e5058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e505c:
    // 0x2e505c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e5060:
    // 0x2e5060: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x2e5060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e5064:
    // 0x2e5064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e5068:
    // 0x2e5068: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e5068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e506c:
    // 0x2e506c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e5070:
    // 0x2e5070: 0xc0b8ca0  jal         func_2E3280
label_2e5074:
    if (ctx->pc == 0x2E5074u) {
        ctx->pc = 0x2E5074u;
            // 0x2e5074: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E5078u;
        goto label_2e5078;
    }
    ctx->pc = 0x2E5070u;
    SET_GPR_U32(ctx, 31, 0x2E5078u);
    ctx->pc = 0x2E5074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5070u;
            // 0x2e5074: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5078u; }
        if (ctx->pc != 0x2E5078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5078u; }
        if (ctx->pc != 0x2E5078u) { return; }
    }
    ctx->pc = 0x2E5078u;
label_2e5078:
    // 0x2e5078: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2e5078u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e507c:
    // 0x2e507c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e5080:
    // 0x2e5080: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e5084:
    // 0x2e5084: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e5084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e5088:
    // 0x2e5088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e508c:
    if (ctx->pc == 0x2E508Cu) {
        ctx->pc = 0x2E508Cu;
            // 0x2e508c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5090u;
        goto label_2e5090;
    }
    ctx->pc = 0x2E5088u;
    {
        const bool branch_taken_0x2e5088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5088u;
            // 0x2e508c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5088) {
            ctx->pc = 0x2E5098u;
            goto label_2e5098;
        }
    }
    ctx->pc = 0x2E5090u;
label_2e5090:
    // 0x2e5090: 0x10000037  b           . + 4 + (0x37 << 2)
label_2e5094:
    if (ctx->pc == 0x2E5094u) {
        ctx->pc = 0x2E5094u;
            // 0x2e5094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5098u;
        goto label_2e5098;
    }
    ctx->pc = 0x2E5090u;
    {
        const bool branch_taken_0x2e5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5090u;
            // 0x2e5094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5090) {
            ctx->pc = 0x2E5170u;
            goto label_2e5170;
        }
    }
    ctx->pc = 0x2E5098u;
label_2e5098:
    // 0x2e5098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e5098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e509c:
    // 0x2e509c: 0xc0b8ca0  jal         func_2E3280
label_2e50a0:
    if (ctx->pc == 0x2E50A0u) {
        ctx->pc = 0x2E50A0u;
            // 0x2e50a0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E50A4u;
        goto label_2e50a4;
    }
    ctx->pc = 0x2E509Cu;
    SET_GPR_U32(ctx, 31, 0x2E50A4u);
    ctx->pc = 0x2E50A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E509Cu;
            // 0x2e50a0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50A4u; }
        if (ctx->pc != 0x2E50A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50A4u; }
        if (ctx->pc != 0x2E50A4u) { return; }
    }
    ctx->pc = 0x2E50A4u;
label_2e50a4:
    // 0x2e50a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e50a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e50a8:
    // 0x2e50a8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2e50a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e50ac:
    // 0x2e50ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e50b0:
    if (ctx->pc == 0x2E50B0u) {
        ctx->pc = 0x2E50B0u;
            // 0x2e50b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E50B4u;
        goto label_2e50b4;
    }
    ctx->pc = 0x2E50ACu;
    {
        const bool branch_taken_0x2e50ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50ACu;
            // 0x2e50b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50ac) {
            ctx->pc = 0x2E50D4u;
            goto label_2e50d4;
        }
    }
    ctx->pc = 0x2E50B4u;
label_2e50b4:
    // 0x2e50b4: 0xc0b8ca0  jal         func_2E3280
label_2e50b8:
    if (ctx->pc == 0x2E50B8u) {
        ctx->pc = 0x2E50B8u;
            // 0x2e50b8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E50BCu;
        goto label_2e50bc;
    }
    ctx->pc = 0x2E50B4u;
    SET_GPR_U32(ctx, 31, 0x2E50BCu);
    ctx->pc = 0x2E50B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50B4u;
            // 0x2e50b8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50BCu; }
        if (ctx->pc != 0x2E50BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50BCu; }
        if (ctx->pc != 0x2E50BCu) { return; }
    }
    ctx->pc = 0x2E50BCu;
label_2e50bc:
    // 0x2e50bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e50bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e50c0:
    // 0x2e50c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e50c4:
    // 0x2e50c4: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_2e50c8:
    if (ctx->pc == 0x2E50C8u) {
        ctx->pc = 0x2E50C8u;
            // 0x2e50c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E50CCu;
        goto label_2e50cc;
    }
    ctx->pc = 0x2E50C4u;
    {
        const bool branch_taken_0x2e50c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E50C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50C4u;
            // 0x2e50c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50c4) {
            ctx->pc = 0x2E50D4u;
            goto label_2e50d4;
        }
    }
    ctx->pc = 0x2E50CCu;
label_2e50cc:
    // 0x2e50cc: 0xc0b8cb0  jal         func_2E32C0
label_2e50d0:
    if (ctx->pc == 0x2E50D0u) {
        ctx->pc = 0x2E50D4u;
        goto label_2e50d4;
    }
    ctx->pc = 0x2E50CCu;
    SET_GPR_U32(ctx, 31, 0x2E50D4u);
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50D4u; }
        if (ctx->pc != 0x2E50D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50D4u; }
        if (ctx->pc != 0x2E50D4u) { return; }
    }
    ctx->pc = 0x2E50D4u;
label_2e50d4:
    // 0x2e50d4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e50d8:
    // 0x2e50d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e50dc:
    // 0x2e50dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e50e0:
    // 0x2e50e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e50e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e50e4:
    // 0x2e50e4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2e50e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2e50e8:
    // 0x2e50e8: 0x320f809  jalr        $t9
label_2e50ec:
    if (ctx->pc == 0x2E50ECu) {
        ctx->pc = 0x2E50ECu;
            // 0x2e50ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E50F0u;
        goto label_2e50f0;
    }
    ctx->pc = 0x2E50E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E50F0u);
        ctx->pc = 0x2E50ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50E8u;
            // 0x2e50ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E50F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E50F0u; }
            if (ctx->pc != 0x2E50F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E50F0u;
label_2e50f0:
    // 0x2e50f0: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e50f4:
    // 0x2e50f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2e50f8:
    // 0x2e50f8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e50f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2e50fc:
    // 0x2e50fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5100:
    // 0x2e5100: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2e5100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2e5104:
    // 0x2e5104: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e5104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e5108:
    // 0x2e5108: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x2e5108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
label_2e510c:
    // 0x2e510c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e5110:
    // 0x2e5110: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e5110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e5114:
    // 0x2e5114: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e5118:
    // 0x2e5118: 0x1625000a  bne         $s1, $a1, . + 4 + (0xA << 2)
label_2e511c:
    if (ctx->pc == 0x2E511Cu) {
        ctx->pc = 0x2E511Cu;
            // 0x2e511c: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->pc = 0x2E5120u;
        goto label_2e5120;
    }
    ctx->pc = 0x2E5118u;
    {
        const bool branch_taken_0x2e5118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5118u;
            // 0x2e511c: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5118) {
            ctx->pc = 0x2E5144u;
            goto label_2e5144;
        }
    }
    ctx->pc = 0x2E5120u;
label_2e5120:
    // 0x2e5120: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
label_2e5124:
    if (ctx->pc == 0x2E5124u) {
        ctx->pc = 0x2E5124u;
            // 0x2e5124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E5128u;
        goto label_2e5128;
    }
    ctx->pc = 0x2E5120u;
    {
        const bool branch_taken_0x2e5120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E5124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5120u;
            // 0x2e5124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5120) {
            ctx->pc = 0x2E5148u;
            goto label_2e5148;
        }
    }
    ctx->pc = 0x2E5128u;
label_2e5128:
    // 0x2e5128: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e512c:
    // 0x2e512c: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2e512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2e5130:
    // 0x2e5130: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2e5130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2e5134:
    // 0x2e5134: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e5134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e5138:
    // 0x2e5138: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e513c:
    // 0x2e513c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e5140:
    if (ctx->pc == 0x2E5140u) {
        ctx->pc = 0x2E5140u;
            // 0x2e5140: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x2E5144u;
        goto label_2e5144;
    }
    ctx->pc = 0x2E513Cu;
    {
        const bool branch_taken_0x2e513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E513Cu;
            // 0x2e5140: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e513c) {
            ctx->pc = 0x2E516Cu;
            goto label_2e516c;
        }
    }
    ctx->pc = 0x2E5144u;
label_2e5144:
    // 0x2e5144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5148:
    // 0x2e5148: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_2e514c:
    if (ctx->pc == 0x2E514Cu) {
        ctx->pc = 0x2E514Cu;
            // 0x2e514c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E5150u;
        goto label_2e5150;
    }
    ctx->pc = 0x2E5148u;
    {
        const bool branch_taken_0x2e5148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5148u;
            // 0x2e514c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5148) {
            ctx->pc = 0x2E5170u;
            goto label_2e5170;
        }
    }
    ctx->pc = 0x2E5150u;
label_2e5150:
    // 0x2e5150: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2e5154:
    if (ctx->pc == 0x2E5154u) {
        ctx->pc = 0x2E5158u;
        goto label_2e5158;
    }
    ctx->pc = 0x2E5150u;
    {
        const bool branch_taken_0x2e5150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5150) {
            ctx->pc = 0x2E516Cu;
            goto label_2e516c;
        }
    }
    ctx->pc = 0x2E5158u;
label_2e5158:
    // 0x2e5158: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e515c:
    // 0x2e515c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e515cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2e5160:
    // 0x2e5160: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2e5164:
    // 0x2e5164: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e5168:
    // 0x2e5168: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x2e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_2e516c:
    // 0x2e516c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5170:
    // 0x2e5170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e5174:
    // 0x2e5174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e5174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e5178:
    // 0x2e5178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e517c:
    // 0x2e517c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e517cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5180:
    // 0x2e5180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5184:
    // 0x2e5184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5188:
    // 0x2e5188: 0x3e00008  jr          $ra
label_2e518c:
    if (ctx->pc == 0x2E518Cu) {
        ctx->pc = 0x2E518Cu;
            // 0x2e518c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E5190u;
        goto label_fallthrough_0x2e5188;
    }
    ctx->pc = 0x2E5188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5188u;
            // 0x2e518c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e5188:
    ctx->pc = 0x2E5190u;
}
