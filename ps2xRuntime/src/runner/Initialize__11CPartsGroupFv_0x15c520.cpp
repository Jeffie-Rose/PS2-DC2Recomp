#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CPartsGroupFv
// Address: 0x15c520 - 0x15c534
void Initialize__11CPartsGroupFv_0x15c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CPartsGroupFv_0x15c520");
#endif

    ctx->pc = 0x15c520u;

    // 0x15c520: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15c520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15c524: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15c524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15c528: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15c528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15c52c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C52Cu;
            // 0x15c530: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C534u;
}
