#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Play__12sgCPlayVoiceFv
// Address: 0x304720 - 0x30472c
void Play__12sgCPlayVoiceFv_0x304720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Play__12sgCPlayVoiceFv_0x304720");
#endif

    ctx->pc = 0x304720u;

    // 0x304720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304724: 0x3e00008  jr          $ra
    ctx->pc = 0x304724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304724u;
            // 0x304728: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30472Cu;
}
