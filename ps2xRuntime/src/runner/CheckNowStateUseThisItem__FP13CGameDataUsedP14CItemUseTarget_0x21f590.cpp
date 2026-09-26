#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNowStateUseThisItem__FP13CGameDataUsedP14CItemUseTarget
// Address: 0x21f590 - 0x21f598
void CheckNowStateUseThisItem__FP13CGameDataUsedP14CItemUseTarget_0x21f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNowStateUseThisItem__FP13CGameDataUsedP14CItemUseTarget_0x21f590");
#endif

    ctx->pc = 0x21f590u;

    // 0x21f590: 0x8087a30  j           func_21E8C0
    ctx->pc = 0x21F590u;
    ctx->pc = 0x21F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F590u;
            // 0x21f594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (runtime->hasFunction(0x21E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E8C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21F598u;
}
