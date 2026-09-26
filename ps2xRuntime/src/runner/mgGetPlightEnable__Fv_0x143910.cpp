#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetPlightEnable__Fv
// Address: 0x143910 - 0x14391c
void mgGetPlightEnable__Fv_0x143910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetPlightEnable__Fv_0x143910");
#endif

    ctx->pc = 0x143910u;

    // 0x143910: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143914: 0x804e5fc  j           func_1397F0
    ctx->pc = 0x143914u;
    ctx->pc = 0x143918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143914u;
            // 0x143918: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1397F0u;
    if (runtime->hasFunction(0x1397F0u)) {
        auto targetFn = runtime->lookupFunction(0x1397F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPlightEnable__13mgRENDER_INFOFv_0x1397f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14391Cu;
}
