#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRef__9mgCCameraFPf
// Address: 0x1315e0 - 0x1315f0
void GetRef__9mgCCameraFPf_0x1315e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRef__9mgCCameraFPf_0x1315e0");
#endif

    ctx->pc = 0x1315e0u;

    // 0x1315e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1315e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1315e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315e8: 0x8041c5c  j           func_107170
    ctx->pc = 0x1315E8u;
    ctx->pc = 0x1315ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1315E8u;
            // 0x1315ec: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x107170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1315F0u;
}
