#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowFade__10CFadeInOutFv
// Address: 0x17d980 - 0x17d98c
void NowFade__10CFadeInOutFv_0x17d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowFade__10CFadeInOutFv_0x17d980");
#endif

    ctx->pc = 0x17d980u;

    // 0x17d980: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d984: 0x3e00008  jr          $ra
    ctx->pc = 0x17D984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D984u;
            // 0x17d988: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D98Cu;
}
