#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDataPath__13CGameDataUsedFv
// Address: 0x197120 - 0x19712c
void GetDataPath__13CGameDataUsedFv_0x197120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDataPath__13CGameDataUsedFv_0x197120");
#endif

    ctx->pc = 0x197120u;

    // 0x197120: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x197124: 0x8065750  j           func_195D40
    ctx->pc = 0x197124u;
    ctx->pc = 0x197128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197124u;
            // 0x197128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19712Cu;
}
