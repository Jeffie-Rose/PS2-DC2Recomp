#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData7__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x28a030 - 0x28a0d0
void SetData7__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x28a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData7__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x28a030");
#endif

    switch (ctx->pc) {
        case 0x28a060u: goto label_28a060;
        default: break;
    }

    ctx->pc = 0x28a030u;

    // 0x28a030: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a034: 0x46100  sll         $t4, $a0, 4
    ctx->pc = 0x28a034u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28a038: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x28a03c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x28a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x28a040: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x28a040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28a044: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x28a044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x28a048: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x28a048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x28a04c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x28a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x28a050: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x28a050u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x28a054: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x28a054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a058: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28A058u;
    {
        const bool branch_taken_0x28a058 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x28A05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A058u;
            // 0x28a05c: 0x12c1021  addu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a058) {
            ctx->pc = 0x28A0C8u;
            goto label_28a0c8;
        }
    }
    ctx->pc = 0x28A060u;
label_28a060:
    // 0x28a060: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a064: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28a068: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28a06c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x28a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x28a070: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x28a070u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a074: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x28a074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x28a078: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x28a078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a07c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28a080: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28a080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x28a084: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x28a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x28a088: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x28a088u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a08c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x28a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x28a090: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a094: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28a094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x28a098: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x28a09c: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x28a09cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28a0a0: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x28a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x28a0a4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x28a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a0a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28a0ac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28a0b0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28a0b4: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x28a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x28a0b8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x28a0b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a0bc: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x28a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x28a0c0: 0x1c80ffe7  bgtz        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28A0C0u;
    {
        const bool branch_taken_0x28a0c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x28A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0C0u;
            // 0x28a0c4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0c0) {
            ctx->pc = 0x28A060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a060;
        }
    }
    ctx->pc = 0x28A0C8u;
label_28a0c8:
    // 0x28a0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0C8u;
            // 0x28a0cc: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A0D0u;
}
