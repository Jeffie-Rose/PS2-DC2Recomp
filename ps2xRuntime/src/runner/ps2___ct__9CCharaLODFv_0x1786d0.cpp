#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CCharaLODFv
// Address: 0x1786d0 - 0x1786f0
void ps2___ct__9CCharaLODFv_0x1786d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CCharaLODFv_0x1786d0");
#endif

    ctx->pc = 0x1786d0u;

    // 0x1786d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1786d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1786d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1786d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1786dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1786dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1786e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1786e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1786e4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1786e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1786e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1786E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786E8u;
            // 0x1786ec: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1786F0u;
}
