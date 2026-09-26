#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ZMask__11mgCDrawPrimFi
// Address: 0x135090 - 0x135098
void ZMask__11mgCDrawPrimFi_0x135090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ZMask__11mgCDrawPrimFi_0x135090");
#endif

    ctx->pc = 0x135090u;

    // 0x135090: 0x3e00008  jr          $ra
    ctx->pc = 0x135090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135090u;
            // 0x135094: 0xac8500cc  sw          $a1, 0xCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135098u;
}
