#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CRepairEffectFv
// Address: 0x22d3b0 - 0x22d3c8
void Initialize__13CRepairEffectFv_0x22d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CRepairEffectFv_0x22d3b0");
#endif

    ctx->pc = 0x22d3b0u;

    // 0x22d3b0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d3b4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x22d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x22d3b8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x22d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x22d3bc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x22d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x22d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3C0u;
            // 0x22d3c4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D3C8u;
}
