#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMnOnePictTex__Fv
// Address: 0x2bfe20 - 0x2bfe6c
void InitMnOnePictTex__Fv_0x2bfe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMnOnePictTex__Fv_0x2bfe20");
#endif

    switch (ctx->pc) {
        case 0x2bfe30u: goto label_2bfe30;
        default: break;
    }

    ctx->pc = 0x2bfe20u;

    // 0x2bfe20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bfe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe28: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bfe2c: 0x2484d1c0  addiu       $a0, $a0, -0x2E40
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955456));
label_2bfe30:
    // 0x2bfe30: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2bfe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2bfe34: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2bfe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2bfe38: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2bfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2bfe3c: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x2bfe3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2bfe40: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2bfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2bfe44: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bfe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bfe48: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2bfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2bfe4c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2bfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2bfe50: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2bfe50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2bfe54: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2bfe54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2bfe58: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2bfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2bfe5c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BFE5Cu;
    {
        const bool branch_taken_0x2bfe5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE5Cu;
            // 0x2bfe60: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe5c) {
            ctx->pc = 0x2BFE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfe30;
        }
    }
    ctx->pc = 0x2BFE64u;
    // 0x2bfe64: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFE6Cu;
}
