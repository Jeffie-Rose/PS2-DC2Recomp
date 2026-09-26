#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfo__8CEditMapFPc
// Address: 0x1b0b40 - 0x1b0b48
void GetePartsInfo__8CEditMapFPc_0x1b0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfo__8CEditMapFPc_0x1b0b40");
#endif

    ctx->pc = 0x1b0b40u;

    // 0x1b0b40: 0x80a9390  j           func_2A4E40
    ctx->pc = 0x1B0B40u;
    ctx->pc = 0x1B0B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B40u;
            // 0x1b0b44: 0x24840f94  addiu       $a0, $a0, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E40u;
    if (runtime->hasFunction(0x2A4E40u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetePartsInfo__13CEditInfoMngrFPc_0x2a4e40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0B48u;
}
