#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMdsList__11CMdsListSetFi
// Address: 0x168c20 - 0x168c54
void GetMdsList__11CMdsListSetFi_0x168c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMdsList__11CMdsListSetFi_0x168c20");
#endif

    ctx->pc = 0x168c20u;

    // 0x168c20: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168C20u;
    {
        const bool branch_taken_0x168c20 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x168C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C20u;
            // 0x168c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c20) {
            ctx->pc = 0x168C3Cu;
            goto label_168c3c;
        }
    }
    ctx->pc = 0x168C28u;
    // 0x168c28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x168c2c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x168c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x168c30: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x168C30u;
    {
        const bool branch_taken_0x168c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C30u;
            // 0x168c34: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c30) {
            ctx->pc = 0x168C44u;
            goto label_168c44;
        }
    }
    ctx->pc = 0x168C38u;
    // 0x168c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168c3c:
    // 0x168c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168C3Cu;
    {
        const bool branch_taken_0x168c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c3c) {
            ctx->pc = 0x168C4Cu;
            goto label_168c4c;
        }
    }
    ctx->pc = 0x168C44u;
label_168c44:
    // 0x168c44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168c48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x168c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_168c4c:
    // 0x168c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x168C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168C54u;
}
