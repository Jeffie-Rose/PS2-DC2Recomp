#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__12CDamageScoreFsss
// Address: 0x1caa40 - 0x1caa50
void SetColor__12CDamageScoreFsss_0x1caa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__12CDamageScoreFsss_0x1caa40");
#endif

    ctx->pc = 0x1caa40u;

    // 0x1caa40: 0xa4850048  sh          $a1, 0x48($a0)
    ctx->pc = 0x1caa40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 5));
    // 0x1caa44: 0xa486004a  sh          $a2, 0x4A($a0)
    ctx->pc = 0x1caa44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 6));
    // 0x1caa48: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA48u;
            // 0x1caa4c: 0xa487004c  sh          $a3, 0x4C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAA50u;
}
