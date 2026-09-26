#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfo__8CEditMapFi
// Address: 0x1b0b30 - 0x1b0b38
void GetePartsInfo__8CEditMapFi_0x1b0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfo__8CEditMapFi_0x1b0b30");
#endif

    ctx->pc = 0x1b0b30u;

    // 0x1b0b30: 0x80a9380  j           func_2A4E00
    ctx->pc = 0x1B0B30u;
    ctx->pc = 0x1B0B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B30u;
            // 0x1b0b34: 0x24840f94  addiu       $a0, $a0, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E00u;
    if (runtime->hasFunction(0x2A4E00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetePartsInfo__13CEditInfoMngrFi_0x2a4e00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0B38u;
}
