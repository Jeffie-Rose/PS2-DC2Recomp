#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEmptyVoice__8sndTrackFv
// Address: 0x18c2f0 - 0x18c338
void GetEmptyVoice__8sndTrackFv_0x18c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEmptyVoice__8sndTrackFv_0x18c2f0");
#endif

    switch (ctx->pc) {
        case 0x18c300u: goto label_18c300;
        default: break;
    }

    ctx->pc = 0x18c2f0u;

    // 0x18c2f0: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x18c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x18c2f4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x18c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18c2f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2F8u;
            // 0x18c2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C31Cu;
            goto label_18c31c;
        }
    }
    ctx->pc = 0x18C300u;
label_18c300:
    // 0x18c300: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c304: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C304u;
    {
        const bool branch_taken_0x18c304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c304) {
            ctx->pc = 0x18C314u;
            goto label_18c314;
        }
    }
    ctx->pc = 0x18C30Cu;
    // 0x18c30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C330u;
            goto label_18c330;
        }
    }
    ctx->pc = 0x18C314u;
label_18c314:
    // 0x18c314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18c318: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_18c31c:
    // 0x18c31c: 0x0  nop
    ctx->pc = 0x18c31cu;
    // NOP
    // 0x18c320: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x18c320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18c324: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x18C324u;
    {
        const bool branch_taken_0x18c324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c324) {
            ctx->pc = 0x18C300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c300;
        }
    }
    ctx->pc = 0x18C32Cu;
    // 0x18c32c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c330:
    // 0x18c330: 0x3e00008  jr          $ra
    ctx->pc = 0x18C330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C338u;
}
