#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUkiPos__FPfPf
// Address: 0x310220 - 0x310244
void GetUkiPos__FPfPf_0x310220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUkiPos__FPfPf_0x310220");
#endif

    ctx->pc = 0x310220u;

    // 0x310220: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310224: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x310224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x310228: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x310228u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31022c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310230: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x310230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x310234: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x310238: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31023c: 0x3e00008  jr          $ra
    ctx->pc = 0x31023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31023Cu;
            // 0x310240: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310244u;
}
