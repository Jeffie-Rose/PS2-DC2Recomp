#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CrossFade__10CFadeInOutFif
// Address: 0x17d8a0 - 0x17d8ac
void CrossFade__10CFadeInOutFif_0x17d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CrossFade__10CFadeInOutFif_0x17d8a0");
#endif

    ctx->pc = 0x17d8a0u;

    // 0x17d8a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17d8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8a4: 0x805f62c  j           func_17D8B0
    ctx->pc = 0x17D8A4u;
    ctx->pc = 0x17D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8A4u;
            // 0x17d8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8B0u;
    if (runtime->hasFunction(0x17D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CrossFadeIn__10CFadeInOutFiif_0x17d8b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17D8ACu;
}
