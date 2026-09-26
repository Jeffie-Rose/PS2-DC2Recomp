#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteFileCache__Fv
// Address: 0x149960 - 0x14996c
void DeleteFileCache__Fv_0x149960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteFileCache__Fv_0x149960");
#endif

    ctx->pc = 0x149960u;

    // 0x149960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149964: 0x805262c  j           func_1498B0
    ctx->pc = 0x149964u;
    ctx->pc = 0x149968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149964u;
            // 0x149968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1498B0u;
    if (runtime->hasFunction(0x1498B0u)) {
        auto targetFn = runtime->lookupFunction(0x1498B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitFileCache__FP1i_0x1498b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14996Cu;
}
