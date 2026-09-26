#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowAccessWHp__16CBattleCharaInfoFi
// Address: 0x19f890 - 0x19f904
void GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890");
#endif

    ctx->pc = 0x19f890u;

    // 0x19f890: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x19f890u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x19f894: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19F894u;
    {
        const bool branch_taken_0x19f894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F894u;
            // 0x19f898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f894) {
            ctx->pc = 0x19F8D0u;
            goto label_19f8d0;
        }
    }
    ctx->pc = 0x19F89Cu;
    // 0x19f89c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19f8a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8A0u;
    {
        const bool branch_taken_0x19f8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8a0) {
            ctx->pc = 0x19F8B0u;
            goto label_19f8b0;
        }
    }
    ctx->pc = 0x19F8A8u;
    // 0x19f8a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19F8A8u;
    {
        const bool branch_taken_0x19f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f8a8) {
            ctx->pc = 0x19F8FCu;
            goto label_19f8fc;
        }
    }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19f8b4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f8b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f8bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f8c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f8c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19f8c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19F8C8u;
    {
        const bool branch_taken_0x19f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8C8u;
            // 0x19f8cc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8c8) {
            ctx->pc = 0x19F8FCu;
            goto label_19f8fc;
        }
    }
    ctx->pc = 0x19F8D0u;
label_19f8d0:
    // 0x19f8d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f8d4: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F8D4u;
    {
        const bool branch_taken_0x19f8d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8D4u;
            // 0x19f8d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8d4) {
            ctx->pc = 0x19F8ECu;
            goto label_19f8ec;
        }
    }
    ctx->pc = 0x19F8DCu;
    // 0x19f8dc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x19f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19f8e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19f8e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F8E4u;
    {
        const bool branch_taken_0x19f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8E4u;
            // 0x19f8e8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8e4) {
            ctx->pc = 0x19F8FCu;
            goto label_19f8fc;
        }
    }
    ctx->pc = 0x19F8ECu;
label_19f8ec:
    // 0x19f8ec: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8ECu;
    {
        const bool branch_taken_0x19f8ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f8ec) {
            ctx->pc = 0x19F8FCu;
            goto label_19f8fc;
        }
    }
    ctx->pc = 0x19F8F4u;
    // 0x19f8f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f8f8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19f8fc:
    // 0x19f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F904u;
}
