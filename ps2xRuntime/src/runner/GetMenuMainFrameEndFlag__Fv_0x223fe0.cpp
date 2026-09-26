#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainFrameEndFlag__Fv
// Address: 0x223fe0 - 0x223fe8
void GetMenuMainFrameEndFlag__Fv_0x223fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainFrameEndFlag__Fv_0x223fe0");
#endif

    ctx->pc = 0x223fe0u;

    // 0x223fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x223FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FE0u;
            // 0x223fe4: 0x938293b0  lbu         $v0, -0x6C50($gp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939568)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223FE8u;
}
