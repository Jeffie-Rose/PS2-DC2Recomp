#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData5__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289ee0 - 0x289fa0
void SetData5__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData5__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289ee0");
#endif

    switch (ctx->pc) {
        case 0x289f14u: goto label_289f14;
        default: break;
    }

    ctx->pc = 0x289ee0u;

    // 0x289ee0: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289ee4: 0x47100  sll         $t6, $a0, 4
    ctx->pc = 0x289ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289ee8: 0x1c71021  addu        $v0, $t6, $a3
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x289eec: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289ef0: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289ef4: 0x12e6021  addu        $t4, $t1, $t6
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x289ef8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289efc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x289efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x289f00: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x289f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x289f04: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289f08: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x289f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289f0c: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x289F0Cu;
    {
        const bool branch_taken_0x289f0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F0Cu;
            // 0x289f10: 0x18e1021  addu        $v0, $t4, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f0c) {
            ctx->pc = 0x289F94u;
            goto label_289f94;
        }
    }
    ctx->pc = 0x289F14u;
label_289f14:
    // 0x289f14: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289f18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289f1c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289f20: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x289f24: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289f24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289f28: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x289f28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x289f2c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289f30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289f34: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289f34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289f38: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289f3c: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289f3cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289f40: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x289f40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x289f44: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289f48: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289f4c: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289f50: 0x78e70010  lq          $a3, 0x10($a3)
    ctx->pc = 0x289f50u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x289f54: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x289f54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x289f58: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x289f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289f5c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289f60: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289f64: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x289f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x289f68: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289f68u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289f6c: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x289f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
    // 0x289f70: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x289f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289f74: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x289f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x289f78: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289f7c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x289f80: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x289f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x289f84: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289f84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289f88: 0x7d870000  sq          $a3, 0x0($t4)
    ctx->pc = 0x289f88u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 7));
    // 0x289f8c: 0x1c80ffe1  bgtz        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x289F8Cu;
    {
        const bool branch_taken_0x289f8c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F8Cu;
            // 0x289f90: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f8c) {
            ctx->pc = 0x289F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289f14;
        }
    }
    ctx->pc = 0x289F94u;
label_289f94:
    // 0x289f94: 0x0  nop
    ctx->pc = 0x289f94u;
    // NOP
    // 0x289f98: 0x3e00008  jr          $ra
    ctx->pc = 0x289F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F98u;
            // 0x289f9c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289FA0u;
}
