#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NameRegistKey__Fv
// Address: 0x30b4f0 - 0x30b4f8
void NameRegistKey__Fv_0x30b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NameRegistKey__Fv_0x30b4f0");
#endif

    ctx->pc = 0x30b4f0u;

    // 0x30b4f0: 0x80c2eac  j           func_30BAB0
    ctx->pc = 0x30B4F0u;
    ctx->pc = 0x30B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4F0u;
            // 0x30b4f4: 0x8f84a1d8  lw          $a0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BAB0u;
    if (runtime->hasFunction(0x30BAB0u)) {
        auto targetFn = runtime->lookupFunction(0x30BAB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__13CNameRegiMenuFv_0x30bab0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30B4F8u;
}
