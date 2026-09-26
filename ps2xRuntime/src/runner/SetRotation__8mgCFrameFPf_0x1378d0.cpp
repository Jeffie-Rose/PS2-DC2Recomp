#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotation__8mgCFrameFPf
// Address: 0x1378d0 - 0x1378e0
void SetRotation__8mgCFrameFPf_0x1378d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotation__8mgCFrameFPf_0x1378d0");
#endif

    ctx->pc = 0x1378d0u;

    // 0x1378d0: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1378d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1378d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1378d8: 0x804d89c  j           func_136270
    ctx->pc = 0x1378D8u;
    ctx->pc = 0x1378DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378D8u;
            // 0x1378dc: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136270u;
    if (runtime->hasFunction(0x136270u)) {
        auto targetFn = runtime->lookupFunction(0x136270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetRotation__9mgCObjectFPf_0x136270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1378E0u;
}
