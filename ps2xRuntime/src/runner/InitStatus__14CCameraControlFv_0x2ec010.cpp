#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitStatus__14CCameraControlFv
// Address: 0x2ec010 - 0x2ec024
void InitStatus__14CCameraControlFv_0x2ec010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStatus__14CCameraControlFv_0x2ec010");
#endif

    ctx->pc = 0x2ec010u;

    // 0x2ec010: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x2ec010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x2ec014: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x2ec014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x2ec018: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x2ec018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x2ec01c: 0x804bc8c  j           func_12F230
    ctx->pc = 0x2EC01Cu;
    ctx->pc = 0x2EC020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC01Cu;
            // 0x2ec020: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EC024u;
}
