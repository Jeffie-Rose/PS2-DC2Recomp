#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFishHp__13CGameDataUsedFi
// Address: 0x1974c0 - 0x197508
void AddFishHp__13CGameDataUsedFi_0x1974c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFishHp__13CGameDataUsedFi_0x1974c0");
#endif

    ctx->pc = 0x1974c0u;

    // 0x1974c0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1974c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1974c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1974c8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1974C8u;
    {
        const bool branch_taken_0x1974c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1974CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974C8u;
            // 0x1974cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974c8) {
            ctx->pc = 0x197500u;
            goto label_197500;
        }
    }
    ctx->pc = 0x1974D0u;
    // 0x1974d0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1974d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1974d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1974D8u;
    {
        const bool branch_taken_0x1974d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1974DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974D8u;
            // 0x1974dc: 0x28410065  slti        $at, $v0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974d8) {
            ctx->pc = 0x1974E8u;
            goto label_1974e8;
        }
    }
    ctx->pc = 0x1974E0u;
    // 0x1974e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1974e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974e4: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1974e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_1974e8:
    // 0x1974e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1974E8u;
    {
        const bool branch_taken_0x1974e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1974e8) {
            ctx->pc = 0x1974F4u;
            goto label_1974f4;
        }
    }
    ctx->pc = 0x1974F0u;
    // 0x1974f0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1974f4:
    // 0x1974f4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1974f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1974f8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1974f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1974fc: 0x0  nop
    ctx->pc = 0x1974fcu;
    // NOP
label_197500:
    // 0x197500: 0x3e00008  jr          $ra
    ctx->pc = 0x197500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197508u;
}
