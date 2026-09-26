#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFollow__15mgCCameraFollowFfff
// Address: 0x131990 - 0x1319a0
void SetFollow__15mgCCameraFollowFfff_0x131990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFollow__15mgCCameraFollowFfff_0x131990");
#endif

    ctx->pc = 0x131990u;

    // 0x131990: 0xe48c0070  swc1        $f12, 0x70($a0)
    ctx->pc = 0x131990u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x131994: 0xe48d0074  swc1        $f13, 0x74($a0)
    ctx->pc = 0x131994u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x131998: 0x3e00008  jr          $ra
    ctx->pc = 0x131998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131998u;
            // 0x13199c: 0xe48e0078  swc1        $f14, 0x78($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1319A0u;
}
