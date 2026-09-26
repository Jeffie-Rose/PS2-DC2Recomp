#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRecord__18CFishingTournamentFi
// Address: 0x19afe0 - 0x19b010
void GetRecord__18CFishingTournamentFi_0x19afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRecord__18CFishingTournamentFi_0x19afe0");
#endif

    ctx->pc = 0x19afe0u;

    // 0x19afe0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AFE0u;
    {
        const bool branch_taken_0x19afe0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFE0u;
            // 0x19afe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afe0) {
            ctx->pc = 0x19AFF8u;
            goto label_19aff8;
        }
    }
    ctx->pc = 0x19AFE8u;
    // 0x19afe8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19afec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AFECu;
    {
        const bool branch_taken_0x19afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFECu;
            // 0x19aff0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afec) {
            ctx->pc = 0x19B000u;
            goto label_19b000;
        }
    }
    ctx->pc = 0x19AFF4u;
    // 0x19aff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aff8:
    // 0x19aff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B008u;
            goto label_19b008;
        }
    }
    ctx->pc = 0x19B000u;
label_19b000:
    // 0x19b000: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b004: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_19b008:
    // 0x19b008: 0x3e00008  jr          $ra
    ctx->pc = 0x19B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B010u;
}
