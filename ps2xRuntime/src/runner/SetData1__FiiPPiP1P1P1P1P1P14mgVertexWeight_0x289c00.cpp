#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData1__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289c00 - 0x289cd8
void SetData1__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData1__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289c00");
#endif

    switch (ctx->pc) {
        case 0x289c38u: goto label_289c38;
        default: break;
    }

    ctx->pc = 0x289c00u;

    // 0x289c00: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289c04: 0x4c100  sll         $t8, $a0, 4
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289c08: 0x3071021  addu        $v0, $t8, $a3
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x289c0c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289c10: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289c14: 0x1986821  addu        $t5, $t4, $t8
    ctx->pc = 0x289c14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x289c18: 0x1b87021  addu        $t6, $t5, $t8
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x289c1c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289c20: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x289c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x289c24: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x289c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x289c28: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289c2c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x289c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289c30: 0x18800027  blez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x289C30u;
    {
        const bool branch_taken_0x289c30 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C30u;
            // 0x289c34: 0x1d81021  addu        $v0, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c30) {
            ctx->pc = 0x289CD0u;
            goto label_289cd0;
        }
    }
    ctx->pc = 0x289C38u;
label_289c38:
    // 0x289c38: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289c3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289c40: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289c44: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x289c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x289c48: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289c48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289c4c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x289c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x289c50: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289c54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289c58: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289c58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289c5c: 0x1e73821  addu        $a3, $t7, $a3
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x289c60: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289c60u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289c64: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x289c64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x289c68: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289c6c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289c70: 0x1e73821  addu        $a3, $t7, $a3
    ctx->pc = 0x289c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x289c74: 0x78e70010  lq          $a3, 0x10($a3)
    ctx->pc = 0x289c74u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x289c78: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x289c78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x289c7c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x289c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289c80: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289c84: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289c84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289c88: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x289c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x289c8c: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289c8cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289c90: 0x7d870000  sq          $a3, 0x0($t4)
    ctx->pc = 0x289c90u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 7));
    // 0x289c94: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x289c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289c98: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x289c9c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289ca0: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x289ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x289ca4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289ca4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289ca8: 0x7da70000  sq          $a3, 0x0($t5)
    ctx->pc = 0x289ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 7));
    // 0x289cac: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x289cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x289cb0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x289cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x289cb4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289cb8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x289cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x289cbc: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x289cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x289cc0: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289cc0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289cc4: 0x7dc70000  sq          $a3, 0x0($t6)
    ctx->pc = 0x289cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 7));
    // 0x289cc8: 0x1c80ffdb  bgtz        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x289CC8u;
    {
        const bool branch_taken_0x289cc8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CC8u;
            // 0x289ccc: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cc8) {
            ctx->pc = 0x289C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289c38;
        }
    }
    ctx->pc = 0x289CD0u;
label_289cd0:
    // 0x289cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x289CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CD0u;
            // 0x289cd4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289CD8u;
}
