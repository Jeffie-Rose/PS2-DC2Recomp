#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufIsFull__FP5VoBuf
// Address: 0x299a20 - 0x299a34
void voBufIsFull__FP5VoBuf_0x299a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufIsFull__FP5VoBuf_0x299a20");
#endif

    ctx->pc = 0x299a20u;

    // 0x299a20: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299a24: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x299a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x299a28: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x299a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x299a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x299A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A2Cu;
            // 0x299a30: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299A34u;
}
