#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuModeOff__8CGamePadFv
// Address: 0x14b520 - 0x14b528
void MenuModeOff__8CGamePadFv_0x14b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuModeOff__8CGamePadFv_0x14b520");
#endif

    ctx->pc = 0x14b520u;

    // 0x14b520: 0x3e00008  jr          $ra
    ctx->pc = 0x14B520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B520u;
            // 0x14b524: 0xac800454  sw          $zero, 0x454($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B528u;
}
