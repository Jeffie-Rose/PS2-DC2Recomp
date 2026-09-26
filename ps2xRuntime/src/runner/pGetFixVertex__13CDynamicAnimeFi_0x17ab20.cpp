#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pGetFixVertex__13CDynamicAnimeFi
// Address: 0x17ab20 - 0x17ab58
void pGetFixVertex__13CDynamicAnimeFi_0x17ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pGetFixVertex__13CDynamicAnimeFi_0x17ab20");
#endif

    ctx->pc = 0x17ab20u;

    // 0x17ab20: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AB20u;
    {
        const bool branch_taken_0x17ab20 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB20u;
            // 0x17ab24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab20) {
            ctx->pc = 0x17AB3Cu;
            goto label_17ab3c;
        }
    }
    ctx->pc = 0x17AB28u;
    // 0x17ab28: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17ab2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17ab2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ab30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB30u;
    {
        const bool branch_taken_0x17ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ab30) {
            ctx->pc = 0x17AB44u;
            goto label_17ab44;
        }
    }
    ctx->pc = 0x17AB38u;
    // 0x17ab38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ab38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ab3c:
    // 0x17ab3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB3Cu;
    {
        const bool branch_taken_0x17ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab3c) {
            ctx->pc = 0x17AB50u;
            goto label_17ab50;
        }
    }
    ctx->pc = 0x17AB44u;
label_17ab44:
    // 0x17ab44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x17ab48: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17ab4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ab50:
    // 0x17ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AB58u;
}
