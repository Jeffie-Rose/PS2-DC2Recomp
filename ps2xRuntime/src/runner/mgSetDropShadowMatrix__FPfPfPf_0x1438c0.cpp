#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetDropShadowMatrix__FPfPfPf
// Address: 0x1438c0 - 0x1438dc
void mgSetDropShadowMatrix__FPfPfPf_0x1438c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetDropShadowMatrix__FPfPfPf_0x1438c0");
#endif

    ctx->pc = 0x1438c0u;

    // 0x1438c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1438c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1438c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1438c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1438ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438d0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1438d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1438d4: 0x804e428  j           func_1390A0
    ctx->pc = 0x1438D4u;
    ctx->pc = 0x1438D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1438D4u;
            // 0x1438d8: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1390A0u;
    if (runtime->hasFunction(0x1390A0u)) {
        auto targetFn = runtime->lookupFunction(0x1390A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetDropShadowMatrix__13mgRENDER_INFOFPfPfPf_0x1390a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1438DCu;
}
