#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Coord__11mgCDrawPrimFi
// Address: 0x135130 - 0x135138
void Coord__11mgCDrawPrimFi_0x135130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coord__11mgCDrawPrimFi_0x135130");
#endif

    ctx->pc = 0x135130u;

    // 0x135130: 0x3e00008  jr          $ra
    ctx->pc = 0x135130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135130u;
            // 0x135134: 0xac8500fc  sw          $a1, 0xFC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135138u;
}
