#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RunEvent__FiP6CScene
// Address: 0x2550b0 - 0x2550c4
void RunEvent__FiP6CScene_0x2550b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RunEvent__FiP6CScene_0x2550b0");
#endif

    ctx->pc = 0x2550b0u;

    // 0x2550b0: 0xaf8597dc  sw          $a1, -0x6824($gp)
    ctx->pc = 0x2550b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940636), GPR_U32(ctx, 5));
    // 0x2550b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2550b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2550b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2550bc: 0x8061c84  j           func_187210
    ctx->pc = 0x2550BCu;
    ctx->pc = 0x2550C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2550BCu;
            // 0x2550c0: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2550C4u;
}
