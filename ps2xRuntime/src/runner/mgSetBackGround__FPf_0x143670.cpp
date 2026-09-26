#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetBackGround__FPf
// Address: 0x143670 - 0x143680
void mgSetBackGround__FPf_0x143670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetBackGround__FPf_0x143670");
#endif

    ctx->pc = 0x143670u;

    // 0x143670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143674: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143678: 0x8041c5c  j           func_107170
    ctx->pc = 0x143678u;
    ctx->pc = 0x14367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143678u;
            // 0x14367c: 0x24841ee0  addiu       $a0, $a0, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x107170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143680u;
}
