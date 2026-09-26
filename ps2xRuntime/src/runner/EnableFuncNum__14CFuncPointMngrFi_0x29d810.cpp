#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableFuncNum__14CFuncPointMngrFi
// Address: 0x29d810 - 0x29d868
void EnableFuncNum__14CFuncPointMngrFi_0x29d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableFuncNum__14CFuncPointMngrFi_0x29d810");
#endif

    switch (ctx->pc) {
        case 0x29d840u: goto label_29d840;
        default: break;
    }

    ctx->pc = 0x29d810u;

    // 0x29d810: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D810u;
    {
        const bool branch_taken_0x29d810 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D810u;
            // 0x29d814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d810) {
            ctx->pc = 0x29D828u;
            goto label_29d828;
        }
    }
    ctx->pc = 0x29D818u;
    // 0x29d818: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x29d818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d81c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D81Cu;
    {
        const bool branch_taken_0x29d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D81Cu;
            // 0x29d820: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d81c) {
            ctx->pc = 0x29D830u;
            goto label_29d830;
        }
    }
    ctx->pc = 0x29D824u;
    // 0x29d824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d828:
    // 0x29d828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29D828u;
    {
        const bool branch_taken_0x29d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d828) {
            ctx->pc = 0x29D860u;
            goto label_29d860;
        }
    }
    ctx->pc = 0x29D830u;
label_29d830:
    // 0x29d830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d834: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29d838: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D838u;
    {
        const bool branch_taken_0x29d838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D838u;
            // 0x29d83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d838) {
            ctx->pc = 0x29D860u;
            goto label_29d860;
        }
    }
    ctx->pc = 0x29D840u;
label_29d840:
    // 0x29d840: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x29d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x29d844: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D844u;
    {
        const bool branch_taken_0x29d844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d844) {
            ctx->pc = 0x29D850u;
            goto label_29d850;
        }
    }
    ctx->pc = 0x29D84Cu;
    // 0x29d84c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29d850:
    // 0x29d850: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d854: 0x0  nop
    ctx->pc = 0x29d854u;
    // NOP
    // 0x29d858: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D858u;
    {
        const bool branch_taken_0x29d858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d858) {
            ctx->pc = 0x29D840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d840;
        }
    }
    ctx->pc = 0x29D860u;
label_29d860:
    // 0x29d860: 0x3e00008  jr          $ra
    ctx->pc = 0x29D860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D868u;
}
