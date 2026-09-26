#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufDecCount__FP5VoBuf
// Address: 0x299b90 - 0x299bb0
void voBufDecCount__FP5VoBuf_0x299b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufDecCount__FP5VoBuf_0x299b90");
#endif

    ctx->pc = 0x299b90u;

    // 0x299b90: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x299b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299b94: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299B94u;
    {
        const bool branch_taken_0x299b94 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x299b94) {
            ctx->pc = 0x299BA8u;
            goto label_299ba8;
        }
    }
    ctx->pc = 0x299B9Cu;
    // 0x299b9c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x299b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299ba0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x299ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x299ba4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x299ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_299ba8:
    // 0x299ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x299BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299BB0u;
}
