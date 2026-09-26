#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_INIT_PAS__FP12RS_STACKDATAi
// Address: 0x270da0 - 0x270de0
void ps2__OBJS_INIT_PAS__FP12RS_STACKDATAi_0x270da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_INIT_PAS__FP12RS_STACKDATAi_0x270da0");
#endif

    switch (ctx->pc) {
        case 0x270db0u: goto label_270db0;
        case 0x270db8u: goto label_270db8;
        case 0x270dd0u: goto label_270dd0;
        default: break;
    }

    ctx->pc = 0x270da0u;

    // 0x270da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270da8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270DA8u;
    SET_GPR_U32(ctx, 31, 0x270DB0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DB0u; }
        if (ctx->pc != 0x270DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DB0u; }
        if (ctx->pc != 0x270DB0u) { return; }
    }
    ctx->pc = 0x270DB0u;
label_270db0:
    // 0x270db0: 0xc098a44  jal         func_262910
    ctx->pc = 0x270DB0u;
    SET_GPR_U32(ctx, 31, 0x270DB8u);
    ctx->pc = 0x270DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270DB0u;
            // 0x270db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DB8u; }
        if (ctx->pc != 0x270DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DB8u; }
        if (ctx->pc != 0x270DB8u) { return; }
    }
    ctx->pc = 0x270DB8u;
label_270db8:
    // 0x270db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DB8u;
    {
        const bool branch_taken_0x270db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DB8u;
            // 0x270dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270db8) {
            ctx->pc = 0x270DC8u;
            goto label_270dc8;
        }
    }
    ctx->pc = 0x270DC0u;
    // 0x270dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270DC0u;
    {
        const bool branch_taken_0x270dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DC0u;
            // 0x270dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dc0) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x270DC8u;
label_270dc8:
    // 0x270dc8: 0xc0972a0  jal         func_25CA80
    ctx->pc = 0x270DC8u;
    SET_GPR_U32(ctx, 31, 0x270DD0u);
    ctx->pc = 0x25CA80u;
    if (runtime->hasFunction(0x25CA80u)) {
        auto targetFn = runtime->lookupFunction(0x25CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DD0u; }
        if (ctx->pc != 0x270DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPas__12CSceneObjSeqFv_0x25ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DD0u; }
        if (ctx->pc != 0x270DD0u) { return; }
    }
    ctx->pc = 0x270DD0u;
label_270dd0:
    // 0x270dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270dd4:
    // 0x270dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x270DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DD8u;
            // 0x270ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270DE0u;
}
