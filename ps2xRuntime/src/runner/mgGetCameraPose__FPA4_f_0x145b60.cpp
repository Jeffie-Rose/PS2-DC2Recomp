#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetCameraPose__FPA4_f
// Address: 0x145b60 - 0x145ba4
void mgGetCameraPose__FPA4_f_0x145b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetCameraPose__FPA4_f_0x145b60");
#endif

    ctx->pc = 0x145b60u;

    // 0x145b60: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x145b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x145b64: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x145b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x145b68: 0x24631270  addiu       $v1, $v1, 0x1270
    ctx->pc = 0x145b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4720));
    // 0x145b6c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x145b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x145b70: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x145b70u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b74: 0x24c61280  addiu       $a2, $a2, 0x1280
    ctx->pc = 0x145b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4736));
    // 0x145b78: 0x24a51290  addiu       $a1, $a1, 0x1290
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4752));
    // 0x145b7c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x145b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x145b80: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x145b84: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x145b84u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b88: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x145b8c: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x145b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x145b90: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x145b90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145b94: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x145b94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x145b98: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x145b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x145B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B9Cu;
            // 0x145ba0: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145BA4u;
}
