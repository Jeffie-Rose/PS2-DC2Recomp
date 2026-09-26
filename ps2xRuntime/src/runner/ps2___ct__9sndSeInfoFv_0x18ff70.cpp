#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9sndSeInfoFv
// Address: 0x18ff70 - 0x18ff80
void ps2___ct__9sndSeInfoFv_0x18ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9sndSeInfoFv_0x18ff70");
#endif

    ctx->pc = 0x18ff70u;

    // 0x18ff70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18ff74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18ff74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff78: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF78u;
            // 0x18ff7c: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF80u;
}
