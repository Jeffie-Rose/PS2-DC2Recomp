#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_dng_event.cpp
// Address: 0x3747f0 - 0x3747fc
void ps2___sinit_dng_event_cpp_0x3747f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_dng_event_cpp_0x3747f0");
#endif

    ctx->pc = 0x3747f0u;

    // 0x3747f0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x3747f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x3747f4: 0x80b7b10  j           func_2DEC40
    ctx->pc = 0x3747F4u;
    ctx->pc = 0x3747F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747F4u;
            // 0x3747f8: 0x248452c0  addiu       $a0, $a0, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3747FCu;
}
