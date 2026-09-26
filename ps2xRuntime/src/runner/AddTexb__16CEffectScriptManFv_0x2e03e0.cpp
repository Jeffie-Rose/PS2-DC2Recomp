#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddTexb__16CEffectScriptManFv
// Address: 0x2e03e0 - 0x2e0418
void AddTexb__16CEffectScriptManFv_0x2e03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddTexb__16CEffectScriptManFv_0x2e03e0");
#endif

    ctx->pc = 0x2e03e0u;

    // 0x2e03e0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2e03e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e03e4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2e03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e03e8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e03ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E03ECu;
    {
        const bool branch_taken_0x2e03ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E03ECu;
            // 0x2e03f0: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03ec) {
            ctx->pc = 0x2E0410u;
            goto label_2e0410;
        }
    }
    ctx->pc = 0x2E03F4u;
    // 0x2e03f4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2e03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2e03f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e03fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e0400: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e0400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0404: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2e0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2e0408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e040c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2e040cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2e0410:
    // 0x2e0410: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0418u;
}
