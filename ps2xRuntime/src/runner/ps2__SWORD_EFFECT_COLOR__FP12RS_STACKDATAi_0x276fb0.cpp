#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWORD_EFFECT_COLOR__FP12RS_STACKDATAi
// Address: 0x276fb0 - 0x2770ac
void ps2__SWORD_EFFECT_COLOR__FP12RS_STACKDATAi_0x276fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWORD_EFFECT_COLOR__FP12RS_STACKDATAi_0x276fb0");
#endif

    switch (ctx->pc) {
        case 0x276ff0u: goto label_276ff0;
        case 0x277000u: goto label_277000;
        case 0x277010u: goto label_277010;
        case 0x277020u: goto label_277020;
        case 0x277030u: goto label_277030;
        case 0x277040u: goto label_277040;
        case 0x277050u: goto label_277050;
        case 0x27705cu: goto label_27705c;
        default: break;
    }

    ctx->pc = 0x276fb0u;

    // 0x276fb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x276fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x276fb4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x276fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x276fb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x276fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x276fbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x276fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x276fc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x276fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x276fc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x276fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x276fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276fd4: 0x8f8297e8  lw          $v0, -0x6818($gp)
    ctx->pc = 0x276fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x276fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276FD8u;
    {
        const bool branch_taken_0x276fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FD8u;
            // 0x276fdc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fd8) {
            ctx->pc = 0x276FE8u;
            goto label_276fe8;
        }
    }
    ctx->pc = 0x276FE0u;
    // 0x276fe0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x276FE0u;
    {
        const bool branch_taken_0x276fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FE0u;
            // 0x276fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fe0) {
            ctx->pc = 0x277084u;
            goto label_277084;
        }
    }
    ctx->pc = 0x276FE8u;
label_276fe8:
    // 0x276fe8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276FE8u;
    SET_GPR_U32(ctx, 31, 0x276FF0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276FF0u; }
        if (ctx->pc != 0x276FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276FF0u; }
        if (ctx->pc != 0x276FF0u) { return; }
    }
    ctx->pc = 0x276FF0u;
label_276ff0:
    // 0x276ff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x276ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ff4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x276ff4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ff8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276FF8u;
    SET_GPR_U32(ctx, 31, 0x277000u);
    ctx->pc = 0x276FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276FF8u;
            // 0x276ffc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277000u; }
        if (ctx->pc != 0x277000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277000u; }
        if (ctx->pc != 0x277000u) { return; }
    }
    ctx->pc = 0x277000u;
label_277000:
    // 0x277000: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277008: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277008u;
    SET_GPR_U32(ctx, 31, 0x277010u);
    ctx->pc = 0x27700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277008u;
            // 0x27700c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277010u; }
        if (ctx->pc != 0x277010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277010u; }
        if (ctx->pc != 0x277010u) { return; }
    }
    ctx->pc = 0x277010u;
label_277010:
    // 0x277010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277018: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277018u;
    SET_GPR_U32(ctx, 31, 0x277020u);
    ctx->pc = 0x27701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277018u;
            // 0x27701c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277020u; }
        if (ctx->pc != 0x277020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277020u; }
        if (ctx->pc != 0x277020u) { return; }
    }
    ctx->pc = 0x277020u;
label_277020:
    // 0x277020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277028: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277028u;
    SET_GPR_U32(ctx, 31, 0x277030u);
    ctx->pc = 0x27702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277028u;
            // 0x27702c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277030u; }
        if (ctx->pc != 0x277030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277030u; }
        if (ctx->pc != 0x277030u) { return; }
    }
    ctx->pc = 0x277030u;
label_277030:
    // 0x277030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277038: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277038u;
    SET_GPR_U32(ctx, 31, 0x277040u);
    ctx->pc = 0x27703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277038u;
            // 0x27703c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277040u; }
        if (ctx->pc != 0x277040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277040u; }
        if (ctx->pc != 0x277040u) { return; }
    }
    ctx->pc = 0x277040u;
label_277040:
    // 0x277040: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277044: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277048: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277048u;
    SET_GPR_U32(ctx, 31, 0x277050u);
    ctx->pc = 0x27704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277048u;
            // 0x27704c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277050u; }
        if (ctx->pc != 0x277050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277050u; }
        if (ctx->pc != 0x277050u) { return; }
    }
    ctx->pc = 0x277050u;
label_277050:
    // 0x277050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277054: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277054u;
    SET_GPR_U32(ctx, 31, 0x27705Cu);
    ctx->pc = 0x277058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277054u;
            // 0x277058: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27705Cu; }
        if (ctx->pc != 0x27705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27705Cu; }
        if (ctx->pc != 0x27705Cu) { return; }
    }
    ctx->pc = 0x27705Cu;
label_27705c:
    // 0x27705c: 0x8f8397e8  lw          $v1, -0x6818($gp)
    ctx->pc = 0x27705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x277060: 0xac760020  sw          $s6, 0x20($v1)
    ctx->pc = 0x277060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 22));
    // 0x277064: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x277064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
    // 0x277068: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x277068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
    // 0x27706c: 0xac72002c  sw          $s2, 0x2C($v1)
    ctx->pc = 0x27706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 18));
    // 0x277070: 0xac730030  sw          $s3, 0x30($v1)
    ctx->pc = 0x277070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 19));
    // 0x277074: 0xac740034  sw          $s4, 0x34($v1)
    ctx->pc = 0x277074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 20));
    // 0x277078: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x277078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
    // 0x27707c: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x27707cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x277080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277084:
    // 0x277084: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x277084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277088: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x277088u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27708c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27708cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27709c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27709cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2770a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2770A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770A4u;
            // 0x2770a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2770ACu;
}
