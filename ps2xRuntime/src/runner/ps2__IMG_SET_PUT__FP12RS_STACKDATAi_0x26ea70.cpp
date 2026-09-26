#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_PUT__FP12RS_STACKDATAi
// Address: 0x26ea70 - 0x26eb08
void ps2__IMG_SET_PUT__FP12RS_STACKDATAi_0x26ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_PUT__FP12RS_STACKDATAi_0x26ea70");
#endif

    switch (ctx->pc) {
        case 0x26ea90u: goto label_26ea90;
        case 0x26eaa0u: goto label_26eaa0;
        case 0x26eab0u: goto label_26eab0;
        case 0x26eac0u: goto label_26eac0;
        case 0x26eaccu: goto label_26eacc;
        case 0x26eaecu: goto label_26eaec;
        default: break;
    }

    ctx->pc = 0x26ea70u;

    // 0x26ea70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ea74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ea78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ea7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ea80: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26ea80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ea84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ea88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EA88u;
    SET_GPR_U32(ctx, 31, 0x26EA90u);
    ctx->pc = 0x26EA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA88u;
            // 0x26ea8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA90u; }
        if (ctx->pc != 0x26EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA90u; }
        if (ctx->pc != 0x26EA90u) { return; }
    }
    ctx->pc = 0x26EA90u;
label_26ea90:
    // 0x26ea90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea98: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EA98u;
    SET_GPR_U32(ctx, 31, 0x26EAA0u);
    ctx->pc = 0x26EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA98u;
            // 0x26ea9c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAA0u; }
        if (ctx->pc != 0x26EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAA0u; }
        if (ctx->pc != 0x26EAA0u) { return; }
    }
    ctx->pc = 0x26EAA0u;
label_26eaa0:
    // 0x26eaa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26eaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaa8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EAA8u;
    SET_GPR_U32(ctx, 31, 0x26EAB0u);
    ctx->pc = 0x26EAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAA8u;
            // 0x26eaac: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAB0u; }
        if (ctx->pc != 0x26EAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAB0u; }
        if (ctx->pc != 0x26EAB0u) { return; }
    }
    ctx->pc = 0x26EAB0u;
label_26eab0:
    // 0x26eab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eab4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26eab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eab8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EAB8u;
    SET_GPR_U32(ctx, 31, 0x26EAC0u);
    ctx->pc = 0x26EABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAB8u;
            // 0x26eabc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAC0u; }
        if (ctx->pc != 0x26EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAC0u; }
        if (ctx->pc != 0x26EAC0u) { return; }
    }
    ctx->pc = 0x26EAC0u;
label_26eac0:
    // 0x26eac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eac4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EAC4u;
    SET_GPR_U32(ctx, 31, 0x26EACCu);
    ctx->pc = 0x26EAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAC4u;
            // 0x26eac8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EACCu; }
        if (ctx->pc != 0x26EACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EACCu; }
        if (ctx->pc != 0x26EACCu) { return; }
    }
    ctx->pc = 0x26EACCu;
label_26eacc:
    // 0x26eacc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26ead0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ead4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ead8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26ead8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eadc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26eadcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eae0: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26eae4: 0xc0a41d8  jal         func_290760
    ctx->pc = 0x26EAE4u;
    SET_GPR_U32(ctx, 31, 0x26EAECu);
    ctx->pc = 0x26EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAE4u;
            // 0x26eae8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290760u;
    if (runtime->hasFunction(0x290760u)) {
        auto targetFn = runtime->lookupFunction(0x290760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAECu; }
        if (ctx->pc != 0x26EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPut__18CEventSpriteMotherFiiiii_0x290760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAECu; }
        if (ctx->pc != 0x26EAECu) { return; }
    }
    ctx->pc = 0x26EAECu;
label_26eaec:
    // 0x26eaec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26eaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26eaf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26eaf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26eaf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26eaf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eaf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26eaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26eafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eb00: 0x3e00008  jr          $ra
    ctx->pc = 0x26EB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB00u;
            // 0x26eb04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EB08u;
}
