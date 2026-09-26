#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__Q214CVillagerPlace12ProgressInfoFv
// Address: 0x2cd0e0 - 0x2cd108
void Init__Q214CVillagerPlace12ProgressInfoFv_0x2cd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__Q214CVillagerPlace12ProgressInfoFv_0x2cd0e0");
#endif

    ctx->pc = 0x2cd0e0u;

    // 0x2cd0e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cd0e4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cd0e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2cd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2cd0ec: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cd0f0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cd0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cd0f4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2cd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2cd0f8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2cd0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2cd0fc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2cd0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2cd100: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD100u;
            // 0x2cd104: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD108u;
}
