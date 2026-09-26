#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData3__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289d80 - 0x289e40
void SetData3__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData3__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289d80");
#endif

    switch (ctx->pc) {
        case 0x289db4u: goto label_289db4;
        default: break;
    }

    ctx->pc = 0x289d80u;

    // 0x289d80: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x289d80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289d84: 0x47100  sll         $t6, $a0, 4
    ctx->pc = 0x289d84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289d88: 0x1c71021  addu        $v0, $t6, $a3
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x289d8c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289d90: 0x244a0010  addiu       $t2, $v0, 0x10
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289d94: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x289d94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x289d98: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289d98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289d9c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x289d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x289da0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x289da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x289da4: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289da4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289da8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x289da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289dac: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x289DACu;
    {
        const bool branch_taken_0x289dac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DACu;
            // 0x289db0: 0x18e1021  addu        $v0, $t4, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dac) {
            ctx->pc = 0x289E34u;
            goto label_289e34;
        }
    }
    ctx->pc = 0x289DB4u;
label_289db4:
    // 0x289db4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289db8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289dbc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289dc0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x289dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x289dc4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289dc4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289dc8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x289dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x289dcc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289dd0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289dd4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289dd8: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289ddc: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289ddcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289de0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x289de0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x289de4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289de8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289de8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289dec: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289df0: 0x78e70010  lq          $a3, 0x10($a3)
    ctx->pc = 0x289df0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x289df4: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x289df4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x289df8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x289df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289dfc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289e00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289e00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289e04: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x289e08: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289e08u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289e0c: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x289e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
    // 0x289e10: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x289e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289e14: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x289e18: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289e1c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x289e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x289e20: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x289e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x289e24: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289e24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289e28: 0x7d870000  sq          $a3, 0x0($t4)
    ctx->pc = 0x289e28u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 7));
    // 0x289e2c: 0x1c80ffe1  bgtz        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x289E2Cu;
    {
        const bool branch_taken_0x289e2c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E2Cu;
            // 0x289e30: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e2c) {
            ctx->pc = 0x289DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289db4;
        }
    }
    ctx->pc = 0x289E34u;
label_289e34:
    // 0x289e34: 0x0  nop
    ctx->pc = 0x289e34u;
    // NOP
    // 0x289e38: 0x3e00008  jr          $ra
    ctx->pc = 0x289E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E38u;
            // 0x289e3c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289E40u;
}
