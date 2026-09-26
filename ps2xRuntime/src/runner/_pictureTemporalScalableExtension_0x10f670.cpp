#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureTemporalScalableExtension
// Address: 0x10f670 - 0x10f67c
void _pictureTemporalScalableExtension_0x10f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureTemporalScalableExtension_0x10f670");
#endif

    ctx->pc = 0x10f670u;

    // 0x10f670: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10f670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10f674: 0x8043b64  j           func_10ED90
    ctx->pc = 0x10F674u;
    ctx->pc = 0x10F678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F674u;
            // 0x10f678: 0x24a50a48  addiu       $a1, $a1, 0xA48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x10ed90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F67Cu;
}
