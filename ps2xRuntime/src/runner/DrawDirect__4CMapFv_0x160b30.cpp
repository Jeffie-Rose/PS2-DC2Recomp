#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__4CMapFv
// Address: 0x160b30 - 0x160b44
void DrawDirect__4CMapFv_0x160b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__4CMapFv_0x160b30");
#endif

    switch (ctx->pc) {
        case 0x160b30u: goto label_160b30;
        case 0x160b34u: goto label_160b34;
        case 0x160b38u: goto label_160b38;
        case 0x160b3cu: goto label_160b3c;
        case 0x160b40u: goto label_160b40;
        default: break;
    }

    ctx->pc = 0x160b30u;

label_160b30:
    // 0x160b30: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x160b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_160b34:
    // 0x160b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160b38:
    // 0x160b38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x160b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_160b3c:
    // 0x160b3c: 0x3200008  jr          $t9
label_160b40:
    if (ctx->pc == 0x160B40u) {
        ctx->pc = 0x160B44u;
        goto label_fallthrough_0x160b3c;
    }
    ctx->pc = 0x160B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x160b3c:
    ctx->pc = 0x160B44u;
}
