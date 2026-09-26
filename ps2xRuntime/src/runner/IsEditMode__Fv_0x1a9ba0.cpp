#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsEditMode__Fv
// Address: 0x1a9ba0 - 0x1a9bc8
void IsEditMode__Fv_0x1a9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEditMode__Fv_0x1a9ba0");
#endif

    ctx->pc = 0x1a9ba0u;

    // 0x1a9ba0: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x1a9ba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9ba8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9BA8u;
    {
        const bool branch_taken_0x1a9ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BA8u;
            // 0x1a9bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ba8) {
            ctx->pc = 0x1A9BC0u;
            goto label_1a9bc0;
        }
    }
    ctx->pc = 0x1A9BB0u;
    // 0x1a9bb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9bb4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9BB4u;
    {
        const bool branch_taken_0x1a9bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BB4u;
            // 0x1a9bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bb4) {
            ctx->pc = 0x1A9BC0u;
            goto label_1a9bc0;
        }
    }
    ctx->pc = 0x1A9BBCu;
    // 0x1a9bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9bc0:
    // 0x1a9bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9BC8u;
}
