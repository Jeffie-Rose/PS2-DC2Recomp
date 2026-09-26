#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__17SCN_LOADMAP_INFO2Fv
// Address: 0x285150 - 0x28515c
void Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__17SCN_LOADMAP_INFO2Fv_0x285150");
#endif

    ctx->pc = 0x285150u;

    // 0x285150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285154: 0x8049c86  j           func_127218
    ctx->pc = 0x285154u;
    ctx->pc = 0x285158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285154u;
            // 0x285158: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28515Cu;
}
