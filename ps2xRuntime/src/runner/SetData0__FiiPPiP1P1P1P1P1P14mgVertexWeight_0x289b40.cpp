#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData0__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289b40 - 0x289c00
void SetData0__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData0__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289b40");
#endif

    switch (ctx->pc) {
        case 0x289b74u: goto label_289b74;
        default: break;
    }

    ctx->pc = 0x289b40u;

    // 0x289b40: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x289b40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289b44: 0x47100  sll         $t6, $a0, 4
    ctx->pc = 0x289b44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289b48: 0x1c71021  addu        $v0, $t6, $a3
    ctx->pc = 0x289b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x289b4c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289b50: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x289b50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289b54: 0x16e6021  addu        $t4, $t3, $t6
    ctx->pc = 0x289b54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x289b58: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289b5c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x289b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x289b60: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x289b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x289b64: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289b64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289b68: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x289b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289b6c: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x289B6Cu;
    {
        const bool branch_taken_0x289b6c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B6Cu;
            // 0x289b70: 0x18e1021  addu        $v0, $t4, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b6c) {
            ctx->pc = 0x289BF4u;
            goto label_289bf4;
        }
    }
    ctx->pc = 0x289B74u;
label_289b74:
    // 0x289b74: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289b78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289b7c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289b80: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x289b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x289b84: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289b84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289b88: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x289b88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x289b8c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289b90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289b94: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289b94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289b98: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289b9c: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289b9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289ba0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x289ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x289ba4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x289ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289ba8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x289ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x289bac: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x289bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x289bb0: 0x78e70010  lq          $a3, 0x10($a3)
    ctx->pc = 0x289bb0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x289bb4: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x289bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x289bb8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x289bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289bbc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289bc0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289bc4: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x289bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x289bc8: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289bc8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289bcc: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x289bccu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
    // 0x289bd0: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289bd4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x289bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x289bd8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289bdc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x289bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x289be0: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x289be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x289be4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x289be4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289be8: 0x7d870000  sq          $a3, 0x0($t4)
    ctx->pc = 0x289be8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 7));
    // 0x289bec: 0x1c80ffe1  bgtz        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x289BECu;
    {
        const bool branch_taken_0x289bec = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BECu;
            // 0x289bf0: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bec) {
            ctx->pc = 0x289B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289b74;
        }
    }
    ctx->pc = 0x289BF4u;
label_289bf4:
    // 0x289bf4: 0x0  nop
    ctx->pc = 0x289bf4u;
    // NOP
    // 0x289bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x289BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BF8u;
            // 0x289bfc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289C00u;
}
