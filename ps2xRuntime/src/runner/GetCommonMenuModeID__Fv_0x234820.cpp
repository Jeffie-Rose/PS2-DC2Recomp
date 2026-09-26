#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCommonMenuModeID__Fv
// Address: 0x234820 - 0x23482c
void GetCommonMenuModeID__Fv_0x234820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCommonMenuModeID__Fv_0x234820");
#endif

    ctx->pc = 0x234820u;

    // 0x234820: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x234820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x234824: 0x3e00008  jr          $ra
    ctx->pc = 0x234824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234824u;
            // 0x234828: 0x2442d710  addiu       $v0, $v0, -0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23482Cu;
}
