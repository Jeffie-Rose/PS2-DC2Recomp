#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TransBdState__6CSoundFi
// Address: 0x18b1a0 - 0x18b1b4
void TransBdState__6CSoundFi_0x18b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransBdState__6CSoundFi_0x18b1a0");
#endif

    ctx->pc = 0x18b1a0u;

    // 0x18b1a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18b1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1a8: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x18b1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x18b1ac: 0x8046454  j           func_119150
    ctx->pc = 0x18B1ACu;
    ctx->pc = 0x18B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1ACu;
            // 0x18b1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceSdRemote_0x119150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18B1B4u;
}
