#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetConvertIndexFromFishNo__Fi
// Address: 0x19adc0 - 0x19ae10
void GetConvertIndexFromFishNo__Fi_0x19adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetConvertIndexFromFishNo__Fi_0x19adc0");
#endif

    switch (ctx->pc) {
        case 0x19add4u: goto label_19add4;
        default: break;
    }

    ctx->pc = 0x19adc0u;

    // 0x19adc0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x19adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x19adc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19adc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19adc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19ADCCu;
    {
        const bool branch_taken_0x19adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADCCu;
            // 0x19add0: 0x24a562c0  addiu       $a1, $a1, 0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adcc) {
            ctx->pc = 0x19ADECu;
            goto label_19adec;
        }
    }
    ctx->pc = 0x19ADD4u;
label_19add4:
    // 0x19add4: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19ADD4u;
    {
        const bool branch_taken_0x19add4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x19add4) {
            ctx->pc = 0x19ADE4u;
            goto label_19ade4;
        }
    }
    ctx->pc = 0x19ADDCu;
    // 0x19addc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19ADDCu;
    {
        const bool branch_taken_0x19addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19addc) {
            ctx->pc = 0x19AE08u;
            goto label_19ae08;
        }
    }
    ctx->pc = 0x19ADE4u;
label_19ade4:
    // 0x19ade4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x19ade4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x19ade8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19adec:
    // 0x19adec: 0x0  nop
    ctx->pc = 0x19adecu;
    // NOP
    // 0x19adf0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x19adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19adf4: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x19adf4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19adf8: 0x7182a  slt         $v1, $zero, $a3
    ctx->pc = 0x19adf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19adfc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x19ADFCu;
    {
        const bool branch_taken_0x19adfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19adfc) {
            ctx->pc = 0x19ADD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19add4;
        }
    }
    ctx->pc = 0x19AE04u;
    // 0x19ae04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ae08:
    // 0x19ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AE10u;
}
