#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuBigNum__Fi
// Address: 0x21ce00 - 0x21ce2c
void GetMenuBigNum__Fi_0x21ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuBigNum__Fi_0x21ce00");
#endif

    ctx->pc = 0x21ce00u;

    // 0x21ce00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ce04: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x21ce04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ce08: 0x0  nop
    ctx->pc = 0x21ce08u;
    // NOP
    // 0x21ce0c: 0x0  nop
    ctx->pc = 0x21ce0cu;
    // NOP
    // 0x21ce10: 0x1810  mfhi        $v1
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21ce14: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21ce18: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x21ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21ce1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ce20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ce24: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE24u;
            // 0x21ce28: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CE2Cu;
}
