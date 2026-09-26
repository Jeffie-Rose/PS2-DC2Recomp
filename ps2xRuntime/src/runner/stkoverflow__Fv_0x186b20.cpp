#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stkoverflow__Fv
// Address: 0x186b20 - 0x186b2c
void stkoverflow__Fv_0x186b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stkoverflow__Fv_0x186b20");
#endif

    ctx->pc = 0x186b20u;

    // 0x186b20: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186b24: 0x8061ab8  j           func_186AE0
    ctx->pc = 0x186B24u;
    ctx->pc = 0x186B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B24u;
            // 0x186b28: 0x24844028  addiu       $a0, $a0, 0x4028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186AE0u;
    if (runtime->hasFunction(0x186AE0u)) {
        auto targetFn = runtime->lookupFunction(0x186AE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        runerror__FPCc_0x186ae0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186B2Cu;
}
