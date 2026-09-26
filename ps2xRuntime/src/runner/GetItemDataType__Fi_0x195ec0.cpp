#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemDataType__Fi
// Address: 0x195ec0 - 0x195ed0
void GetItemDataType__Fi_0x195ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemDataType__Fi_0x195ec0");
#endif

    ctx->pc = 0x195ec0u;

    // 0x195ec0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ec4: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195ec8: 0x80656e0  j           func_195B80
    ctx->pc = 0x195EC8u;
    ctx->pc = 0x195ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195EC8u;
            // 0x195ecc: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B80u;
    if (runtime->hasFunction(0x195B80u)) {
        auto targetFn = runtime->lookupFunction(0x195B80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetDataType__9CGameDataFi_0x195b80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195ED0u;
}
