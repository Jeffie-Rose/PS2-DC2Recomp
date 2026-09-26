#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_NORMAL_DRIVE__FP12RS_STACKDATAi
// Address: 0x272730 - 0x272770
void ps2__OBJS_NORMAL_DRIVE__FP12RS_STACKDATAi_0x272730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_NORMAL_DRIVE__FP12RS_STACKDATAi_0x272730");
#endif

    switch (ctx->pc) {
        case 0x272740u: goto label_272740;
        case 0x272748u: goto label_272748;
        case 0x272760u: goto label_272760;
        default: break;
    }

    ctx->pc = 0x272730u;

    // 0x272730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272738: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272738u;
    SET_GPR_U32(ctx, 31, 0x272740u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272740u; }
        if (ctx->pc != 0x272740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272740u; }
        if (ctx->pc != 0x272740u) { return; }
    }
    ctx->pc = 0x272740u;
label_272740:
    // 0x272740: 0xc098a44  jal         func_262910
    ctx->pc = 0x272740u;
    SET_GPR_U32(ctx, 31, 0x272748u);
    ctx->pc = 0x272744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272740u;
            // 0x272744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272748u; }
        if (ctx->pc != 0x272748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272748u; }
        if (ctx->pc != 0x272748u) { return; }
    }
    ctx->pc = 0x272748u;
label_272748:
    // 0x272748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272748u;
    {
        const bool branch_taken_0x272748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272748u;
            // 0x27274c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272748) {
            ctx->pc = 0x272758u;
            goto label_272758;
        }
    }
    ctx->pc = 0x272750u;
    // 0x272750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272750u;
    {
        const bool branch_taken_0x272750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272750u;
            // 0x272754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272750) {
            ctx->pc = 0x272764u;
            goto label_272764;
        }
    }
    ctx->pc = 0x272758u;
label_272758:
    // 0x272758: 0xc097470  jal         func_25D1C0
    ctx->pc = 0x272758u;
    SET_GPR_U32(ctx, 31, 0x272760u);
    ctx->pc = 0x25D1C0u;
    if (runtime->hasFunction(0x25D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272760u; }
        if (ctx->pc != 0x272760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalDrive__12CSceneObjSeqFv_0x25d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272760u; }
        if (ctx->pc != 0x272760u) { return; }
    }
    ctx->pc = 0x272760u;
label_272760:
    // 0x272760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272764:
    // 0x272764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272768: 0x3e00008  jr          $ra
    ctx->pc = 0x272768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272768u;
            // 0x27276c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272770u;
}
