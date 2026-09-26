#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCommonItemData__Fi
// Address: 0x195c20 - 0x195c30
void GetCommonItemData__Fi_0x195c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCommonItemData__Fi_0x195c20");
#endif

    ctx->pc = 0x195c20u;

    // 0x195c20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c24: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195c28: 0x80655dc  j           func_195770
    ctx->pc = 0x195C28u;
    ctx->pc = 0x195C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C28u;
            // 0x195c2c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195C30u;
}
