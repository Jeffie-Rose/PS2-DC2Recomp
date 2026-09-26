#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8mgCFrameFv
// Address: 0x1387f0 - 0x138804
void Draw__8mgCFrameFv_0x1387f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8mgCFrameFv_0x1387f0");
#endif

    switch (ctx->pc) {
        case 0x1387f0u: goto label_1387f0;
        case 0x1387f4u: goto label_1387f4;
        case 0x1387f8u: goto label_1387f8;
        case 0x1387fcu: goto label_1387fc;
        case 0x138800u: goto label_138800;
        default: break;
    }

    ctx->pc = 0x1387f0u;

label_1387f0:
    // 0x1387f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1387f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1387f4:
    // 0x1387f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1387f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1387f8:
    // 0x1387f8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1387f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1387fc:
    // 0x1387fc: 0x3200008  jr          $t9
label_138800:
    if (ctx->pc == 0x138800u) {
        ctx->pc = 0x138804u;
        goto label_fallthrough_0x1387fc;
    }
    ctx->pc = 0x1387FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1387fc:
    ctx->pc = 0x138804u;
}
