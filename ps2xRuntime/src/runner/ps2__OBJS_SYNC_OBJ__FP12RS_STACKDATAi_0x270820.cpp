#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SYNC_OBJ__FP12RS_STACKDATAi
// Address: 0x270820 - 0x270878
void ps2__OBJS_SYNC_OBJ__FP12RS_STACKDATAi_0x270820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SYNC_OBJ__FP12RS_STACKDATAi_0x270820");
#endif

    switch (ctx->pc) {
        case 0x270834u: goto label_270834;
        case 0x270840u: goto label_270840;
        case 0x27084cu: goto label_27084c;
        case 0x270864u: goto label_270864;
        default: break;
    }

    ctx->pc = 0x270820u;

    // 0x270820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27082c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27082Cu;
    SET_GPR_U32(ctx, 31, 0x270834u);
    ctx->pc = 0x270830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27082Cu;
            // 0x270830: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270834u; }
        if (ctx->pc != 0x270834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270834u; }
        if (ctx->pc != 0x270834u) { return; }
    }
    ctx->pc = 0x270834u;
label_270834:
    // 0x270834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270838: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270838u;
    SET_GPR_U32(ctx, 31, 0x270840u);
    ctx->pc = 0x27083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270838u;
            // 0x27083c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    }
    ctx->pc = 0x270840u;
label_270840:
    // 0x270840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270844: 0xc098a44  jal         func_262910
    ctx->pc = 0x270844u;
    SET_GPR_U32(ctx, 31, 0x27084Cu);
    ctx->pc = 0x270848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270844u;
            // 0x270848: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27084Cu; }
        if (ctx->pc != 0x27084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27084Cu; }
        if (ctx->pc != 0x27084Cu) { return; }
    }
    ctx->pc = 0x27084Cu;
label_27084c:
    // 0x27084c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27084Cu;
    {
        const bool branch_taken_0x27084c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27084Cu;
            // 0x270850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27084c) {
            ctx->pc = 0x27085Cu;
            goto label_27085c;
        }
    }
    ctx->pc = 0x270854u;
    // 0x270854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270854u;
    {
        const bool branch_taken_0x270854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270854u;
            // 0x270858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270854) {
            ctx->pc = 0x270868u;
            goto label_270868;
        }
    }
    ctx->pc = 0x27085Cu;
label_27085c:
    // 0x27085c: 0xc0970d8  jal         func_25C360
    ctx->pc = 0x27085Cu;
    SET_GPR_U32(ctx, 31, 0x270864u);
    ctx->pc = 0x25C360u;
    if (runtime->hasFunction(0x25C360u)) {
        auto targetFn = runtime->lookupFunction(0x25C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270864u; }
        if (ctx->pc != 0x270864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEohNo__12CSceneObjSeqFi_0x25c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270864u; }
        if (ctx->pc != 0x270864u) { return; }
    }
    ctx->pc = 0x270864u;
label_270864:
    // 0x270864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270868:
    // 0x270868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27086c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27086cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270870: 0x3e00008  jr          $ra
    ctx->pc = 0x270870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270870u;
            // 0x270874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270878u;
}
