#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBreedFishInfoData__Fi
// Address: 0x195c60 - 0x195c70
void GetBreedFishInfoData__Fi_0x195c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBreedFishInfoData__Fi_0x195c60");
#endif

    ctx->pc = 0x195c60u;

    // 0x195c60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c64: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195c68: 0x8065698  j           func_195A60
    ctx->pc = 0x195C68u;
    ctx->pc = 0x195C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C68u;
            // 0x195c6c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195A60u;
    if (runtime->hasFunction(0x195A60u)) {
        auto targetFn = runtime->lookupFunction(0x195A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetFishData__9CGameDataFi_0x195a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195C70u;
}
