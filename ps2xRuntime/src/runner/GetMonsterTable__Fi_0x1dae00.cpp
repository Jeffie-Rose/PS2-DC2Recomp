#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterTable__Fi
// Address: 0x1dae00 - 0x1dae40
void GetMonsterTable__Fi_0x1dae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterTable__Fi_0x1dae00");
#endif

    switch (ctx->pc) {
        case 0x1dae0cu: goto label_1dae0c;
        default: break;
    }

    ctx->pc = 0x1dae00u;

    // 0x1dae00: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dae04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAE04u;
    {
        const bool branch_taken_0x1dae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE04u;
            // 0x1dae08: 0x2442d9e0  addiu       $v0, $v0, -0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae04) {
            ctx->pc = 0x1DAE24u;
            goto label_1dae24;
        }
    }
    ctx->pc = 0x1DAE0Cu;
label_1dae0c:
    // 0x1dae0c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dae10: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAE10u;
    {
        const bool branch_taken_0x1dae10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dae10) {
            ctx->pc = 0x1DAE20u;
            goto label_1dae20;
        }
    }
    ctx->pc = 0x1DAE18u;
    // 0x1dae18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAE18u;
    {
        const bool branch_taken_0x1dae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae18) {
            ctx->pc = 0x1DAE38u;
            goto label_1dae38;
        }
    }
    ctx->pc = 0x1DAE20u;
label_1dae20:
    // 0x1dae20: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x1dae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_1dae24:
    // 0x1dae24: 0x0  nop
    ctx->pc = 0x1dae24u;
    // NOP
    // 0x1dae28: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x1dae28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dae2c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DAE2Cu;
    {
        const bool branch_taken_0x1dae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dae2c) {
            ctx->pc = 0x1DAE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dae0c;
        }
    }
    ctx->pc = 0x1DAE34u;
    // 0x1dae34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dae34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dae38:
    // 0x1dae38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DAE40u;
}
