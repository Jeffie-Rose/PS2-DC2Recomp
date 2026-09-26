#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadSeBase__6CSceneFi
// Address: 0x2a6c00 - 0x2a6c28
void CheckLoadSeBase__6CSceneFi_0x2a6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadSeBase__6CSceneFi_0x2a6c00");
#endif

    ctx->pc = 0x2a6c00u;

    // 0x2a6c00: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6C00u;
    {
        const bool branch_taken_0x2a6c00 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C00u;
            // 0x2a6c04: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c00) {
            ctx->pc = 0x2A6C10u;
            goto label_2a6c10;
        }
    }
    ctx->pc = 0x2A6C08u;
    // 0x2a6c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6C08u;
    {
        const bool branch_taken_0x2a6c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C08u;
            // 0x2a6c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c08) {
            ctx->pc = 0x2A6C20u;
            goto label_2a6c20;
        }
    }
    ctx->pc = 0x2A6C10u;
label_2a6c10:
    // 0x2a6c10: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6c10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6c14: 0x8c22a49c  lw          $v0, -0x5B64($at)
    ctx->pc = 0x2a6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943900)));
    // 0x2a6c18: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2a6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2a6c1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a6c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6c20:
    // 0x2a6c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6C28u;
}
