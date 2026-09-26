#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTimeEnable__4CMapFv
// Address: 0x161480 - 0x161488
void GetTimeEnable__4CMapFv_0x161480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTimeEnable__4CMapFv_0x161480");
#endif

    ctx->pc = 0x161480u;

    // 0x161480: 0x3e00008  jr          $ra
    ctx->pc = 0x161480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161480u;
            // 0x161484: 0x8c8200c0  lw          $v0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161488u;
}
