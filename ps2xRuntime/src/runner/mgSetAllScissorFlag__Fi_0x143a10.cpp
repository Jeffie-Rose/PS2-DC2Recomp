#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetAllScissorFlag__Fi
// Address: 0x143a10 - 0x143a1c
void mgSetAllScissorFlag__Fi_0x143a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetAllScissorFlag__Fi_0x143a10");
#endif

    ctx->pc = 0x143a10u;

    // 0x143a10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143a14: 0x3e00008  jr          $ra
    ctx->pc = 0x143A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A14u;
            // 0x143a18: 0xac241e60  sw          $a0, 0x1E60($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143A1Cu;
}
