#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLODDist__9CMapPartsFPfi
// Address: 0x162080 - 0x16208c
void SetLODDist__9CMapPartsFPfi_0x162080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLODDist__9CMapPartsFPfi_0x162080");
#endif

    ctx->pc = 0x162080u;

    // 0x162080: 0xac8601d0  sw          $a2, 0x1D0($a0)
    ctx->pc = 0x162080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 6));
    // 0x162084: 0x3e00008  jr          $ra
    ctx->pc = 0x162084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162084u;
            // 0x162088: 0xac8501d8  sw          $a1, 0x1D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16208Cu;
}
