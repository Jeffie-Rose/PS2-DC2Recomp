#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMonoFlashFlag__13CScreenEffectFii
// Address: 0x260f30 - 0x260f64
void SetMonoFlashFlag__13CScreenEffectFii_0x260f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMonoFlashFlag__13CScreenEffectFii_0x260f30");
#endif

    ctx->pc = 0x260f30u;

    // 0x260f30: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x260f34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260F34u;
    {
        const bool branch_taken_0x260f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260f34) {
            ctx->pc = 0x260F48u;
            goto label_260f48;
        }
    }
    ctx->pc = 0x260F3Cu;
    // 0x260f3c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x260f40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260F40u;
    {
        const bool branch_taken_0x260f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f40) {
            ctx->pc = 0x260F50u;
            goto label_260f50;
        }
    }
    ctx->pc = 0x260F48u;
label_260f48:
    // 0x260f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260F48u;
    {
        const bool branch_taken_0x260f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260F48u;
            // 0x260f4c: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f48) {
            ctx->pc = 0x260F54u;
            goto label_260f54;
        }
    }
    ctx->pc = 0x260F50u;
label_260f50:
    // 0x260f50: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x260f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_260f54:
    // 0x260f54: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x260f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x260f58: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x260f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x260f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x260F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260F5Cu;
            // 0x260f60: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260F64u;
}
