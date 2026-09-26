#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOffset__11mgCDrawPrimFPiPi
// Address: 0x135140 - 0x135174
void GetOffset__11mgCDrawPrimFPiPi_0x135140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOffset__11mgCDrawPrimFPiPi_0x135140");
#endif

    ctx->pc = 0x135140u;

    // 0x135140: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x135140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x135144: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x135144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x135148: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x135148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x13514c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13514Cu;
    {
        const bool branch_taken_0x13514c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13514c) {
            ctx->pc = 0x13516Cu;
            goto label_13516c;
        }
    }
    ctx->pc = 0x135154u;
    // 0x135154: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x135154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x135158: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x135158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13515c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13515cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x135160: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x135160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x135164: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x135168: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x135168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_13516c:
    // 0x13516c: 0x3e00008  jr          $ra
    ctx->pc = 0x13516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135174u;
}
