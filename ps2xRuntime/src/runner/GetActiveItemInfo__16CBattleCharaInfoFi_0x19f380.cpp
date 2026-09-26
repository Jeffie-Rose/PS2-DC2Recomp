#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveItemInfo__16CBattleCharaInfoFi
// Address: 0x19f380 - 0x19f3ac
void GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380");
#endif

    ctx->pc = 0x19f380u;

    // 0x19f380: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x19f384: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F384u;
    {
        const bool branch_taken_0x19f384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F384u;
            // 0x19f388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f384) {
            ctx->pc = 0x19F3A4u;
            goto label_19f3a4;
        }
    }
    ctx->pc = 0x19F38Cu;
    // 0x19f38c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x19f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19f390: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f394: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f398: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f39c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f3a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19f3a4:
    // 0x19f3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3ACu;
}
