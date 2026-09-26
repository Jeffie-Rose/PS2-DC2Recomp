#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_INIT__FP12RS_STACKDATAi
// Address: 0x2707e0 - 0x270820
void ps2__OBJS_INIT__FP12RS_STACKDATAi_0x2707e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_INIT__FP12RS_STACKDATAi_0x2707e0");
#endif

    switch (ctx->pc) {
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f8u: goto label_2707f8;
        case 0x270810u: goto label_270810;
        default: break;
    }

    ctx->pc = 0x2707e0u;

    // 0x2707e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2707e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2707e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2707e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2707e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2707E8u;
    SET_GPR_U32(ctx, 31, 0x2707F0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707F0u; }
        if (ctx->pc != 0x2707F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707F0u; }
        if (ctx->pc != 0x2707F0u) { return; }
    }
    ctx->pc = 0x2707F0u;
label_2707f0:
    // 0x2707f0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2707F0u;
    SET_GPR_U32(ctx, 31, 0x2707F8u);
    ctx->pc = 0x2707F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2707F0u;
            // 0x2707f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707F8u; }
        if (ctx->pc != 0x2707F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707F8u; }
        if (ctx->pc != 0x2707F8u) { return; }
    }
    ctx->pc = 0x2707F8u;
label_2707f8:
    // 0x2707f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2707F8u;
    {
        const bool branch_taken_0x2707f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707F8u;
            // 0x2707fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707f8) {
            ctx->pc = 0x270808u;
            goto label_270808;
        }
    }
    ctx->pc = 0x270800u;
    // 0x270800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270800u;
    {
        const bool branch_taken_0x270800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270800u;
            // 0x270804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270800) {
            ctx->pc = 0x270814u;
            goto label_270814;
        }
    }
    ctx->pc = 0x270808u;
label_270808:
    // 0x270808: 0xc0970a8  jal         func_25C2A0
    ctx->pc = 0x270808u;
    SET_GPR_U32(ctx, 31, 0x270810u);
    ctx->pc = 0x25C2A0u;
    if (runtime->hasFunction(0x25C2A0u)) {
        auto targetFn = runtime->lookupFunction(0x25C2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270810u; }
        if (ctx->pc != 0x270810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneObjSeqFv_0x25c2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270810u; }
        if (ctx->pc != 0x270810u) { return; }
    }
    ctx->pc = 0x270810u;
label_270810:
    // 0x270810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270814:
    // 0x270814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270818: 0x3e00008  jr          $ra
    ctx->pc = 0x270818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270818u;
            // 0x27081c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270820u;
}
