#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelAutoRepeat2__8CGamePadFi
// Address: 0x14b040 - 0x14b0a4
void CancelAutoRepeat2__8CGamePadFi_0x14b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelAutoRepeat2__8CGamePadFi_0x14b040");
#endif

    switch (ctx->pc) {
        case 0x14b050u: goto label_14b050;
        default: break;
    }

    ctx->pc = 0x14b040u;

    // 0x14b040: 0x248702cc  addiu       $a3, $a0, 0x2CC
    ctx->pc = 0x14b040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 716));
    // 0x14b044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b04c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b04cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b050:
    // 0x14b050: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x14b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x14b054: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14B054u;
    {
        const bool branch_taken_0x14b054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b054) {
            ctx->pc = 0x14B088u;
            goto label_14b088;
        }
    }
    ctx->pc = 0x14B05Cu;
    // 0x14b05c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14b060: 0xc04827  not         $t1, $a2
    ctx->pc = 0x14b060u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x14b064: 0xe85021  addu        $t2, $a3, $t0
    ctx->pc = 0x14b064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14b068: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x14b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x14b06c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x14b070: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14b074: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x14b078: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x14b078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x14b07c: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x14b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x14b080: 0xad400088  sw          $zero, 0x88($t2)
    ctx->pc = 0x14b080u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 0));
    // 0x14b084: 0xad400108  sw          $zero, 0x108($t2)
    ctx->pc = 0x14b084u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 264), GPR_U32(ctx, 0));
label_14b088:
    // 0x14b088: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b08c: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x14b08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14b090: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b094: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14B094u;
    {
        const bool branch_taken_0x14b094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B094u;
            // 0x14b098: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b094) {
            ctx->pc = 0x14B050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b050;
        }
    }
    ctx->pc = 0x14B09Cu;
    // 0x14b09c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B0A4u;
}
