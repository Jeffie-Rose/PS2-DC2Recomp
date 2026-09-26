#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _alalcSetDynamic
// Address: 0x10e658 - 0x10e664
void _alalcSetDynamic_0x10e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcSetDynamic_0x10e658");
#endif

    ctx->pc = 0x10e658u;

    // 0x10e658: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x10e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10e65c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E65Cu;
            // 0x10e660: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E664u;
}
