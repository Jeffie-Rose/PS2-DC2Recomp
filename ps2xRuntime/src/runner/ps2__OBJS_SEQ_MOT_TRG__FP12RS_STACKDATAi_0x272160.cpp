#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SEQ_MOT_TRG__FP12RS_STACKDATAi
// Address: 0x272160 - 0x2721a0
void ps2__OBJS_SEQ_MOT_TRG__FP12RS_STACKDATAi_0x272160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SEQ_MOT_TRG__FP12RS_STACKDATAi_0x272160");
#endif

    switch (ctx->pc) {
        case 0x272170u: goto label_272170;
        case 0x272178u: goto label_272178;
        case 0x272190u: goto label_272190;
        default: break;
    }

    ctx->pc = 0x272160u;

    // 0x272160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272168: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272168u;
    SET_GPR_U32(ctx, 31, 0x272170u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272170u; }
        if (ctx->pc != 0x272170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272170u; }
        if (ctx->pc != 0x272170u) { return; }
    }
    ctx->pc = 0x272170u;
label_272170:
    // 0x272170: 0xc098a44  jal         func_262910
    ctx->pc = 0x272170u;
    SET_GPR_U32(ctx, 31, 0x272178u);
    ctx->pc = 0x272174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272170u;
            // 0x272174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272178u; }
        if (ctx->pc != 0x272178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272178u; }
        if (ctx->pc != 0x272178u) { return; }
    }
    ctx->pc = 0x272178u;
label_272178:
    // 0x272178: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272178u;
    {
        const bool branch_taken_0x272178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272178u;
            // 0x27217c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272178) {
            ctx->pc = 0x272188u;
            goto label_272188;
        }
    }
    ctx->pc = 0x272180u;
    // 0x272180: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272180u;
    {
        const bool branch_taken_0x272180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272180u;
            // 0x272184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272180) {
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x272188u;
label_272188:
    // 0x272188: 0xc09740c  jal         func_25D030
    ctx->pc = 0x272188u;
    SET_GPR_U32(ctx, 31, 0x272190u);
    ctx->pc = 0x25D030u;
    if (runtime->hasFunction(0x25D030u)) {
        auto targetFn = runtime->lookupFunction(0x25D030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272190u; }
        if (ctx->pc != 0x272190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionTrg__12CSceneObjSeqFv_0x25d030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272190u; }
        if (ctx->pc != 0x272190u) { return; }
    }
    ctx->pc = 0x272190u;
label_272190:
    // 0x272190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272194:
    // 0x272194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272198: 0x3e00008  jr          $ra
    ctx->pc = 0x272198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272198u;
            // 0x27219c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2721A0u;
}
