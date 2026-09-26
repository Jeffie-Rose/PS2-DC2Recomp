#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ROT_DELAY__FP12RS_STACKDATAi
// Address: 0x271560 - 0x2715b8
void ps2__OBJS_ROT_DELAY__FP12RS_STACKDATAi_0x271560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ROT_DELAY__FP12RS_STACKDATAi_0x271560");
#endif

    switch (ctx->pc) {
        case 0x271574u: goto label_271574;
        case 0x271580u: goto label_271580;
        case 0x27158cu: goto label_27158c;
        case 0x2715a4u: goto label_2715a4;
        default: break;
    }

    ctx->pc = 0x271560u;

    // 0x271560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x271568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27156c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27156Cu;
    SET_GPR_U32(ctx, 31, 0x271574u);
    ctx->pc = 0x271570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27156Cu;
            // 0x271570: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271574u; }
        if (ctx->pc != 0x271574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271574u; }
        if (ctx->pc != 0x271574u) { return; }
    }
    ctx->pc = 0x271574u;
label_271574:
    // 0x271574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271578: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271578u;
    SET_GPR_U32(ctx, 31, 0x271580u);
    ctx->pc = 0x27157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271578u;
            // 0x27157c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271580u; }
        if (ctx->pc != 0x271580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271580u; }
        if (ctx->pc != 0x271580u) { return; }
    }
    ctx->pc = 0x271580u;
label_271580:
    // 0x271580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271584: 0xc098a44  jal         func_262910
    ctx->pc = 0x271584u;
    SET_GPR_U32(ctx, 31, 0x27158Cu);
    ctx->pc = 0x271588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271584u;
            // 0x271588: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27158Cu; }
        if (ctx->pc != 0x27158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27158Cu; }
        if (ctx->pc != 0x27158Cu) { return; }
    }
    ctx->pc = 0x27158Cu;
label_27158c:
    // 0x27158c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27158Cu;
    {
        const bool branch_taken_0x27158c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27158Cu;
            // 0x271590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27158c) {
            ctx->pc = 0x27159Cu;
            goto label_27159c;
        }
    }
    ctx->pc = 0x271594u;
    // 0x271594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271594u;
    {
        const bool branch_taken_0x271594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271594u;
            // 0x271598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271594) {
            ctx->pc = 0x2715A8u;
            goto label_2715a8;
        }
    }
    ctx->pc = 0x27159Cu;
label_27159c:
    // 0x27159c: 0xc097348  jal         func_25CD20
    ctx->pc = 0x27159Cu;
    SET_GPR_U32(ctx, 31, 0x2715A4u);
    ctx->pc = 0x25CD20u;
    if (runtime->hasFunction(0x25CD20u)) {
        auto targetFn = runtime->lookupFunction(0x25CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715A4u; }
        if (ctx->pc != 0x2715A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotDelay__12CSceneObjSeqFi_0x25cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715A4u; }
        if (ctx->pc != 0x2715A4u) { return; }
    }
    ctx->pc = 0x2715A4u;
label_2715a4:
    // 0x2715a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2715a8:
    // 0x2715a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2715a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2715ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2715acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2715b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2715B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715B0u;
            // 0x2715b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2715B8u;
}
