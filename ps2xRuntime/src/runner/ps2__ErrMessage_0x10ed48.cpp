#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ErrMessage
// Address: 0x10ed48 - 0x10ed58
void ps2__ErrMessage_0x10ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ErrMessage_0x10ed48");
#endif

    ctx->pc = 0x10ed48u;

    // 0x10ed48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10ed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x10ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x10ed50: 0x804a0d2  j           func_128348
    ctx->pc = 0x10ED50u;
    ctx->pc = 0x10ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED50u;
            // 0x10ed54: 0x24840958  addiu       $a0, $a0, 0x958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x128348(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10ED58u;
}
