#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager
// Address: 0x142500 - 0x142520
void mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500");
#endif

    ctx->pc = 0x142500u;

    // 0x142500: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x142500u;
    {
        const bool branch_taken_0x142500 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142500u;
            // 0x142504: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142500) {
            ctx->pc = 0x142510u;
            goto label_142510;
        }
    }
    ctx->pc = 0x142508u;
    // 0x142508: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x14250c: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x14250cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
label_142510:
    // 0x142510: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x142510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142514: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x142514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142518: 0x804d48c  j           func_135230
    ctx->pc = 0x142518u;
    ctx->pc = 0x14251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142518u;
            // 0x14251c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135230u;
    if (runtime->hasFunction(0x135230u)) {
        auto targetFn = runtime->lookupFunction(0x135230u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        BeginDraw__14mgCDrawManagerFP9mgCMemoryPi_0x135230(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x142520u;
}
