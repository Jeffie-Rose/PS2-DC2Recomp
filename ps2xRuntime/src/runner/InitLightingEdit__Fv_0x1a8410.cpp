#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLightingEdit__Fv
// Address: 0x1a8410 - 0x1a8418
void InitLightingEdit__Fv_0x1a8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLightingEdit__Fv_0x1a8410");
#endif

    ctx->pc = 0x1a8410u;

    // 0x1a8410: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8410u;
            // 0x1a8414: 0xaf808c38  sw          $zero, -0x73C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8418u;
}
