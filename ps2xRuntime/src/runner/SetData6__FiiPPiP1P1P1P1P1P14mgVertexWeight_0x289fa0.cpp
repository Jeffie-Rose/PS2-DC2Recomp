#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData6__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289fa0 - 0x28a028
void SetData6__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData6__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289fa0");
#endif

    switch (ctx->pc) {
        case 0x289fccu: goto label_289fcc;
        default: break;
    }

    ctx->pc = 0x289fa0u;

    // 0x289fa0: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x289fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289fa4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x289fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289fa8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x289fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x289fac: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x289facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289fb0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x289fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x289fb4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x289fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x289fb8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x289fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x289fbc: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289fc0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x289fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289fc4: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x289FC4u;
    {
        const bool branch_taken_0x289fc4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FC4u;
            // 0x289fc8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fc4) {
            ctx->pc = 0x28A01Cu;
            goto label_28a01c;
        }
    }
    ctx->pc = 0x289FCCu;
label_289fcc:
    // 0x289fcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x289fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289fd0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289fd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x289fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289fd8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x289fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x289fdc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x289fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289fe0: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x289fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x289fe4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x289fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289fe8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x289fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x289fec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x289fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x289ff0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x289ff4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x289ff4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289ff8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x289ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x289ffc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x289ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a000: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x28a004: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x28a008: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28a00c: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x28a00cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28a010: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x28a010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x28a014: 0x1c80ffed  bgtz        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28A014u;
    {
        const bool branch_taken_0x28a014 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x28A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A014u;
            // 0x28a018: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a014) {
            ctx->pc = 0x289FCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289fcc;
        }
    }
    ctx->pc = 0x28A01Cu;
label_28a01c:
    // 0x28a01c: 0x0  nop
    ctx->pc = 0x28a01cu;
    // NOP
    // 0x28a020: 0x3e00008  jr          $ra
    ctx->pc = 0x28A020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A020u;
            // 0x28a024: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A028u;
}
