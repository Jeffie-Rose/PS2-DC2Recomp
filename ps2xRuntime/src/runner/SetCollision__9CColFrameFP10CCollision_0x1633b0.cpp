#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCollision__9CColFrameFP10CCollision
// Address: 0x1633b0 - 0x1633b8
void SetCollision__9CColFrameFP10CCollision_0x1633b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCollision__9CColFrameFP10CCollision_0x1633b0");
#endif

    ctx->pc = 0x1633b0u;

    // 0x1633b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1633B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0xac850114  sw          $a1, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1633B8u;
}
