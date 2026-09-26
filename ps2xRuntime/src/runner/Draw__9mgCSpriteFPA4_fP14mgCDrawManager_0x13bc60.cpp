#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9mgCSpriteFPA4_fP14mgCDrawManager
// Address: 0x13bc60 - 0x13bc80
void Draw__9mgCSpriteFPA4_fP14mgCDrawManager_0x13bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9mgCSpriteFPA4_fP14mgCDrawManager_0x13bc60");
#endif

    switch (ctx->pc) {
        case 0x13bc60u: goto label_13bc60;
        case 0x13bc64u: goto label_13bc64;
        case 0x13bc68u: goto label_13bc68;
        case 0x13bc6cu: goto label_13bc6c;
        case 0x13bc70u: goto label_13bc70;
        case 0x13bc74u: goto label_13bc74;
        case 0x13bc78u: goto label_13bc78;
        case 0x13bc7cu: goto label_13bc7c;
        default: break;
    }

    ctx->pc = 0x13bc60u;

label_13bc60:
    // 0x13bc60: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x13bc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_13bc64:
    // 0x13bc64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13bc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bc68:
    // 0x13bc68: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13bc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13bc6c:
    // 0x13bc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bc70:
    // 0x13bc70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13bc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bc74:
    // 0x13bc74: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x13bc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_13bc78:
    // 0x13bc78: 0x3200008  jr          $t9
label_13bc7c:
    if (ctx->pc == 0x13BC7Cu) {
        ctx->pc = 0x13BC80u;
        goto label_fallthrough_0x13bc78;
    }
    ctx->pc = 0x13BC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13bc78:
    ctx->pc = 0x13BC80u;
}
