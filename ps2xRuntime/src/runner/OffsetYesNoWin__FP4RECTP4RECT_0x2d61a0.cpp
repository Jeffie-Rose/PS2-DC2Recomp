#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OffsetYesNoWin__FP4RECTP4RECT
// Address: 0x2d61a0 - 0x2d61c0
void OffsetYesNoWin__FP4RECTP4RECT_0x2d61a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OffsetYesNoWin__FP4RECTP4RECT_0x2d61a0");
#endif

    ctx->pc = 0x2d61a0u;

    // 0x2d61a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d61a4: 0x286100a6  slti        $at, $v1, 0xA6
    ctx->pc = 0x2d61a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)166) ? 1 : 0);
    // 0x2d61a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D61A8u;
    {
        const bool branch_taken_0x2d61a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61A8u;
            // 0x2d61ac: 0x240300a6  addiu       $v1, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61a8) {
            ctx->pc = 0x2D61B8u;
            goto label_2d61b8;
        }
    }
    ctx->pc = 0x2D61B0u;
    // 0x2d61b0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2d61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2d61b4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2d61b8:
    // 0x2d61b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D61B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D61C0u;
}
