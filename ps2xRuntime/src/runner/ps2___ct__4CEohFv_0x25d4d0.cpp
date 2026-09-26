#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__4CEohFv
// Address: 0x25d4d0 - 0x25d500
void ps2___ct__4CEohFv_0x25d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__4CEohFv_0x25d4d0");
#endif

    ctx->pc = 0x25d4d0u;

    // 0x25d4d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d4d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x25d4dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x25d4e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25d4e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25d4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4e8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25d4ec: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25d4f0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25d4f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D4F8u;
            // 0x25d4fc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D500u;
}
