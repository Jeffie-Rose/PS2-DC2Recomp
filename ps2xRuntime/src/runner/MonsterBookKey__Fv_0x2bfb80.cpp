#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterBookKey__Fv
// Address: 0x2bfb80 - 0x2bfb88
void MonsterBookKey__Fv_0x2bfb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterBookKey__Fv_0x2bfb80");
#endif

    ctx->pc = 0x2bfb80u;

    // 0x2bfb80: 0x80afd04  j           func_2BF410
    ctx->pc = 0x2BFB80u;
    ctx->pc = 0x2BFB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB80u;
            // 0x2bfb84: 0x8f849c48  lw          $a0, -0x63B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF410u;
    if (runtime->hasFunction(0x2BF410u)) {
        auto targetFn = runtime->lookupFunction(0x2BF410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__12CMosBookMenuFv_0x2bf410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BFB88u;
}
