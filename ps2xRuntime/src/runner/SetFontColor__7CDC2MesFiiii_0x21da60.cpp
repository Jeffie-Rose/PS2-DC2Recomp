#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFontColor__7CDC2MesFiiii
// Address: 0x21da60 - 0x21da7c
void SetFontColor__7CDC2MesFiiii_0x21da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFontColor__7CDC2MesFiiii_0x21da60");
#endif

    ctx->pc = 0x21da60u;

    // 0x21da60: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x21da64: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x21da64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x21da68: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x21da6c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x21da6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x21da70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21da74: 0x8054bb0  j           func_152EC0
    ctx->pc = 0x21DA74u;
    ctx->pc = 0x21DA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA74u;
            // 0x21da78: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21DA7Cu;
}
