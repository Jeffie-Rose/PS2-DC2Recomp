#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_dbg_font.cpp
// Address: 0x373510 - 0x37351c
void ps2___sinit_dbg_font_cpp_0x373510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_dbg_font_cpp_0x373510");
#endif

    ctx->pc = 0x373510u;

    // 0x373510: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x373510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x373514: 0x8061898  j           func_186260
    ctx->pc = 0x373514u;
    ctx->pc = 0x373518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373514u;
            // 0x373518: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186260u;
    if (runtime->hasFunction(0x186260u)) {
        auto targetFn = runtime->lookupFunction(0x186260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___ct__11dbgCJISFontFv_0x186260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37351Cu;
}
