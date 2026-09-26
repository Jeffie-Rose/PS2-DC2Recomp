#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfoAtType__8CEditMapFi
// Address: 0x1b0b60 - 0x1b0b68
void GetePartsInfoAtType__8CEditMapFi_0x1b0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfoAtType__8CEditMapFi_0x1b0b60");
#endif

    ctx->pc = 0x1b0b60u;

    // 0x1b0b60: 0x80a93d0  j           func_2A4F40
    ctx->pc = 0x1B0B60u;
    ctx->pc = 0x1B0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B60u;
            // 0x1b0b64: 0x24840f94  addiu       $a0, $a0, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F40u;
    if (runtime->hasFunction(0x2A4F40u)) {
        auto targetFn = runtime->lookupFunction(0x2A4F40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetePartsInfoAtType__13CEditInfoMngrFi_0x2a4f40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0B68u;
}
