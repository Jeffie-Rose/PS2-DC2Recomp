#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__19CList<10CFuncPoint>Fv
// Address: 0x29d440 - 0x29d44c
void Initialize__19CList_10CFuncPoint_Fv_0x29d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__19CList_10CFuncPoint_Fv_0x29d440");
#endif

    ctx->pc = 0x29d440u;

    // 0x29d440: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29d440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29d444: 0x3e00008  jr          $ra
    ctx->pc = 0x29D444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D444u;
            // 0x29d448: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D44Cu;
}
