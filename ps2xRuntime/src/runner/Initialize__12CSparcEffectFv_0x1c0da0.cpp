#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CSparcEffectFv
// Address: 0x1c0da0 - 0x1c0da8
void Initialize__12CSparcEffectFv_0x1c0da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CSparcEffectFv_0x1c0da0");
#endif

    ctx->pc = 0x1c0da0u;

    // 0x1c0da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DA0u;
            // 0x1c0da4: 0xa08000a9  sb          $zero, 0xA9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 169), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0DA8u;
}
