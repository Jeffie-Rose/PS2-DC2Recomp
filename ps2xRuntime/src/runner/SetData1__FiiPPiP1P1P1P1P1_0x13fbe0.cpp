#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData1__FiiPPiP1P1P1P1P1
// Address: 0x13fbe0 - 0x13fc88
void SetData1__FiiPPiP1P1P1P1P1_0x13fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData1__FiiPPiP1P1P1P1P1_0x13fbe0");
#endif

    switch (ctx->pc) {
        case 0x13fc10u: goto label_13fc10;
        default: break;
    }

    ctx->pc = 0x13fbe0u;

    // 0x13fbe0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fbe4: 0x46900  sll         $t5, $a0, 4
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fbe8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x13fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x13fbec: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x13fbf0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x13fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x13fbf4: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fbf8: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fbfc: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fc00: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13fc04: 0xad3821  addu        $a3, $a1, $t5
    ctx->pc = 0x13fc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x13fc08: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13FC08u;
    {
        const bool branch_taken_0x13fc08 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC08u;
            // 0x13fc0c: 0xed1021  addu        $v0, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc08) {
            ctx->pc = 0x13FC7Cu;
            goto label_13fc7c;
        }
    }
    ctx->pc = 0x13FC10u;
label_13fc10:
    // 0x13fc10: 0x8d8d0000  lw          $t5, 0x0($t4)
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13fc14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fc18: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x13fc1c: 0x10d6821  addu        $t5, $t0, $t5
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x13fc20: 0x79ad0000  lq          $t5, 0x0($t5)
    ctx->pc = 0x13fc20u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13fc24: 0x7c6d0000  sq          $t5, 0x0($v1)
    ctx->pc = 0x13fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 13));
    // 0x13fc28: 0x8d8d0004  lw          $t5, 0x4($t4)
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x13fc2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13fc30: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x13fc34: 0x12d6821  addu        $t5, $t1, $t5
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x13fc38: 0x79ad0000  lq          $t5, 0x0($t5)
    ctx->pc = 0x13fc38u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13fc3c: 0x7cad0000  sq          $t5, 0x0($a1)
    ctx->pc = 0x13fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 13));
    // 0x13fc40: 0x8d8d0008  lw          $t5, 0x8($t4)
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x13fc44: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fc48: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x13fc48u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x13fc4c: 0x14d6821  addu        $t5, $t2, $t5
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x13fc50: 0x79ad0000  lq          $t5, 0x0($t5)
    ctx->pc = 0x13fc50u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13fc54: 0x7ced0000  sq          $t5, 0x0($a3)
    ctx->pc = 0x13fc54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 13));
    // 0x13fc58: 0x8d8d000c  lw          $t5, 0xC($t4)
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x13fc5c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fc60: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x13fc60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x13fc64: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x13fc68: 0x16d6821  addu        $t5, $t3, $t5
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x13fc6c: 0x79ad0000  lq          $t5, 0x0($t5)
    ctx->pc = 0x13fc6cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13fc70: 0x7c4d0000  sq          $t5, 0x0($v0)
    ctx->pc = 0x13fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 13));
    // 0x13fc74: 0x1c80ffe6  bgtz        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x13FC74u;
    {
        const bool branch_taken_0x13fc74 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC74u;
            // 0x13fc78: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc74) {
            ctx->pc = 0x13FC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fc10;
        }
    }
    ctx->pc = 0x13FC7Cu;
label_13fc7c:
    // 0x13fc7c: 0x0  nop
    ctx->pc = 0x13fc7cu;
    // NOP
    // 0x13fc80: 0x3e00008  jr          $ra
    ctx->pc = 0x13FC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC80u;
            // 0x13fc84: 0xaccc0000  sw          $t4, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FC88u;
}
