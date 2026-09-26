#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFrame__9CCharaPasFv
// Address: 0x257160 - 0x257168
void GetFrame__9CCharaPasFv_0x257160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFrame__9CCharaPasFv_0x257160");
#endif

    ctx->pc = 0x257160u;

    // 0x257160: 0x3e00008  jr          $ra
    ctx->pc = 0x257160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257160u;
            // 0x257164: 0x8c820100  lw          $v0, 0x100($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257168u;
}
