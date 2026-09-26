#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgCursor__7CDC2MesFi
// Address: 0x21d6c0 - 0x21d6c8
void SetMsgCursor__7CDC2MesFi_0x21d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgCursor__7CDC2MesFi_0x21d6c0");
#endif

    ctx->pc = 0x21d6c0u;

    // 0x21d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6C0u;
            // 0x21d6c4: 0xa08521e1  sb          $a1, 0x21E1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D6C8u;
}
