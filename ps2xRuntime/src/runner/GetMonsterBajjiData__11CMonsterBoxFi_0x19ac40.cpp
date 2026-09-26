#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBajjiData__11CMonsterBoxFi
// Address: 0x19ac40 - 0x19ac80
void GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40");
#endif

    ctx->pc = 0x19ac40u;

    // 0x19ac40: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AC40u;
    {
        const bool branch_taken_0x19ac40 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC40u;
            // 0x19ac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac40) {
            ctx->pc = 0x19AC58u;
            goto label_19ac58;
        }
    }
    ctx->pc = 0x19AC48u;
    // 0x19ac48: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x19ac4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AC4Cu;
    {
        const bool branch_taken_0x19ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC4Cu;
            // 0x19ac50: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac4c) {
            ctx->pc = 0x19AC60u;
            goto label_19ac60;
        }
    }
    ctx->pc = 0x19AC54u;
    // 0x19ac54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ac54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ac58:
    // 0x19ac58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19AC58u;
    {
        const bool branch_taken_0x19ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac58) {
            ctx->pc = 0x19AC78u;
            goto label_19ac78;
        }
    }
    ctx->pc = 0x19AC60u;
label_19ac60:
    // 0x19ac60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19ac64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ac68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ac6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ac70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ac74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ac78:
    // 0x19ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AC80u;
}
