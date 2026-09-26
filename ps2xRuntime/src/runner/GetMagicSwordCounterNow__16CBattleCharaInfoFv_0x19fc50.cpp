#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMagicSwordCounterNow__16CBattleCharaInfoFv
// Address: 0x19fc50 - 0x19fc78
void GetMagicSwordCounterNow__16CBattleCharaInfoFv_0x19fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMagicSwordCounterNow__16CBattleCharaInfoFv_0x19fc50");
#endif

    ctx->pc = 0x19fc50u;

    // 0x19fc50: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fc54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fc58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC58u;
            // 0x19fc5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FC68u;
            goto label_19fc68;
        }
    }
    ctx->pc = 0x19FC60u;
    // 0x19fc60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FC70u;
            goto label_19fc70;
        }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x19fc6c: 0x0  nop
    ctx->pc = 0x19fc6cu;
    // NOP
label_19fc70:
    // 0x19fc70: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FC78u;
}
