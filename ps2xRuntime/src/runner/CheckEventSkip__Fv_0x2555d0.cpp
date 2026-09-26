#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEventSkip__Fv
// Address: 0x2555d0 - 0x2555e0
void CheckEventSkip__Fv_0x2555d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEventSkip__Fv_0x2555d0");
#endif

    ctx->pc = 0x2555d0u;

    // 0x2555d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2555d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2555d4: 0x8c22e504  lw          $v0, -0x1AFC($at)
    ctx->pc = 0x2555d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2555d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2555D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2555DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2555D8u;
            // 0x2555dc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2555E0u;
}
