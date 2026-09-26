#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CLoopSeMngrFv
// Address: 0x18c550 - 0x18c55c
void Initialize__11CLoopSeMngrFv_0x18c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CLoopSeMngrFv_0x18c550");
#endif

    ctx->pc = 0x18c550u;

    // 0x18c550: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18c550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18c554: 0x3e00008  jr          $ra
    ctx->pc = 0x18C554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C554u;
            // 0x18c558: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C55Cu;
}
