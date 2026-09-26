#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_event.cpp
// Address: 0x374580 - 0x37458c
void ps2___sinit_event_cpp_0x374580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_event_cpp_0x374580");
#endif

    ctx->pc = 0x374580u;

    // 0x374580: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374584: 0x8061b34  j           func_186CD0
    ctx->pc = 0x374584u;
    ctx->pc = 0x374588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374584u;
            // 0x374588: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37458Cu;
}
