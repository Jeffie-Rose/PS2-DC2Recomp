#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeteFixPartsTable__13CEditInfoMngrFP10ePlaceDatai
// Address: 0x2a4df0 - 0x2a4dfc
void SeteFixPartsTable__13CEditInfoMngrFP10ePlaceDatai_0x2a4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeteFixPartsTable__13CEditInfoMngrFP10ePlaceDatai_0x2a4df0");
#endif

    ctx->pc = 0x2a4df0u;

    // 0x2a4df0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2a4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2a4df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4DF4u;
            // 0x2a4df8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4DFCu;
}
