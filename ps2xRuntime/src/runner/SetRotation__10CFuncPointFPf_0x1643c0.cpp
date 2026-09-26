#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotation__10CFuncPointFPf
// Address: 0x1643c0 - 0x1643dc
void SetRotation__10CFuncPointFPf_0x1643c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotation__10CFuncPointFPf_0x1643c0");
#endif

    switch (ctx->pc) {
        case 0x1643c0u: goto label_1643c0;
        case 0x1643c4u: goto label_1643c4;
        case 0x1643c8u: goto label_1643c8;
        case 0x1643ccu: goto label_1643cc;
        case 0x1643d0u: goto label_1643d0;
        case 0x1643d4u: goto label_1643d4;
        case 0x1643d8u: goto label_1643d8;
        default: break;
    }

    ctx->pc = 0x1643c0u;

label_1643c0:
    // 0x1643c0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1643c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1643c4:
    // 0x1643c4: 0x7c820190  sq          $v0, 0x190($a0)
    ctx->pc = 0x1643c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 400), GPR_VEC(ctx, 2));
label_1643c8:
    // 0x1643c8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1643cc:
    // 0x1643cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1643ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1643d0:
    // 0x1643d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1643d4:
    // 0x1643d4: 0x3200008  jr          $t9
label_1643d8:
    if (ctx->pc == 0x1643D8u) {
        ctx->pc = 0x1643DCu;
        goto label_fallthrough_0x1643d4;
    }
    ctx->pc = 0x1643D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1643d4:
    ctx->pc = 0x1643DCu;
}
