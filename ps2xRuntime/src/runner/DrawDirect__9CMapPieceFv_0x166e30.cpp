#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__9CMapPieceFv
// Address: 0x166e30 - 0x166e38
void DrawDirect__9CMapPieceFv_0x166e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__9CMapPieceFv_0x166e30");
#endif

    ctx->pc = 0x166e30u;

    // 0x166e30: 0x805a1cc  j           func_168730
    ctx->pc = 0x166E30u;
    ctx->pc = 0x166E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E30u;
            // 0x166e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168730u;
    if (runtime->hasFunction(0x168730u)) {
        auto targetFn = runtime->lookupFunction(0x168730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawSub__9CMapPieceFi_0x168730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x166E38u;
}
