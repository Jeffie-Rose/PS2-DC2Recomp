#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__10CFuncPointFPf
// Address: 0x1643a0 - 0x1643bc
void SetScale__10CFuncPointFPf_0x1643a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__10CFuncPointFPf_0x1643a0");
#endif

    switch (ctx->pc) {
        case 0x1643a0u: goto label_1643a0;
        case 0x1643a4u: goto label_1643a4;
        case 0x1643a8u: goto label_1643a8;
        case 0x1643acu: goto label_1643ac;
        case 0x1643b0u: goto label_1643b0;
        case 0x1643b4u: goto label_1643b4;
        case 0x1643b8u: goto label_1643b8;
        default: break;
    }

    ctx->pc = 0x1643a0u;

label_1643a0:
    // 0x1643a0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1643a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1643a4:
    // 0x1643a4: 0x7c8201a0  sq          $v0, 0x1A0($a0)
    ctx->pc = 0x1643a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 416), GPR_VEC(ctx, 2));
label_1643a8:
    // 0x1643a8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1643ac:
    // 0x1643ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1643b0:
    // 0x1643b0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1643b4:
    // 0x1643b4: 0x3200008  jr          $t9
label_1643b8:
    if (ctx->pc == 0x1643B8u) {
        ctx->pc = 0x1643BCu;
        goto label_fallthrough_0x1643b4;
    }
    ctx->pc = 0x1643B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1643b4:
    ctx->pc = 0x1643BCu;
}
