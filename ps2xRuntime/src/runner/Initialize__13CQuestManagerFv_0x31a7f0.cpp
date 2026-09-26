#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CQuestManagerFv
// Address: 0x31a7f0 - 0x31a7fc
void Initialize__13CQuestManagerFv_0x31a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CQuestManagerFv_0x31a7f0");
#endif

    ctx->pc = 0x31a7f0u;

    // 0x31a7f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31a7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A7F4u;
            // 0x31a7f8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A7FCu;
}
