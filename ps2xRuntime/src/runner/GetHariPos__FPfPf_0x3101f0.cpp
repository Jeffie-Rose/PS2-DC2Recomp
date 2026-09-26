#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHariPos__FPfPf
// Address: 0x3101f0 - 0x310214
void GetHariPos__FPfPf_0x3101f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHariPos__FPfPf_0x3101f0");
#endif

    ctx->pc = 0x3101f0u;

    // 0x3101f0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3101f4: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x3101f8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3101f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3101fc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3101fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310200: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x310200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x310204: 0x2463ec80  addiu       $v1, $v1, -0x1380
    ctx->pc = 0x310204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x310208: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31020c: 0x3e00008  jr          $ra
    ctx->pc = 0x31020Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31020Cu;
            // 0x310210: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310214u;
}
