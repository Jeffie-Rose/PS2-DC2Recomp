#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterial__14CEditPartsInfoFi
// Address: 0x1b5730 - 0x1b5760
void GetMaterial__14CEditPartsInfoFi_0x1b5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterial__14CEditPartsInfoFi_0x1b5730");
#endif

    ctx->pc = 0x1b5730u;

    // 0x1b5730: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5730u;
    {
        const bool branch_taken_0x1b5730 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B5734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5730u;
            // 0x1b5734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5730) {
            ctx->pc = 0x1B5748u;
            goto label_1b5748;
        }
    }
    ctx->pc = 0x1B5738u;
    // 0x1b5738: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1b5738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b573c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B573Cu;
    {
        const bool branch_taken_0x1b573c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B573Cu;
            // 0x1b5740: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b573c) {
            ctx->pc = 0x1B5750u;
            goto label_1b5750;
        }
    }
    ctx->pc = 0x1B5744u;
    // 0x1b5744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5748:
    // 0x1b5748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5748u;
    {
        const bool branch_taken_0x1b5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5748) {
            ctx->pc = 0x1B5758u;
            goto label_1b5758;
        }
    }
    ctx->pc = 0x1B5750u;
label_1b5750:
    // 0x1b5750: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5754: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1b5758:
    // 0x1b5758: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5760u;
}
