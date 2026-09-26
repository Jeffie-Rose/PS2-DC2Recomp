#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__11CCharacter2FPci
// Address: 0x1739a0 - 0x1739a8
void SetMotion__11CCharacter2FPci_0x1739a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__11CCharacter2FPci_0x1739a0");
#endif

    ctx->pc = 0x1739a0u;

    // 0x1739a0: 0x805ce90  j           func_173A40
    ctx->pc = 0x1739A0u;
    ctx->pc = 0x1739A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739A0u;
            // 0x1739a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A40u;
    if (runtime->hasFunction(0x173A40u)) {
        auto targetFn = runtime->lookupFunction(0x173A40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetMotionPara__11CCharacter2FPcii_0x173a40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1739A8u;
}
