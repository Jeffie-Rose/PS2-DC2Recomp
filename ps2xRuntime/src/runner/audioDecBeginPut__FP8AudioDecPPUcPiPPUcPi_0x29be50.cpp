#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Address: 0x29be50 - 0x29bf0c
void audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi_0x29be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi_0x29be50");
#endif

    ctx->pc = 0x29be50u;

    // 0x29be50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29be54: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29BE54u;
    {
        const bool branch_taken_0x29be54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29be54) {
            ctx->pc = 0x29BE90u;
            goto label_29be90;
        }
    }
    ctx->pc = 0x29BE5Cu;
    // 0x29be5c: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x29be5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29be60: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x29be64: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x29be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x29be68: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x29be68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x29be6c: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x29be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x29be70: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x29be70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29be74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x29be74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29be78: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29be78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x29be7c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x29be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29be80: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29be80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x29be84: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x29be84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x29be88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29BE88u;
    {
        const bool branch_taken_0x29be88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE88u;
            // 0x29be8c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be88) {
            ctx->pc = 0x29BF04u;
            goto label_29bf04;
        }
    }
    ctx->pc = 0x29BE90u;
label_29be90:
    // 0x29be90: 0x8c8a003c  lw          $t2, 0x3C($a0)
    ctx->pc = 0x29be90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x29be94: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x29be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x29be98: 0x8c8b0034  lw          $t3, 0x34($a0)
    ctx->pc = 0x29be98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29be9c: 0x1434823  subu        $t1, $t2, $v1
    ctx->pc = 0x29be9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x29bea0: 0x14b1823  subu        $v1, $t2, $t3
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x29bea4: 0x69182a  slt         $v1, $v1, $t1
    ctx->pc = 0x29bea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29bea8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BEA8u;
    {
        const bool branch_taken_0x29bea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bea8) {
            ctx->pc = 0x29BECCu;
            goto label_29becc;
        }
    }
    ctx->pc = 0x29BEB0u;
    // 0x29beb0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29beb4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29beb8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29bebc: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x29bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x29bec0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x29bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x29bec4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29BEC4u;
    {
        const bool branch_taken_0x29bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEC4u;
            // 0x29bec8: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bec4) {
            ctx->pc = 0x29BF04u;
            goto label_29bf04;
        }
    }
    ctx->pc = 0x29BECCu;
label_29becc:
    // 0x29becc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29bed0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29bed4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29bed8: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x29bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x29bedc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29bee0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29bee4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x29bee8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x29bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29beec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29beecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x29bef0: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x29bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x29bef4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29bef8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x29bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29befc: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x29befcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29bf00: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x29bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_29bf04:
    // 0x29bf04: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF0Cu;
}
