#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pGetFramePose__13CDynamicAnimeFi
// Address: 0x17a930 - 0x17a968
void pGetFramePose__13CDynamicAnimeFi_0x17a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pGetFramePose__13CDynamicAnimeFi_0x17a930");
#endif

    ctx->pc = 0x17a930u;

    // 0x17a930: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A930u;
    {
        const bool branch_taken_0x17a930 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A930u;
            // 0x17a934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a930) {
            ctx->pc = 0x17A94Cu;
            goto label_17a94c;
        }
    }
    ctx->pc = 0x17A938u;
    // 0x17a938: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a93c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17a93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a940: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A940u;
    {
        const bool branch_taken_0x17a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a940) {
            ctx->pc = 0x17A954u;
            goto label_17a954;
        }
    }
    ctx->pc = 0x17A948u;
    // 0x17a948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a94c:
    // 0x17a94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A94Cu;
    {
        const bool branch_taken_0x17a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a94c) {
            ctx->pc = 0x17A960u;
            goto label_17a960;
        }
    }
    ctx->pc = 0x17A954u;
label_17a954:
    // 0x17a954: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17a958: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x17a958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17a95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a960:
    // 0x17a960: 0x3e00008  jr          $ra
    ctx->pc = 0x17A960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A968u;
}
