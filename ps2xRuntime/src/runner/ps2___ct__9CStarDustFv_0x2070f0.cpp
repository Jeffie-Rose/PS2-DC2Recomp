#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CStarDustFv
// Address: 0x2070f0 - 0x207104
void ps2___ct__9CStarDustFv_0x2070f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CStarDustFv_0x2070f0");
#endif

    ctx->pc = 0x2070f0u;

    // 0x2070f0: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x2070f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2070f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2070f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070f8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2070f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2070fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2070FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070FCu;
            // 0x207100: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207104u;
}
