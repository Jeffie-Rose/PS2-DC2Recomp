#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckColorUpdate__10CEditPartsFv
// Address: 0x1b5f50 - 0x1b5f90
void CheckColorUpdate__10CEditPartsFv_0x1b5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckColorUpdate__10CEditPartsFv_0x1b5f50");
#endif

    switch (ctx->pc) {
        case 0x1b5f5cu: goto label_1b5f5c;
        default: break;
    }

    ctx->pc = 0x1b5f50u;

    // 0x1b5f50: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1b5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1b5f54: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5F54u;
    {
        const bool branch_taken_0x1b5f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F54u;
            // 0x1b5f58: 0xac800318  sw          $zero, 0x318($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f54) {
            ctx->pc = 0x1B5F84u;
            goto label_1b5f84;
        }
    }
    ctx->pc = 0x1B5F5Cu;
label_1b5f5c:
    // 0x1b5f5c: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1b5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1b5f60: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5F60u;
    {
        const bool branch_taken_0x1b5f60 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1b5f60) {
            ctx->pc = 0x1B5F78u;
            goto label_1b5f78;
        }
    }
    ctx->pc = 0x1B5F68u;
    // 0x1b5f68: 0x8c860318  lw          $a2, 0x318($a0)
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1b5f6c: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b5f70: 0xa1300a  movz        $a2, $a1, $at
    ctx->pc = 0x1b5f70u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
    // 0x1b5f74: 0xac860318  sw          $a2, 0x318($a0)
    ctx->pc = 0x1b5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 6));
label_1b5f78:
    // 0x1b5f78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5f7c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B5F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5f5c;
        }
    }
    ctx->pc = 0x1B5F84u;
label_1b5f84:
    // 0x1b5f84: 0x0  nop
    ctx->pc = 0x1b5f84u;
    // NOP
    // 0x1b5f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5F90u;
}
