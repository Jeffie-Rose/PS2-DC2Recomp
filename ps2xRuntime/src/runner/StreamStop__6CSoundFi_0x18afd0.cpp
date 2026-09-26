#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamStop__6CSoundFi
// Address: 0x18afd0 - 0x18afdc
void StreamStop__6CSoundFi_0x18afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamStop__6CSoundFi_0x18afd0");
#endif

    ctx->pc = 0x18afd0u;

    // 0x18afd0: 0x34a40060  ori         $a0, $a1, 0x60
    ctx->pc = 0x18afd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x18afd4: 0x80a2b88  j           func_28AE20
    ctx->pc = 0x18AFD4u;
    ctx->pc = 0x18AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFD4u;
            // 0x18afd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18AFDCu;
}
