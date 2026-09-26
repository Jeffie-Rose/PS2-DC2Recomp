#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Bilinear__11mgCDrawPrimFi
// Address: 0x1350c0 - 0x1350c8
void Bilinear__11mgCDrawPrimFi_0x1350c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bilinear__11mgCDrawPrimFi_0x1350c0");
#endif

    ctx->pc = 0x1350c0u;

    // 0x1350c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1350C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1350C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1350C0u;
            // 0x1350c4: 0xac8500c8  sw          $a1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1350C8u;
}
