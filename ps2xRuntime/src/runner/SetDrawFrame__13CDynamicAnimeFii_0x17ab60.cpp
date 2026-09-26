#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDrawFrame__13CDynamicAnimeFii
// Address: 0x17ab60 - 0x17ab98
void SetDrawFrame__13CDynamicAnimeFii_0x17ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDrawFrame__13CDynamicAnimeFii_0x17ab60");
#endif

    ctx->pc = 0x17ab60u;

    // 0x17ab60: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x17AB60u;
    {
        const bool branch_taken_0x17ab60 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x17ab60) {
            ctx->pc = 0x17AB90u;
            goto label_17ab90;
        }
    }
    ctx->pc = 0x17AB68u;
    // 0x17ab68: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17ab6c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x17ab6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17ab70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB70u;
    {
        const bool branch_taken_0x17ab70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ab70) {
            ctx->pc = 0x17AB80u;
            goto label_17ab80;
        }
    }
    ctx->pc = 0x17AB78u;
    // 0x17ab78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17AB78u;
    {
        const bool branch_taken_0x17ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab78) {
            ctx->pc = 0x17AB90u;
            goto label_17ab90;
        }
    }
    ctx->pc = 0x17AB80u;
label_17ab80:
    // 0x17ab80: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x17ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17ab84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17ab88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17ab8c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x17ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17ab90:
    // 0x17ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AB98u;
}
