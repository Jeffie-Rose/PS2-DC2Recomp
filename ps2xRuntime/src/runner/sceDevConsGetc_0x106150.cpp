#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsGetc
// Address: 0x106150 - 0x1061a0
void sceDevConsGetc_0x106150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsGetc_0x106150");
#endif

    switch (ctx->pc) {
        case 0x106168u: goto label_106168;
        default: break;
    }

    ctx->pc = 0x106150u;

    // 0x106150: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106150u;
    {
        const bool branch_taken_0x106150 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x106150) {
            ctx->pc = 0x106168u;
            goto label_106168;
        }
    }
    ctx->pc = 0x106158u;
    // 0x106158: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10615c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x10615cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x106160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106160u;
    {
        const bool branch_taken_0x106160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106160) {
            ctx->pc = 0x106170u;
            goto label_106170;
        }
    }
    ctx->pc = 0x106168u;
label_106168:
    // 0x106168: 0x3e00008  jr          $ra
    ctx->pc = 0x106168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106168u;
            // 0x10616c: 0x24020720  addiu       $v0, $zero, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106170u;
label_106170:
    // 0x106170: 0x4c0fffd  bltz        $a2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x106170u;
    {
        const bool branch_taken_0x106170 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x106170) {
            ctx->pc = 0x106168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106168;
        }
    }
    ctx->pc = 0x106178u;
    // 0x106178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x106178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10617c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106180: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x106180u;
    {
        const bool branch_taken_0x106180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106180u;
            // 0x106184: 0xc31018  mult        $v0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106180) {
            ctx->pc = 0x106168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106168;
        }
    }
    ctx->pc = 0x106188u;
    // 0x106188: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x106188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10618c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106190: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x106190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x106194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106198: 0x3e00008  jr          $ra
    ctx->pc = 0x106198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106198u;
            // 0x10619c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1061A0u;
}
