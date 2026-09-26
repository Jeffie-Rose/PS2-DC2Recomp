#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDngTreeFlag__Fi
// Address: 0x2f1420 - 0x2f1428
void SetDngTreeFlag__Fi_0x2f1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDngTreeFlag__Fi_0x2f1420");
#endif

    ctx->pc = 0x2f1420u;

    // 0x2f1420: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1420u;
            // 0x2f1424: 0xa7849ee0  sh          $a0, -0x6120($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294942432), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1428u;
}
