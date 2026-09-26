#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuDrawNumberKeta__Fc
// Address: 0x221880 - 0x221888
void SetMenuDrawNumberKeta__Fc_0x221880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuDrawNumberKeta__Fc_0x221880");
#endif

    ctx->pc = 0x221880u;

    // 0x221880: 0x3e00008  jr          $ra
    ctx->pc = 0x221880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221880u;
            // 0x221884: 0xa3849380  sb          $a0, -0x6C80($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939520), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221888u;
}
