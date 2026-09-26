#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsWallParts__10CEditPartsFv
// Address: 0x1b5a90 - 0x1b5abc
void IsWallParts__10CEditPartsFv_0x1b5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsWallParts__10CEditPartsFv_0x1b5a90");
#endif

    ctx->pc = 0x1b5a90u;

    // 0x1b5a90: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5a94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A94u;
    {
        const bool branch_taken_0x1b5a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a94) {
            ctx->pc = 0x1B5AA4u;
            goto label_1b5aa4;
        }
    }
    ctx->pc = 0x1B5A9Cu;
    // 0x1b5a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5A9Cu;
    {
        const bool branch_taken_0x1b5a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A9Cu;
            // 0x1b5aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a9c) {
            ctx->pc = 0x1B5AB4u;
            goto label_1b5ab4;
        }
    }
    ctx->pc = 0x1B5AA4u;
label_1b5aa4:
    // 0x1b5aa4: 0x8c4201a4  lw          $v0, 0x1A4($v0)
    ctx->pc = 0x1b5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x1b5aa8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1b5aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b5aac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b5ab0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b5ab4:
    // 0x1b5ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5ABCu;
}
