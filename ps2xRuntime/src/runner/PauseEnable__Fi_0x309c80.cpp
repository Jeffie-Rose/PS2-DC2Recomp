#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseEnable__Fi
// Address: 0x309c80 - 0x309c8c
void PauseEnable__Fi_0x309c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseEnable__Fi_0x309c80");
#endif

    ctx->pc = 0x309c80u;

    // 0x309c80: 0x8f82a1ac  lw          $v0, -0x5E54($gp)
    ctx->pc = 0x309c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943148)));
    // 0x309c84: 0x3e00008  jr          $ra
    ctx->pc = 0x309C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309C84u;
            // 0x309c88: 0xaf84a1ac  sw          $a0, -0x5E54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309C8Cu;
}
