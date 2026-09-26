#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStringBuff__18CScriptInterpreterFPci
// Address: 0x146700 - 0x146714
void SetStringBuff__18CScriptInterpreterFPci_0x146700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStringBuff__18CScriptInterpreterFPci_0x146700");
#endif

    ctx->pc = 0x146700u;

    // 0x146700: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x146700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x146704: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x146704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x146708: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x146708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14670c: 0x3e00008  jr          $ra
    ctx->pc = 0x14670Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14670Cu;
            // 0x146710: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146714u;
}
