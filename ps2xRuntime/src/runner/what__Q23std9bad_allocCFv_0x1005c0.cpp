#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: what__Q23std9bad_allocCFv
// Address: 0x1005c0 - 0x1005cc
void what__Q23std9bad_allocCFv_0x1005c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__Q23std9bad_allocCFv_0x1005c0");
#endif

    ctx->pc = 0x1005c0u;

    // 0x1005c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1005c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1005C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005C4u;
            // 0x1005c8: 0x2442ee18  addiu       $v0, $v0, -0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1005CCu;
}
