#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgActiveLighting__Fii
// Address: 0x143720 - 0x14373c
void mgActiveLighting__Fii_0x143720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgActiveLighting__Fii_0x143720");
#endif

    ctx->pc = 0x143720u;

    // 0x143720: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143728: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14372c: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x14372cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x143730: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143734: 0x804e448  j           func_139120
    ctx->pc = 0x143734u;
    ctx->pc = 0x143738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143734u;
            // 0x143738: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (runtime->hasFunction(0x139120u)) {
        auto targetFn = runtime->lookupFunction(0x139120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ActiveLighting__13mgRENDER_INFOFii_0x139120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14373Cu;
}
