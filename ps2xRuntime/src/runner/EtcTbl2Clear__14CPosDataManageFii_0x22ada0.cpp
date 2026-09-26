#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EtcTbl2Clear__14CPosDataManageFii
// Address: 0x22ada0 - 0x22ae00
void EtcTbl2Clear__14CPosDataManageFii_0x22ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EtcTbl2Clear__14CPosDataManageFii_0x22ada0");
#endif

    switch (ctx->pc) {
        case 0x22add8u: goto label_22add8;
        default: break;
    }

    ctx->pc = 0x22ada0u;

    // 0x22ada0: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x22ada0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ada4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x22ada4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22ada8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22ADB4u;
            goto label_22adb4;
        }
    }
    ctx->pc = 0x22ADB0u;
    // 0x22adb0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22adb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22adb4:
    // 0x22adb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22adb8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x22adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22adbc: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x22adbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22adc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22adc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adc4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x22adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22adc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22adcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22adccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22add0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x22ADD0u;
    {
        const bool branch_taken_0x22add0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ADD0u;
            // 0x22add4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22add0) {
            ctx->pc = 0x22ADF8u;
            goto label_22adf8;
        }
    }
    ctx->pc = 0x22ADD8u;
label_22add8:
    // 0x22add8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22addc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x22addcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22ade0: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x22ade0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22ade4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x22ade8: 0x0  nop
    ctx->pc = 0x22ade8u;
    // NOP
    // 0x22adec: 0x0  nop
    ctx->pc = 0x22adecu;
    // NOP
    // 0x22adf0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22ADF0u;
    {
        const bool branch_taken_0x22adf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22adf0) {
            ctx->pc = 0x22ADD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22add8;
        }
    }
    ctx->pc = 0x22ADF8u;
label_22adf8:
    // 0x22adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ADF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AE00u;
}
