#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetDistFromCamera__FPf
// Address: 0x145b20 - 0x145b2c
void mgGetDistFromCamera__FPf_0x145b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetDistFromCamera__FPf_0x145b20");
#endif

    ctx->pc = 0x145b20u;

    // 0x145b20: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x145b24: 0x804c018  j           func_130060
    ctx->pc = 0x145B24u;
    ctx->pc = 0x145B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B24u;
            // 0x145b28: 0x24a51260  addiu       $a1, $a1, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x145B2Cu;
}
