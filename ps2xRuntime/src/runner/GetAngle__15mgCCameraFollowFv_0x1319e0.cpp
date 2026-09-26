#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAngle__15mgCCameraFollowFv
// Address: 0x1319e0 - 0x1319e8
void GetAngle__15mgCCameraFollowFv_0x1319e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAngle__15mgCCameraFollowFv_0x1319e0");
#endif

    ctx->pc = 0x1319e0u;

    // 0x1319e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1319E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319E0u;
            // 0x1319e4: 0xc480009c  lwc1        $f0, 0x9C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1319E8u;
}
