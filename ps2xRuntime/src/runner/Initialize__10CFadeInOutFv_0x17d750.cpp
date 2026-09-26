#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CFadeInOutFv
// Address: 0x17d750 - 0x17d77c
void Initialize__10CFadeInOutFv_0x17d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CFadeInOutFv_0x17d750");
#endif

    ctx->pc = 0x17d750u;

    // 0x17d750: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17d750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17d754: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17d754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17d758: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17d758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17d75c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17d760: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17d760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17d764: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17d764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17d768: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17d768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17d76c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17d770: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17d770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17d774: 0x3e00008  jr          $ra
    ctx->pc = 0x17D774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D774u;
            // 0x17d778: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D77Cu;
}
