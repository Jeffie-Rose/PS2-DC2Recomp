#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CCollisionFv
// Address: 0x148630 - 0x148644
void Initialize__10CCollisionFv_0x148630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CCollisionFv_0x148630");
#endif

    ctx->pc = 0x148630u;

    // 0x148630: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x148630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x148634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148638: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14863c: 0x8049c86  j           func_127218
    ctx->pc = 0x14863Cu;
    ctx->pc = 0x148640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14863Cu;
            // 0x148640: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x148644u;
}
