#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEmpty__13CGeyserEffectFv
// Address: 0x2f8460 - 0x2f84c0
void GetEmpty__13CGeyserEffectFv_0x2f8460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEmpty__13CGeyserEffectFv_0x2f8460");
#endif

    switch (ctx->pc) {
        case 0x2f8484u: goto label_2f8484;
        default: break;
    }

    ctx->pc = 0x2f8460u;

    // 0x2f8460: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f8464: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8464u;
    {
        const bool branch_taken_0x2f8464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8464u;
            // 0x2f8468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8464) {
            ctx->pc = 0x2F8474u;
            goto label_2f8474;
        }
    }
    ctx->pc = 0x2F846Cu;
    // 0x2f846c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F846Cu;
    {
        const bool branch_taken_0x2f846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f846c) {
            ctx->pc = 0x2F84B8u;
            goto label_2f84b8;
        }
    }
    ctx->pc = 0x2F8474u;
label_2f8474:
    // 0x2f8474: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f8478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f847c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F847Cu;
    {
        const bool branch_taken_0x2f847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F847Cu;
            // 0x2f8480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f847c) {
            ctx->pc = 0x2F84A8u;
            goto label_2f84a8;
        }
    }
    ctx->pc = 0x2F8484u;
label_2f8484:
    // 0x2f8484: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2f8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f8488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8488u;
    {
        const bool branch_taken_0x2f8488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8488u;
            // 0x2f848c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8488) {
            ctx->pc = 0x2F84A0u;
            goto label_2f84a0;
        }
    }
    ctx->pc = 0x2F8490u;
    // 0x2f8490: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f8490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f8494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f8494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f8498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8498u;
    {
        const bool branch_taken_0x2f8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8498u;
            // 0x2f849c: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8498) {
            ctx->pc = 0x2F84B8u;
            goto label_2f84b8;
        }
    }
    ctx->pc = 0x2F84A0u;
label_2f84a0:
    // 0x2f84a0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2f84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2f84a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f84a8:
    // 0x2f84a8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f84a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f84ac: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F84ACu;
    {
        const bool branch_taken_0x2f84ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84ACu;
            // 0x2f84b0: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84ac) {
            ctx->pc = 0x2F8484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8484;
        }
    }
    ctx->pc = 0x2F84B4u;
    // 0x2f84b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f84b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f84b8:
    // 0x2f84b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F84B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F84C0u;
}
