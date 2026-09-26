#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetUserVuProgAdr__FiP1
// Address: 0x145f10 - 0x145f48
void mgSetUserVuProgAdr__FiP1_0x145f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetUserVuProgAdr__FiP1_0x145f10");
#endif

    ctx->pc = 0x145f10u;

    // 0x145f10: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x145F10u;
    {
        const bool branch_taken_0x145f10 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x145f10) {
            ctx->pc = 0x145F40u;
            goto label_145f40;
        }
    }
    ctx->pc = 0x145F18u;
    // 0x145f18: 0x8f838890  lw          $v1, -0x7770($gp)
    ctx->pc = 0x145f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x145f1c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x145f1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x145f20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F20u;
    {
        const bool branch_taken_0x145f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f20) {
            ctx->pc = 0x145F30u;
            goto label_145f30;
        }
    }
    ctx->pc = 0x145F28u;
    // 0x145f28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145F28u;
    {
        const bool branch_taken_0x145f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f28) {
            ctx->pc = 0x145F40u;
            goto label_145f40;
        }
    }
    ctx->pc = 0x145F30u;
label_145f30:
    // 0x145f30: 0x8f83888c  lw          $v1, -0x7774($gp)
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936716)));
    // 0x145f34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x145f38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x145f3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x145f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_145f40:
    // 0x145f40: 0x3e00008  jr          $ra
    ctx->pc = 0x145F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145F48u;
}
