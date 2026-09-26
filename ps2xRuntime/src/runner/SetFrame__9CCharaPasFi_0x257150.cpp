#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrame__9CCharaPasFi
// Address: 0x257150 - 0x257158
void SetFrame__9CCharaPasFi_0x257150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrame__9CCharaPasFi_0x257150");
#endif

    ctx->pc = 0x257150u;

    // 0x257150: 0x3e00008  jr          $ra
    ctx->pc = 0x257150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257150u;
            // 0x257154: 0xac850100  sw          $a1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257158u;
}
