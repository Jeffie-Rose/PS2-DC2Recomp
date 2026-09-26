#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSphidaData__12CSubGameDataFv
// Address: 0x2f71d0 - 0x2f71d8
void GetSphidaData__12CSubGameDataFv_0x2f71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSphidaData__12CSubGameDataFv_0x2f71d0");
#endif

    ctx->pc = 0x2f71d0u;

    // 0x2f71d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F71D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71D0u;
            // 0x2f71d4: 0x24820100  addiu       $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F71D8u;
}
