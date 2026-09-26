#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_RESET_DA_POSITION__FP12RS_STACKDATAi
// Address: 0x2726f0 - 0x272730
void ps2__OBJS_RESET_DA_POSITION__FP12RS_STACKDATAi_0x2726f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_RESET_DA_POSITION__FP12RS_STACKDATAi_0x2726f0");
#endif

    switch (ctx->pc) {
        case 0x272700u: goto label_272700;
        case 0x272708u: goto label_272708;
        case 0x272720u: goto label_272720;
        default: break;
    }

    ctx->pc = 0x2726f0u;

    // 0x2726f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2726f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2726f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2726f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2726F8u;
    SET_GPR_U32(ctx, 31, 0x272700u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272700u; }
        if (ctx->pc != 0x272700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272700u; }
        if (ctx->pc != 0x272700u) { return; }
    }
    ctx->pc = 0x272700u;
label_272700:
    // 0x272700: 0xc098a44  jal         func_262910
    ctx->pc = 0x272700u;
    SET_GPR_U32(ctx, 31, 0x272708u);
    ctx->pc = 0x272704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272700u;
            // 0x272704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272708u; }
        if (ctx->pc != 0x272708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272708u; }
        if (ctx->pc != 0x272708u) { return; }
    }
    ctx->pc = 0x272708u;
label_272708:
    // 0x272708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272708u;
    {
        const bool branch_taken_0x272708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272708u;
            // 0x27270c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272708) {
            ctx->pc = 0x272718u;
            goto label_272718;
        }
    }
    ctx->pc = 0x272710u;
    // 0x272710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272710u;
    {
        const bool branch_taken_0x272710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272710u;
            // 0x272714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272710) {
            ctx->pc = 0x272724u;
            goto label_272724;
        }
    }
    ctx->pc = 0x272718u;
label_272718:
    // 0x272718: 0xc097520  jal         func_25D480
    ctx->pc = 0x272718u;
    SET_GPR_U32(ctx, 31, 0x272720u);
    ctx->pc = 0x25D480u;
    if (runtime->hasFunction(0x25D480u)) {
        auto targetFn = runtime->lookupFunction(0x25D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272720u; }
        if (ctx->pc != 0x272720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__12CSceneObjSeqFv_0x25d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272720u; }
        if (ctx->pc != 0x272720u) { return; }
    }
    ctx->pc = 0x272720u;
label_272720:
    // 0x272720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272724:
    // 0x272724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272728: 0x3e00008  jr          $ra
    ctx->pc = 0x272728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272728u;
            // 0x27272c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272730u;
}
