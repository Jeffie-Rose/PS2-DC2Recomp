#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSystemMessage__Fv
// Address: 0x196770 - 0x196778
void GetSystemMessage__Fv_0x196770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemMessage__Fv_0x196770");
#endif

    ctx->pc = 0x196770u;

    // 0x196770: 0x80659e0  j           func_196780
    ctx->pc = 0x196770u;
    ctx->pc = 0x196774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196770u;
            // 0x196774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196778u;
}
