#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__9mgRect<s>Fssss
// Address: 0x2bfc30 - 0x2bfc44
void Set__9mgRect_s_Fssss_0x2bfc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__9mgRect_s_Fssss_0x2bfc30");
#endif

    ctx->pc = 0x2bfc30u;

    // 0x2bfc30: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x2bfc30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bfc34: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x2bfc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2bfc38: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x2bfc38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2bfc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC3Cu;
            // 0x2bfc40: 0xa4880006  sh          $t0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFC44u;
}
