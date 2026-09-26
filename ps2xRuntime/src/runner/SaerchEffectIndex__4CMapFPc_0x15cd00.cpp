#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaerchEffectIndex__4CMapFPc
// Address: 0x15cd00 - 0x15cd08
void SaerchEffectIndex__4CMapFPc_0x15cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaerchEffectIndex__4CMapFPc_0x15cd00");
#endif

    ctx->pc = 0x15cd00u;

    // 0x15cd00: 0x805f494  j           func_17D250
    ctx->pc = 0x15CD00u;
    ctx->pc = 0x15CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD00u;
            // 0x15cd04: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D250u;
    if (runtime->hasFunction(0x17D250u)) {
        auto targetFn = runtime->lookupFunction(0x17D250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SaerchEffectIndex__11CEffectListFPc_0x17d250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15CD08u;
}
