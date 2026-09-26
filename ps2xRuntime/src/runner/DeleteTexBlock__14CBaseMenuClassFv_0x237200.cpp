#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexBlock__14CBaseMenuClassFv
// Address: 0x237200 - 0x237208
void DeleteTexBlock__14CBaseMenuClassFv_0x237200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexBlock__14CBaseMenuClassFv_0x237200");
#endif

    ctx->pc = 0x237200u;

    // 0x237200: 0x80944a4  j           func_251290
    ctx->pc = 0x237200u;
    ctx->pc = 0x237204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237200u;
            // 0x237204: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251290u;
    if (runtime->hasFunction(0x251290u)) {
        auto targetFn = runtime->lookupFunction(0x251290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuDeleteTextureBlock__FPi_0x251290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237208u;
}
