#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCollision__13CDynamicAnimeFiP12CDACollision
// Address: 0x17ac70 - 0x17aca8
void SetCollision__13CDynamicAnimeFiP12CDACollision_0x17ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCollision__13CDynamicAnimeFiP12CDACollision_0x17ac70");
#endif

    ctx->pc = 0x17ac70u;

    // 0x17ac70: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x17AC70u;
    {
        const bool branch_taken_0x17ac70 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x17ac70) {
            ctx->pc = 0x17ACA0u;
            goto label_17aca0;
        }
    }
    ctx->pc = 0x17AC78u;
    // 0x17ac78: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x17ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x17ac7c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x17ac7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17ac80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AC80u;
    {
        const bool branch_taken_0x17ac80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac80) {
            ctx->pc = 0x17AC90u;
            goto label_17ac90;
        }
    }
    ctx->pc = 0x17AC88u;
    // 0x17ac88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17AC88u;
    {
        const bool branch_taken_0x17ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac88) {
            ctx->pc = 0x17ACA0u;
            goto label_17aca0;
        }
    }
    ctx->pc = 0x17AC90u;
label_17ac90:
    // 0x17ac90: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x17ac94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17ac98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17ac9c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x17ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17aca0:
    // 0x17aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ACA8u;
}
