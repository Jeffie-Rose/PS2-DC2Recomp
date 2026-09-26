#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTypeEnableStack__13CGameDataUsedFv
// Address: 0x1970d0 - 0x19711c
void CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0");
#endif

    ctx->pc = 0x1970d0u;

    // 0x1970d0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1970d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1970d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1970d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1970D8u;
    {
        const bool branch_taken_0x1970d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1970d8) {
            ctx->pc = 0x1970E8u;
            goto label_1970e8;
        }
    }
    ctx->pc = 0x1970E0u;
    // 0x1970e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1970E0u;
    {
        const bool branch_taken_0x1970e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970e0) {
            ctx->pc = 0x197114u;
            goto label_197114;
        }
    }
    ctx->pc = 0x1970E8u;
label_1970e8:
    // 0x1970e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1970ec: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1970ECu;
    {
        const bool branch_taken_0x1970ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1970F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970ECu;
            // 0x1970f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970ec) {
            ctx->pc = 0x197114u;
            goto label_197114;
        }
    }
    ctx->pc = 0x1970F4u;
    // 0x1970f4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1970f8: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x1970f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1970fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1970FCu;
    {
        const bool branch_taken_0x1970fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970FCu;
            // 0x197100: 0x3862017f  xori        $v0, $v1, 0x17F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970fc) {
            ctx->pc = 0x19710Cu;
            goto label_19710c;
        }
    }
    ctx->pc = 0x197104u;
    // 0x197104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197104u;
            // 0x197108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197104) {
            ctx->pc = 0x197114u;
            goto label_197114;
        }
    }
    ctx->pc = 0x19710Cu;
label_19710c:
    // 0x19710c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x197110: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x197110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_197114:
    // 0x197114: 0x3e00008  jr          $ra
    ctx->pc = 0x197114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19711Cu;
}
