#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QueuePeekWriteDone
// Address: 0x111488 - 0x1114c4
void QueuePeekWriteDone_0x111488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueuePeekWriteDone_0x111488");
#endif

    ctx->pc = 0x111488u;

    // 0x111488: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x111488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11148c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111490: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x111494: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11149c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11149cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1114a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1114a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1114a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1114a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1114a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1114ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1114ACu;
    {
        const bool branch_taken_0x1114ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1114B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1114ACu;
            // 0x1114b0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ac) {
            ctx->pc = 0x1114BCu;
            goto label_1114bc;
        }
    }
    ctx->pc = 0x1114B4u;
    // 0x1114b4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1114b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1114b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1114bc:
    // 0x1114bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1114BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1114C4u;
}
