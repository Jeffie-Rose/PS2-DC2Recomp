#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: On__8CGamePadFi
// Address: 0x14b3c0 - 0x14b3e8
void On__8CGamePadFi_0x14b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("On__8CGamePadFi_0x14b3c0");
#endif

    ctx->pc = 0x14b3c0u;

    // 0x14b3c0: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B3C4u;
    {
        const bool branch_taken_0x14b3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3C4u;
            // 0x14b3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3c4) {
            ctx->pc = 0x14B3D4u;
            goto label_14b3d4;
        }
    }
    ctx->pc = 0x14B3CCu;
    // 0x14b3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B3CCu;
    {
        const bool branch_taken_0x14b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3cc) {
            ctx->pc = 0x14B3E0u;
            goto label_14b3e0;
        }
    }
    ctx->pc = 0x14B3D4u;
label_14b3d4:
    // 0x14b3d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b3d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14b3dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14b3e0:
    // 0x14b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B3E8u;
}
