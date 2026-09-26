#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAngleSoon__15mgCCameraFollowFf
// Address: 0x1319d0 - 0x1319dc
void SetAngleSoon__15mgCCameraFollowFf_0x1319d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAngleSoon__15mgCCameraFollowFf_0x1319d0");
#endif

    ctx->pc = 0x1319d0u;

    // 0x1319d0: 0xe48c0098  swc1        $f12, 0x98($a0)
    ctx->pc = 0x1319d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1319d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1319D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319D4u;
            // 0x1319d8: 0xe48c009c  swc1        $f12, 0x9C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1319DCu;
}
