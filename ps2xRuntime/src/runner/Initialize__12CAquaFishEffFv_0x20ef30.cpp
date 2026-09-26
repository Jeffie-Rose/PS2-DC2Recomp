#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CAquaFishEffFv
// Address: 0x20ef30 - 0x20ef44
void Initialize__12CAquaFishEffFv_0x20ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CAquaFishEffFv_0x20ef30");
#endif

    ctx->pc = 0x20ef30u;

    // 0x20ef30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x20ef34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20ef38: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x20ef38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x20EF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF3Cu;
            // 0x20ef40: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20EF44u;
}
