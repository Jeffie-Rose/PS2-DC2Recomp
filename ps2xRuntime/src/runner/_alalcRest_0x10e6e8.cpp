#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _alalcRest
// Address: 0x10e6e8 - 0x10e700
void _alalcRest_0x10e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcRest_0x10e6e8");
#endif

    ctx->pc = 0x10e6e8u;

    // 0x10e6e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e6ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e6f0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10e6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6F8u;
            // 0x10e6fc: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E700u;
}
