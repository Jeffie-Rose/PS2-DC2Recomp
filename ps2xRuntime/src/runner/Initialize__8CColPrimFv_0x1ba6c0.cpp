#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CColPrimFv
// Address: 0x1ba6c0 - 0x1ba6fc
void Initialize__8CColPrimFv_0x1ba6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CColPrimFv_0x1ba6c0");
#endif

    ctx->pc = 0x1ba6c0u;

    // 0x1ba6c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ba6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ba6c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba6c8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1ba6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1ba6cc: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x1ba6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x1ba6d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1ba6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ba6d4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1ba6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1ba6d8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1ba6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1ba6dc: 0xa08000c0  sb          $zero, 0xC0($a0)
    ctx->pc = 0x1ba6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba6e0: 0xa08000e6  sb          $zero, 0xE6($a0)
    ctx->pc = 0x1ba6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba6e4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1ba6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1ba6e8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1ba6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1ba6ec: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1ba6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1ba6f0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1ba6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1ba6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6F4u;
            // 0x1ba6f8: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA6FCu;
}
