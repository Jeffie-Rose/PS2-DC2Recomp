#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AngleLimit__8CEditMapFi
// Address: 0x1b0ff0 - 0x1b101c
void AngleLimit__8CEditMapFi_0x1b0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AngleLimit__8CEditMapFi_0x1b0ff0");
#endif

    ctx->pc = 0x1b0ff0u;

    // 0x1b0ff0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b0ff4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b0ff4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0ff8: 0x0  nop
    ctx->pc = 0x1b0ff8u;
    // NOP
    // 0x1b0ffc: 0x0  nop
    ctx->pc = 0x1b0ffcu;
    // NOP
    // 0x1b1000: 0x2810  mfhi        $a1
    ctx->pc = 0x1b1000u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b1004: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1004u;
    {
        const bool branch_taken_0x1b1004 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B1008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1004u;
            // 0x1b1008: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1004) {
            ctx->pc = 0x1B1014u;
            goto label_1b1014;
        }
    }
    ctx->pc = 0x1B100Cu;
    // 0x1b100c: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1b1010: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b1010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1014:
    // 0x1b1014: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B101Cu;
}
