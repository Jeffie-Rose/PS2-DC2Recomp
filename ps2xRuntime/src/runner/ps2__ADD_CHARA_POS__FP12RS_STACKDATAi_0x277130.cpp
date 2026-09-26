#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_CHARA_POS__FP12RS_STACKDATAi
// Address: 0x277130 - 0x2771b8
void ps2__ADD_CHARA_POS__FP12RS_STACKDATAi_0x277130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_CHARA_POS__FP12RS_STACKDATAi_0x277130");
#endif

    switch (ctx->pc) {
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        default: break;
    }

    ctx->pc = 0x277130u;

label_277130:
    // 0x277130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_277134:
    // 0x277134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_277138:
    // 0x277138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27713c:
    // 0x27713c: 0xc097e18  jal         func_25F860
label_277140:
    if (ctx->pc == 0x277140u) {
        ctx->pc = 0x277140u;
            // 0x277140: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277144u;
        goto label_277144;
    }
    ctx->pc = 0x27713Cu;
    SET_GPR_U32(ctx, 31, 0x277144u);
    ctx->pc = 0x277140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27713Cu;
            // 0x277140: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277144u; }
        if (ctx->pc != 0x277144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277144u; }
        if (ctx->pc != 0x277144u) { return; }
    }
    ctx->pc = 0x277144u;
label_277144:
    // 0x277144: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x277144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277148:
    // 0x277148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27714c:
    // 0x27714c: 0xc097e34  jal         func_25F8D0
label_277150:
    if (ctx->pc == 0x277150u) {
        ctx->pc = 0x277150u;
            // 0x277150: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x277154u;
        goto label_277154;
    }
    ctx->pc = 0x27714Cu;
    SET_GPR_U32(ctx, 31, 0x277154u);
    ctx->pc = 0x277150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27714Cu;
            // 0x277150: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277154u; }
        if (ctx->pc != 0x277154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277154u; }
        if (ctx->pc != 0x277154u) { return; }
    }
    ctx->pc = 0x277154u;
label_277154:
    // 0x277154: 0xc0956d4  jal         func_255B50
label_277158:
    if (ctx->pc == 0x277158u) {
        ctx->pc = 0x277158u;
            // 0x277158: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27715Cu;
        goto label_27715c;
    }
    ctx->pc = 0x277154u;
    SET_GPR_U32(ctx, 31, 0x27715Cu);
    ctx->pc = 0x277158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277154u;
            // 0x277158: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27715Cu; }
        if (ctx->pc != 0x27715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27715Cu; }
        if (ctx->pc != 0x27715Cu) { return; }
    }
    ctx->pc = 0x27715Cu;
label_27715c:
    // 0x27715c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_277160:
    if (ctx->pc == 0x277160u) {
        ctx->pc = 0x277160u;
            // 0x277160: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277164u;
        goto label_277164;
    }
    ctx->pc = 0x27715Cu;
    {
        const bool branch_taken_0x27715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27715Cu;
            // 0x277160: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27715c) {
            ctx->pc = 0x27716Cu;
            goto label_27716c;
        }
    }
    ctx->pc = 0x277164u;
label_277164:
    // 0x277164: 0x10000010  b           . + 4 + (0x10 << 2)
label_277168:
    if (ctx->pc == 0x277168u) {
        ctx->pc = 0x277168u;
            // 0x277168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27716Cu;
        goto label_27716c;
    }
    ctx->pc = 0x277164u;
    {
        const bool branch_taken_0x277164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277164u;
            // 0x277168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277164) {
            ctx->pc = 0x2771A8u;
            goto label_2771a8;
        }
    }
    ctx->pc = 0x27716Cu;
label_27716c:
    // 0x27716c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27716cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277170:
    // 0x277170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277174:
    // 0x277174: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_277178:
    // 0x277178: 0x320f809  jalr        $t9
label_27717c:
    if (ctx->pc == 0x27717Cu) {
        ctx->pc = 0x27717Cu;
            // 0x27717c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x277180u;
        goto label_277180;
    }
    ctx->pc = 0x277178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277180u);
        ctx->pc = 0x27717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277178u;
            // 0x27717c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277180u; }
            if (ctx->pc != 0x277180u) { return; }
        }
        }
    }
    ctx->pc = 0x277180u;
label_277180:
    // 0x277180: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x277180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_277184:
    // 0x277184: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_277188:
    // 0x277188: 0xc041c38  jal         func_1070E0
label_27718c:
    if (ctx->pc == 0x27718Cu) {
        ctx->pc = 0x27718Cu;
            // 0x27718c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277190u;
        goto label_277190;
    }
    ctx->pc = 0x277188u;
    SET_GPR_U32(ctx, 31, 0x277190u);
    ctx->pc = 0x27718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277188u;
            // 0x27718c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277190u; }
        if (ctx->pc != 0x277190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277190u; }
        if (ctx->pc != 0x277190u) { return; }
    }
    ctx->pc = 0x277190u;
label_277190:
    // 0x277190: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x277190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277194:
    // 0x277194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277198:
    // 0x277198: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x277198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27719c:
    // 0x27719c: 0x320f809  jalr        $t9
label_2771a0:
    if (ctx->pc == 0x2771A0u) {
        ctx->pc = 0x2771A0u;
            // 0x2771a0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2771A4u;
        goto label_2771a4;
    }
    ctx->pc = 0x27719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2771A4u);
        ctx->pc = 0x2771A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27719Cu;
            // 0x2771a0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2771A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2771A4u; }
            if (ctx->pc != 0x2771A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2771A4u;
label_2771a4:
    // 0x2771a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2771a8:
    // 0x2771a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2771a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2771ac:
    // 0x2771ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2771acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2771b0:
    // 0x2771b0: 0x3e00008  jr          $ra
label_2771b4:
    if (ctx->pc == 0x2771B4u) {
        ctx->pc = 0x2771B4u;
            // 0x2771b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2771B8u;
        goto label_fallthrough_0x2771b0;
    }
    ctx->pc = 0x2771B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2771B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771B0u;
            // 0x2771b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2771b0:
    ctx->pc = 0x2771B8u;
}
