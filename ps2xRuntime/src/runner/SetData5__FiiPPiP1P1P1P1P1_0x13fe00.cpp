#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData5__FiiPPiP1P1P1P1P1
// Address: 0x13fe00 - 0x13fe88
void SetData5__FiiPPiP1P1P1P1P1_0x13fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData5__FiiPPiP1P1P1P1P1_0x13fe00");
#endif

    switch (ctx->pc) {
        case 0x13fe2cu: goto label_13fe2c;
        default: break;
    }

    ctx->pc = 0x13fe00u;

    // 0x13fe00: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fe04: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fe08: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13fe0c: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x13fe0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fe10: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x13fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x13fe14: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x13fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13fe18: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fe1c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fe20: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13fe24: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13FE24u;
    {
        const bool branch_taken_0x13fe24 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE24u;
            // 0x13fe28: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe24) {
            ctx->pc = 0x13FE80u;
            goto label_13fe80;
        }
    }
    ctx->pc = 0x13FE2Cu;
label_13fe2c:
    // 0x13fe2c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fe30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fe34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fe38: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13fe3c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fe3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe40: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x13fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x13fe44: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13fe48: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13fe4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fe50: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x13fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x13fe54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fe54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe58: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13fe5c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13fe60: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fe64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fe68: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x13fe6c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x13fe70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fe70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13fe78: 0x1c80ffec  bgtz        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13FE78u;
    {
        const bool branch_taken_0x13fe78 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE78u;
            // 0x13fe7c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe78) {
            ctx->pc = 0x13FE2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fe2c;
        }
    }
    ctx->pc = 0x13FE80u;
label_13fe80:
    // 0x13fe80: 0x3e00008  jr          $ra
    ctx->pc = 0x13FE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE80u;
            // 0x13fe84: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FE88u;
}
