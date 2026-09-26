#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _change_addr
// Address: 0x112318 - 0x112324
void _change_addr_0x112318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_change_addr_0x112318");
#endif

    ctx->pc = 0x112318u;

    // 0x112318: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x112318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11231c: 0x3e00008  jr          $ra
    ctx->pc = 0x11231Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11231Cu;
            // 0x112320: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112324u;
}
