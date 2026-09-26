#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetFade__10CFadeInOutFv
// Address: 0x17d780 - 0x17d790
void ResetFade__10CFadeInOutFv_0x17d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetFade__10CFadeInOutFv_0x17d780");
#endif

    ctx->pc = 0x17d780u;

    // 0x17d780: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17d780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17d784: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17d784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17d788: 0x3e00008  jr          $ra
    ctx->pc = 0x17D788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D788u;
            // 0x17d78c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D790u;
}
