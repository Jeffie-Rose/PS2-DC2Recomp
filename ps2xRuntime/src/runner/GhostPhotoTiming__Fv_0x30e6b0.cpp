#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GhostPhotoTiming__Fv
// Address: 0x30e6b0 - 0x30e6e0
void GhostPhotoTiming__Fv_0x30e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GhostPhotoTiming__Fv_0x30e6b0");
#endif

    ctx->pc = 0x30e6b0u;

    // 0x30e6b0: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e6b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e6b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E6B8u;
    {
        const bool branch_taken_0x30e6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E6B8u;
            // 0x30e6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6b8) {
            ctx->pc = 0x30E6D8u;
            goto label_30e6d8;
        }
    }
    ctx->pc = 0x30E6C0u;
    // 0x30e6c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e6c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E6C4u;
    {
        const bool branch_taken_0x30e6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30e6c4) {
            ctx->pc = 0x30E6D4u;
            goto label_30e6d4;
        }
    }
    ctx->pc = 0x30E6CCu;
    // 0x30e6cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30E6CCu;
    {
        const bool branch_taken_0x30e6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E6CCu;
            // 0x30e6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6cc) {
            ctx->pc = 0x30E6D8u;
            goto label_30e6d8;
        }
    }
    ctx->pc = 0x30E6D4u;
label_30e6d4:
    // 0x30e6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e6d8:
    // 0x30e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E6E0u;
}
