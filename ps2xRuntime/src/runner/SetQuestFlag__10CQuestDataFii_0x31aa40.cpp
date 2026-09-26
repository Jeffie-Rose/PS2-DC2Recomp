#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetQuestFlag__10CQuestDataFii
// Address: 0x31aa40 - 0x31aa70
void SetQuestFlag__10CQuestDataFii_0x31aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetQuestFlag__10CQuestDataFii_0x31aa40");
#endif

    ctx->pc = 0x31aa40u;

    // 0x31aa40: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31AA40u;
    {
        const bool branch_taken_0x31aa40 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x31aa40) {
            ctx->pc = 0x31AA68u;
            goto label_31aa68;
        }
    }
    ctx->pc = 0x31AA48u;
    // 0x31aa48: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x31aa48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31aa4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AA4Cu;
    {
        const bool branch_taken_0x31aa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AA4Cu;
            // 0x31aa50: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa4c) {
            ctx->pc = 0x31AA60u;
            goto label_31aa60;
        }
    }
    ctx->pc = 0x31AA54u;
    // 0x31aa54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31AA54u;
    {
        const bool branch_taken_0x31aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa54) {
            ctx->pc = 0x31AA68u;
            goto label_31aa68;
        }
    }
    ctx->pc = 0x31AA5Cu;
    // 0x31aa5c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x31aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_31aa60:
    // 0x31aa60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31aa64: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x31aa64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_31aa68:
    // 0x31aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AA70u;
}
