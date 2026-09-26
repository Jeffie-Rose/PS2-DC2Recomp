#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__4CMapFv
// Address: 0x160b10 - 0x160b24
void Draw__4CMapFv_0x160b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__4CMapFv_0x160b10");
#endif

    switch (ctx->pc) {
        case 0x160b10u: goto label_160b10;
        case 0x160b14u: goto label_160b14;
        case 0x160b18u: goto label_160b18;
        case 0x160b1cu: goto label_160b1c;
        case 0x160b20u: goto label_160b20;
        default: break;
    }

    ctx->pc = 0x160b10u;

label_160b10:
    // 0x160b10: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_160b14:
    // 0x160b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160b18:
    // 0x160b18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_160b1c:
    // 0x160b1c: 0x3200008  jr          $t9
label_160b20:
    if (ctx->pc == 0x160B20u) {
        ctx->pc = 0x160B24u;
        goto label_fallthrough_0x160b1c;
    }
    ctx->pc = 0x160B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x160b1c:
    ctx->pc = 0x160B24u;
}
