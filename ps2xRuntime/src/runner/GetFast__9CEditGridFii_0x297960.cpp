#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFast__9CEditGridFii
// Address: 0x297960 - 0x297984
void GetFast__9CEditGridFii_0x297960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFast__9CEditGridFii_0x297960");
#endif

    ctx->pc = 0x297960u;

    // 0x297960: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297964: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x297964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297968: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x297968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29796c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x29796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x297970: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x297970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x297974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29797c: 0x3e00008  jr          $ra
    ctx->pc = 0x29797Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29797Cu;
            // 0x297980: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297984u;
}
