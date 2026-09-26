#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SEQ_MOT_TRG_WAIT__FP12RS_STACKDATAi
// Address: 0x2721a0 - 0x2721e0
void ps2__OBJS_SEQ_MOT_TRG_WAIT__FP12RS_STACKDATAi_0x2721a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SEQ_MOT_TRG_WAIT__FP12RS_STACKDATAi_0x2721a0");
#endif

    switch (ctx->pc) {
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721d0u: goto label_2721d0;
        default: break;
    }

    ctx->pc = 0x2721a0u;

    // 0x2721a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2721a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2721a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2721a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2721a8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2721A8u;
    SET_GPR_U32(ctx, 31, 0x2721B0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721B0u; }
        if (ctx->pc != 0x2721B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721B0u; }
        if (ctx->pc != 0x2721B0u) { return; }
    }
    ctx->pc = 0x2721B0u;
label_2721b0:
    // 0x2721b0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2721B0u;
    SET_GPR_U32(ctx, 31, 0x2721B8u);
    ctx->pc = 0x2721B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2721B0u;
            // 0x2721b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721B8u; }
        if (ctx->pc != 0x2721B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721B8u; }
        if (ctx->pc != 0x2721B8u) { return; }
    }
    ctx->pc = 0x2721B8u;
label_2721b8:
    // 0x2721b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2721B8u;
    {
        const bool branch_taken_0x2721b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2721BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721B8u;
            // 0x2721bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721b8) {
            ctx->pc = 0x2721C8u;
            goto label_2721c8;
        }
    }
    ctx->pc = 0x2721C0u;
    // 0x2721c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2721C0u;
    {
        const bool branch_taken_0x2721c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721C0u;
            // 0x2721c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721c0) {
            ctx->pc = 0x2721D4u;
            goto label_2721d4;
        }
    }
    ctx->pc = 0x2721C8u;
label_2721c8:
    // 0x2721c8: 0xc097418  jal         func_25D060
    ctx->pc = 0x2721C8u;
    SET_GPR_U32(ctx, 31, 0x2721D0u);
    ctx->pc = 0x25D060u;
    if (runtime->hasFunction(0x25D060u)) {
        auto targetFn = runtime->lookupFunction(0x25D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721D0u; }
        if (ctx->pc != 0x2721D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionTrgWait__12CSceneObjSeqFv_0x25d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721D0u; }
        if (ctx->pc != 0x2721D0u) { return; }
    }
    ctx->pc = 0x2721D0u;
label_2721d0:
    // 0x2721d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2721d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2721d4:
    // 0x2721d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2721d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2721d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2721D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2721DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721D8u;
            // 0x2721dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2721E0u;
}
