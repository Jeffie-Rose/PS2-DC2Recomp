#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlayQuestData__10CQuestDataFi
// Address: 0x31aab0 - 0x31aadc
void GetPlayQuestData__10CQuestDataFi_0x31aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlayQuestData__10CQuestDataFi_0x31aab0");
#endif

    ctx->pc = 0x31aab0u;

    // 0x31aab0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AAB0u;
    {
        const bool branch_taken_0x31aab0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x31AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AAB0u;
            // 0x31aab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aab0) {
            ctx->pc = 0x31AAC8u;
            goto label_31aac8;
        }
    }
    ctx->pc = 0x31AAB8u;
    // 0x31aab8: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x31aab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31aabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AABCu;
    {
        const bool branch_taken_0x31aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AABCu;
            // 0x31aac0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aabc) {
            ctx->pc = 0x31AAD0u;
            goto label_31aad0;
        }
    }
    ctx->pc = 0x31AAC4u;
    // 0x31aac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31aac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31aac8:
    // 0x31aac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31AAC8u;
    {
        const bool branch_taken_0x31aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aac8) {
            ctx->pc = 0x31AAD4u;
            goto label_31aad4;
        }
    }
    ctx->pc = 0x31AAD0u;
label_31aad0:
    // 0x31aad0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31aad4:
    // 0x31aad4: 0x3e00008  jr          $ra
    ctx->pc = 0x31AAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AADCu;
}
