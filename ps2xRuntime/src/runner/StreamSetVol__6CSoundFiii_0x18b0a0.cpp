#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamSetVol__6CSoundFiii
// Address: 0x18b0a0 - 0x18b0b0
void StreamSetVol__6CSoundFiii_0x18b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamSetVol__6CSoundFiii_0x18b0a0");
#endif

    ctx->pc = 0x18b0a0u;

    // 0x18b0a0: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x18b0a4: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x18b0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x18b0a8: 0x80a2b88  j           func_28AE20
    ctx->pc = 0x18B0A8u;
    ctx->pc = 0x18B0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0A8u;
            // 0x18b0ac: 0x472825  or          $a1, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18B0B0u;
}
