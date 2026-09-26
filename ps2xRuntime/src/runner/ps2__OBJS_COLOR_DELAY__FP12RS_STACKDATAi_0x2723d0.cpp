#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_COLOR_DELAY__FP12RS_STACKDATAi
// Address: 0x2723d0 - 0x272428
void ps2__OBJS_COLOR_DELAY__FP12RS_STACKDATAi_0x2723d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_COLOR_DELAY__FP12RS_STACKDATAi_0x2723d0");
#endif

    switch (ctx->pc) {
        case 0x2723e4u: goto label_2723e4;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723fcu: goto label_2723fc;
        case 0x272414u: goto label_272414;
        default: break;
    }

    ctx->pc = 0x2723d0u;

    // 0x2723d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2723d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2723d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2723d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2723d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2723d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2723dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2723DCu;
    SET_GPR_U32(ctx, 31, 0x2723E4u);
    ctx->pc = 0x2723E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2723DCu;
            // 0x2723e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723E4u; }
        if (ctx->pc != 0x2723E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723E4u; }
        if (ctx->pc != 0x2723E4u) { return; }
    }
    ctx->pc = 0x2723E4u;
label_2723e4:
    // 0x2723e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2723e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2723E8u;
    SET_GPR_U32(ctx, 31, 0x2723F0u);
    ctx->pc = 0x2723ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2723E8u;
            // 0x2723ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723F0u; }
        if (ctx->pc != 0x2723F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723F0u; }
        if (ctx->pc != 0x2723F0u) { return; }
    }
    ctx->pc = 0x2723F0u;
label_2723f0:
    // 0x2723f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2723f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723f4: 0xc098a44  jal         func_262910
    ctx->pc = 0x2723F4u;
    SET_GPR_U32(ctx, 31, 0x2723FCu);
    ctx->pc = 0x2723F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2723F4u;
            // 0x2723f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723FCu; }
        if (ctx->pc != 0x2723FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723FCu; }
        if (ctx->pc != 0x2723FCu) { return; }
    }
    ctx->pc = 0x2723FCu;
label_2723fc:
    // 0x2723fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2723FCu;
    {
        const bool branch_taken_0x2723fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723FCu;
            // 0x272400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723fc) {
            ctx->pc = 0x27240Cu;
            goto label_27240c;
        }
    }
    ctx->pc = 0x272404u;
    // 0x272404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272404u;
    {
        const bool branch_taken_0x272404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272404u;
            // 0x272408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272404) {
            ctx->pc = 0x272418u;
            goto label_272418;
        }
    }
    ctx->pc = 0x27240Cu;
label_27240c:
    // 0x27240c: 0xc0974ac  jal         func_25D2B0
    ctx->pc = 0x27240Cu;
    SET_GPR_U32(ctx, 31, 0x272414u);
    ctx->pc = 0x25D2B0u;
    if (runtime->hasFunction(0x25D2B0u)) {
        auto targetFn = runtime->lookupFunction(0x25D2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272414u; }
        if (ctx->pc != 0x272414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ColorDelay__12CSceneObjSeqFi_0x25d2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272414u; }
        if (ctx->pc != 0x272414u) { return; }
    }
    ctx->pc = 0x272414u;
label_272414:
    // 0x272414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272418:
    // 0x272418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27241c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272420: 0x3e00008  jr          $ra
    ctx->pc = 0x272420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272420u;
            // 0x272424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272428u;
}
