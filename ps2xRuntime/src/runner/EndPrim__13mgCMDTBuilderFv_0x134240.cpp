#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndPrim__13mgCMDTBuilderFv
// Address: 0x134240 - 0x13427c
void EndPrim__13mgCMDTBuilderFv_0x134240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndPrim__13mgCMDTBuilderFv_0x134240");
#endif

    ctx->pc = 0x134240u;

    // 0x134240: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x134240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x134244: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x134244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x134248: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x134248u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13424c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13424Cu;
    {
        const bool branch_taken_0x13424c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13424c) {
            ctx->pc = 0x134258u;
            goto label_134258;
        }
    }
    ctx->pc = 0x134254u;
    // 0x134254: 0x1cd  break       0, 7
    ctx->pc = 0x134254u;
    runtime->handleBreak(rdram, ctx);
label_134258:
    // 0x134258: 0x2812  mflo        $a1
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x13425c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x134260: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x134260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x134264: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x134268: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x134268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13426c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134270: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x134270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x134274: 0x3e00008  jr          $ra
    ctx->pc = 0x134274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13427Cu;
}
