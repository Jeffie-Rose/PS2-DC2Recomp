#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_START_PAS__FP12RS_STACKDATAi
// Address: 0x270f80 - 0x271008
void ps2__OBJS_START_PAS__FP12RS_STACKDATAi_0x270f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_START_PAS__FP12RS_STACKDATAi_0x270f80");
#endif

    switch (ctx->pc) {
        case 0x270fa8u: goto label_270fa8;
        case 0x270fc0u: goto label_270fc0;
        case 0x270fd0u: goto label_270fd0;
        case 0x270fe8u: goto label_270fe8;
        default: break;
    }

    ctx->pc = 0x270f80u;

    // 0x270f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x270f84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x270f88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x270f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270f90: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x270f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x270f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270f98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x270f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270fa0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270FA0u;
    SET_GPR_U32(ctx, 31, 0x270FA8u);
    ctx->pc = 0x270FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FA0u;
            // 0x270fa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FA8u; }
        if (ctx->pc != 0x270FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FA8u; }
        if (ctx->pc != 0x270FA8u) { return; }
    }
    ctx->pc = 0x270FA8u;
label_270fa8:
    // 0x270fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fac: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x270facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x270fb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270FB0u;
    {
        const bool branch_taken_0x270fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270FB0u;
            // 0x270fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fb0) {
            ctx->pc = 0x270FC8u;
            goto label_270fc8;
        }
    }
    ctx->pc = 0x270FB8u;
    // 0x270fb8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270FB8u;
    SET_GPR_U32(ctx, 31, 0x270FC0u);
    ctx->pc = 0x270FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FB8u;
            // 0x270fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FC0u; }
        if (ctx->pc != 0x270FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FC0u; }
        if (ctx->pc != 0x270FC0u) { return; }
    }
    ctx->pc = 0x270FC0u;
label_270fc0:
    // 0x270fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270fc8:
    // 0x270fc8: 0xc098a44  jal         func_262910
    ctx->pc = 0x270FC8u;
    SET_GPR_U32(ctx, 31, 0x270FD0u);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FD0u; }
        if (ctx->pc != 0x270FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FD0u; }
        if (ctx->pc != 0x270FD0u) { return; }
    }
    ctx->pc = 0x270FD0u;
label_270fd0:
    // 0x270fd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270FD0u;
    {
        const bool branch_taken_0x270fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270FD0u;
            // 0x270fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fd0) {
            ctx->pc = 0x270FE0u;
            goto label_270fe0;
        }
    }
    ctx->pc = 0x270FD8u;
    // 0x270fd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270FD8u;
    {
        const bool branch_taken_0x270fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270FD8u;
            // 0x270fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fd8) {
            ctx->pc = 0x270FECu;
            goto label_270fec;
        }
    }
    ctx->pc = 0x270FE0u;
label_270fe0:
    // 0x270fe0: 0xc0972cc  jal         func_25CB30
    ctx->pc = 0x270FE0u;
    SET_GPR_U32(ctx, 31, 0x270FE8u);
    ctx->pc = 0x270FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FE0u;
            // 0x270fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB30u;
    if (runtime->hasFunction(0x25CB30u)) {
        auto targetFn = runtime->lookupFunction(0x25CB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FE8u; }
        if (ctx->pc != 0x270FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartPas__12CSceneObjSeqFi_0x25cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FE8u; }
        if (ctx->pc != 0x270FE8u) { return; }
    }
    ctx->pc = 0x270FE8u;
label_270fe8:
    // 0x270fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270fec:
    // 0x270fec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x270fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271000: 0x3e00008  jr          $ra
    ctx->pc = 0x271000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271000u;
            // 0x271004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271008u;
}
