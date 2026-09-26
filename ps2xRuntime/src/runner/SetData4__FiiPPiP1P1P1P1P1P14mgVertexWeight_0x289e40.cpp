#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData4__FiiPPiP1P1P1P1P1P14mgVertexWeight
// Address: 0x289e40 - 0x289ee0
void SetData4__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData4__FiiPPiP1P1P1P1P1P14mgVertexWeight_0x289e40");
#endif

    switch (ctx->pc) {
        case 0x289e70u: goto label_289e70;
        default: break;
    }

    ctx->pc = 0x289e40u;

    // 0x289e40: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x289e40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289e44: 0x46100  sll         $t4, $a0, 4
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289e48: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x289e4c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x289e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x289e50: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x289e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289e54: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x289e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x289e58: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x289e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x289e5c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x289e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x289e60: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x289e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x289e64: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289e68: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x289E68u;
    {
        const bool branch_taken_0x289e68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x289E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E68u;
            // 0x289e6c: 0x12c1021  addu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e68) {
            ctx->pc = 0x289ED8u;
            goto label_289ed8;
        }
    }
    ctx->pc = 0x289E70u;
label_289e70:
    // 0x289e70: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289e74: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289e78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x289e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289e7c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x289e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x289e80: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289e80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289e84: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x289e84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x289e88: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289e8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x289e90: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x289e94: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x289e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x289e98: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289e98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289e9c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x289e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x289ea0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x289ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289ea4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x289ea8: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x289ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x289eac: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x289eacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x289eb0: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x289eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x289eb4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x289eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x289eb8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x289eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x289ebc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x289ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289ec0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x289ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x289ec4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x289ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x289ec8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x289ec8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289ecc: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x289eccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x289ed0: 0x1c80ffe7  bgtz        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x289ED0u;
    {
        const bool branch_taken_0x289ed0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x289ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ED0u;
            // 0x289ed4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ed0) {
            ctx->pc = 0x289E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289e70;
        }
    }
    ctx->pc = 0x289ED8u;
label_289ed8:
    // 0x289ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x289ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ED8u;
            // 0x289edc: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289EE0u;
}
