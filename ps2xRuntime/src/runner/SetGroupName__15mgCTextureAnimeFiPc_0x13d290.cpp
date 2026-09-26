#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGroupName__15mgCTextureAnimeFiPc
// Address: 0x13d290 - 0x13d2c4
void SetGroupName__15mgCTextureAnimeFiPc_0x13d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGroupName__15mgCTextureAnimeFiPc_0x13d290");
#endif

    ctx->pc = 0x13d290u;

    // 0x13d290: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D290u;
    {
        const bool branch_taken_0x13d290 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13d290) {
            ctx->pc = 0x13D2A8u;
            goto label_13d2a8;
        }
    }
    ctx->pc = 0x13D298u;
    // 0x13d298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d29c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x13d29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d2a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D2A0u;
    {
        const bool branch_taken_0x13d2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2a0) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D2A8u;
label_13d2a8:
    // 0x13d2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D2A8u;
    {
        const bool branch_taken_0x13d2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d2a8) {
            ctx->pc = 0x13D2BCu;
            goto label_13d2bc;
        }
    }
    ctx->pc = 0x13D2B0u;
label_13d2b0:
    // 0x13d2b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d2b8: 0xac660124  sw          $a2, 0x124($v1)
    ctx->pc = 0x13d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 6));
label_13d2bc:
    // 0x13d2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D2C4u;
}
