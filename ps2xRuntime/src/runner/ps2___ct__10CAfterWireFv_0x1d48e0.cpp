#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CAfterWireFv
// Address: 0x1d48e0 - 0x1d48ec
void ps2___ct__10CAfterWireFv_0x1d48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CAfterWireFv_0x1d48e0");
#endif

    ctx->pc = 0x1d48e0u;

    // 0x1d48e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d48e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48E4u;
            // 0x1d48e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D48ECu;
}
