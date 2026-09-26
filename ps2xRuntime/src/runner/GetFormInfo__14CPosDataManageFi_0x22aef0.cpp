#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFormInfo__14CPosDataManageFi
// Address: 0x22aef0 - 0x22af28
void GetFormInfo__14CPosDataManageFi_0x22aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFormInfo__14CPosDataManageFi_0x22aef0");
#endif

    ctx->pc = 0x22aef0u;

    // 0x22aef0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AEF0u;
    {
        const bool branch_taken_0x22aef0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AEF0u;
            // 0x22aef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aef0) {
            ctx->pc = 0x22AF0Cu;
            goto label_22af0c;
        }
    }
    ctx->pc = 0x22AEF8u;
    // 0x22aef8: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x22aef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x22aefc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22af00: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AF00u;
    {
        const bool branch_taken_0x22af00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af00) {
            ctx->pc = 0x22AF14u;
            goto label_22af14;
        }
    }
    ctx->pc = 0x22AF08u;
    // 0x22af08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22af08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22af0c:
    // 0x22af0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AF0Cu;
    {
        const bool branch_taken_0x22af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af0c) {
            ctx->pc = 0x22AF20u;
            goto label_22af20;
        }
    }
    ctx->pc = 0x22AF14u;
label_22af14:
    // 0x22af14: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22af18: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x22af1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22af20:
    // 0x22af20: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AF28u;
}
