#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBuff_system__6ClsMesFPs
// Address: 0x152eb0 - 0x152eb8
void SetBuff_system__6ClsMesFPs_0x152eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBuff_system__6ClsMesFPs_0x152eb0");
#endif

    ctx->pc = 0x152eb0u;

    // 0x152eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x152EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EB0u;
            // 0x152eb4: 0xac8521d8  sw          $a1, 0x21D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8664), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152EB8u;
}
