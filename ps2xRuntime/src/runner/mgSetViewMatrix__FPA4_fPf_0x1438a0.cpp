#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetViewMatrix__FPA4_fPf
// Address: 0x1438a0 - 0x1438b8
void mgSetViewMatrix__FPA4_fPf_0x1438a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetViewMatrix__FPA4_fPf_0x1438a0");
#endif

    ctx->pc = 0x1438a0u;

    // 0x1438a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1438a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1438a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438a8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1438a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1438ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1438acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438b0: 0x804e3f0  j           func_138FC0
    ctx->pc = 0x1438B0u;
    ctx->pc = 0x1438B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1438B0u;
            // 0x1438b4: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138FC0u;
    if (runtime->hasFunction(0x138FC0u)) {
        auto targetFn = runtime->lookupFunction(0x138FC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetViewMatrix__13mgRENDER_INFOFPA4_fPf_0x138fc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1438B8u;
}
