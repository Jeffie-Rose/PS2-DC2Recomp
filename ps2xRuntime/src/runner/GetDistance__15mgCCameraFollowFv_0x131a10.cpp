#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDistance__15mgCCameraFollowFv
// Address: 0x131a10 - 0x131a18
void GetDistance__15mgCCameraFollowFv_0x131a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDistance__15mgCCameraFollowFv_0x131a10");
#endif

    ctx->pc = 0x131a10u;

    // 0x131a10: 0x3e00008  jr          $ra
    ctx->pc = 0x131A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A10u;
            // 0x131a14: 0xc4800090  lwc1        $f0, 0x90($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A18u;
}
