#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CRedMarkModelFv
// Address: 0x1ce140 - 0x1ce150
void Initialize__13CRedMarkModelFv_0x1ce140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CRedMarkModelFv_0x1ce140");
#endif

    ctx->pc = 0x1ce140u;

    // 0x1ce140: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1ce140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1ce144: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1ce144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1ce148: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE148u;
            // 0x1ce14c: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE150u;
}
