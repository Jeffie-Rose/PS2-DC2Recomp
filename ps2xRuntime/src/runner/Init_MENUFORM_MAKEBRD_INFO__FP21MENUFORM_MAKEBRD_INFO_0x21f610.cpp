#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_MENUFORM_MAKEBRD_INFO__FP21MENUFORM_MAKEBRD_INFO
// Address: 0x21f610 - 0x21f61c
void Init_MENUFORM_MAKEBRD_INFO__FP21MENUFORM_MAKEBRD_INFO_0x21f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_MENUFORM_MAKEBRD_INFO__FP21MENUFORM_MAKEBRD_INFO_0x21f610");
#endif

    ctx->pc = 0x21f610u;

    // 0x21f610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21f610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f614: 0x8049c86  j           func_127218
    ctx->pc = 0x21F614u;
    ctx->pc = 0x21F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F614u;
            // 0x21f618: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21F61Cu;
}
