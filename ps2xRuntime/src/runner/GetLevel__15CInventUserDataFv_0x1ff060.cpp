#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLevel__15CInventUserDataFv
// Address: 0x1ff060 - 0x1ff06c
void GetLevel__15CInventUserDataFv_0x1ff060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLevel__15CInventUserDataFv_0x1ff060");
#endif

    ctx->pc = 0x1ff060u;

    // 0x1ff060: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff064: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF064u;
            // 0x1ff068: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF06Cu;
}
