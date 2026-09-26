#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LiveChara__10CEditHouseFv
// Address: 0x1b5790 - 0x1b57cc
void LiveChara__10CEditHouseFv_0x1b5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LiveChara__10CEditHouseFv_0x1b5790");
#endif

    switch (ctx->pc) {
        case 0x1b5798u: goto label_1b5798;
        default: break;
    }

    ctx->pc = 0x1b5790u;

    // 0x1b5790: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b5790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5798:
    // 0x1b5798: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1b5798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b579c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b57a0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B57A0u;
    {
        const bool branch_taken_0x1b57a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B57A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57A0u;
            // 0x1b57a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57a0) {
            ctx->pc = 0x1B57B0u;
            goto label_1b57b0;
        }
    }
    ctx->pc = 0x1B57A8u;
    // 0x1b57a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B57A8u;
    {
        const bool branch_taken_0x1b57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b57a8) {
            ctx->pc = 0x1B57C4u;
            goto label_1b57c4;
        }
    }
    ctx->pc = 0x1B57B0u;
label_1b57b0:
    // 0x1b57b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b57b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1b57b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b57b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B57B8u;
    {
        const bool branch_taken_0x1b57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B57BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57B8u;
            // 0x1b57bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57b8) {
            ctx->pc = 0x1B5798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5798;
        }
    }
    ctx->pc = 0x1B57C0u;
    // 0x1b57c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b57c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b57c4:
    // 0x1b57c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B57C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B57CCu;
}
