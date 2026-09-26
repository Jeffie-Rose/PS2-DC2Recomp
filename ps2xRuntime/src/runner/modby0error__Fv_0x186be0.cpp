#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: modby0error__Fv
// Address: 0x186be0 - 0x186bec
void modby0error__Fv_0x186be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modby0error__Fv_0x186be0");
#endif

    ctx->pc = 0x186be0u;

    // 0x186be0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186be4: 0x8061ab8  j           func_186AE0
    ctx->pc = 0x186BE4u;
    ctx->pc = 0x186BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BE4u;
            // 0x186be8: 0x24844080  addiu       $a0, $a0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186AE0u;
    if (runtime->hasFunction(0x186AE0u)) {
        auto targetFn = runtime->lookupFunction(0x186AE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        runerror__FPCc_0x186ae0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186BECu;
}
