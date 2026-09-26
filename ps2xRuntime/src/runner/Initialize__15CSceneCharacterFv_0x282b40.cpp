#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CSceneCharacterFv
// Address: 0x282b40 - 0x282b54
void Initialize__15CSceneCharacterFv_0x282b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CSceneCharacterFv_0x282b40");
#endif

    ctx->pc = 0x282b40u;

    // 0x282b40: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x282b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x282b44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x282b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282b48: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x282b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x282b4c: 0x80a0ab0  j           func_282AC0
    ctx->pc = 0x282B4Cu;
    ctx->pc = 0x282B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282B4Cu;
            // 0x282b50: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x282B54u;
}
