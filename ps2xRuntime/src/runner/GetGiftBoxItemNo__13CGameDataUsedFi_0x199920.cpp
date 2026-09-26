#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGiftBoxItemNo__13CGameDataUsedFi
// Address: 0x199920 - 0x19995c
void GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGiftBoxItemNo__13CGameDataUsedFi_0x199920");
#endif

    ctx->pc = 0x199920u;

    // 0x199920: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199924: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199928: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x199928u;
    {
        const bool branch_taken_0x199928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199928u;
            // 0x19992c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199928) {
            ctx->pc = 0x199954u;
            goto label_199954;
        }
    }
    ctx->pc = 0x199930u;
    // 0x199930: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x199930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x199934: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x199934u;
    {
        const bool branch_taken_0x199934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199934u;
            // 0x199938: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199934) {
            ctx->pc = 0x199950u;
            goto label_199950;
        }
    }
    ctx->pc = 0x19993Cu;
    // 0x19993c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19993Cu;
    {
        const bool branch_taken_0x19993c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19993Cu;
            // 0x199940: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19993c) {
            ctx->pc = 0x199950u;
            goto label_199950;
        }
    }
    ctx->pc = 0x199944u;
    // 0x199944: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199948: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x199948u;
    {
        const bool branch_taken_0x199948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199948u;
            // 0x19994c: 0x84420010  lh          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199948) {
            ctx->pc = 0x199954u;
            goto label_199954;
        }
    }
    ctx->pc = 0x199950u;
label_199950:
    // 0x199950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199954:
    // 0x199954: 0x3e00008  jr          $ra
    ctx->pc = 0x199954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19995Cu;
}
