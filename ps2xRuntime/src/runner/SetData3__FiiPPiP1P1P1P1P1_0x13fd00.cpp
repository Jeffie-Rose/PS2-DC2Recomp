#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData3__FiiPPiP1P1P1P1P1
// Address: 0x13fd00 - 0x13fd88
void SetData3__FiiPPiP1P1P1P1P1_0x13fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData3__FiiPPiP1P1P1P1P1_0x13fd00");
#endif

    switch (ctx->pc) {
        case 0x13fd2cu: goto label_13fd2c;
        default: break;
    }

    ctx->pc = 0x13fd00u;

    // 0x13fd00: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fd04: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fd08: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x13fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x13fd0c: 0x24ea0010  addiu       $t2, $a3, 0x10
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fd10: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13fd14: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x13fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13fd18: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fd1c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fd20: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13fd24: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13FD24u;
    {
        const bool branch_taken_0x13fd24 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD24u;
            // 0x13fd28: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd24) {
            ctx->pc = 0x13FD80u;
            goto label_13fd80;
        }
    }
    ctx->pc = 0x13FD2Cu;
label_13fd2c:
    // 0x13fd2c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x13fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fd30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fd34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fd38: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13fd3c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fd3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fd40: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x13fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x13fd44: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13fd48: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x13fd4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fd50: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x13fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x13fd54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fd54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fd58: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13fd5c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x13fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13fd60: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fd64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fd68: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x13fd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x13fd6c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x13fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x13fd70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fd70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fd74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13fd78: 0x1c80ffec  bgtz        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13FD78u;
    {
        const bool branch_taken_0x13fd78 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD78u;
            // 0x13fd7c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd78) {
            ctx->pc = 0x13FD2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fd2c;
        }
    }
    ctx->pc = 0x13FD80u;
label_13fd80:
    // 0x13fd80: 0x3e00008  jr          $ra
    ctx->pc = 0x13FD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD80u;
            // 0x13fd84: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FD88u;
}
