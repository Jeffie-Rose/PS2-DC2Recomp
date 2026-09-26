#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishTournament__Fv
// Address: 0x196c20 - 0x196c54
void GetFishTournament__Fv_0x196c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishTournament__Fv_0x196c20");
#endif

    switch (ctx->pc) {
        case 0x196c30u: goto label_196c30;
        default: break;
    }

    ctx->pc = 0x196c20u;

    // 0x196c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196c28: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x196C28u;
    SET_GPR_U32(ctx, 31, 0x196C30u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C30u; }
        if (ctx->pc != 0x196C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C30u; }
        if (ctx->pc != 0x196C30u) { return; }
    }
    ctx->pc = 0x196C30u;
label_196c30:
    // 0x196c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196C30u;
    {
        const bool branch_taken_0x196c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C30u;
            // 0x196c34: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c30) {
            ctx->pc = 0x196C44u;
            goto label_196c44;
        }
    }
    ctx->pc = 0x196C38u;
    // 0x196c38: 0x342151e8  ori         $at, $at, 0x51E8
    ctx->pc = 0x196c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20968);
    // 0x196c3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196C3Cu;
    {
        const bool branch_taken_0x196c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C3Cu;
            // 0x196c40: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c3c) {
            ctx->pc = 0x196C48u;
            goto label_196c48;
        }
    }
    ctx->pc = 0x196C44u;
label_196c44:
    // 0x196c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c48:
    // 0x196c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x196C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C4Cu;
            // 0x196c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196C54u;
}
