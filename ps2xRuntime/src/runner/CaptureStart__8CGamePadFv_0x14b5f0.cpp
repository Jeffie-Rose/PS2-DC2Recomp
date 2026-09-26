#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CaptureStart__8CGamePadFv
// Address: 0x14b5f0 - 0x14b600
void CaptureStart__8CGamePadFv_0x14b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CaptureStart__8CGamePadFv_0x14b5f0");
#endif

    ctx->pc = 0x14b5f0u;

    // 0x14b5f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b5f4: 0xac830470  sw          $v1, 0x470($a0)
    ctx->pc = 0x14b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 3));
    // 0x14b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5F8u;
            // 0x14b5fc: 0xac800474  sw          $zero, 0x474($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B600u;
}
