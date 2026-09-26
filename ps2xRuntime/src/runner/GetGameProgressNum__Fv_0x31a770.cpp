#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameProgressNum__Fv
// Address: 0x31a770 - 0x31a778
void GetGameProgressNum__Fv_0x31a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameProgressNum__Fv_0x31a770");
#endif

    ctx->pc = 0x31a770u;

    // 0x31a770: 0x3e00008  jr          $ra
    ctx->pc = 0x31A770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A770u;
            // 0x31a774: 0x8f82a340  lw          $v0, -0x5CC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943552)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A778u;
}
