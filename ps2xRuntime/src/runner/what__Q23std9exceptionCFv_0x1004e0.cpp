#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: what__Q23std9exceptionCFv
// Address: 0x1004e0 - 0x1004ec
void what__Q23std9exceptionCFv_0x1004e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__Q23std9exceptionCFv_0x1004e0");
#endif

    ctx->pc = 0x1004e0u;

    // 0x1004e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1004e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1004E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004E4u;
            // 0x1004e8: 0x2442ed98  addiu       $v0, $v0, -0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1004ECu;
}
