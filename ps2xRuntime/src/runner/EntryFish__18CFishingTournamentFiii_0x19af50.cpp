#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryFish__18CFishingTournamentFiii
// Address: 0x19af50 - 0x19af98
void EntryFish__18CFishingTournamentFiii_0x19af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryFish__18CFishingTournamentFiii_0x19af50");
#endif

    switch (ctx->pc) {
        case 0x19af58u: goto label_19af58;
        default: break;
    }

    ctx->pc = 0x19af50u;

    // 0x19af50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19af50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19af54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19af58:
    // 0x19af58: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x19af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x19af5c: 0x84420020  lh          $v0, 0x20($v0)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19af60: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AF60u;
    {
        const bool branch_taken_0x19af60 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF60u;
            // 0x19af64: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af60) {
            ctx->pc = 0x19AF7Cu;
            goto label_19af7c;
        }
    }
    ctx->pc = 0x19AF68u;
    // 0x19af68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19af6c: 0xa4450020  sh          $a1, 0x20($v0)
    ctx->pc = 0x19af6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x19af70: 0xa4460022  sh          $a2, 0x22($v0)
    ctx->pc = 0x19af70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x19af74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19AF74u;
    {
        const bool branch_taken_0x19af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF74u;
            // 0x19af78: 0xa4470024  sh          $a3, 0x24($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af74) {
            ctx->pc = 0x19AF8Cu;
            goto label_19af8c;
        }
    }
    ctx->pc = 0x19AF7Cu;
label_19af7c:
    // 0x19af7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19af80: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19af84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19AF84u;
    {
        const bool branch_taken_0x19af84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF84u;
            // 0x19af88: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af84) {
            ctx->pc = 0x19AF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19af58;
        }
    }
    ctx->pc = 0x19AF8Cu;
label_19af8c:
    // 0x19af8c: 0x0  nop
    ctx->pc = 0x19af8cu;
    // NOP
    // 0x19af90: 0x8066be8  j           func_19AFA0
    ctx->pc = 0x19AF90u;
    ctx->pc = 0x19AFA0u;
    if (runtime->hasFunction(0x19AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19AFA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EntryRemain__18CFishingTournamentFv_0x19afa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19AF98u;
}
