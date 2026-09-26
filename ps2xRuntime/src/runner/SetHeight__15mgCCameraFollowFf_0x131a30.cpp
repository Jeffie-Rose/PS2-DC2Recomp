#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHeight__15mgCCameraFollowFf
// Address: 0x131a30 - 0x131a38
void SetHeight__15mgCCameraFollowFf_0x131a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHeight__15mgCCameraFollowFf_0x131a30");
#endif

    ctx->pc = 0x131a30u;

    // 0x131a30: 0x3e00008  jr          $ra
    ctx->pc = 0x131A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A30u;
            // 0x131a34: 0xe48c0094  swc1        $f12, 0x94($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A38u;
}
