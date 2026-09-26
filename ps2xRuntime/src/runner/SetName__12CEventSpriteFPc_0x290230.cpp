#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__12CEventSpriteFPc
// Address: 0x290230 - 0x290238
void SetName__12CEventSpriteFPc_0x290230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__12CEventSpriteFPc_0x290230");
#endif

    ctx->pc = 0x290230u;

    // 0x290230: 0x804a3dc  j           func_128F70
    ctx->pc = 0x290230u;
    ctx->pc = 0x290234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290230u;
            // 0x290234: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        strcpy_0x128f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x290238u;
}
