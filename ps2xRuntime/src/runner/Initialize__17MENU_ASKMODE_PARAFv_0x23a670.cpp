#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__17MENU_ASKMODE_PARAFv
// Address: 0x23a670 - 0x23a67c
void Initialize__17MENU_ASKMODE_PARAFv_0x23a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__17MENU_ASKMODE_PARAFv_0x23a670");
#endif

    ctx->pc = 0x23a670u;

    // 0x23a670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a674: 0x8049c86  j           func_127218
    ctx->pc = 0x23A674u;
    ctx->pc = 0x23A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A674u;
            // 0x23a678: 0x24060094  addiu       $a2, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23A67Cu;
}
