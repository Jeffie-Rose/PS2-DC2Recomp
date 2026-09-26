#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_MOTION_WAIT__FP12RS_STACKDATAi
// Address: 0x272020 - 0x272060
void ps2__OBJS_MOTION_WAIT__FP12RS_STACKDATAi_0x272020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_MOTION_WAIT__FP12RS_STACKDATAi_0x272020");
#endif

    switch (ctx->pc) {
        case 0x272030u: goto label_272030;
        case 0x272038u: goto label_272038;
        case 0x272050u: goto label_272050;
        default: break;
    }

    ctx->pc = 0x272020u;

    // 0x272020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272028: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272028u;
    SET_GPR_U32(ctx, 31, 0x272030u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272030u; }
        if (ctx->pc != 0x272030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272030u; }
        if (ctx->pc != 0x272030u) { return; }
    }
    ctx->pc = 0x272030u;
label_272030:
    // 0x272030: 0xc098a44  jal         func_262910
    ctx->pc = 0x272030u;
    SET_GPR_U32(ctx, 31, 0x272038u);
    ctx->pc = 0x272034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272030u;
            // 0x272034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272038u; }
        if (ctx->pc != 0x272038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272038u; }
        if (ctx->pc != 0x272038u) { return; }
    }
    ctx->pc = 0x272038u;
label_272038:
    // 0x272038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272038u;
    {
        const bool branch_taken_0x272038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272038u;
            // 0x27203c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272038) {
            ctx->pc = 0x272048u;
            goto label_272048;
        }
    }
    ctx->pc = 0x272040u;
    // 0x272040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272040u;
    {
        const bool branch_taken_0x272040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272040u;
            // 0x272044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272040) {
            ctx->pc = 0x272054u;
            goto label_272054;
        }
    }
    ctx->pc = 0x272048u;
label_272048:
    // 0x272048: 0xc097400  jal         func_25D000
    ctx->pc = 0x272048u;
    SET_GPR_U32(ctx, 31, 0x272050u);
    ctx->pc = 0x25D000u;
    if (runtime->hasFunction(0x25D000u)) {
        auto targetFn = runtime->lookupFunction(0x25D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272050u; }
        if (ctx->pc != 0x272050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionWait__12CSceneObjSeqFv_0x25d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272050u; }
        if (ctx->pc != 0x272050u) { return; }
    }
    ctx->pc = 0x272050u;
label_272050:
    // 0x272050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272054:
    // 0x272054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272058: 0x3e00008  jr          $ra
    ctx->pc = 0x272058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27205Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272058u;
            // 0x27205c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272060u;
}
