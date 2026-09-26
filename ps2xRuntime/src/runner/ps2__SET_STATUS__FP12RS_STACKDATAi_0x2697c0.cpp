#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_STATUS__FP12RS_STACKDATAi
// Address: 0x2697c0 - 0x269874
void ps2__SET_STATUS__FP12RS_STACKDATAi_0x2697c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_STATUS__FP12RS_STACKDATAi_0x2697c0");
#endif

    switch (ctx->pc) {
        case 0x2697e4u: goto label_2697e4;
        case 0x2697f4u: goto label_2697f4;
        case 0x269804u: goto label_269804;
        case 0x26981cu: goto label_26981c;
        case 0x269838u: goto label_269838;
        case 0x269854u: goto label_269854;
        default: break;
    }

    ctx->pc = 0x2697c0u;

    // 0x2697c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2697c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2697c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2697c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2697c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2697c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2697cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2697ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2697d0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2697d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2697d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2697d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2697d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2697d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2697DCu;
    SET_GPR_U32(ctx, 31, 0x2697E4u);
    ctx->pc = 0x2697E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2697DCu;
            // 0x2697e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697E4u; }
        if (ctx->pc != 0x2697E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697E4u; }
        if (ctx->pc != 0x2697E4u) { return; }
    }
    ctx->pc = 0x2697E4u;
label_2697e4:
    // 0x2697e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2697e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2697e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2697ECu;
    SET_GPR_U32(ctx, 31, 0x2697F4u);
    ctx->pc = 0x2697F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2697ECu;
            // 0x2697f0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697F4u; }
        if (ctx->pc != 0x2697F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697F4u; }
        if (ctx->pc != 0x2697F4u) { return; }
    }
    ctx->pc = 0x2697F4u;
label_2697f4:
    // 0x2697f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2697f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2697f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2697FCu;
    SET_GPR_U32(ctx, 31, 0x269804u);
    ctx->pc = 0x269800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2697FCu;
            // 0x269800: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269804u; }
        if (ctx->pc != 0x269804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269804u; }
        if (ctx->pc != 0x269804u) { return; }
    }
    ctx->pc = 0x269804u;
label_269804:
    // 0x269804: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x269804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x269808: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x269808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26980c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26980Cu;
    {
        const bool branch_taken_0x26980c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x269810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26980Cu;
            // 0x269810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26980c) {
            ctx->pc = 0x26981Cu;
            goto label_26981c;
        }
    }
    ctx->pc = 0x269814u;
    // 0x269814: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269814u;
    SET_GPR_U32(ctx, 31, 0x26981Cu);
    ctx->pc = 0x269818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269814u;
            // 0x269818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26981Cu; }
        if (ctx->pc != 0x26981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26981Cu; }
        if (ctx->pc != 0x26981Cu) { return; }
    }
    ctx->pc = 0x26981Cu;
label_26981c:
    // 0x26981c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26981Cu;
    {
        const bool branch_taken_0x26981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26981c) {
            ctx->pc = 0x269840u;
            goto label_269840;
        }
    }
    ctx->pc = 0x269824u;
    // 0x269824: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26982c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26982cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269830: 0xc0a11d0  jal         func_284740
    ctx->pc = 0x269830u;
    SET_GPR_U32(ctx, 31, 0x269838u);
    ctx->pc = 0x269834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269830u;
            // 0x269834: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269838u; }
        if (ctx->pc != 0x269838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269838u; }
        if (ctx->pc != 0x269838u) { return; }
    }
    ctx->pc = 0x269838u;
label_269838:
    // 0x269838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269838u;
    {
        const bool branch_taken_0x269838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269838u;
            // 0x26983c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269838) {
            ctx->pc = 0x269858u;
            goto label_269858;
        }
    }
    ctx->pc = 0x269840u;
label_269840:
    // 0x269840: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x269848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26984c: 0xc0a11e0  jal         func_284780
    ctx->pc = 0x26984Cu;
    SET_GPR_U32(ctx, 31, 0x269854u);
    ctx->pc = 0x269850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26984Cu;
            // 0x269850: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269854u; }
        if (ctx->pc != 0x269854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269854u; }
        if (ctx->pc != 0x269854u) { return; }
    }
    ctx->pc = 0x269854u;
label_269854:
    // 0x269854: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x269854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269858:
    // 0x269858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26985c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26985cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x269860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26986c: 0x3e00008  jr          $ra
    ctx->pc = 0x26986Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26986Cu;
            // 0x269870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269874u;
}
