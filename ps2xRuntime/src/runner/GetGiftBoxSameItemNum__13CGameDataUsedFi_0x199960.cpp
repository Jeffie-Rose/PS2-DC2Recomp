#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGiftBoxSameItemNum__13CGameDataUsedFi
// Address: 0x199960 - 0x1999b0
void GetGiftBoxSameItemNum__13CGameDataUsedFi_0x199960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGiftBoxSameItemNum__13CGameDataUsedFi_0x199960");
#endif

    switch (ctx->pc) {
        case 0x199980u: goto label_199980;
        default: break;
    }

    ctx->pc = 0x199960u;

    // 0x199960: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199964: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199968: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199968u;
    {
        const bool branch_taken_0x199968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199968u;
            // 0x19996c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199968) {
            ctx->pc = 0x199978u;
            goto label_199978;
        }
    }
    ctx->pc = 0x199970u;
    // 0x199970: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x199970u;
    {
        const bool branch_taken_0x199970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199970u;
            // 0x199974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199970) {
            ctx->pc = 0x1999A8u;
            goto label_1999a8;
        }
    }
    ctx->pc = 0x199978u;
label_199978:
    // 0x199978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19997c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19997cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199980:
    // 0x199980: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x199984: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x199988: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199988u;
    {
        const bool branch_taken_0x199988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x199988) {
            ctx->pc = 0x199994u;
            goto label_199994;
        }
    }
    ctx->pc = 0x199990u;
    // 0x199990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199994:
    // 0x199994: 0x0  nop
    ctx->pc = 0x199994u;
    // NOP
    // 0x199998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19999c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x19999cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1999a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1999A0u;
    {
        const bool branch_taken_0x1999a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1999A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999A0u;
            // 0x1999a4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999a0) {
            ctx->pc = 0x199980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199980;
        }
    }
    ctx->pc = 0x1999A8u;
label_1999a8:
    // 0x1999a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1999A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1999B0u;
}
