#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamOpenState__6CSoundFv
// Address: 0x28afb0 - 0x28afbc
void StreamOpenState__6CSoundFv_0x28afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamOpenState__6CSoundFv_0x28afb0");
#endif

    ctx->pc = 0x28afb0u;

    // 0x28afb0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28afb4: 0x8044d1c  j           func_113470
    ctx->pc = 0x28AFB4u;
    ctx->pc = 0x28AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFB4u;
            // 0x28afb8: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113470u;
    if (runtime->hasFunction(0x113470u)) {
        auto targetFn = runtime->lookupFunction(0x113470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceSifCheckStatRpc_0x113470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28AFBCu;
}
