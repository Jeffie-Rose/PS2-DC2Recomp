#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetePartsInfoTable__13CEditInfoMngrFP14CEditPartsInfoi
// Address: 0x2a4de0 - 0x2a4dec
void SetePartsInfoTable__13CEditInfoMngrFP14CEditPartsInfoi_0x2a4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetePartsInfoTable__13CEditInfoMngrFP14CEditPartsInfoi_0x2a4de0");
#endif

    ctx->pc = 0x2a4de0u;

    // 0x2a4de0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2a4de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2a4de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4DE4u;
            // 0x2a4de8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4DECu;
}
