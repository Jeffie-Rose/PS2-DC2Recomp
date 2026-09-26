#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData2__FiiPPiP1P1P1P1P1
// Address: 0x13fc90 - 0x13fd00
void SetData2__FiiPPiP1P1P1P1P1_0x13fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData2__FiiPPiP1P1P1P1P1_0x13fc90");
#endif

    switch (ctx->pc) {
        case 0x13fcb8u: goto label_13fcb8;
        default: break;
    }

    ctx->pc = 0x13fc90u;

    // 0x13fc90: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fc94: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13fc98: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x13fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x13fc9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13fca0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x13fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x13fca4: 0x24ea0010  addiu       $t2, $a3, 0x10
    ctx->pc = 0x13fca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fca8: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fcac: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x13fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fcb0: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FCB0u;
    {
        const bool branch_taken_0x13fcb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCB0u;
            // 0x13fcb4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcb0) {
            ctx->pc = 0x13FCF4u;
            goto label_13fcf4;
        }
    }
    ctx->pc = 0x13FCB8u;
label_13fcb8:
    // 0x13fcb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fcbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13fcc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fcc4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13fcc8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fcc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fccc: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x13fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x13fcd0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13fcd4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x13fcd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x13fcd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13fcdc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13fce0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x13fce4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13fce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fce8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13fcec: 0x1c80fff2  bgtz        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x13FCECu;
    {
        const bool branch_taken_0x13fcec = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCECu;
            // 0x13fcf0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcec) {
            ctx->pc = 0x13FCB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fcb8;
        }
    }
    ctx->pc = 0x13FCF4u;
label_13fcf4:
    // 0x13fcf4: 0x0  nop
    ctx->pc = 0x13fcf4u;
    // NOP
    // 0x13fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13FCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCF8u;
            // 0x13fcfc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FD00u;
}
