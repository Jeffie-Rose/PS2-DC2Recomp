#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__13CGameDataUsedFv
// Address: 0x1970c0 - 0x1970cc
void Init__13CGameDataUsedFv_0x1970c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__13CGameDataUsedFv_0x1970c0");
#endif

    ctx->pc = 0x1970c0u;

    // 0x1970c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1970c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970c4: 0x8049c86  j           func_127218
    ctx->pc = 0x1970C4u;
    ctx->pc = 0x1970C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970C4u;
            // 0x1970c8: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1970CCu;
}
