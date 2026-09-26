#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSystemDataInit__15CMenuSystemDataFv
// Address: 0x2f1300 - 0x2f130c
void MenuSystemDataInit__15CMenuSystemDataFv_0x2f1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSystemDataInit__15CMenuSystemDataFv_0x2f1300");
#endif

    ctx->pc = 0x2f1300u;

    // 0x2f1300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1304: 0x8049c86  j           func_127218
    ctx->pc = 0x2F1304u;
    ctx->pc = 0x2F1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1304u;
            // 0x2f1308: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F130Cu;
}
