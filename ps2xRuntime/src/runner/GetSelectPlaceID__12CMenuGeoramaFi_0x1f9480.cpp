#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSelectPlaceID__12CMenuGeoramaFi
// Address: 0x1f9480 - 0x1f9490
void GetSelectPlaceID__12CMenuGeoramaFi_0x1f9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSelectPlaceID__12CMenuGeoramaFi_0x1f9480");
#endif

    ctx->pc = 0x1f9480u;

    // 0x1f9480: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f9480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9484: 0x3401bbbc  ori         $at, $zero, 0xBBBC
    ctx->pc = 0x1f9484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48060);
    // 0x1f9488: 0x807e524  j           func_1F9490
    ctx->pc = 0x1F9488u;
    ctx->pc = 0x1F948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9488u;
            // 0x1f948c: 0x812821  addu        $a1, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9490u;
    if (runtime->hasFunction(0x1F9490u)) {
        auto targetFn = runtime->lookupFunction(0x1F9490u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetSelectPlaceID__12CMenuGeoramaFP23GEORAMA_PLACEPARTS_INFOi_0x1f9490(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F9490u;
}
