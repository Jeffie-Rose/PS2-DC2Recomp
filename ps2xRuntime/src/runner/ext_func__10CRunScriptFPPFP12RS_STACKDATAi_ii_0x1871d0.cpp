#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii
// Address: 0x1871d0 - 0x1871dc
void ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0");
#endif

    ctx->pc = 0x1871d0u;

    // 0x1871d0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1871d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1871d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1871D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1871D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1871D4u;
            // 0x1871d8: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1871DCu;
}
