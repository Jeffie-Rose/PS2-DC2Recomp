#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_DEBUG_COMMAND__FP12RS_STACKDATAi
// Address: 0x2668e0 - 0x266908
void ps2__DNG_DEBUG_COMMAND__FP12RS_STACKDATAi_0x2668e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_DEBUG_COMMAND__FP12RS_STACKDATAi_0x2668e0");
#endif

    switch (ctx->pc) {
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f8u: goto label_2668f8;
        default: break;
    }

    ctx->pc = 0x2668e0u;

    // 0x2668e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2668e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2668e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2668e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2668e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2668E8u;
    SET_GPR_U32(ctx, 31, 0x2668F0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668F0u; }
        if (ctx->pc != 0x2668F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668F0u; }
        if (ctx->pc != 0x2668F0u) { return; }
    }
    ctx->pc = 0x2668F0u;
label_2668f0:
    // 0x2668f0: 0xc0a3478  jal         func_28D1E0
    ctx->pc = 0x2668F0u;
    SET_GPR_U32(ctx, 31, 0x2668F8u);
    ctx->pc = 0x2668F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2668F0u;
            // 0x2668f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D1E0u;
    if (runtime->hasFunction(0x28D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x28D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668F8u; }
        if (ctx->pc != 0x2668F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ScriptDebugCommand__Fi_0x28d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668F8u; }
        if (ctx->pc != 0x2668F8u) { return; }
    }
    ctx->pc = 0x2668F8u;
label_2668f8:
    // 0x2668f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2668f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2668fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2668fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266900: 0x3e00008  jr          $ra
    ctx->pc = 0x266900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266900u;
            // 0x266904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266908u;
}
