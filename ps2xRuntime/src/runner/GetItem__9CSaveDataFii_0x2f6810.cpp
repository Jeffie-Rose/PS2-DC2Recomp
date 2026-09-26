#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItem__9CSaveDataFii
// Address: 0x2f6810 - 0x2f6820
void GetItem__9CSaveDataFii_0x2f6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItem__9CSaveDataFii_0x2f6810");
#endif

    ctx->pc = 0x2f6810u;

    // 0x2f6810: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f6810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f6814: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2f6814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2f6818: 0x80677fc  j           func_19DFF0
    ctx->pc = 0x2F6818u;
    ctx->pc = 0x2F681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6818u;
            // 0x2f681c: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F6820u;
}
