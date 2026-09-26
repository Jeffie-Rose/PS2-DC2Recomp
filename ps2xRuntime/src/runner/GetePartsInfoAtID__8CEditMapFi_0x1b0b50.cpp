#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfoAtID__8CEditMapFi
// Address: 0x1b0b50 - 0x1b0b58
void GetePartsInfoAtID__8CEditMapFi_0x1b0b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfoAtID__8CEditMapFi_0x1b0b50");
#endif

    ctx->pc = 0x1b0b50u;

    // 0x1b0b50: 0x80a93b4  j           func_2A4ED0
    ctx->pc = 0x1B0B50u;
    ctx->pc = 0x1B0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B50u;
            // 0x1b0b54: 0x24840f94  addiu       $a0, $a0, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4ED0u;
    if (runtime->hasFunction(0x2A4ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4ED0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0B58u;
}
