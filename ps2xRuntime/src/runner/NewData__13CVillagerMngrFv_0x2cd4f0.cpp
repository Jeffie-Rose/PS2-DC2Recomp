#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewData__13CVillagerMngrFv
// Address: 0x2cd4f0 - 0x2cd540
void NewData__13CVillagerMngrFv_0x2cd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewData__13CVillagerMngrFv_0x2cd4f0");
#endif

    switch (ctx->pc) {
        case 0x2cd500u: goto label_2cd500;
        default: break;
    }

    ctx->pc = 0x2cd4f0u;

    // 0x2cd4f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cd4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CD4F8u;
    {
        const bool branch_taken_0x2cd4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD4F8u;
            // 0x2cd4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4f8) {
            ctx->pc = 0x2CD528u;
            goto label_2cd528;
        }
    }
    ctx->pc = 0x2CD500u;
label_2cd500:
    // 0x2cd500: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cd504: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD504u;
    {
        const bool branch_taken_0x2cd504 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CD508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD504u;
            // 0x2cd508: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd504) {
            ctx->pc = 0x2CD520u;
            goto label_2cd520;
        }
    }
    ctx->pc = 0x2CD50Cu;
    // 0x2cd50c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2cd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd510: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cd510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cd514: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd518: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD518u;
    {
        const bool branch_taken_0x2cd518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD518u;
            // 0x2cd51c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd518) {
            ctx->pc = 0x2CD538u;
            goto label_2cd538;
        }
    }
    ctx->pc = 0x2CD520u;
label_2cd520:
    // 0x2cd520: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x2cd520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2cd524: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2cd528:
    // 0x2cd528: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2cd528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cd52c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CD52Cu;
    {
        const bool branch_taken_0x2cd52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD52Cu;
            // 0x2cd530: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd52c) {
            ctx->pc = 0x2CD500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd500;
        }
    }
    ctx->pc = 0x2CD534u;
    // 0x2cd534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd538:
    // 0x2cd538: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD540u;
}
