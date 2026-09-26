#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLocalCnt__Fii
// Address: 0x261110 - 0x26114c
void SetLocalCnt__Fii_0x261110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLocalCnt__Fii_0x261110");
#endif

    ctx->pc = 0x261110u;

    // 0x261110: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261110u;
    {
        const bool branch_taken_0x261110 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x261114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261110u;
            // 0x261114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261110) {
            ctx->pc = 0x261128u;
            goto label_261128;
        }
    }
    ctx->pc = 0x261118u;
    // 0x261118: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x261118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x26111c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26111Cu;
    {
        const bool branch_taken_0x26111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26111Cu;
            // 0x261120: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26111c) {
            ctx->pc = 0x261130u;
            goto label_261130;
        }
    }
    ctx->pc = 0x261124u;
    // 0x261124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261128:
    // 0x261128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261128u;
    {
        const bool branch_taken_0x261128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261128) {
            ctx->pc = 0x261144u;
            goto label_261144;
        }
    }
    ctx->pc = 0x261130u;
label_261130:
    // 0x261130: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x261130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x261134: 0x2442efc0  addiu       $v0, $v0, -0x1040
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963136));
    // 0x261138: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x261138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26113c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261140: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x261140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_261144:
    // 0x261144: 0x3e00008  jr          $ra
    ctx->pc = 0x261144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26114Cu;
}
