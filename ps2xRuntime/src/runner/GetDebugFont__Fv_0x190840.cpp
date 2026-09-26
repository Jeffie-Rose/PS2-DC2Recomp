#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDebugFont__Fv
// Address: 0x190840 - 0x19084c
void GetDebugFont__Fv_0x190840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDebugFont__Fv_0x190840");
#endif

    ctx->pc = 0x190840u;

    // 0x190840: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x190844: 0x3e00008  jr          $ra
    ctx->pc = 0x190844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190844u;
            // 0x190848: 0x24428090  addiu       $v0, $v0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19084Cu;
}
