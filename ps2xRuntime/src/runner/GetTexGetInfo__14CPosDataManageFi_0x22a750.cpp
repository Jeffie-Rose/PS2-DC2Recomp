#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTexGetInfo__14CPosDataManageFi
// Address: 0x22a750 - 0x22a788
void GetTexGetInfo__14CPosDataManageFi_0x22a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTexGetInfo__14CPosDataManageFi_0x22a750");
#endif

    ctx->pc = 0x22a750u;

    // 0x22a750: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A750u;
    {
        const bool branch_taken_0x22a750 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A750u;
            // 0x22a754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a750) {
            ctx->pc = 0x22A76Cu;
            goto label_22a76c;
        }
    }
    ctx->pc = 0x22A758u;
    // 0x22a758: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x22a758u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22a75c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x22a75cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a760: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A760u;
    {
        const bool branch_taken_0x22a760 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a760) {
            ctx->pc = 0x22A774u;
            goto label_22a774;
        }
    }
    ctx->pc = 0x22A768u;
    // 0x22a768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22a768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a76c:
    // 0x22a76c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A76Cu;
    {
        const bool branch_taken_0x22a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a76c) {
            ctx->pc = 0x22A780u;
            goto label_22a780;
        }
    }
    ctx->pc = 0x22A774u;
label_22a774:
    // 0x22a774: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x22a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22a778: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x22a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x22a77c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a780:
    // 0x22a780: 0x3e00008  jr          $ra
    ctx->pc = 0x22A780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A788u;
}
