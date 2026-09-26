#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsSetColor
// Address: 0x105438 - 0x105450
void sceDevConsSetColor_0x105438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsSetColor_0x105438");
#endif

    ctx->pc = 0x105438u;

    // 0x105438: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x105438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x10543c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x10543cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x105440: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x105440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x105444: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x105444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x105448: 0x8041388  j           func_104E20
    ctx->pc = 0x105448u;
    ctx->pc = 0x10544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105448u;
            // 0x10544c: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x104E20u;
    if (runtime->hasFunction(0x104E20u)) {
        auto targetFn = runtime->lookupFunction(0x104E20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDevFontSetColor_0x104e20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105450u;
}
