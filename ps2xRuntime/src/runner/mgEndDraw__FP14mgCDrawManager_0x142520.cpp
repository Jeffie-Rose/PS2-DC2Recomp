#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndDraw__FP14mgCDrawManager
// Address: 0x142520 - 0x142538
void mgEndDraw__FP14mgCDrawManager_0x142520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndDraw__FP14mgCDrawManager_0x142520");
#endif

    ctx->pc = 0x142520u;

    // 0x142520: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142520u;
    {
        const bool branch_taken_0x142520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x142520) {
            ctx->pc = 0x142530u;
            goto label_142530;
        }
    }
    ctx->pc = 0x142528u;
    // 0x142528: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x142528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x14252c: 0x248420e0  addiu       $a0, $a0, 0x20E0
    ctx->pc = 0x14252cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8416));
label_142530:
    // 0x142530: 0x804d648  j           func_135920
    ctx->pc = 0x142530u;
    ctx->pc = 0x142534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142530u;
            // 0x142534: 0x8f858774  lw          $a1, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135920u;
    if (runtime->hasFunction(0x135920u)) {
        auto targetFn = runtime->lookupFunction(0x135920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EndDraw__14mgCDrawManagerFP13sceVif1Packet_0x135920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x142538u;
}
