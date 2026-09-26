#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeCheck__10CFadeInOutFv
// Address: 0x17d970 - 0x17d978
void FadeCheck__10CFadeInOutFv_0x17d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeCheck__10CFadeInOutFv_0x17d970");
#endif

    ctx->pc = 0x17d970u;

    // 0x17d970: 0x3e00008  jr          $ra
    ctx->pc = 0x17D970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D970u;
            // 0x17d974: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D978u;
}
