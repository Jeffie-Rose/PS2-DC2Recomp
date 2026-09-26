#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddAngle__15mgCCameraFollowFf
// Address: 0x1319f0 - 0x131a00
void AddAngle__15mgCCameraFollowFf_0x1319f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddAngle__15mgCCameraFollowFf_0x1319f0");
#endif

    ctx->pc = 0x1319f0u;

    // 0x1319f0: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1319f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1319f4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1319f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1319f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1319F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319F8u;
            // 0x1319fc: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A00u;
}
