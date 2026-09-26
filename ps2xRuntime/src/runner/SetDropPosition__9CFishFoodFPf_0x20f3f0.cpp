#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDropPosition__9CFishFoodFPf
// Address: 0x20f3f0 - 0x20f40c
void SetDropPosition__9CFishFoodFPf_0x20f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDropPosition__9CFishFoodFPf_0x20f3f0");
#endif

    switch (ctx->pc) {
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        default: break;
    }

    ctx->pc = 0x20f3f0u;

label_20f3f0:
    // 0x20f3f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x20f3f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20f3f4:
    // 0x20f3f4: 0x7c820670  sq          $v0, 0x670($a0)
    ctx->pc = 0x20f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1648), GPR_VEC(ctx, 2));
label_20f3f8:
    // 0x20f3f8: 0x24850670  addiu       $a1, $a0, 0x670
    ctx->pc = 0x20f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1648));
label_20f3fc:
    // 0x20f3fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20f3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20f400:
    // 0x20f400: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x20f400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20f404:
    // 0x20f404: 0x3200008  jr          $t9
label_20f408:
    if (ctx->pc == 0x20F408u) {
        ctx->pc = 0x20F40Cu;
        goto label_fallthrough_0x20f404;
    }
    ctx->pc = 0x20F404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20f404:
    ctx->pc = 0x20F40Cu;
}
