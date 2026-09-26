#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDistance__15mgCCameraFollowFf
// Address: 0x131a00 - 0x131a08
void SetDistance__15mgCCameraFollowFf_0x131a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDistance__15mgCCameraFollowFf_0x131a00");
#endif

    ctx->pc = 0x131a00u;

    // 0x131a00: 0x3e00008  jr          $ra
    ctx->pc = 0x131A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A00u;
            // 0x131a04: 0xe48c0090  swc1        $f12, 0x90($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A08u;
}
