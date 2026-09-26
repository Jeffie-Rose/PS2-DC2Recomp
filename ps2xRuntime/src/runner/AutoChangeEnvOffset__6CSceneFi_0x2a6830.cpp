#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoChangeEnvOffset__6CSceneFi
// Address: 0x2a6830 - 0x2a6840
void AutoChangeEnvOffset__6CSceneFi_0x2a6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoChangeEnvOffset__6CSceneFi_0x2a6830");
#endif

    ctx->pc = 0x2a6830u;

    // 0x2a6830: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6834: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6838: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6838u;
            // 0x2a683c: 0xac25a494  sw          $a1, -0x5B6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943892), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6840u;
}
