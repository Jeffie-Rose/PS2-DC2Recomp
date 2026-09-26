#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSeq__Fi
// Address: 0x18ca60 - 0x18caa4
void GetSeSeq__Fi_0x18ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSeq__Fi_0x18ca60");
#endif

    ctx->pc = 0x18ca60u;

    // 0x18ca60: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CA60u;
    {
        const bool branch_taken_0x18ca60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA60u;
            // 0x18ca64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca60) {
            ctx->pc = 0x18CA78u;
            goto label_18ca78;
        }
    }
    ctx->pc = 0x18CA68u;
    // 0x18ca68: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x18ca68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18ca6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA6Cu;
    {
        const bool branch_taken_0x18ca6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA6Cu;
            // 0x18ca70: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca6c) {
            ctx->pc = 0x18CA80u;
            goto label_18ca80;
        }
    }
    ctx->pc = 0x18CA74u;
    // 0x18ca74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ca74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ca78:
    // 0x18ca78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CA78u;
    {
        const bool branch_taken_0x18ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca78) {
            ctx->pc = 0x18CA9Cu;
            goto label_18ca9c;
        }
    }
    ctx->pc = 0x18CA80u;
label_18ca80:
    // 0x18ca80: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18ca84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ca88: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x18ca8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ca90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ca94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18ca98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ca9c:
    // 0x18ca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CAA4u;
}
