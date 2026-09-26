#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CEditPartsFv
// Address: 0x1b57d0 - 0x1b57f0
void Initialize__10CEditPartsFv_0x1b57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CEditPartsFv_0x1b57d0");
#endif

    ctx->pc = 0x1b57d0u;

    // 0x1b57d0: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x1b57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x1b57d4: 0xac8002f0  sw          $zero, 0x2F0($a0)
    ctx->pc = 0x1b57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 0));
    // 0x1b57d8: 0xac800324  sw          $zero, 0x324($a0)
    ctx->pc = 0x1b57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 804), GPR_U32(ctx, 0));
    // 0x1b57dc: 0xac800310  sw          $zero, 0x310($a0)
    ctx->pc = 0x1b57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 0));
    // 0x1b57e0: 0xac800328  sw          $zero, 0x328($a0)
    ctx->pc = 0x1b57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 808), GPR_U32(ctx, 0));
    // 0x1b57e4: 0xac800314  sw          $zero, 0x314($a0)
    ctx->pc = 0x1b57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 0));
    // 0x1b57e8: 0x8059894  j           func_166250
    ctx->pc = 0x1B57E8u;
    ctx->pc = 0x1B57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57E8u;
            // 0x1b57ec: 0xac800318  sw          $zero, 0x318($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166250u;
    if (runtime->hasFunction(0x166250u)) {
        auto targetFn = runtime->lookupFunction(0x166250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__9CMapPartsFv_0x166250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B57F0u;
}
