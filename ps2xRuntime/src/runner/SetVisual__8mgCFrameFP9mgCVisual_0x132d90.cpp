#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVisual__8mgCFrameFP9mgCVisual
// Address: 0x132d90 - 0x132d9c
void SetVisual__8mgCFrameFP9mgCVisual_0x132d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVisual__8mgCFrameFP9mgCVisual_0x132d90");
#endif

    ctx->pc = 0x132d90u;

    // 0x132d90: 0xac8500f8  sw          $a1, 0xF8($a0)
    ctx->pc = 0x132d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
    // 0x132d94: 0x3e00008  jr          $ra
    ctx->pc = 0x132D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132D9Cu;
}
