#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrame__13CDynamicAnimeFiP8mgCFrame
// Address: 0x17a8b0 - 0x17a8e8
void SetFrame__13CDynamicAnimeFiP8mgCFrame_0x17a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrame__13CDynamicAnimeFiP8mgCFrame_0x17a8b0");
#endif

    ctx->pc = 0x17a8b0u;

    // 0x17a8b0: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x17A8B0u;
    {
        const bool branch_taken_0x17a8b0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x17a8b0) {
            ctx->pc = 0x17A8E0u;
            goto label_17a8e0;
        }
    }
    ctx->pc = 0x17A8B8u;
    // 0x17a8b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a8bc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x17a8bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a8c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A8C0u;
    {
        const bool branch_taken_0x17a8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a8c0) {
            ctx->pc = 0x17A8D0u;
            goto label_17a8d0;
        }
    }
    ctx->pc = 0x17A8C8u;
    // 0x17a8c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17A8C8u;
    {
        const bool branch_taken_0x17a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a8c8) {
            ctx->pc = 0x17A8E0u;
            goto label_17a8e0;
        }
    }
    ctx->pc = 0x17A8D0u;
label_17a8d0:
    // 0x17a8d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17a8d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17a8d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17a8dc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x17a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17a8e0:
    // 0x17a8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A8E8u;
}
