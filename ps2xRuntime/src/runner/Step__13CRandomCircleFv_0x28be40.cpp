#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CRandomCircleFv
// Address: 0x28be40 - 0x28be54
void Step__13CRandomCircleFv_0x28be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CRandomCircleFv_0x28be40");
#endif

    switch (ctx->pc) {
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        default: break;
    }

    ctx->pc = 0x28be40u;

label_28be40:
    // 0x28be40: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x28be40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_28be44:
    // 0x28be44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28be44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28be48:
    // 0x28be48: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x28be48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_28be4c:
    // 0x28be4c: 0x3200008  jr          $t9
label_28be50:
    if (ctx->pc == 0x28BE50u) {
        ctx->pc = 0x28BE54u;
        goto label_fallthrough_0x28be4c;
    }
    ctx->pc = 0x28BE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28be4c:
    ctx->pc = 0x28BE54u;
}
