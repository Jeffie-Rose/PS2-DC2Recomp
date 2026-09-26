#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData4__FiiPPiP1P1P1P1P1
// Address: 0x13fd90 - 0x13fe00
void SetData4__FiiPPiP1P1P1P1P1_0x13fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData4__FiiPPiP1P1P1P1P1_0x13fd90");
#endif

    switch (ctx->pc) {
        case 0x13fdb8u: goto label_13fdb8;
        default: break;
    }

    ctx->pc = 0x13fd90u;

    // 0x13fd90: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fd94: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fd98: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13fd9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13fda0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x13fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x13fda4: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fda8: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fdac: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x13fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fdb0: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FDB0u;
    {
        const bool branch_taken_0x13fdb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDB0u;
            // 0x13fdb4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdb0) {
            ctx->pc = 0x13FDF4u;
            goto label_13fdf4;
        }
    }
    ctx->pc = 0x13FDB8u;
label_13fdb8:
    // 0x13fdb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fdbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fdc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fdc4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13fdc8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fdc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fdcc: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x13fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x13fdd0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13fdd4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13fdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13fdd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fddc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13fde0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x13fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x13fde4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fde4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fde8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13fdec: 0x1c80fff2  bgtz        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x13FDECu;
    {
        const bool branch_taken_0x13fdec = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDECu;
            // 0x13fdf0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdec) {
            ctx->pc = 0x13FDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fdb8;
        }
    }
    ctx->pc = 0x13FDF4u;
label_13fdf4:
    // 0x13fdf4: 0x0  nop
    ctx->pc = 0x13fdf4u;
    // NOP
    // 0x13fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13FDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDF8u;
            // 0x13fdfc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FE00u;
}
