#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13mgCVisualPrimFv
// Address: 0x1411b0 - 0x1411cc
void Initialize__13mgCVisualPrimFv_0x1411b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13mgCVisualPrimFv_0x1411b0");
#endif

    ctx->pc = 0x1411b0u;

    // 0x1411b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1411b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1411b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1411b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1411b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1411b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1411bc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1411bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1411c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1411c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1411c4: 0x804f9ec  j           func_13E7B0
    ctx->pc = 0x1411C4u;
    ctx->pc = 0x1411C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1411C4u;
            // 0x1411c8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7B0u;
    if (runtime->hasFunction(0x13E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__13mgCVisualAttrFv_0x13e7b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1411CCu;
}
