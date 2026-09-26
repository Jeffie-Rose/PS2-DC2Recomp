#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemainFusion__13CGameDataUsedFv
// Address: 0x197dc0 - 0x197de0
void RemainFusion__13CGameDataUsedFv_0x197dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemainFusion__13CGameDataUsedFv_0x197dc0");
#endif

    ctx->pc = 0x197dc0u;

    // 0x197dc0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197dc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197dc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197DC8u;
    {
        const bool branch_taken_0x197dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197DC8u;
            // 0x197dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197dc8) {
            ctx->pc = 0x197DD8u;
            goto label_197dd8;
        }
    }
    ctx->pc = 0x197DD0u;
    // 0x197dd0: 0x8482003c  lh          $v0, 0x3C($a0)
    ctx->pc = 0x197dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x197dd4: 0x0  nop
    ctx->pc = 0x197dd4u;
    // NOP
label_197dd8:
    // 0x197dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x197DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197DE0u;
}
