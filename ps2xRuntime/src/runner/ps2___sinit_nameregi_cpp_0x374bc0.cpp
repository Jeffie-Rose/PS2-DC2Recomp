#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_nameregi.cpp
// Address: 0x374bc0 - 0x374bcc
void ps2___sinit_nameregi_cpp_0x374bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_nameregi_cpp_0x374bc0");
#endif

    ctx->pc = 0x374bc0u;

    // 0x374bc0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374bc4: 0x804e640  j           func_139900
    ctx->pc = 0x374BC4u;
    ctx->pc = 0x374BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374BC4u;
            // 0x374bc8: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x374BCCu;
}
