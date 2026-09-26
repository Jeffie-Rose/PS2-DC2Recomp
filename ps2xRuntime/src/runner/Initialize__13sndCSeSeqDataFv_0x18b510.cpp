#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13sndCSeSeqDataFv
// Address: 0x18b510 - 0x18b524
void Initialize__13sndCSeSeqDataFv_0x18b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13sndCSeSeqDataFv_0x18b510");
#endif

    ctx->pc = 0x18b510u;

    // 0x18b510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b514: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x18b514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x18b518: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18b518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18b51c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B51Cu;
            // 0x18b520: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B524u;
}
