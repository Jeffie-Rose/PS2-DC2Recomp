#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData2__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289ce0 - 0x289d80
void SetData2__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData2__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289ce0");
#endif

    switch (ctx->pc) {
        case 0x289d10u: goto label_289d10;
        default: break;
    }

    ctx->pc = 0x289ce0u;

    // 0x289ce0: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289ce4: 0x46100  sll         $t4, $a0, 4
    ctx->pc = 0x289ce4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289ce8: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x289ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x289cec: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289cf0: 0x244a0010  addiu       $t2, $v0, 0x10
    ctx->pc = 0x289cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289cf4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289cf8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x289cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x289cfc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x289cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x289d00: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289d00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289d04: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289d08: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x289D08u;
    {
        const bool branch_taken_0x289d08 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D08u;
            // 0x289d0c: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d08) {
            ctx->pc = 0x289D78u;
            goto label_289d78;
        }
    }
    ctx->pc = 0x289D10u;
label_289d10:
    // 0x289d10: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289d14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289d18: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x289d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289d1c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x289d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x289d20: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289d20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d24: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x289d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x289d28: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289d2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289d30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x289d34: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x289d38: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289d38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d3c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x289d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x289d40: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289d44: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x289d48: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x289d4c: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x289d4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x289d50: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x289d50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x289d54: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x289d58: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289d5c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x289d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289d60: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x289d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x289d64: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x289d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x289d68: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289d68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d6c: 0x7d450000  sq          $a1, 0x0($t2)
    ctx->pc = 0x289d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 5));
    // 0x289d70: 0x1c80ffe7  bgtz        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x289D70u;
    {
        const bool branch_taken_0x289d70 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D70u;
            // 0x289d74: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d70) {
            ctx->pc = 0x289D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289d10;
        }
    }
    ctx->pc = 0x289D78u;
label_289d78:
    // 0x289d78: 0x3e00008  jr          $ra
    ctx->pc = 0x289D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D78u;
            // 0x289d7c: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289D80u;
}
