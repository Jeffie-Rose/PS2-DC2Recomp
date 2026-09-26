#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__8mgCFrameFPc
// Address: 0x136590 - 0x136598
void SetName__8mgCFrameFPc_0x136590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__8mgCFrameFPc_0x136590");
#endif

    ctx->pc = 0x136590u;

    // 0x136590: 0x3e00008  jr          $ra
    ctx->pc = 0x136590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136590u;
            // 0x136594: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136598u;
}
