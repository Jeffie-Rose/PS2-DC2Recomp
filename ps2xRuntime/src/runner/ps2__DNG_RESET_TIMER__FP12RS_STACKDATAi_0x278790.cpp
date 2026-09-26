#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_RESET_TIMER__FP12RS_STACKDATAi
// Address: 0x278790 - 0x2787b8
void ps2__DNG_RESET_TIMER__FP12RS_STACKDATAi_0x278790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_RESET_TIMER__FP12RS_STACKDATAi_0x278790");
#endif

    ctx->pc = 0x278790u;

    // 0x278790: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x278790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x278794: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x278798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278798u;
    {
        const bool branch_taken_0x278798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278798) {
            ctx->pc = 0x2787A8u;
            goto label_2787a8;
        }
    }
    ctx->pc = 0x2787A0u;
    // 0x2787a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2787A0u;
    {
        const bool branch_taken_0x2787a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787A0u;
            // 0x2787a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787a0) {
            ctx->pc = 0x2787B0u;
            goto label_2787b0;
        }
    }
    ctx->pc = 0x2787A8u;
label_2787a8:
    // 0x2787a8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2787a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2787ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2787acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2787b0:
    // 0x2787b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2787B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2787B8u;
}
