#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishPosVelo__FPfPf
// Address: 0x311070 - 0x311094
void GetFishPosVelo__FPfPf_0x311070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishPosVelo__FPfPf_0x311070");
#endif

    ctx->pc = 0x311070u;

    // 0x311070: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311074: 0x2463ed60  addiu       $v1, $v1, -0x12A0
    ctx->pc = 0x311074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
    // 0x311078: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x311078u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31107c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x31107cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311080: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x311080u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x311084: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x311084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
    // 0x311088: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x311088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31108c: 0x3e00008  jr          $ra
    ctx->pc = 0x31108Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31108Cu;
            // 0x311090: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311094u;
}
