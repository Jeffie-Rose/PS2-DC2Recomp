#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LinerInterpolationI__Fiiii
// Address: 0x151000 - 0x151020
void LinerInterpolationI__Fiiii_0x151000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinerInterpolationI__Fiiii_0x151000");
#endif

    ctx->pc = 0x151000u;

    // 0x151000: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x151000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x151004: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x151004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x151008: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x151008u;
    {
        const bool branch_taken_0x151008 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151008u;
            // 0x15100c: 0x47001a  div         $zero, $v0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151008) {
            ctx->pc = 0x151014u;
            goto label_151014;
        }
    }
    ctx->pc = 0x151010u;
    // 0x151010: 0x1cd  break       0, 7
    ctx->pc = 0x151010u;
    runtime->handleBreak(rdram, ctx);
label_151014:
    // 0x151014: 0x1012  mflo        $v0
    ctx->pc = 0x151014u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x151018: 0x3e00008  jr          $ra
    ctx->pc = 0x151018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151018u;
            // 0x15101c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151020u;
}
