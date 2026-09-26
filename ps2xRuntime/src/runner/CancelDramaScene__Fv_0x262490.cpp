#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelDramaScene__Fv
// Address: 0x262490 - 0x26249c
void CancelDramaScene__Fv_0x262490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelDramaScene__Fv_0x262490");
#endif

    ctx->pc = 0x262490u;

    // 0x262490: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262494: 0x3e00008  jr          $ra
    ctx->pc = 0x262494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262494u;
            // 0x262498: 0xac20e504  sw          $zero, -0x1AFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26249Cu;
}
