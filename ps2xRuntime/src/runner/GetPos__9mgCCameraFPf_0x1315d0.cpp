#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPos__9mgCCameraFPf
// Address: 0x1315d0 - 0x1315e0
void GetPos__9mgCCameraFPf_0x1315d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPos__9mgCCameraFPf_0x1315d0");
#endif

    ctx->pc = 0x1315d0u;

    // 0x1315d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1315d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1315d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315d8: 0x8041c5c  j           func_107170
    ctx->pc = 0x1315D8u;
    ctx->pc = 0x1315DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1315D8u;
            // 0x1315dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x107170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1315E0u;
}
