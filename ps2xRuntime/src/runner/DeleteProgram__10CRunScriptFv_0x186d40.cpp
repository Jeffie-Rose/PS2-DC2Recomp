#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteProgram__10CRunScriptFv
// Address: 0x186d40 - 0x186d50
void DeleteProgram__10CRunScriptFv_0x186d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteProgram__10CRunScriptFv_0x186d40");
#endif

    ctx->pc = 0x186d40u;

    // 0x186d40: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x186d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x186d44: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x186d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x186d48: 0x3e00008  jr          $ra
    ctx->pc = 0x186D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D48u;
            // 0x186d4c: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186D50u;
}
