#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QueuePeekReadDone
// Address: 0x1114c8 - 0x111504
void QueuePeekReadDone_0x1114c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueuePeekReadDone_0x1114c8");
#endif

    ctx->pc = 0x1114c8u;

    // 0x1114c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1114c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1114d0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1114d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1114d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1114d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1114d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1114d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1114dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1114dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1114e0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1114e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1114e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1114e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1114e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1114ec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1114ECu;
    {
        const bool branch_taken_0x1114ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1114F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114ECu;
            // 0x1114f0: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ec) {
            ctx->pc = 0x1114FCu;
            goto label_1114fc;
        }
    }
    ctx->pc = 0x1114F4u;
    // 0x1114f4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1114f8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1114f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1114fc:
    // 0x1114fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1114FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111504u;
}
