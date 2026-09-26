#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CaptureEnd__8CGamePadFv
// Address: 0x14b600 - 0x14b60c
void CaptureEnd__8CGamePadFv_0x14b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CaptureEnd__8CGamePadFv_0x14b600");
#endif

    ctx->pc = 0x14b600u;

    // 0x14b600: 0xac800470  sw          $zero, 0x470($a0)
    ctx->pc = 0x14b600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 0));
    // 0x14b604: 0x3e00008  jr          $ra
    ctx->pc = 0x14B604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B604u;
            // 0x14b608: 0xac800474  sw          $zero, 0x474($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B60Cu;
}
