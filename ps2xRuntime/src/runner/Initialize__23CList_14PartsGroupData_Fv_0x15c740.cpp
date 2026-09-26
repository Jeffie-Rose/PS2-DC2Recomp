#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__23CList<14PartsGroupData>Fv
// Address: 0x15c740 - 0x15c74c
void Initialize__23CList_14PartsGroupData_Fv_0x15c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__23CList_14PartsGroupData_Fv_0x15c740");
#endif

    ctx->pc = 0x15c740u;

    // 0x15c740: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15c740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15c744: 0x3e00008  jr          $ra
    ctx->pc = 0x15C744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C744u;
            // 0x15c748: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C74Cu;
}
