#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStack__6CSceneFiP9mgCMemory
// Address: 0x283150 - 0x283184
void SetStack__6CSceneFiP9mgCMemory_0x283150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__6CSceneFiP9mgCMemory_0x283150");
#endif

    ctx->pc = 0x283150u;

    // 0x283150: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x283150u;
    {
        const bool branch_taken_0x283150 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x283150) {
            ctx->pc = 0x28317Cu;
            goto label_28317c;
        }
    }
    ctx->pc = 0x283158u;
    // 0x283158: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x283158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28315c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x28315cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283160: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283160u;
    {
        const bool branch_taken_0x283160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283160u;
            // 0x283164: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283160) {
            ctx->pc = 0x283174u;
            goto label_283174;
        }
    }
    ctx->pc = 0x283168u;
    // 0x283168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283168u;
    {
        const bool branch_taken_0x283168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283168) {
            ctx->pc = 0x28317Cu;
            goto label_28317c;
        }
    }
    ctx->pc = 0x283170u;
    // 0x283170: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x283170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_283174:
    // 0x283174: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x283178: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x283178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_28317c:
    // 0x28317c: 0x3e00008  jr          $ra
    ctx->pc = 0x28317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283184u;
}
