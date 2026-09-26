#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__12GYORACE_DATAFv
// Address: 0x2f7000 - 0x2f700c
void Init__12GYORACE_DATAFv_0x2f7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__12GYORACE_DATAFv_0x2f7000");
#endif

    ctx->pc = 0x2f7000u;

    // 0x2f7000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7004: 0x8049c86  j           func_127218
    ctx->pc = 0x2F7004u;
    ctx->pc = 0x2F7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7004u;
            // 0x2f7008: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F700Cu;
}
