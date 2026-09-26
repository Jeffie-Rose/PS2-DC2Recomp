#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoChangeEnvBGM__6CSceneFi
// Address: 0x2a6820 - 0x2a6830
void AutoChangeEnvBGM__6CSceneFi_0x2a6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoChangeEnvBGM__6CSceneFi_0x2a6820");
#endif

    ctx->pc = 0x2a6820u;

    // 0x2a6820: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6824: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6828: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6828u;
            // 0x2a682c: 0xac25a490  sw          $a1, -0x5B70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6830u;
}
