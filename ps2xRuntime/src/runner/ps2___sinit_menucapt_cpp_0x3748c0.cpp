#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menucapt.cpp
// Address: 0x3748c0 - 0x3748cc
void ps2___sinit_menucapt_cpp_0x3748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menucapt_cpp_0x3748c0");
#endif

    ctx->pc = 0x3748c0u;

    // 0x3748c0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3748c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3748c4: 0x804e640  j           func_139900
    ctx->pc = 0x3748C4u;
    ctx->pc = 0x3748C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748C4u;
            // 0x3748c8: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3748CCu;
}
