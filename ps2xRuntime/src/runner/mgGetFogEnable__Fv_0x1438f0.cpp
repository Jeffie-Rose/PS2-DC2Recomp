#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetFogEnable__Fv
// Address: 0x1438f0 - 0x1438fc
void mgGetFogEnable__Fv_0x1438f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetFogEnable__Fv_0x1438f0");
#endif

    ctx->pc = 0x1438f0u;

    // 0x1438f0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1438f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1438f4: 0x804e5f4  j           func_1397D0
    ctx->pc = 0x1438F4u;
    ctx->pc = 0x1438F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1438F4u;
            // 0x1438f8: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1397D0u;
    if (runtime->hasFunction(0x1397D0u)) {
        auto targetFn = runtime->lookupFunction(0x1397D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetFogEnable__13mgRENDER_INFOFv_0x1397d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1438FCu;
}
