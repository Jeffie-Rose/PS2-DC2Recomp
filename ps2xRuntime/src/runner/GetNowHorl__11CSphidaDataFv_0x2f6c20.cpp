#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowHorl__11CSphidaDataFv
// Address: 0x2f6c20 - 0x2f6c28
void GetNowHorl__11CSphidaDataFv_0x2f6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowHorl__11CSphidaDataFv_0x2f6c20");
#endif

    ctx->pc = 0x2f6c20u;

    // 0x2f6c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C20u;
            // 0x2f6c24: 0x84821478  lh          $v0, 0x1478($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6C28u;
}
