#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTrBox__4CMapFi
// Address: 0x160620 - 0x16066c
void GetTrBox__4CMapFi_0x160620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTrBox__4CMapFi_0x160620");
#endif

    ctx->pc = 0x160620u;

    // 0x160620: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160620u;
    {
        const bool branch_taken_0x160620 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x160624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160620u;
            // 0x160624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160620) {
            ctx->pc = 0x160648u;
            goto label_160648;
        }
    }
    ctx->pc = 0x160628u;
    // 0x160628: 0x8c820c98  lw          $v0, 0xC98($a0)
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3224)));
    // 0x16062c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x16062cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160630: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x160630u;
    {
        const bool branch_taken_0x160630 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x160630) {
            ctx->pc = 0x160644u;
            goto label_160644;
        }
    }
    ctx->pc = 0x160638u;
    // 0x160638: 0x8c830c9c  lw          $v1, 0xC9C($a0)
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3228)));
    // 0x16063c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16063Cu;
    {
        const bool branch_taken_0x16063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16063Cu;
            // 0x160640: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16063c) {
            ctx->pc = 0x160650u;
            goto label_160650;
        }
    }
    ctx->pc = 0x160644u;
label_160644:
    // 0x160644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160648:
    // 0x160648: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160648u;
    {
        const bool branch_taken_0x160648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160648) {
            ctx->pc = 0x160664u;
            goto label_160664;
        }
    }
    ctx->pc = 0x160650u;
label_160650:
    // 0x160650: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x160650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16065c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x16065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x160660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_160664:
    // 0x160664: 0x3e00008  jr          $ra
    ctx->pc = 0x160664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16066Cu;
}
