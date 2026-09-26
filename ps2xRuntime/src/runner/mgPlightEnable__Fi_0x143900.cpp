#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgPlightEnable__Fi
// Address: 0x143900 - 0x143910
void mgPlightEnable__Fi_0x143900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgPlightEnable__Fi_0x143900");
#endif

    ctx->pc = 0x143900u;

    // 0x143900: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143904: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143908: 0x804e5f8  j           func_1397E0
    ctx->pc = 0x143908u;
    ctx->pc = 0x14390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143908u;
            // 0x14390c: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1397E0u;
    if (runtime->hasFunction(0x1397E0u)) {
        auto targetFn = runtime->lookupFunction(0x1397E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        PlightEnable__13mgRENDER_INFOFi_0x1397e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143910u;
}
