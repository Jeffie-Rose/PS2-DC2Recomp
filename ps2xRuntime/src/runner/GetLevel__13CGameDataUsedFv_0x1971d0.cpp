#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLevel__13CGameDataUsedFv
// Address: 0x1971d0 - 0x197200
void GetLevel__13CGameDataUsedFv_0x1971d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLevel__13CGameDataUsedFv_0x1971d0");
#endif

    ctx->pc = 0x1971d0u;

    // 0x1971d0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1971d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1971d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1971D8u;
    {
        const bool branch_taken_0x1971d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1971DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971D8u;
            // 0x1971dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971d8) {
            ctx->pc = 0x1971E8u;
            goto label_1971e8;
        }
    }
    ctx->pc = 0x1971E0u;
    // 0x1971e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1971E0u;
    {
        const bool branch_taken_0x1971e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971E0u;
            // 0x1971e4: 0x84820020  lh          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971e0) {
            ctx->pc = 0x1971F8u;
            goto label_1971f8;
        }
    }
    ctx->pc = 0x1971E8u;
label_1971e8:
    // 0x1971e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1971E8u;
    {
        const bool branch_taken_0x1971e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1971ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971E8u;
            // 0x1971ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971e8) {
            ctx->pc = 0x1971F8u;
            goto label_1971f8;
        }
    }
    ctx->pc = 0x1971F0u;
    // 0x1971f0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1971F0u;
    {
        const bool branch_taken_0x1971f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971F0u;
            // 0x1971f4: 0x84820028  lh          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971f0) {
            ctx->pc = 0x1971F8u;
            goto label_1971f8;
        }
    }
    ctx->pc = 0x1971F8u;
label_1971f8:
    // 0x1971f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1971F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197200u;
}
