#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: what__Q23std13bad_exceptionCFv
// Address: 0x102180 - 0x10218c
void what__Q23std13bad_exceptionCFv_0x102180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__Q23std13bad_exceptionCFv_0x102180");
#endif

    ctx->pc = 0x102180u;

    // 0x102180: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x102180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x102184: 0x3e00008  jr          $ra
    ctx->pc = 0x102184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102184u;
            // 0x102188: 0x2442eff8  addiu       $v0, $v0, -0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10218Cu;
}
