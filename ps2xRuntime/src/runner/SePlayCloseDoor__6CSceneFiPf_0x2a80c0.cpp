#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SePlayCloseDoor__6CSceneFiPf
// Address: 0x2a80c0 - 0x2a80dc
void SePlayCloseDoor__6CSceneFiPf_0x2a80c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePlayCloseDoor__6CSceneFiPf_0x2a80c0");
#endif

    ctx->pc = 0x2a80c0u;

    // 0x2a80c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a80c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a80c4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2a80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a80c8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a80c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a80cc: 0x2445003d  addiu       $a1, $v0, 0x3D
    ctx->pc = 0x2a80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
    // 0x2a80d0: 0x8c24a498  lw          $a0, -0x5B68($at)
    ctx->pc = 0x2a80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
    // 0x2a80d4: 0x8063818  j           func_18E060
    ctx->pc = 0x2A80D4u;
    ctx->pc = 0x2A80D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A80D4u;
            // 0x2a80d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A80DCu;
}
