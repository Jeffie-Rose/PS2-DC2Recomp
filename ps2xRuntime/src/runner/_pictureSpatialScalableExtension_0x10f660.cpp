#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureSpatialScalableExtension
// Address: 0x10f660 - 0x10f66c
void _pictureSpatialScalableExtension_0x10f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureSpatialScalableExtension_0x10f660");
#endif

    ctx->pc = 0x10f660u;

    // 0x10f660: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10f664: 0x8043b64  j           func_10ED90
    ctx->pc = 0x10F664u;
    ctx->pc = 0x10F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F664u;
            // 0x10f668: 0x24a50a10  addiu       $a1, $a1, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x10ed90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F66Cu;
}
