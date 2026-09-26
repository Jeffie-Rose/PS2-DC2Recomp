#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGiftBoxItemNum__13CGameDataUsedFv
// Address: 0x199860 - 0x1998a8
void GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGiftBoxItemNum__13CGameDataUsedFv_0x199860");
#endif

    switch (ctx->pc) {
        case 0x199878u: goto label_199878;
        default: break;
    }

    ctx->pc = 0x199860u;

    // 0x199860: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x199860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199864: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x199864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199868: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x199868u;
    {
        const bool branch_taken_0x199868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199868u;
            // 0x19986c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199868) {
            ctx->pc = 0x1998A0u;
            goto label_1998a0;
        }
    }
    ctx->pc = 0x199870u;
    // 0x199870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199878:
    // 0x199878: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19987c: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x19987cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x199880: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199880u;
    {
        const bool branch_taken_0x199880 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x199880) {
            ctx->pc = 0x19988Cu;
            goto label_19988c;
        }
    }
    ctx->pc = 0x199888u;
    // 0x199888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19988c:
    // 0x19988c: 0x0  nop
    ctx->pc = 0x19988cu;
    // NOP
    // 0x199890: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199894: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x199894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x199898: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x199898u;
    {
        const bool branch_taken_0x199898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199898u;
            // 0x19989c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199898) {
            ctx->pc = 0x199878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199878;
        }
    }
    ctx->pc = 0x1998A0u;
label_1998a0:
    // 0x1998a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1998A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1998A8u;
}
