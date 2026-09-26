#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadSeBattle__6CSceneFi
// Address: 0x2a6bd0 - 0x2a6bf8
void CheckLoadSeBattle__6CSceneFi_0x2a6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadSeBattle__6CSceneFi_0x2a6bd0");
#endif

    ctx->pc = 0x2a6bd0u;

    // 0x2a6bd0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6BD0u;
    {
        const bool branch_taken_0x2a6bd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BD0u;
            // 0x2a6bd4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bd0) {
            ctx->pc = 0x2A6BE0u;
            goto label_2a6be0;
        }
    }
    ctx->pc = 0x2A6BD8u;
    // 0x2a6bd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6BD8u;
    {
        const bool branch_taken_0x2a6bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BD8u;
            // 0x2a6bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bd8) {
            ctx->pc = 0x2A6BF0u;
            goto label_2a6bf0;
        }
    }
    ctx->pc = 0x2A6BE0u;
label_2a6be0:
    // 0x2a6be0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6be4: 0x8c22c4d4  lw          $v0, -0x3B2C($at)
    ctx->pc = 0x2a6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952148)));
    // 0x2a6be8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2a6be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2a6bec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a6becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6bf0:
    // 0x2a6bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6BF8u;
}
