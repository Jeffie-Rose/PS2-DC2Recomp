#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStatus__16CRoboVoiceSystemFii
// Address: 0x1b96a0 - 0x1b96b4
void SetStatus__16CRoboVoiceSystemFii_0x1b96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStatus__16CRoboVoiceSystemFii_0x1b96a0");
#endif

    ctx->pc = 0x1b96a0u;

    // 0x1b96a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b96a4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1b96a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b96a8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1b96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1b96ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B96ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B96B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96ACu;
            // 0x1b96b0: 0xa4860010  sh          $a2, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B96B4u;
}
