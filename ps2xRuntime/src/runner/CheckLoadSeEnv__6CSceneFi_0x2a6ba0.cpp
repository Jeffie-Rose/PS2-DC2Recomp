#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadSeEnv__6CSceneFi
// Address: 0x2a6ba0 - 0x2a6bc8
void CheckLoadSeEnv__6CSceneFi_0x2a6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadSeEnv__6CSceneFi_0x2a6ba0");
#endif

    ctx->pc = 0x2a6ba0u;

    // 0x2a6ba0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6BA0u;
    {
        const bool branch_taken_0x2a6ba0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BA0u;
            // 0x2a6ba4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ba0) {
            ctx->pc = 0x2A6BB0u;
            goto label_2a6bb0;
        }
    }
    ctx->pc = 0x2A6BA8u;
    // 0x2a6ba8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6BA8u;
    {
        const bool branch_taken_0x2a6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BA8u;
            // 0x2a6bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ba8) {
            ctx->pc = 0x2A6BC0u;
            goto label_2a6bc0;
        }
    }
    ctx->pc = 0x2A6BB0u;
label_2a6bb0:
    // 0x2a6bb0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6bb4: 0x8c22a044  lw          $v0, -0x5FBC($at)
    ctx->pc = 0x2a6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942788)));
    // 0x2a6bb8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2a6bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2a6bbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a6bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6bc0:
    // 0x2a6bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6BC8u;
}
