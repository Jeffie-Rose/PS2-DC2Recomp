#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCheckLine__FPiii
// Address: 0x23b160 - 0x23b1b0
void MenuCheckLine__FPiii_0x23b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCheckLine__FPiii_0x23b160");
#endif

    switch (ctx->pc) {
        case 0x23b180u: goto label_23b180;
        default: break;
    }

    ctx->pc = 0x23b160u;

    // 0x23b160: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B160u;
    {
        const bool branch_taken_0x23b160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b160) {
            ctx->pc = 0x23B1A4u;
            goto label_23b1a4;
        }
    }
    ctx->pc = 0x23B168u;
    // 0x23b168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b16c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x23b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23b170: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B170u;
    {
        const bool branch_taken_0x23b170 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23b170) {
            ctx->pc = 0x23B18Cu;
            goto label_23b18c;
        }
    }
    ctx->pc = 0x23B178u;
    // 0x23b178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B178u;
    {
        const bool branch_taken_0x23b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B178u;
            // 0x23b17c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b178) {
            ctx->pc = 0x23B18Cu;
            goto label_23b18c;
        }
    }
    ctx->pc = 0x23B180u;
label_23b180:
    // 0x23b180: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23b188: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23b188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23b18c:
    // 0x23b18c: 0x0  nop
    ctx->pc = 0x23b18cu;
    // NOP
    // 0x23b190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b194: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23b194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23b198: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x23b198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23b19c: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23B19Cu;
    {
        const bool branch_taken_0x23b19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b19c) {
            ctx->pc = 0x23B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b180;
        }
    }
    ctx->pc = 0x23B1A4u;
label_23b1a4:
    // 0x23b1a4: 0x0  nop
    ctx->pc = 0x23b1a4u;
    // NOP
    // 0x23b1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B1B0u;
}
