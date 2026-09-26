#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowMakePartsNum__12CMenuGeoramaFi
// Address: 0x1f8930 - 0x1f8940
void GetNowMakePartsNum__12CMenuGeoramaFi_0x1f8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowMakePartsNum__12CMenuGeoramaFi_0x1f8930");
#endif

    ctx->pc = 0x1f8930u;

    // 0x1f8930: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f8930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f8934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8938: 0x80bb9dc  j           func_2EE770
    ctx->pc = 0x1F8938u;
    ctx->pc = 0x1F893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8938u;
            // 0x1f893c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F8940u;
}
