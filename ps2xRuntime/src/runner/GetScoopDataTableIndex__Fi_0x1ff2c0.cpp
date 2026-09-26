#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScoopDataTableIndex__Fi
// Address: 0x1ff2c0 - 0x1ff2fc
void GetScoopDataTableIndex__Fi_0x1ff2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScoopDataTableIndex__Fi_0x1ff2c0");
#endif

    ctx->pc = 0x1ff2c0u;

    // 0x1ff2c0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF2C0u;
    {
        const bool branch_taken_0x1ff2c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FF2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2C0u;
            // 0x1ff2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2c0) {
            ctx->pc = 0x1FF2D8u;
            goto label_1ff2d8;
        }
    }
    ctx->pc = 0x1FF2C8u;
    // 0x1ff2c8: 0x28820035  slti        $v0, $a0, 0x35
    ctx->pc = 0x1ff2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x1ff2cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF2CCu;
    {
        const bool branch_taken_0x1ff2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2CCu;
            // 0x1ff2d0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2cc) {
            ctx->pc = 0x1FF2E0u;
            goto label_1ff2e0;
        }
    }
    ctx->pc = 0x1FF2D4u;
    // 0x1ff2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2d8:
    // 0x1ff2d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF2D8u;
    {
        const bool branch_taken_0x1ff2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2d8) {
            ctx->pc = 0x1FF2F4u;
            goto label_1ff2f4;
        }
    }
    ctx->pc = 0x1FF2E0u;
label_1ff2e0:
    // 0x1ff2e0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ff2e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff2e8: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x1ff2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff2f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff2f4:
    // 0x1ff2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF2FCu;
}
