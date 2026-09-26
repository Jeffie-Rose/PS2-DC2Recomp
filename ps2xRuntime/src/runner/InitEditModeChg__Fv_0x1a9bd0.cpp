#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEditModeChg__Fv
// Address: 0x1a9bd0 - 0x1a9be0
void InitEditModeChg__Fv_0x1a9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEditModeChg__Fv_0x1a9bd0");
#endif

    ctx->pc = 0x1a9bd0u;

    // 0x1a9bd0: 0xaf808ca4  sw          $zero, -0x735C($gp)
    ctx->pc = 0x1a9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 0));
    // 0x1a9bd4: 0xaf808ca8  sw          $zero, -0x7358($gp)
    ctx->pc = 0x1a9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 0));
    // 0x1a9bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BD8u;
            // 0x1a9bdc: 0xaf808cac  sw          $zero, -0x7354($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9BE0u;
}
