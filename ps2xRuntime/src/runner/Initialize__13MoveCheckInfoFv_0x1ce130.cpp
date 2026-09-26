#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13MoveCheckInfoFv
// Address: 0x1ce130 - 0x1ce13c
void Initialize__13MoveCheckInfoFv_0x1ce130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13MoveCheckInfoFv_0x1ce130");
#endif

    ctx->pc = 0x1ce130u;

    // 0x1ce130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce134: 0x8049c86  j           func_127218
    ctx->pc = 0x1CE134u;
    ctx->pc = 0x1CE138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE134u;
            // 0x1ce138: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CE13Cu;
}
