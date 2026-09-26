#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDraw__12CEventSpriteFi
// Address: 0x290240 - 0x290248
void SetDraw__12CEventSpriteFi_0x290240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDraw__12CEventSpriteFi_0x290240");
#endif

    ctx->pc = 0x290240u;

    // 0x290240: 0x3e00008  jr          $ra
    ctx->pc = 0x290240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290240u;
            // 0x290244: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290248u;
}
