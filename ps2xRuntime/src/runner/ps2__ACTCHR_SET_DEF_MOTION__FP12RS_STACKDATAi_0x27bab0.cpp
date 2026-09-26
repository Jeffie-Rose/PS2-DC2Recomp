#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ACTCHR_SET_DEF_MOTION__FP12RS_STACKDATAi
// Address: 0x27bab0 - 0x27bb58
void ps2__ACTCHR_SET_DEF_MOTION__FP12RS_STACKDATAi_0x27bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ACTCHR_SET_DEF_MOTION__FP12RS_STACKDATAi_0x27bab0");
#endif

    switch (ctx->pc) {
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        default: break;
    }

    ctx->pc = 0x27bab0u;

label_27bab0:
    // 0x27bab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27bab4:
    // 0x27bab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27bab8:
    // 0x27bab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27babc:
    // 0x27babc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27bac0:
    // 0x27bac0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x27bac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_27bac4:
    // 0x27bac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27bac8:
    // 0x27bac8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27bac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27bacc:
    // 0x27bacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27bad0:
    // 0x27bad0: 0xc097e18  jal         func_25F860
label_27bad4:
    if (ctx->pc == 0x27BAD4u) {
        ctx->pc = 0x27BAD4u;
            // 0x27bad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BAD8u;
        goto label_27bad8;
    }
    ctx->pc = 0x27BAD0u;
    SET_GPR_U32(ctx, 31, 0x27BAD8u);
    ctx->pc = 0x27BAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAD0u;
            // 0x27bad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAD8u; }
        if (ctx->pc != 0x27BAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAD8u; }
        if (ctx->pc != 0x27BAD8u) { return; }
    }
    ctx->pc = 0x27BAD8u;
label_27bad8:
    // 0x27bad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27badc:
    // 0x27badc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x27badcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_27bae0:
    // 0x27bae0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27bae4:
    if (ctx->pc == 0x27BAE4u) {
        ctx->pc = 0x27BAE4u;
            // 0x27bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BAE8u;
        goto label_27bae8;
    }
    ctx->pc = 0x27BAE0u;
    {
        const bool branch_taken_0x27bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAE0u;
            // 0x27bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bae0) {
            ctx->pc = 0x27BAF8u;
            goto label_27baf8;
        }
    }
    ctx->pc = 0x27BAE8u;
label_27bae8:
    // 0x27bae8: 0xc097e18  jal         func_25F860
label_27baec:
    if (ctx->pc == 0x27BAECu) {
        ctx->pc = 0x27BAECu;
            // 0x27baec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BAF0u;
        goto label_27baf0;
    }
    ctx->pc = 0x27BAE8u;
    SET_GPR_U32(ctx, 31, 0x27BAF0u);
    ctx->pc = 0x27BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAE8u;
            // 0x27baec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAF0u; }
        if (ctx->pc != 0x27BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAF0u; }
        if (ctx->pc != 0x27BAF0u) { return; }
    }
    ctx->pc = 0x27BAF0u;
label_27baf0:
    // 0x27baf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27baf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27baf4:
    // 0x27baf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27baf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27baf8:
    // 0x27baf8: 0xc0956d4  jal         func_255B50
label_27bafc:
    if (ctx->pc == 0x27BAFCu) {
        ctx->pc = 0x27BB00u;
        goto label_27bb00;
    }
    ctx->pc = 0x27BAF8u;
    SET_GPR_U32(ctx, 31, 0x27BB00u);
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB00u; }
        if (ctx->pc != 0x27BB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB00u; }
        if (ctx->pc != 0x27BB00u) { return; }
    }
    ctx->pc = 0x27BB00u;
label_27bb00:
    // 0x27bb00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27bb04:
    if (ctx->pc == 0x27BB04u) {
        ctx->pc = 0x27BB04u;
            // 0x27bb04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BB08u;
        goto label_27bb08;
    }
    ctx->pc = 0x27BB00u;
    {
        const bool branch_taken_0x27bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB00u;
            // 0x27bb04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb00) {
            ctx->pc = 0x27BB10u;
            goto label_27bb10;
        }
    }
    ctx->pc = 0x27BB08u;
label_27bb08:
    // 0x27bb08: 0x1000000c  b           . + 4 + (0xC << 2)
label_27bb0c:
    if (ctx->pc == 0x27BB0Cu) {
        ctx->pc = 0x27BB0Cu;
            // 0x27bb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BB10u;
        goto label_27bb10;
    }
    ctx->pc = 0x27BB08u;
    {
        const bool branch_taken_0x27bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB08u;
            // 0x27bb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb08) {
            ctx->pc = 0x27BB3Cu;
            goto label_27bb3c;
        }
    }
    ctx->pc = 0x27BB10u;
label_27bb10:
    // 0x27bb10: 0x8e120718  lw          $s2, 0x718($s0)
    ctx->pc = 0x27bb10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_27bb14:
    // 0x27bb14: 0xc05a858  jal         func_16A160
label_27bb18:
    if (ctx->pc == 0x27BB18u) {
        ctx->pc = 0x27BB18u;
            // 0x27bb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BB1Cu;
        goto label_27bb1c;
    }
    ctx->pc = 0x27BB14u;
    SET_GPR_U32(ctx, 31, 0x27BB1Cu);
    ctx->pc = 0x27BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB14u;
            // 0x27bb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A160u;
    if (runtime->hasFunction(0x16A160u)) {
        auto targetFn = runtime->lookupFunction(0x16A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB1Cu; }
        if (ctx->pc != 0x27BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetAction__12CActionCharaFv_0x16a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB1Cu; }
        if (ctx->pc != 0x27BB1Cu) { return; }
    }
    ctx->pc = 0x27BB1Cu;
label_27bb1c:
    // 0x27bb1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27bb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27bb20:
    // 0x27bb20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27bb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bb24:
    // 0x27bb24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27bb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bb28:
    // 0x27bb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bb2c:
    // 0x27bb2c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x27bb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_27bb30:
    // 0x27bb30: 0x320f809  jalr        $t9
label_27bb34:
    if (ctx->pc == 0x27BB34u) {
        ctx->pc = 0x27BB34u;
            // 0x27bb34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27BB38u;
        goto label_27bb38;
    }
    ctx->pc = 0x27BB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27BB38u);
        ctx->pc = 0x27BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB30u;
            // 0x27bb34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27BB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27BB38u; }
            if (ctx->pc != 0x27BB38u) { return; }
        }
        }
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bb3c:
    // 0x27bb3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27bb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27bb40:
    // 0x27bb40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27bb40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27bb44:
    // 0x27bb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27bb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27bb48:
    // 0x27bb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27bb4c:
    // 0x27bb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27bb50:
    // 0x27bb50: 0x3e00008  jr          $ra
label_27bb54:
    if (ctx->pc == 0x27BB54u) {
        ctx->pc = 0x27BB54u;
            // 0x27bb54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27BB58u;
        goto label_fallthrough_0x27bb50;
    }
    ctx->pc = 0x27BB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB50u;
            // 0x27bb54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27bb50:
    ctx->pc = 0x27BB58u;
}
