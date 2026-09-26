#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBuff__6ClsMesFPs
// Address: 0x152ea0 - 0x152ea8
void SetBuff__6ClsMesFPs_0x152ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBuff__6ClsMesFPs_0x152ea0");
#endif

    ctx->pc = 0x152ea0u;

    // 0x152ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x152EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EA0u;
            // 0x152ea4: 0xac8521d4  sw          $a1, 0x21D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8660), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152EA8u;
}
