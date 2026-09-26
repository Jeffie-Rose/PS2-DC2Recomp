#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFollowOffset__15mgCCameraFollowFfff
// Address: 0x131a60 - 0x131a70
void SetFollowOffset__15mgCCameraFollowFfff_0x131a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFollowOffset__15mgCCameraFollowFfff_0x131a60");
#endif

    ctx->pc = 0x131a60u;

    // 0x131a60: 0xe48c0080  swc1        $f12, 0x80($a0)
    ctx->pc = 0x131a60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x131a64: 0xe48d0084  swc1        $f13, 0x84($a0)
    ctx->pc = 0x131a64u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x131a68: 0x3e00008  jr          $ra
    ctx->pc = 0x131A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A68u;
            // 0x131a6c: 0xe48e0088  swc1        $f14, 0x88($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A70u;
}
