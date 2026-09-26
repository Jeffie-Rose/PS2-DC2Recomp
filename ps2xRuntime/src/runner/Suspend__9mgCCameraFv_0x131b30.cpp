#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Suspend__9mgCCameraFv
// Address: 0x131b30 - 0x131b3c
void Suspend__9mgCCameraFv_0x131b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Suspend__9mgCCameraFv_0x131b30");
#endif

    ctx->pc = 0x131b30u;

    // 0x131b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b34: 0x3e00008  jr          $ra
    ctx->pc = 0x131B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B34u;
            // 0x131b38: 0xac83005c  sw          $v1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131B3Cu;
}
