#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveLightNo__8CMapInfoFv
// Address: 0x161780 - 0x161788
void GetActiveLightNo__8CMapInfoFv_0x161780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveLightNo__8CMapInfoFv_0x161780");
#endif

    ctx->pc = 0x161780u;

    // 0x161780: 0x3e00008  jr          $ra
    ctx->pc = 0x161780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161780u;
            // 0x161784: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161788u;
}
