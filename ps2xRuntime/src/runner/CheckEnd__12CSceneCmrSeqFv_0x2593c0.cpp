#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnd__12CSceneCmrSeqFv
// Address: 0x2593c0 - 0x259404
void CheckEnd__12CSceneCmrSeqFv_0x2593c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnd__12CSceneCmrSeqFv_0x2593c0");
#endif

    ctx->pc = 0x2593c0u;

    // 0x2593c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2593c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2593c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2593C4u;
    {
        const bool branch_taken_0x2593c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2593C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2593C4u;
            // 0x2593c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593c4) {
            ctx->pc = 0x2593FCu;
            goto label_2593fc;
        }
    }
    ctx->pc = 0x2593CCu;
    // 0x2593cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2593ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2593d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2593D0u;
    {
        const bool branch_taken_0x2593d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2593d0) {
            ctx->pc = 0x2593F8u;
            goto label_2593f8;
        }
    }
    ctx->pc = 0x2593D8u;
    // 0x2593d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2593d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2593dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2593DCu;
    {
        const bool branch_taken_0x2593dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2593dc) {
            ctx->pc = 0x2593F8u;
            goto label_2593f8;
        }
    }
    ctx->pc = 0x2593E4u;
    // 0x2593e4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2593e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2593e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2593E8u;
    {
        const bool branch_taken_0x2593e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2593ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2593E8u;
            // 0x2593ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593e8) {
            ctx->pc = 0x2593F8u;
            goto label_2593f8;
        }
    }
    ctx->pc = 0x2593F0u;
    // 0x2593f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2593F0u;
    {
        const bool branch_taken_0x2593f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593f0) {
            ctx->pc = 0x2593FCu;
            goto label_2593fc;
        }
    }
    ctx->pc = 0x2593F8u;
label_2593f8:
    // 0x2593f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2593f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2593fc:
    // 0x2593fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2593FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259404u;
}
