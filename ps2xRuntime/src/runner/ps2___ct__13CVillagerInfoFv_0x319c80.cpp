#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CVillagerInfoFv
// Address: 0x319c80 - 0x319ca8
void ps2___ct__13CVillagerInfoFv_0x319c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CVillagerInfoFv_0x319c80");
#endif

    ctx->pc = 0x319c80u;

    // 0x319c80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x319c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319c84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x319c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x319c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x319c8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x319c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x319c90: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x319c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x319c94: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x319c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x319c98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x319c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x319c9c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x319c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x319ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x319CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319CA0u;
            // 0x319ca4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319CA8u;
}
