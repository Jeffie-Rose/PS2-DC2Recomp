#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuestClear__10CQuestDataFi
// Address: 0x31aa70 - 0x31aaa4
void QuestClear__10CQuestDataFi_0x31aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuestClear__10CQuestDataFi_0x31aa70");
#endif

    ctx->pc = 0x31aa70u;

    // 0x31aa70: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x31AA70u;
    {
        const bool branch_taken_0x31aa70 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x31aa70) {
            ctx->pc = 0x31AA9Cu;
            goto label_31aa9c;
        }
    }
    ctx->pc = 0x31AA78u;
    // 0x31aa78: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x31aa78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31aa7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AA7Cu;
    {
        const bool branch_taken_0x31aa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AA7Cu;
            // 0x31aa80: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa7c) {
            ctx->pc = 0x31AA90u;
            goto label_31aa90;
        }
    }
    ctx->pc = 0x31AA84u;
    // 0x31aa84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31AA84u;
    {
        const bool branch_taken_0x31aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa84) {
            ctx->pc = 0x31AA9Cu;
            goto label_31aa9c;
        }
    }
    ctx->pc = 0x31AA8Cu;
    // 0x31aa8c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x31aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_31aa90:
    // 0x31aa90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aa94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31aa98: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x31aa98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_31aa9c:
    // 0x31aa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AAA4u;
}
