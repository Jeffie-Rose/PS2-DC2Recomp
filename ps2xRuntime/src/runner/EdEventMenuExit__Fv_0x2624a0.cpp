#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventMenuExit__Fv
// Address: 0x2624a0 - 0x2624bc
void EdEventMenuExit__Fv_0x2624a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventMenuExit__Fv_0x2624a0");
#endif

    ctx->pc = 0x2624a0u;

    // 0x2624a0: 0x8f8497f0  lw          $a0, -0x6810($gp)
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940656)));
    // 0x2624a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2624A4u;
    {
        const bool branch_taken_0x2624a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2624A4u;
            // 0x2624a8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624a4) {
            ctx->pc = 0x2624B4u;
            goto label_2624b4;
        }
    }
    ctx->pc = 0x2624ACu;
    // 0x2624ac: 0x8c23d630  lw          $v1, -0x29D0($at)
    ctx->pc = 0x2624acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x2624b0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2624b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2624b4:
    // 0x2624b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2624B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2624B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2624B4u;
            // 0x2624b8: 0xaf8097f0  sw          $zero, -0x6810($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2624BCu;
}
