#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuRemovalKey__Fv
// Address: 0x1fe100 - 0x1fe108
void MenuRemovalKey__Fv_0x1fe100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuRemovalKey__Fv_0x1fe100");
#endif

    ctx->pc = 0x1fe100u;

    // 0x1fe100: 0x807f280  j           func_1FCA00
    ctx->pc = 0x1FE100u;
    ctx->pc = 0x1FE104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE100u;
            // 0x1fe104: 0x8f8490d0  lw          $a0, -0x6F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA00u;
    if (runtime->hasFunction(0x1FCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1FCA00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__12CRemovalMenuFv_0x1fca00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE108u;
}
