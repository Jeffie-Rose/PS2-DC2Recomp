#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMsgCursor__7CDC2MesFv
// Address: 0x21da40 - 0x21da48
void GetMsgCursor__7CDC2MesFv_0x21da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMsgCursor__7CDC2MesFv_0x21da40");
#endif

    ctx->pc = 0x21da40u;

    // 0x21da40: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA40u;
            // 0x21da44: 0x808221e1  lb          $v0, 0x21E1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8673)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DA48u;
}
