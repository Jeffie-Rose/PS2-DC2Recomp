#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FogEnable__13mgRENDER_INFOFi
// Address: 0x1397c0 - 0x1397c8
void FogEnable__13mgRENDER_INFOFi_0x1397c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FogEnable__13mgRENDER_INFOFi_0x1397c0");
#endif

    ctx->pc = 0x1397c0u;

    // 0x1397c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1397C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1397C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397C0u;
            // 0x1397c4: 0xac850fa4  sw          $a1, 0xFA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4004), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1397C8u;
}
