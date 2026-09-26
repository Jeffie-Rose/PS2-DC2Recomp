#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLODBlend__9CMapPartsFi
// Address: 0x1620f0 - 0x1620f8
void SetLODBlend__9CMapPartsFi_0x1620f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLODBlend__9CMapPartsFi_0x1620f0");
#endif

    ctx->pc = 0x1620f0u;

    // 0x1620f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1620F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620F0u;
            // 0x1620f4: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1620F8u;
}
