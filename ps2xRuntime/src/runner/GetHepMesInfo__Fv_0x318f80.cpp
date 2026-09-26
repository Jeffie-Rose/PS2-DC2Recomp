#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHepMesInfo__Fv
// Address: 0x318f80 - 0x318f8c
void GetHepMesInfo__Fv_0x318f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHepMesInfo__Fv_0x318f80");
#endif

    ctx->pc = 0x318f80u;

    // 0x318f80: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x318f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x318f84: 0x3e00008  jr          $ra
    ctx->pc = 0x318F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F84u;
            // 0x318f88: 0x24422bb0  addiu       $v0, $v0, 0x2BB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318F8Cu;
}
