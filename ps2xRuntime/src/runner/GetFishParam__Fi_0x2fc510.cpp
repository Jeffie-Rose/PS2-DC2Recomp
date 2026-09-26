#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishParam__Fi
// Address: 0x2fc510 - 0x2fc550
void GetFishParam__Fi_0x2fc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishParam__Fi_0x2fc510");
#endif

    ctx->pc = 0x2fc510u;

    // 0x2fc510: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC510u;
    {
        const bool branch_taken_0x2fc510 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FC514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC510u;
            // 0x2fc514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc510) {
            ctx->pc = 0x2FC524u;
            goto label_2fc524;
        }
    }
    ctx->pc = 0x2FC518u;
    // 0x2fc518: 0x28810013  slti        $at, $a0, 0x13
    ctx->pc = 0x2fc518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fc51c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC51Cu;
    {
        const bool branch_taken_0x2fc51c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC51Cu;
            // 0x2fc520: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc51c) {
            ctx->pc = 0x2FC52Cu;
            goto label_2fc52c;
        }
    }
    ctx->pc = 0x2FC524u;
label_2fc524:
    // 0x2fc524: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC524u;
    {
        const bool branch_taken_0x2fc524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc524) {
            ctx->pc = 0x2FC548u;
            goto label_2fc548;
        }
    }
    ctx->pc = 0x2FC52Cu;
label_2fc52c:
    // 0x2fc52c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fc530: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2fc530u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fc534: 0x2442d2b0  addiu       $v0, $v0, -0x2D50
    ctx->pc = 0x2fc534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x2fc538: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2fc538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2fc53c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2fc53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fc540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fc540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fc544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fc544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fc548:
    // 0x2fc548: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC550u;
}
