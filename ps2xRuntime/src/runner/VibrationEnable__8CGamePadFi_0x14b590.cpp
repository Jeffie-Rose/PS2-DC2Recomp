#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VibrationEnable__8CGamePadFi
// Address: 0x14b590 - 0x14b598
void VibrationEnable__8CGamePadFi_0x14b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VibrationEnable__8CGamePadFi_0x14b590");
#endif

    ctx->pc = 0x14b590u;

    // 0x14b590: 0x3e00008  jr          $ra
    ctx->pc = 0x14B590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B590u;
            // 0x14b594: 0xac850468  sw          $a1, 0x468($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B598u;
}
