#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menushop.cpp
// Address: 0x374800 - 0x37480c
void ps2___sinit_menushop_cpp_0x374800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menushop_cpp_0x374800");
#endif

    ctx->pc = 0x374800u;

    // 0x374800: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374804: 0x804e640  j           func_139900
    ctx->pc = 0x374804u;
    ctx->pc = 0x374808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374804u;
            // 0x374808: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37480Cu;
}
