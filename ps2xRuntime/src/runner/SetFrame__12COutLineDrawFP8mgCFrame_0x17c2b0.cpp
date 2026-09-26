#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrame__12COutLineDrawFP8mgCFrame
// Address: 0x17c2b0 - 0x17c2b8
void SetFrame__12COutLineDrawFP8mgCFrame_0x17c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrame__12COutLineDrawFP8mgCFrame_0x17c2b0");
#endif

    ctx->pc = 0x17c2b0u;

    // 0x17c2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2B0u;
            // 0x17c2b4: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C2B8u;
}
