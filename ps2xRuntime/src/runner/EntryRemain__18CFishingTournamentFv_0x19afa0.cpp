#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryRemain__18CFishingTournamentFv
// Address: 0x19afa0 - 0x19afdc
void EntryRemain__18CFishingTournamentFv_0x19afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryRemain__18CFishingTournamentFv_0x19afa0");
#endif

    switch (ctx->pc) {
        case 0x19afacu: goto label_19afac;
        default: break;
    }

    ctx->pc = 0x19afa0u;

    // 0x19afa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19afa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19afa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19afac:
    // 0x19afac: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x19afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19afb0: 0x84420020  lh          $v0, 0x20($v0)
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19afb4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AFB4u;
    {
        const bool branch_taken_0x19afb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19afb4) {
            ctx->pc = 0x19AFC0u;
            goto label_19afc0;
        }
    }
    ctx->pc = 0x19AFBCu;
    // 0x19afbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19afc0:
    // 0x19afc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19afc4: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x19afc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19afc8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19AFC8u;
    {
        const bool branch_taken_0x19afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFC8u;
            // 0x19afcc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afc8) {
            ctx->pc = 0x19AFACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19afac;
        }
    }
    ctx->pc = 0x19AFD0u;
    // 0x19afd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x19AFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFD4u;
            // 0x19afd8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AFDCu;
}
