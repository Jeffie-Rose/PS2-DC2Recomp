#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditModeChg__Fi
// Address: 0x1a9c00 - 0x1a9c18
void EditModeChg__Fi_0x1a9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditModeChg__Fi_0x1a9c00");
#endif

    ctx->pc = 0x1a9c00u;

    // 0x1a9c00: 0xaf848cac  sw          $a0, -0x7354($gp)
    ctx->pc = 0x1a9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 4));
    // 0x1a9c04: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a9c08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9c0c: 0xaf838ca8  sw          $v1, -0x7358($gp)
    ctx->pc = 0x1a9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 3));
    // 0x1a9c10: 0x806a6d8  j           func_1A9B60
    ctx->pc = 0x1A9C10u;
    ctx->pc = 0x1A9C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C10u;
            // 0x1a9c14: 0xaf848ca4  sw          $a0, -0x735C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B60u;
    if (runtime->hasFunction(0x1A9B60u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        LockCharaCtrl__Fv_0x1a9b60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A9C18u;
}
