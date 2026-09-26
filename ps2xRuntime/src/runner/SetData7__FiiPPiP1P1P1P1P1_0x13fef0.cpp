#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData7__FiiPPiP1P1P1P1P1
// Address: 0x13fef0 - 0x13ff60
void SetData7__FiiPPiP1P1P1P1P1_0x13fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData7__FiiPPiP1P1P1P1P1_0x13fef0");
#endif

    switch (ctx->pc) {
        case 0x13ff18u: goto label_13ff18;
        default: break;
    }

    ctx->pc = 0x13fef0u;

    // 0x13fef0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fef4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fef8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13fefc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13ff00: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13ff04: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x13ff04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13ff08: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13ff0c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x13ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ff10: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FF10u;
    {
        const bool branch_taken_0x13ff10 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF10u;
            // 0x13ff14: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff10) {
            ctx->pc = 0x13FF54u;
            goto label_13ff54;
        }
    }
    ctx->pc = 0x13FF18u;
label_13ff18:
    // 0x13ff18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ff1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13ff20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ff24: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13ff28: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13ff28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ff2c: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x13ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x13ff30: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13ff34: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13ff34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13ff38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ff3c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13ff40: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x13ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x13ff44: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13ff44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ff48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13ff4c: 0x1c80fff2  bgtz        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x13FF4Cu;
    {
        const bool branch_taken_0x13ff4c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF4Cu;
            // 0x13ff50: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff4c) {
            ctx->pc = 0x13FF18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ff18;
        }
    }
    ctx->pc = 0x13FF54u;
label_13ff54:
    // 0x13ff54: 0x0  nop
    ctx->pc = 0x13ff54u;
    // NOP
    // 0x13ff58: 0x3e00008  jr          $ra
    ctx->pc = 0x13FF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF58u;
            // 0x13ff5c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FF60u;
}
