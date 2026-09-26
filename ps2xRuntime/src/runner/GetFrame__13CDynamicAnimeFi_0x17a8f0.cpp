#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFrame__13CDynamicAnimeFi
// Address: 0x17a8f0 - 0x17a930
void GetFrame__13CDynamicAnimeFi_0x17a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFrame__13CDynamicAnimeFi_0x17a8f0");
#endif

    ctx->pc = 0x17a8f0u;

    // 0x17a8f0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A8F0u;
    {
        const bool branch_taken_0x17a8f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8F0u;
            // 0x17a8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8f0) {
            ctx->pc = 0x17A90Cu;
            goto label_17a90c;
        }
    }
    ctx->pc = 0x17A8F8u;
    // 0x17a8f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a8fc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A900u;
    {
        const bool branch_taken_0x17a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a900) {
            ctx->pc = 0x17A914u;
            goto label_17a914;
        }
    }
    ctx->pc = 0x17A908u;
    // 0x17a908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a90c:
    // 0x17a90c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17A90Cu;
    {
        const bool branch_taken_0x17a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a90c) {
            ctx->pc = 0x17A928u;
            goto label_17a928;
        }
    }
    ctx->pc = 0x17A914u;
label_17a914:
    // 0x17a914: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17a918: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17a91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a924: 0x0  nop
    ctx->pc = 0x17a924u;
    // NOP
label_17a928:
    // 0x17a928: 0x3e00008  jr          $ra
    ctx->pc = 0x17A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A930u;
}
