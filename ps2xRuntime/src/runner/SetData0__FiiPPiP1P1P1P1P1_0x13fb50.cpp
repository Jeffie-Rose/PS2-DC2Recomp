#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData0__FiiPPiP1P1P1P1P1
// Address: 0x13fb50 - 0x13fbd8
void SetData0__FiiPPiP1P1P1P1P1_0x13fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData0__FiiPPiP1P1P1P1P1_0x13fb50");
#endif

    switch (ctx->pc) {
        case 0x13fb7cu: goto label_13fb7c;
        default: break;
    }

    ctx->pc = 0x13fb50u;

    // 0x13fb50: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fb54: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fb58: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x13fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x13fb5c: 0x24eb0010  addiu       $t3, $a3, 0x10
    ctx->pc = 0x13fb5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fb60: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x13fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x13fb64: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13fb68: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fb6c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fb70: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13fb74: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13FB74u;
    {
        const bool branch_taken_0x13fb74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB74u;
            // 0x13fb78: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb74) {
            ctx->pc = 0x13FBD0u;
            goto label_13fbd0;
        }
    }
    ctx->pc = 0x13FB7Cu;
label_13fb7c:
    // 0x13fb7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x13fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fb80: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fb84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fb88: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13fb8c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fb8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fb90: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x13fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x13fb94: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13fb98: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x13fb9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fba0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x13fba4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fba4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fba8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13fbac: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x13fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13fbb0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fbb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fbb8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x13fbbc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x13fbc0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fbc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fbc4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13fbc8: 0x1c80ffec  bgtz        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13FBC8u;
    {
        const bool branch_taken_0x13fbc8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBC8u;
            // 0x13fbcc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbc8) {
            ctx->pc = 0x13FB7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fb7c;
        }
    }
    ctx->pc = 0x13FBD0u;
label_13fbd0:
    // 0x13fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x13FBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBD0u;
            // 0x13fbd4: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FBD8u;
}
