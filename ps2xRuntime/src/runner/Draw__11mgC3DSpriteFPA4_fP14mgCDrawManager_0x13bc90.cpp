#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11mgC3DSpriteFPA4_fP14mgCDrawManager
// Address: 0x13bc90 - 0x13bcb0
void Draw__11mgC3DSpriteFPA4_fP14mgCDrawManager_0x13bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11mgC3DSpriteFPA4_fP14mgCDrawManager_0x13bc90");
#endif

    switch (ctx->pc) {
        case 0x13bc90u: goto label_13bc90;
        case 0x13bc94u: goto label_13bc94;
        case 0x13bc98u: goto label_13bc98;
        case 0x13bc9cu: goto label_13bc9c;
        case 0x13bca0u: goto label_13bca0;
        case 0x13bca4u: goto label_13bca4;
        case 0x13bca8u: goto label_13bca8;
        case 0x13bcacu: goto label_13bcac;
        default: break;
    }

    ctx->pc = 0x13bc90u;

label_13bc90:
    // 0x13bc90: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x13bc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_13bc94:
    // 0x13bc94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13bc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bc98:
    // 0x13bc98: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13bc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13bc9c:
    // 0x13bc9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bca0:
    // 0x13bca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13bca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bca4:
    // 0x13bca4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x13bca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_13bca8:
    // 0x13bca8: 0x3200008  jr          $t9
label_13bcac:
    if (ctx->pc == 0x13BCACu) {
        ctx->pc = 0x13BCB0u;
        goto label_fallthrough_0x13bca8;
    }
    ctx->pc = 0x13BCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13bca8:
    ctx->pc = 0x13BCB0u;
}
