#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CObjAnimeFv
// Address: 0x1602a0 - 0x1602c0
void ps2___ct__9CObjAnimeFv_0x1602a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CObjAnimeFv_0x1602a0");
#endif

    ctx->pc = 0x1602a0u;

    // 0x1602a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1602a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1602a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1602a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602a8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1602a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1602ac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1602acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1602b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1602b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1602b4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1602b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1602b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1602B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1602BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1602B8u;
            // 0x1602bc: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1602C0u;
}
