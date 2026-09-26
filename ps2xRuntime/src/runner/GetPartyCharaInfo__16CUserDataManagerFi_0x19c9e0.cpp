#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartyCharaInfo__16CUserDataManagerFi
// Address: 0x19c9e0 - 0x19ca18
void GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0");
#endif

    ctx->pc = 0x19c9e0u;

    // 0x19c9e0: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C9E0u;
    {
        const bool branch_taken_0x19c9e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9E0u;
            // 0x19c9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9e0) {
            ctx->pc = 0x19C9F4u;
            goto label_19c9f4;
        }
    }
    ctx->pc = 0x19C9E8u;
    // 0x19c9e8: 0x28a10021  slti        $at, $a1, 0x21
    ctx->pc = 0x19c9e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x19c9ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C9ECu;
    {
        const bool branch_taken_0x19c9ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9ECu;
            // 0x19c9f0: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9ec) {
            ctx->pc = 0x19C9FCu;
            goto label_19c9fc;
        }
    }
    ctx->pc = 0x19C9F4u;
label_19c9f4:
    // 0x19c9f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C9F4u;
    {
        const bool branch_taken_0x19c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9f4) {
            ctx->pc = 0x19CA10u;
            goto label_19ca10;
        }
    }
    ctx->pc = 0x19C9FCu;
label_19c9fc:
    // 0x19c9fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19ca00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ca04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ca08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ca0c: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x19ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
label_19ca10:
    // 0x19ca10: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CA18u;
}
