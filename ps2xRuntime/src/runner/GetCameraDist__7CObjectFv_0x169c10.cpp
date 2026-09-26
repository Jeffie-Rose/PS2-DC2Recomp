#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraDist__7CObjectFv
// Address: 0x169c10 - 0x169c18
void GetCameraDist__7CObjectFv_0x169c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraDist__7CObjectFv_0x169c10");
#endif

    ctx->pc = 0x169c10u;

    // 0x169c10: 0x80516c8  j           func_145B20
    ctx->pc = 0x169C10u;
    ctx->pc = 0x169C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C10u;
            // 0x169c14: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x169C18u;
}
