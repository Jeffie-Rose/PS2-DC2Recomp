#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecSetState__FP8VideoDecUi
// Address: 0x29b880 - 0x29b88c
void videoDecSetState__FP8VideoDecUi_0x29b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecSetState__FP8VideoDecUi_0x29b880");
#endif

    ctx->pc = 0x29b880u;

    // 0x29b880: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x29b884: 0x3e00008  jr          $ra
    ctx->pc = 0x29B884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B884u;
            // 0x29b888: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B88Cu;
}
