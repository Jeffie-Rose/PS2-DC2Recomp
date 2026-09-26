#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CONTENTS_ETC__FP12RS_STACKDATAi
// Address: 0x2697b0 - 0x2697b8
void ps2__SET_CONTENTS_ETC__FP12RS_STACKDATAi_0x2697b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CONTENTS_ETC__FP12RS_STACKDATAi_0x2697b0");
#endif

    ctx->pc = 0x2697b0u;

    // 0x2697b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2697B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2697B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697B0u;
            // 0x2697b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2697B8u;
}
