#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMagicSwordElem__16CBattleCharaInfoFv
// Address: 0x19fb60 - 0x19fb80
void GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60");
#endif

    ctx->pc = 0x19fb60u;

    // 0x19fb60: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19fb60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FB68u;
    {
        const bool branch_taken_0x19fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB68u;
            // 0x19fb6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb68) {
            ctx->pc = 0x19FB78u;
            goto label_19fb78;
        }
    }
    ctx->pc = 0x19FB70u;
    // 0x19fb70: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19fb74: 0x0  nop
    ctx->pc = 0x19fb74u;
    // NOP
label_19fb78:
    // 0x19fb78: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FB80u;
}
