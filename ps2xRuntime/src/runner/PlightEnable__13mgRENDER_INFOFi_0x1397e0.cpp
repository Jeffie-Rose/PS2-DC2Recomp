#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlightEnable__13mgRENDER_INFOFi
// Address: 0x1397e0 - 0x1397e8
void PlightEnable__13mgRENDER_INFOFi_0x1397e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlightEnable__13mgRENDER_INFOFi_0x1397e0");
#endif

    ctx->pc = 0x1397e0u;

    // 0x1397e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1397E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1397E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397E0u;
            // 0x1397e4: 0xac850fa8  sw          $a1, 0xFA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4008), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1397E8u;
}
