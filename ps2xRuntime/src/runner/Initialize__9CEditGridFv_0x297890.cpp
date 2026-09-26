#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CEditGridFv
// Address: 0x297890 - 0x2978ac
void Initialize__9CEditGridFv_0x297890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CEditGridFv_0x297890");
#endif

    ctx->pc = 0x297890u;

    // 0x297890: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x297890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x297894: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x297894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x297898: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x297898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x29789c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29789cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2978a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2978a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2978a4: 0x804bc8c  j           func_12F230
    ctx->pc = 0x2978A4u;
    ctx->pc = 0x2978A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2978A4u;
            // 0x2978a8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2978ACu;
}
