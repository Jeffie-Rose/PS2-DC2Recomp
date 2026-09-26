#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetCameraPos__FPf
// Address: 0x145b40 - 0x145b54
void mgGetCameraPos__FPf_0x145b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetCameraPos__FPf_0x145b40");
#endif

    ctx->pc = 0x145b40u;

    // 0x145b40: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x145b44: 0x24631260  addiu       $v1, $v1, 0x1260
    ctx->pc = 0x145b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4704));
    // 0x145b48: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x145b48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x145B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B4Cu;
            // 0x145b50: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145B54u;
}
