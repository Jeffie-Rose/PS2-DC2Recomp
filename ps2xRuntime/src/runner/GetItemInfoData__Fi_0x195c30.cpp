#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemInfoData__Fi
// Address: 0x195c30 - 0x195c40
void GetItemInfoData__Fi_0x195c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemInfoData__Fi_0x195c30");
#endif

    ctx->pc = 0x195c30u;

    // 0x195c30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c34: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195c38: 0x8065624  j           func_195890
    ctx->pc = 0x195C38u;
    ctx->pc = 0x195C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C38u;
            // 0x195c3c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195890u;
    if (runtime->hasFunction(0x195890u)) {
        auto targetFn = runtime->lookupFunction(0x195890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetItemData__9CGameDataFi_0x195890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195C40u;
}
