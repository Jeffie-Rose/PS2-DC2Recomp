#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSeID__9sndCSeSeqFi
// Address: 0x18b920 - 0x18b958
void SetSeID__9sndCSeSeqFi_0x18b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSeID__9sndCSeSeqFi_0x18b920");
#endif

    switch (ctx->pc) {
        case 0x18b92cu: goto label_18b92c;
        default: break;
    }

    ctx->pc = 0x18b920u;

    // 0x18b920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b924: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B924u;
    {
        const bool branch_taken_0x18b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B924u;
            // 0x18b928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b924) {
            ctx->pc = 0x18B93Cu;
            goto label_18b93c;
        }
    }
    ctx->pc = 0x18B92Cu;
label_18b92c:
    // 0x18b92c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x18b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18b930: 0xa0660036  sb          $a2, 0x36($v1)
    ctx->pc = 0x18b930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 54), (uint8_t)GPR_U32(ctx, 6));
    // 0x18b934: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x18b934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x18b938: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18b938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_18b93c:
    // 0x18b93c: 0x0  nop
    ctx->pc = 0x18b93cu;
    // NOP
    // 0x18b940: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x18b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x18b944: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x18b944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b948: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B948u;
    {
        const bool branch_taken_0x18b948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B948u;
            // 0x18b94c: 0xa73021  addu        $a2, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b948) {
            ctx->pc = 0x18B92Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b92c;
        }
    }
    ctx->pc = 0x18B950u;
    // 0x18b950: 0x3e00008  jr          $ra
    ctx->pc = 0x18B950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B958u;
}
